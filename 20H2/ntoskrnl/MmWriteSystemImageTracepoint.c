/*
 * XREFs of MmWriteSystemImageTracepoint @ 0x14053DBF8
 * Callers:
 *     KiTpWriteBreakpoint @ 0x14051B988 (KiTpWriteBreakpoint.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     RtlLookupFunctionEntry @ 0x1402E61C0 (RtlLookupFunctionEntry.c)
 *     MiLookupDataTableEntry @ 0x14030CDEC (MiLookupDataTableEntry.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 *     MmReleaseLoadLock @ 0x1406592C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140659320 (MmAcquireLoadLock.c)
 *     MiInitializeDriverPatchState @ 0x1408C7544 (MiInitializeDriverPatchState.c)
 *     MiPrepareDriverPatchState @ 0x1408C757C (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x1408C7600 (MiUnlockDriverPages.c)
 */

__int64 __fastcall MmWriteSystemImageTracepoint(unsigned __int64 a1, char a2, char a3)
{
  char v3; // di
  __int64 Lock; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  int v8; // ebx
  char v9; // r15
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int v12; // edi
  unsigned int *v13; // rax
  unsigned int v14; // eax
  char *AnyMultiplexedVm; // rax
  unsigned int v16; // r8d
  unsigned int v17; // r9d
  char v18; // r10
  __int64 v22; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v23[8]; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v24[14]; // [rsp+80h] [rbp-59h] BYREF

  v3 = a2;
  memset(v23, 0, sizeof(v23));
  v22 = 0LL;
  Lock = MmAcquireLoadLock();
  v6 = MiLookupDataTableEntry(a1, 0);
  v7 = v6;
  if ( v6 )
  {
    if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(v6 + 48)) == 1 )
    {
      v8 = -1073741637;
    }
    else
    {
      v9 = 0;
      MiInitializeDriverPatchState(v7, v23);
      v8 = MiPrepareDriverPatchState(v23);
      if ( v8 >= 0 )
      {
        while ( 1 )
        {
          if ( v9 )
          {
            v11 = *(_DWORD *)(v7 + 64);
            v12 = 0;
          }
          else if ( v3 )
          {
            v13 = RtlLookupFunctionEntry(a1, &v22, 0LL, v10);
            if ( !v13 )
              break;
            v12 = *v13;
            v11 = v13[1] - *v13;
          }
          else
          {
            v11 = 1;
            v12 = a1 - *(_DWORD *)(v7 + 48);
          }
          if ( !v11 )
            break;
          v14 = *(_DWORD *)(v7 + 64);
          if ( v12 >= v14 || v14 - v12 < v11 )
            break;
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
          v8 = MiLockDriverPageRange(v23, (__int64)AnyMultiplexedVm, v16, v17, v18, 0LL);
          if ( v8 < 0 )
            goto LABEL_22;
          memset(v24, 0, 0x68uLL);
          LOBYTE(v24[3]) = a3;
          v24[1] = a1;
          v24[2] = __PAIR64__(v11, v12);
          v8 = VslpEnterIumSecureMode(2u, 77, 0, (__int64)v24);
          if ( v8 != -1073741267 )
            goto LABEL_22;
          if ( v9 )
          {
            v8 = -1073741637;
            goto LABEL_22;
          }
          MiUnlockDriverPages(v23);
          v9 = 1;
          MiInitializeDriverPatchState(v7, v23);
          v8 = MiPrepareDriverPatchState(v23);
          if ( v8 < 0 )
            goto LABEL_22;
          v3 = a2;
        }
        v8 = -1073741811;
      }
LABEL_22:
      MiUnlockDriverPages(v23);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( Lock )
    MmReleaseLoadLock(Lock);
  return (unsigned int)v8;
}
