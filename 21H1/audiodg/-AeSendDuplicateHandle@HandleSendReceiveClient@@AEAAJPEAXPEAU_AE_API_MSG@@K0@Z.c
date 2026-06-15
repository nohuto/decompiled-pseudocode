/*
 * XREFs of ?AeSendDuplicateHandle@HandleSendReceiveClient@@AEAAJPEAXPEAU_AE_API_MSG@@K0@Z @ 0x140046BE4
 * Callers:
 *     ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x140046EC4 (-SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 */

__int64 __fastcall HandleSendReceiveClient::AeSendDuplicateHandle(
        HandleSendReceiveClient *this,
        void *a2,
        struct _AE_API_MSG *a3,
        __int64 a4,
        void *a5)
{
  __int64 result; // rax
  __int64 MessageAttribute; // rax
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v10[8]; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v11[4]; // [rsp+50h] [rbp-38h] BYREF
  int v12; // [rsp+54h] [rbp-34h]

  result = AlpcInitializeMessageAttribute(0x10000000LL, v11, 32LL, v10);
  if ( (int)result >= 0 )
  {
    MessageAttribute = AlpcGetMessageAttribute(v11, 0x10000000LL);
    if ( MessageAttribute )
    {
      v12 = 0x10000000;
      *(_DWORD *)MessageAttribute = 0;
      *(_QWORD *)(MessageAttribute + 8) = a5;
      *(_DWORD *)(MessageAttribute + 20) = 1048578;
      v9 = 48LL;
      result = NtAlpcSendWaitReceivePort(a2, 0x20000LL, a3, v11, a3, &v9, 0LL, 0LL);
      if ( (int)result >= 0 && *((int *)a3 + 11) < 0 )
        return *((unsigned int *)a3 + 11);
    }
    else
    {
      result = 3221225480LL;
      *((_DWORD *)a3 + 11) = -1073741816;
    }
  }
  return result;
}
