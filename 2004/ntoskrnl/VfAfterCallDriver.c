/*
 * XREFs of VfAfterCallDriver @ 0x1409CDE74
 * Callers:
 *     IovCallDriver @ 0x1409C1CA4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1409C2474 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1409C24E4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfBugCheckNoStackUsage @ 0x14059C4D8 (VfBugCheckNoStackUsage.c)
 *     ViErrorReport1 @ 0x14059CA48 (ViErrorReport1.c)
 *     IovpCallDriver2 @ 0x1409CD134 (IovpCallDriver2.c)
 *     VfDeadlockAfterCallDriver @ 0x1409DACA4 (VfDeadlockAfterCallDriver.c)
 */

__int64 __fastcall VfAfterCallDriver(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  ULONG *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  ULONG_PTR CombinedApcDisable; // rcx

  v3 = 0LL;
  if ( !a1 )
    return VfDeadlockAfterCallDriver(a3);
  if ( !KeAreInterruptsEnabled() && (MmVerifierData & 0x400000) == 0 )
  {
    *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    BugCheckParameter1 = 193LL;
    *(_QWORD *)&VfBugcheckTmpData = 196LL;
    qword_140D48038 = *(_QWORD *)(a1 + 48);
    *(_OWORD *)&xmmword_140D48040 = 0LL;
    VfBugCheckNoStackUsage();
  }
  VfDeadlockAfterCallDriver(a3);
  if ( *(_BYTE *)(a1 + 156) != KeGetCurrentIrql() && (MmVerifierData & 0x400000) == 0 )
  {
    *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    qword_140D48038 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)&VfBugcheckTmpData = 201LL;
    BugCheckParameter1 = 18LL;
    do
    {
      *((_QWORD *)&VfBugcheckTmpData + v3 + 3) = *(unsigned __int8 *)(a1 + v3 + 156);
      ++v3;
    }
    while ( v3 < 2 );
    VfBugCheckNoStackUsage();
  }
  if ( *(_DWORD *)(a1 + 188) != KeGetCurrentThread()->WaitBlock[3].SpareLong && (MmVerifierData & 0x400000) == 0 )
  {
    *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
    v8 = &VfBugcheckTmpData;
    v9 = 196LL;
    v10 = 2LL;
    do
    {
      *(_QWORD *)v8 = v9++;
      v8 += 2;
      --v10;
    }
    while ( v10 );
    qword_140D48038 = *(_QWORD *)(a1 + 48);
    CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
    *(&xmmword_140D48040 + 1) = *(unsigned int *)(a1 + 188);
    xmmword_140D48040 = CombinedApcDisable;
    VfBugCheckNoStackUsage();
  }
  result = *(unsigned int *)(a1 + 152);
  if ( (MmVerifierData & 0x10) != 0 && (result & 2) != 0 && *a2 == 259 )
    return ViErrorReport1(0x307u, *(const void **)(a1 + 176), *(const void **)(a1 + 168));
  if ( (result & 1) != 0 )
    return (__int64)IovpCallDriver2(a1, a2);
  return result;
}
