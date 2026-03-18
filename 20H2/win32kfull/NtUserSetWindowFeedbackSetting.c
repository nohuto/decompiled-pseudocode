/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x1C00C7070
 * Callers:
 *     <none>
 * Callees:
 *     FeedbackSetWindowSetting @ 0x1C00C71B4 (FeedbackSetWindowSetting.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     FeedbackClearWindowSetting @ 0x1C01DA910 (FeedbackClearWindowSetting.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, _DWORD *Address)
{
  int v8; // edi
  unsigned int v9; // r12d
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
  if ( PsGetCurrentProcessWin32Process(v12, v11, v13) != *(_QWORD *)(*(_QWORD *)(v14 + 16) + 424LL) )
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
    v15 = FeedbackSetWindowSetting(v14, (unsigned int)a2, v9);
  v8 = v15;
LABEL_14:
  UserSessionSwitchLeaveCrit(v12);
  return v8;
}
