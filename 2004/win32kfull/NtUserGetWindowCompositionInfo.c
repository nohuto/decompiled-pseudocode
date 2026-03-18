/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C01FD160
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C006D108 (_GetWindowCompositionInfo.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // sf
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int128 v17; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int64 v19; // [rsp+60h] [rbp-38h]

  v4 = 0LL;
  if ( PsGetCurrentProcessWow64Process(a1) )
    v5 = 0LL;
  else
    v5 = 3LL;
  if ( (v5 & a2) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (_BYTE *)a2;
  if ( a2 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[39] = v6[39];
  v7 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 && (unsigned int)GetWindowCompositionInfo(v8, (__int64)&v17, v11) )
  {
    *(_OWORD *)a2 = v17;
    *(_OWORD *)(a2 + 16) = v18;
    *(_QWORD *)(a2 + 32) = v19;
  }
  else
  {
    v7 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  v12 = v7 < 0;
  if ( v7 < 0 )
  {
    v13 = RtlNtStatusToDosError(v7);
    UserSetLastError(v13, v14, v15);
    v12 = v7 < 0;
  }
  LOBYTE(v4) = !v12;
  return v4;
}
