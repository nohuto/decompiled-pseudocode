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

__int64 __fastcall MmWriteSystemImageTracepoint(DWORD64 ControlPc, char a2, char a3)
{
  char v3; // di
  __int64 Lock; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  int v8; // ebx
  char v9; // r15
  unsigned int v10; // esi
  unsigned int BeginAddress; // edi
  PRUNTIME_FUNCTION v12; // rax
  unsigned int v13; // eax
  char *AnyMultiplexedVm; // rax
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  char v17; // r10
  unsigned __int64 ImageBase; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v22[8]; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v23[14]; // [rsp+80h] [rbp-59h] BYREF

  v3 = a2;
  memset(v22, 0, sizeof(v22));
  ImageBase = 0LL;
  Lock = MmAcquireLoadLock();
  v6 = MiLookupDataTableEntry(ControlPc, 0);
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
      MiInitializeDriverPatchState(v7, v22);
      v8 = MiPrepareDriverPatchState(v22);
      if ( v8 >= 0 )
      {
        while ( 1 )
        {
          if ( v9 )
          {
            v10 = *(_DWORD *)(v7 + 64);
            BeginAddress = 0;
          }
          else if ( v3 )
          {
            v12 = RtlLookupFunctionEntry(ControlPc, &ImageBase, 0LL);
            if ( !v12 )
              break;
            BeginAddress = v12->BeginAddress;
            v10 = v12->EndAddress - v12->BeginAddress;
          }
          else
          {
            v10 = 1;
            BeginAddress = ControlPc - *(_DWORD *)(v7 + 48);
          }
          if ( !v10 )
            break;
          v13 = *(_DWORD *)(v7 + 64);
          if ( BeginAddress >= v13 || v13 - BeginAddress < v10 )
            break;
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
          v8 = MiLockDriverPageRange(v22, (__int64)AnyMultiplexedVm, v15, v16, v17, 0LL);
          if ( v8 < 0 )
            goto LABEL_22;
          memset(v23, 0, 0x68uLL);
          LOBYTE(v23[3]) = a3;
          v23[1] = ControlPc;
          v23[2] = __PAIR64__(v10, BeginAddress);
          v8 = VslpEnterIumSecureMode(2u, 77, 0, (__int64)v23);
          if ( v8 != -1073741267 )
            goto LABEL_22;
          if ( v9 )
          {
            v8 = -1073741637;
            goto LABEL_22;
          }
          MiUnlockDriverPages(v22);
          v9 = 1;
          MiInitializeDriverPatchState(v7, v22);
          v8 = MiPrepareDriverPatchState(v22);
          if ( v8 < 0 )
            goto LABEL_22;
          v3 = a2;
        }
        v8 = -1073741811;
      }
LABEL_22:
      MiUnlockDriverPages(v22);
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
