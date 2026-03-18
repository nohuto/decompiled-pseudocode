/*
 * XREFs of NtUserGetTouchInputInfo @ 0x1C01FCC40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01DD0A0 (_FreeTouchInputInfo.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(unsigned __int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v6; // rbx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 CurrentProcessWow64Process; // rax
  SIZE_T v17; // rbx

  v6 = a2;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a3 || a4 != 48 )
  {
    v14 = 87LL;
    goto LABEL_12;
  }
  v11 = HMValidateHandle(a1, 0x14u);
  v13 = v11;
  if ( !v11 )
  {
    v8 = 0;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(v11 + 16) != gptiCurrent )
  {
    v14 = 5LL;
LABEL_12:
    v8 = 0;
    UserSetLastError(v14, v9, v10);
    goto LABEL_13;
  }
  v15 = *(_DWORD *)(v11 + 24);
  if ( v15 < (unsigned int)v6 )
    v6 = v15;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v12);
  v17 = 48 * v6;
  ProbeForWrite(a3, v17, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v13 + 32), v17);
  v12 = *(_QWORD *)(gptiCurrent + 1064LL);
  if ( v12 == a1 )
  {
    FreeTouchInputInfo(v12);
    *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v12, v9, v10);
  return v8;
}
