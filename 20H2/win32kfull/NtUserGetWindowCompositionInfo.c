/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1C01FC2F0
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetWindowCompositionInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  NTSTATUS v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // sf
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int128 v15; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+50h] [rbp-48h]
  __int64 v17; // [rsp+60h] [rbp-38h]

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
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 && (unsigned int)GetWindowCompositionInfo(v8, (__int64)&v15) )
  {
    *(_OWORD *)a2 = v15;
    *(_OWORD *)(a2 + 16) = v16;
    *(_QWORD *)(a2 + 32) = v17;
  }
  else
  {
    v7 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9);
  v10 = v7 < 0;
  if ( v7 < 0 )
  {
    v11 = RtlNtStatusToDosError(v7);
    UserSetLastError(v11, v12, v13);
    v10 = v7 < 0;
  }
  LOBYTE(v4) = !v10;
  return v4;
}
