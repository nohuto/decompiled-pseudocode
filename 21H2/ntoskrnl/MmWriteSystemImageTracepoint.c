/*
 * XREFs of MmWriteSystemImageTracepoint @ 0x14053F6F8
 * Callers:
 *     KiTpWriteBreakpoint @ 0x14051D468 (KiTpWriteBreakpoint.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     RtlLookupFunctionEntry @ 0x140276100 (RtlLookupFunctionEntry.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiLockDriverPageRange @ 0x14052DA04 (MiLockDriverPageRange.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     MiInitializeDriverPatchState @ 0x1408C4D04 (MiInitializeDriverPatchState.c)
 *     MiPrepareDriverPatchState @ 0x1408C4D3C (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x1408C4DC0 (MiUnlockDriverPages.c)
 */

__int64 __fastcall MmWriteSystemImageTracepoint(unsigned __int64 a1, char a2, char a3)
{
  char v3; // di
  __int64 Lock; // r13
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // ebx
  char v11; // r15
  __int64 v12; // r9
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int *v15; // rax
  unsigned int v16; // eax
  char *AnyMultiplexedVm; // rax
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  char v20; // r10
  __int64 v24; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v25[8]; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v26[14]; // [rsp+80h] [rbp-59h] BYREF

  v3 = a2;
  memset(v25, 0, sizeof(v25));
  v24 = 0LL;
  Lock = MmAcquireLoadLock();
  v8 = MiLookupDataTableEntry(a1, 0LL, v6, v7);
  v9 = v8;
  if ( v8 )
  {
    if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(v8 + 48)) == 1 )
    {
      v10 = -1073741637;
    }
    else
    {
      v11 = 0;
      MiInitializeDriverPatchState(v9, v25);
      v10 = MiPrepareDriverPatchState(v25);
      if ( v10 >= 0 )
      {
        while ( 1 )
        {
          if ( v11 )
          {
            v13 = *(_DWORD *)(v9 + 64);
            v14 = 0;
          }
          else if ( v3 )
          {
            v15 = RtlLookupFunctionEntry(a1, &v24, 0LL, v12);
            if ( !v15 )
              break;
            v14 = *v15;
            v13 = v15[1] - *v15;
          }
          else
          {
            v13 = 1;
            v14 = a1 - *(_DWORD *)(v9 + 48);
          }
          if ( !v13 )
            break;
          v16 = *(_DWORD *)(v9 + 64);
          if ( v14 >= v16 || v16 - v14 < v13 )
            break;
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
          v10 = MiLockDriverPageRange(v25, (__int64)AnyMultiplexedVm, v18, v19, v20, 0LL);
          if ( v10 < 0 )
            goto LABEL_22;
          memset(v26, 0, 0x68uLL);
          LOBYTE(v26[3]) = a3;
          v26[1] = a1;
          v26[2] = __PAIR64__(v13, v14);
          v10 = VslpEnterIumSecureMode(2u, 77, 0, (__int64)v26);
          if ( v10 != -1073741267 )
            goto LABEL_22;
          if ( v11 )
          {
            v10 = -1073741637;
            goto LABEL_22;
          }
          MiUnlockDriverPages(v25);
          v11 = 1;
          MiInitializeDriverPatchState(v9, v25);
          v10 = MiPrepareDriverPatchState(v25);
          if ( v10 < 0 )
            goto LABEL_22;
          v3 = a2;
        }
        v10 = -1073741811;
      }
LABEL_22:
      MiUnlockDriverPages(v25);
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( Lock )
    MmReleaseLoadLock(Lock);
  return (unsigned int)v10;
}
