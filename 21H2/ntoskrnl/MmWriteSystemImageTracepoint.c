/*
 * XREFs of MmWriteSystemImageTracepoint @ 0x1405A40C4
 * Callers:
 *     KiTpWriteBreakpoint @ 0x140573374 (KiTpWriteBreakpoint.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     RtlLookupFunctionEntry @ 0x140298010 (RtlLookupFunctionEntry.c)
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MiInitializeDriverPatchState @ 0x140761F70 (MiInitializeDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x14080C400 (MiUnlockDriverPages.c)
 *     MiPrepareDriverPatchState @ 0x1409682E4 (MiPrepareDriverPatchState.c)
 */

__int64 __fastcall MmWriteSystemImageTracepoint(unsigned __int64 a1, char a2, char a3)
{
  char v3; // di
  __int64 Lock; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  int v8; // ebx
  char v9; // r15
  char *AnyMultiplexedVm; // rbx
  unsigned int v11; // esi
  unsigned int v12; // edi
  unsigned int *v13; // rax
  unsigned int v15; // eax
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  char *v19; // [rsp+40h] [rbp-C0h]
  _BYTE v20[112]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v21[14]; // [rsp+C0h] [rbp-40h] BYREF

  v3 = a2;
  memset(v20, 0, 0x68uLL);
  v18 = 0LL;
  Lock = MmAcquireLoadLock();
  v6 = MiLookupDataTableEntry(a1, 0);
  v7 = v6;
  if ( !v6 )
  {
    v8 = -1073741811;
    goto LABEL_15;
  }
  if ( (unsigned int)MiGetSystemRegionType(v6[6]) == 1 )
  {
    v8 = -1073741637;
    goto LABEL_15;
  }
  v9 = 0;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v19 = AnyMultiplexedVm;
  while ( 1 )
  {
    MiInitializeDriverPatchState(v7, v20);
    v8 = MiPrepareDriverPatchState(v20, AnyMultiplexedVm);
    if ( v8 < 0 )
      break;
    if ( v9 )
    {
      v11 = *((_DWORD *)v7 + 16);
      v12 = 0;
    }
    else
    {
      if ( !v3 )
      {
        v11 = 1;
        v12 = a1 - *((_DWORD *)v7 + 12);
        goto LABEL_19;
      }
      v13 = RtlLookupFunctionEntry(a1, &v18, 0LL);
      if ( !v13 )
        goto LABEL_13;
      v12 = *v13;
      v11 = v13[1] - *v13;
    }
    if ( !v11 )
      goto LABEL_13;
LABEL_19:
    v15 = *((_DWORD *)v7 + 16);
    if ( v12 >= v15 || v15 - v12 < v11 )
    {
LABEL_13:
      v8 = -1073741811;
      break;
    }
    v8 = MiLockDriverPageRange((__int64)v20, v12 >> 12, (v11 + v12 - 1) >> 12, 2 * v9 + 1, 0LL);
    if ( v8 < 0 )
      break;
    memset(v21, 0, 0x68uLL);
    LOBYTE(v21[3]) = a3;
    v21[1] = a1;
    v21[2] = __PAIR64__(v11, v12);
    v8 = VslpEnterIumSecureMode(2u, 84, 0, (__int64)v21);
    if ( v8 != -1073741267 )
      break;
    if ( v9 )
    {
      v8 = -1073741637;
      break;
    }
    MiUnlockDriverPages(v20);
    AnyMultiplexedVm = v19;
    v9 = 1;
    v3 = a2;
  }
  MiUnlockDriverPages(v20);
LABEL_15:
  if ( Lock )
    MmReleaseLoadLock(Lock);
  return (unsigned int)v8;
}
