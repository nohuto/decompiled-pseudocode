/*
 * XREFs of ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140061340
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x14001CC68 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14001DF48 (memset_0.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x1400515C4 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x140051678 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 *     ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x1400516D4 (-SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z.c)
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140060440 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140061F58 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::SetEventHandle(CCrossProcessBaseClientEndpoint *this, void *a2)
{
  int v2; // ebp
  int v5; // ebx
  void **v6; // rax
  void **v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r9

  v2 = 0;
  if ( *((_DWORD *)this + 110) )
    goto LABEL_2;
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = -2147024809;
    goto LABEL_25;
  }
  if ( (*((_DWORD *)this + 44) & 0x40000) == 0 || *((_QWORD *)this + 10) == -4LL )
  {
LABEL_2:
    v5 = -2147418113;
  }
  else
  {
    v6 = (void **)operator new(0x10uLL);
    v7 = v6;
    if ( v6 )
    {
      v6[1] = 0LL;
      *v6 = &HandleSendReceiveClient::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v5 = HandleSendReceiveClient::Initialize(v7, (unsigned __int16 *)(*((_QWORD *)this + 10) + 4LL));
      if ( v5 >= 0 )
      {
        v5 = HandleSendReceiveClient::SendHandle((HandleSendReceiveClient *)v7, v8, a2, v9);
        if ( v5 == -2147023537 )
          v5 = -2004287484;
        if ( v5 >= 0 )
          *((_DWORD *)this + 110) = 1;
        v2 = HandleSendReceiveClient::CloseConnection((HandleSendReceiveClient *)v7);
      }
      if ( v5 == -2147023537 )
      {
        v5 = -2004287484;
      }
      else if ( v5 >= 0 && v2 < 0 )
      {
        v5 = v2;
        AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::SetEventHandle", 0x1A0u, v2);
      }
    }
    else
    {
      v5 = -2147024882;
    }
    if ( v7 )
      HandleSendReceiveClient::`vector deleting destructor'((HandleSendReceiveClient *)v7, 1);
  }
LABEL_25:
  memset_0((void *)(*((_QWORD *)this + 10) + 4LL), 0, 0x80uLL);
  return (unsigned int)v5;
}
