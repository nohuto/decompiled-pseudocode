/*
 * XREFs of NtMITActivateInputProcessing @ 0x1C0036800
 * Callers:
 *     <none>
 * Callees:
 *     UserActivateMITInputProcessing @ 0x1C0036888 (UserActivateMITInputProcessing.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0073320 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int64 __fastcall NtMITActivateInputProcessing(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  CInputThread *v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( CInputThread::IsInputThread(v5) )
  {
    v6 = UserActivateMITInputProcessing(a1, &v8);
    v4 = v8;
  }
  else
  {
    v6 = 0;
    UserSetLastError(5LL);
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *a2 = v4;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return v6;
}
