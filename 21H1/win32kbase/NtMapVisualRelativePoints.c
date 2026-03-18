/*
 * XREFs of NtMapVisualRelativePoints @ 0x1C0124850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C0123E94 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     WPP_RECORDER_SF_ii @ 0x1C0124A64 (WPP_RECORDER_SF_ii.c)
 *     UserGetLastError @ 0x1C01D4270 (UserGetLastError.c)
 */

__int64 __fastcall NtMapVisualRelativePoints(char *a1, char *a2, unsigned int a3, ULONG64 a4, char *Address)
{
  __int64 v6; // r13
  char v7; // di
  char v8; // si
  int v9; // ebx
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  unsigned int v12; // edi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rcx
  __int64 i; // rdi
  NTSTATUS v16; // eax
  ULONG v17; // eax
  __int64 v18; // rdx
  char LastError; // al
  int v20; // edx

  v6 = a3;
  v7 = (char)a2;
  v8 = (char)a1;
  v9 = 1;
  EnterCrit(0LL, 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_ii(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v10,
      21,
      10,
      (__int64)&WPP_4e524a4c1ba6398d3545db521554302e_Traceguids,
      v8,
      v7);
  }
  v12 = 8 * v6;
  if ( (unsigned __int64)(8 * v6) > 0xFFFFFFFF )
  {
    v9 = 0;
    UserSetLastError(8LL, v10);
  }
  else
  {
    if ( v12 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v11) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = a4 + v12;
      if ( v11 > MmUserProbeAddress || v11 < a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
    ProbeForWrite(Address, v12, CurrentProcessWow64Process != 0 ? 1 : 4);
    for ( i = 0LL; (_DWORD)i != (_DWORD)v6; i = (unsigned int)(i + 1) )
    {
      v16 = KernelMapVisualRelativePoint(
              a1,
              a2,
              (const struct VisualPoint *)(a4 + 8 * i),
              (struct VisualPoint *)&Address[8 * i]);
      if ( v16 < 0 )
      {
        v9 = 0;
        v17 = RtlNtStatusToDosError(v16);
        UserSetLastError(v17, v18);
        break;
      }
    }
  }
  if ( !v9 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LastError = UserGetLastError();
    LOBYTE(v20) = 2;
    WPP_RECORDER_SF_d(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v20,
      21,
      11,
      (__int64)&WPP_4e524a4c1ba6398d3545db521554302e_Traceguids,
      LastError);
  }
  UserSessionSwitchLeaveCrit(v14);
  return v9;
}
