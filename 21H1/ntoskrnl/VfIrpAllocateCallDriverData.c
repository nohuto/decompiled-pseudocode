/*
 * XREFs of VfIrpAllocateCallDriverData @ 0x1409CE490
 * Callers:
 *     IovCallDriver @ 0x1409C1C94 (IovCallDriver.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1284 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IovpCheckIrpForCriticalTracking @ 0x1409CD428 (IovpCheckIrpForCriticalTracking.c)
 */

__int64 __fastcall VfIrpAllocateCallDriverData(__int64 a1, _QWORD *a2)
{
  PVOID v4; // rax
  unsigned int v5; // ebx

  v4 = ExAllocateFromNPagedLookasideList(&ViIrpCallDriverDataList);
  *a2 = v4;
  v5 = 0;
  if ( v4 )
  {
    memset(v4, 0, 0xC0uLL);
    return 1LL;
  }
  else
  {
    LOBYTE(v5) = (unsigned int)IovpCheckIrpForCriticalTracking(a1) == 0;
    return v5;
  }
}
