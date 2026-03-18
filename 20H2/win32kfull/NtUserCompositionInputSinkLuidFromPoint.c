/*
 * XREFs of NtUserCompositionInputSinkLuidFromPoint @ 0x1C01F6FC0
 * Callers:
 *     <none>
 * Callees:
 *     RequestInputSinkInfoFromPoint @ 0x1C0004CE4 (RequestInputSinkInfoFromPoint.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall NtUserCompositionInputSinkLuidFromPoint(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _OWORD *Address)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // ebx
  ULONG64 v14; // rcx
  __int64 CurrentProcess; // rax
  ULONG64 v16; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rcx
  int v19; // ebx
  _OWORD *v20; // rdi
  __int64 v21; // rax
  char v22; // dl
  __int128 v24[13]; // [rsp+50h] [rbp-D8h] BYREF

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDitCompositionInputSinkQuery);
  EnterCrit(0LL, 1LL);
  memset(v24, 0, 0x70uLL);
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
  v16 = (ULONG64)(a2 + 1);
  if ( a2 + 1 < a2 || v16 > MmUserProbeAddress )
    a2 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)((char *)v24 + 4) = *a2;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v16);
  ProbeForWrite(a3, 8uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  v19 = LODWORD(v24[0]) | 1;
  LODWORD(v24[0]) |= 1u;
  if ( a4 )
  {
    ProbeForWrite(a4, 8uLL, 8u);
    v19 |= 2u;
    LODWORD(v24[0]) = v19;
    *a4 = 0LL;
  }
  v20 = Address;
  if ( Address )
  {
    v21 = PsGetCurrentProcessWow64Process(v18);
    ProbeForWrite(Address, 0x40uLL, v21 != 0 ? 1 : 4);
    LODWORD(v24[0]) = v19 | 4;
    memset(&v24[9], 0, 0x40uLL);
    *Address = v24[9];
    Address[1] = v24[10];
    Address[2] = v24[11];
    Address[3] = v24[12];
  }
  HIDWORD(v24[0]) = a1;
  v13 = RequestInputSinkInfoFromPoint(v24);
  if ( v13 )
  {
    v14 = MmUserProbeAddress;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = *(_QWORD *)((char *)&v24[1] + 4);
    v22 = v24[0];
    if ( (v24[0] & 2) != 0 )
    {
      v14 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = *(_QWORD *)&v24[2];
    }
    if ( (v22 & 4) != 0 )
    {
      v14 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        v20 = (_OWORD *)MmUserProbeAddress;
      *v20 = *(__int128 *)((char *)&v24[2] + 8);
      v20[1] = *(__int128 *)((char *)&v24[3] + 8);
      v20[2] = *(__int128 *)((char *)&v24[4] + 8);
      v20[3] = *(__int128 *)((char *)&v24[5] + 8);
    }
  }
LABEL_25:
  UserSessionSwitchLeaveCrit(v14);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDitCompositionInputSinkQuery);
  return v13;
}
