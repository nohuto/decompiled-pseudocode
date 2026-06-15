/*
 * XREFs of ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x1400189C8
 * Callers:
 *     ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x1400189B0 (-AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z.c)
 * Callees:
 *     ?AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAX@Z @ 0x140018BD4 (-AeServerProcessClientRequest@HandleSendReceiveServer@@AEAAJPEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_A.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiLoop(HandleSendReceiveServer *this)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  void *v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  void *v7; // r9
  char v8; // cl
  int v9; // [rsp+48h] [rbp-C0h]
  __int64 v10; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v12[8]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp-90h]
  _DWORD v15[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v16; // [rsp+B8h] [rbp-50h]
  int v17; // [rsp+E8h] [rbp-20h]
  _BYTE v18[64]; // [rsp+F8h] [rbp-10h] BYREF

  result = AlpcInitializeMessageAttribute(805306368LL, v18, 64LL, v12);
  if ( (int)result >= 0 )
  {
    AlpcGetMessageAttribute(v18, 0x20000000LL);
    v3 = 0LL;
    memset_0(v15, 0, 0x48uLL);
    v16 = 48LL;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 14, 1, 1) )
            return 0LL;
          v5 = *((_QWORD *)this + 1);
          v10 = 48LL;
          v6 = NtAlpcSendWaitReceivePort(
                 v5,
                 0x10000LL,
                 v3,
                 0LL,
                 &v13,
                 &v10,
                 v18,
                 &HandleSendReceiveServer::AeServerApiThreadTimeout);
          if ( v6 >= 0 )
            break;
LABEL_6:
          v3 = 0LL;
        }
      }
      while ( v6 == 258 );
      if ( BYTE4(v13) != 1 )
      {
        if ( BYTE4(v13) != 3 )
        {
          if ( BYTE4(v13) == 5 )
          {
            v4 = (void *)*((_QWORD *)this + 3);
            if ( v4 )
            {
              NtClose(v4);
              *((_QWORD *)this + 3) = 0LL;
            }
            _InterlockedExchange((volatile __int32 *)this + 14, 1);
          }
          else
          {
            v8 = BYTE4(v13) - 10;
            if ( BYTE4(v13) == 10 )
            {
              v15[0] = 0;
              v17 = 0;
              if ( v14 <= 0xFFFFFFFF && (_DWORD)v14 == *((_DWORD *)this + 4) )
              {
                v8 = 1;
                v15[0] = 0x80000;
                v17 = 16;
              }
              LOBYTE(v9) = v8;
              NtAlpcAcceptConnectPort(&v11, *((_QWORD *)this + 1), 0LL, 0LL, v15, 0LL, &v13, v18, v9);
              *((_QWORD *)this + 3) = v11;
              *((_BYTE *)this + 60) = 1;
            }
          }
        }
        goto LABEL_6;
      }
      HandleSendReceiveServer::AeServerProcessClientRequest(
        this,
        (struct _AE_API_MSG *)&v13,
        (struct _ALPC_MESSAGE_ATTRIBUTES *)v18,
        v7);
      v3 = &v13;
    }
  }
  return result;
}
