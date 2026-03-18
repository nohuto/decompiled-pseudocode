/*
 * XREFs of NtMITPostMouseInputMessage @ 0x1C0135F90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0073320 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     PostMouseInputMessage @ 0x1C01B1960 (PostMouseInputMessage.c)
 */

__int64 __fastcall NtMITPostMouseInputMessage(__int64 *a1, unsigned int a2, __int64 *a3)
{
  CInputThread *v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r9
  char v11; // al
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1);
  v8 = 0;
  if ( CInputThread::IsInputThread(v6) )
  {
    v13 = 0LL;
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v10 = *a1;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (__int64 *)MmUserProbeAddress;
      v13 = *a3;
      a3 = &v13;
    }
    v11 = -(char)PostMouseInputMessage(v10, a2, a3);
    v9 = v11 == 0 ? 0xC0000001 : 0;
    v8 = v11 == 0 ? 0xC0000001 : 0;
  }
  else
  {
    UserSetLastError(5LL, v7);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
