/*
 * XREFs of HalpIrtAllocateIndex @ 0x140861054
 * Callers:
 *     HalpInterruptRemap @ 0x1403753B0 (HalpInterruptRemap.c)
 *     HalpInitializeInterruptsBspLate @ 0x1403C974C (HalpInitializeInterruptsBspLate.c)
 * Callees:
 *     RtlClearBits @ 0x140244970 (RtlClearBits.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     RtlSetBits @ 0x1402E30C0 (RtlSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x140338F70 (RtlFindClearBitsAndSet.c)
 *     RtlFindNextForwardRunClear @ 0x14034EE80 (RtlFindNextForwardRunClear.c)
 *     HalpIommuAllocateRemappingTableEntry @ 0x1404BFD48 (HalpIommuAllocateRemappingTableEntry.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140860F00 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtExtendRemappingRange @ 0x1408613D8 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtReleaseDeviceAperture @ 0x1408615F8 (HalpIrtReleaseDeviceAperture.c)
 */

__int64 __fastcall HalpIrtAllocateIndex(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int *StartingRunIndex)
{
  int *v5; // r13
  unsigned int v6; // ebp
  int RemappingTableEntry; // ebx
  int v10; // r15d
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  _RTL_BITMAP *v14; // r14
  ULONG ClearBitsAndSet; // esi
  ULONG v16; // edx
  ULONG v17; // ebx
  ULONG NextForwardRunClear; // edx
  unsigned int v19; // ecx
  char v21; // [rsp+30h] [rbp-48h]
  unsigned int v22; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-40h]

  v5 = StartingRunIndex;
  v6 = 0;
  RemappingTableEntry = 0;
  v21 = 0;
  v22 = 0;
  if ( StartingRunIndex )
    v10 = *StartingRunIndex;
  else
    v10 = 0;
  if ( !HalpIrtTotalEntries )
  {
    *a1 = 0;
    return (unsigned int)RemappingTableEntry;
  }
  if ( (HalpIrtAllocationFlags & 4) != 0 )
  {
    RemappingTableEntry = HalpIrtAllocateDeviceAperture(a3, a4, a2, v10, &v22);
    if ( RemappingTableEntry < 0 )
      return (unsigned int)RemappingTableEntry;
    v6 = v22;
    v21 = 1;
  }
  v11 = v6 / HalpIrtAperturesPerRange;
  v23 = v6 / HalpIrtAperturesPerRange;
  ExAcquireFastMutex(&HalpIrtLock);
  v12 = 2LL * v11;
  if ( !*((_QWORD *)&HalpIrtRanges.Buffer + 2 * v11) )
  {
    KeReleaseGuardedMutex(&HalpIrtLock);
    RemappingTableEntry = HalpIrtExtendRemappingRange(v11, v13);
    if ( RemappingTableEntry < 0 )
      goto LABEL_30;
    ExAcquireFastMutex(&HalpIrtLock);
  }
  v14 = (_RTL_BITMAP *)((char *)&HalpIrtRanges + 8 * v12);
  if ( (HalpIrtAllocationFlags & 1) != 0 )
  {
    v16 = v6 * HalpIrtEntriesPerDeviceAperture % HalpIrtEntriesPerRange;
    v22 = v16 + HalpIrtEntriesPerDeviceAperture - 1;
    ClearBitsAndSet = -1;
    while ( 1 )
    {
      LODWORD(StartingRunIndex) = v16;
      NextForwardRunClear = RtlFindNextForwardRunClear(v14, v16, (PULONG)&StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( NextForwardRunClear >= a2 )
      {
        v17 = -a2 & (a2 + (_DWORD)StartingRunIndex - 1);
        if ( v17 - (unsigned int)StartingRunIndex < NextForwardRunClear
          && NextForwardRunClear + (_DWORD)StartingRunIndex - v17 >= a2 )
        {
          if ( v17 + a2 - 1 <= v22 )
          {
            RtlSetBits(v14, v17, a2);
            ClearBitsAndSet = v17;
          }
          break;
        }
        v16 = (_DWORD)StartingRunIndex + NextForwardRunClear;
      }
      else
      {
        v16 = (_DWORD)StartingRunIndex + NextForwardRunClear;
      }
    }
  }
  else
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(v14, a2, 0);
  }
  KeReleaseGuardedMutex(&HalpIrtLock);
  if ( ClearBitsAndSet == -1 )
  {
    RemappingTableEntry = -1073741670;
  }
  else
  {
    RemappingTableEntry = 0;
    v19 = ClearBitsAndSet + v23 * HalpIrtEntriesPerRange;
    *a1 = v19;
    if ( v10 != 3 )
      return (unsigned int)RemappingTableEntry;
    if ( (HalpIrtAllocationFlags & 2) == 0 )
      return (unsigned int)RemappingTableEntry;
    RemappingTableEntry = HalpIommuAllocateRemappingTableEntry(v19, a2, a3, a4, v5[14]);
    if ( RemappingTableEntry >= 0 )
      return (unsigned int)RemappingTableEntry;
    ExAcquireFastMutex(&HalpIrtLock);
    RtlClearBits(v14, ClearBitsAndSet, a2);
    KeReleaseGuardedMutex(&HalpIrtLock);
    *a1 = -1;
  }
LABEL_30:
  if ( v21 )
    HalpIrtReleaseDeviceAperture(v6, a2);
  return (unsigned int)RemappingTableEntry;
}
