/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1C01F7E30
 * Callers:
 *     <none>
 * Callees:
 *     RequestInputSinkInfoFromPoint @ 0x1C0004E44 (RequestInputSinkInfoFromPoint.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _OWORD *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  ULONG64 v15; // rcx
  __int64 v16; // r8
  __int64 CurrentProcess; // rax
  ULONG64 v18; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v20; // rcx
  int v21; // ebx
  _OWORD *v22; // rdi
  __int64 v23; // rax
  __int128 v25[13]; // [rsp+50h] [rbp-D8h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 1LL);
  memset(v25, 0, 0x70uLL);
  if ( a1 != 6 && a1 )
  {
    v12 = 87LL;
LABEL_4:
    v13 = 0;
    UserSetLastError(v12, v9, v11);
    goto LABEL_25;
  }
  CurrentProcess = PsGetCurrentProcess(v10, v9, v11);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v12 = 5LL;
    goto LABEL_4;
  }
  v18 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v18 > MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)((char *)v25 + 4) = *a2;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v18);
  ProbeForWrite(a3, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  v21 = LODWORD(v25[0]) | 1;
  LODWORD(v25[0]) |= 1u;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 8u);
    v21 |= 2u;
    LODWORD(v25[0]) = v21;
    *a4 = 0LL;
  }
  v22 = Address;
  if ( Address )
  {
    v23 = PsGetCurrentProcessWow64Process(v20);
    ProbeForWrite(Address, 0x40uLL, v23 != 0 ? 1 : 4);
    LODWORD(v25[0]) = v21 | 4;
    memset(&v25[9], 0, 0x40uLL);
    *Address = v25[9];
    Address[1] = v25[10];
    Address[2] = v25[11];
    Address[3] = v25[12];
  }
  HIDWORD(v25[0]) = a1;
  v13 = RequestInputSinkInfoFromPoint(v25);
  if ( v13 )
  {
    v15 = MmUserProbeAddress;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = *(_QWORD *)((char *)&v25[1] + 4);
    v14 = LODWORD(v25[0]);
    if ( (v25[0] & 2) != 0 )
    {
      v15 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = *(_QWORD *)&v25[2];
    }
    if ( (v14 & 4) != 0 )
    {
      v15 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v22 = (_OWORD *)MmUserProbeAddress;
      *v22 = *(__int128 *)((char *)&v25[2] + 8);
      v22[1] = *(__int128 *)((char *)&v25[3] + 8);
      v22[2] = *(__int128 *)((char *)&v25[4] + 8);
      v22[3] = *(__int128 *)((char *)&v25[5] + 8);
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v15, v14, v16);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v13;
}
