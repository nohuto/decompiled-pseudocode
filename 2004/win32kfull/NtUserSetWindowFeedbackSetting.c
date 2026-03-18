/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x1C0024920
 * Callers:
 *     <none>
 * Callees:
 *     FeedbackSetWindowSetting @ 0x1C0024798 (FeedbackSetWindowSetting.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     FeedbackClearWindowSetting @ 0x1C01DB5D0 (FeedbackClearWindowSetting.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, int *Address)
{
  int v8; // edi
  int v9; // r12d
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  int v15; // eax
  __int64 v17; // rcx

  v8 = 0;
  v9 = 0;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  v14 = ValidateHwnd(a1);
  if ( !v14 )
    goto LABEL_14;
  if ( !a2 || a2 > 13 || a4 && !Address || a3 || (a4 & 0xFFFFFFFB) != 0 )
  {
    v17 = 87LL;
    goto LABEL_18;
  }
  if ( PsGetCurrentProcessWin32Process(v12) != *(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) )
  {
    UserSetLastError(5LL);
    v17 = 0LL;
LABEL_18:
    UserSetLastError(v17);
    goto LABEL_14;
  }
  if ( Address )
  {
    v10 = 0;
    ProbeForRead(Address, 4uLL, 4u);
    v9 = *Address;
  }
  if ( v10 )
    v15 = FeedbackClearWindowSetting(v14, (unsigned int)a2);
  else
    v15 = FeedbackSetWindowSetting(v14, a2, v9);
  v8 = v15;
LABEL_14:
  UserSessionSwitchLeaveCrit(v12, v11, v13);
  return v8;
}
