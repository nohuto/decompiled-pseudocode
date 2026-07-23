/*
 * XREFs of HalpIrtAllocateIndex @ 0x140867D74
 * Callers:
 *     HalpInterruptRemap @ 0x140378150 (HalpInterruptRemap.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CD18C (HalpInterruptRemapFixedLines.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     RtlClearBits @ 0x140268180 (RtlClearBits.c)
 *     RtlFindClearBitsAndSet @ 0x1402E3170 (RtlFindClearBitsAndSet.c)
 *     RtlSetBits @ 0x140343250 (RtlSetBits.c)
 *     RtlFindNextForwardRunClear @ 0x140344E30 (RtlFindNextForwardRunClear.c)
 *     HalpIommuAllocateRemappingTableEntry @ 0x1404C3948 (HalpIommuAllocateRemappingTableEntry.c)
 *     HalpIrtAllocateDeviceAperture @ 0x140867C20 (HalpIrtAllocateDeviceAperture.c)
 *     HalpIrtExtendRemappingRange @ 0x140868118 (HalpIrtExtendRemappingRange.c)
 *     HalpIrtReleaseDeviceAperture @ 0x140868338 (HalpIrtReleaseDeviceAperture.c)
 */

__int64 __fastcall HalpIrtAllocateIndex(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        int *StartingRunIndex)
{
  int *v7; // r13
  unsigned int v8; // ebp
  int RemappingTableEntry; // ebx
  int v12; // r15d
  unsigned int v13; // ebx
  __int64 v14; // rsi
  __int64 v15; // rdx
  _RTL_BITMAP *v16; // r14
  ULONG ClearBitsAndSet; // esi
  ULONG v18; // edx
  ULONG v19; // ebx
  ULONG NextForwardRunClear; // edx
  unsigned int v21; // ecx
  char v23; // [rsp+40h] [rbp-48h]
  unsigned int v24; // [rsp+44h] [rbp-44h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-40h]

  v7 = StartingRunIndex;
  v8 = 0;
  RemappingTableEntry = 0;
  v23 = 0;
  v24 = 0;
  if ( StartingRunIndex )
    v12 = *StartingRunIndex;
  else
    v12 = 0;
  if ( !HalpIrtTotalEntries )
  {
    *a1 = 0;
    return (unsigned int)RemappingTableEntry;
  }
  if ( (HalpIrtAllocationFlags & 4) != 0 )
  {
    RemappingTableEntry = HalpIrtAllocateDeviceAperture(a3, a4, a2, v12, &v24);
    if ( RemappingTableEntry < 0 )
      return (unsigned int)RemappingTableEntry;
    v8 = v24;
    v23 = 1;
  }
  v13 = v8 / HalpIrtAperturesPerRange;
  v25 = v8 / HalpIrtAperturesPerRange;
  ExAcquireFastMutex(&HalpIrtLock);
  v14 = 2LL * v13;
  if ( !*((_QWORD *)&HalpIrtRanges.Buffer + 2 * v13) )
  {
    KeReleaseGuardedMutex(&HalpIrtLock);
    RemappingTableEntry = HalpIrtExtendRemappingRange(v13, v15);
    if ( RemappingTableEntry < 0 )
      goto LABEL_30;
    ExAcquireFastMutex(&HalpIrtLock);
  }
  v16 = (_RTL_BITMAP *)((char *)&HalpIrtRanges + 8 * v14);
  if ( (HalpIrtAllocationFlags & 1) != 0 )
  {
    v18 = v8 * HalpIrtEntriesPerDeviceAperture % HalpIrtEntriesPerRange;
    v24 = v18 + HalpIrtEntriesPerDeviceAperture - 1;
    ClearBitsAndSet = -1;
    while ( 1 )
    {
      LODWORD(StartingRunIndex) = v18;
      NextForwardRunClear = RtlFindNextForwardRunClear(v16, v18, (PULONG)&StartingRunIndex);
      if ( !NextForwardRunClear )
        break;
      if ( NextForwardRunClear >= a2 )
      {
        v19 = -a2 & (a2 + (_DWORD)StartingRunIndex - 1);
        if ( v19 - (unsigned int)StartingRunIndex < NextForwardRunClear
          && NextForwardRunClear + (_DWORD)StartingRunIndex - v19 >= a2 )
        {
          if ( v19 + a2 - 1 <= v24 )
          {
            RtlSetBits(v16, v19, a2);
            ClearBitsAndSet = v19;
          }
          break;
        }
        v18 = (_DWORD)StartingRunIndex + NextForwardRunClear;
      }
      else
      {
        v18 = (_DWORD)StartingRunIndex + NextForwardRunClear;
      }
    }
  }
  else
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(v16, a2, 0);
  }
  KeReleaseGuardedMutex(&HalpIrtLock);
  if ( ClearBitsAndSet == -1 )
  {
    RemappingTableEntry = -1073741670;
  }
  else
  {
    RemappingTableEntry = 0;
    v21 = ClearBitsAndSet + v25 * HalpIrtEntriesPerRange;
    *a1 = v21;
    if ( v12 != 3 )
      return (unsigned int)RemappingTableEntry;
    if ( (HalpIrtAllocationFlags & 2) == 0 )
      return (unsigned int)RemappingTableEntry;
    RemappingTableEntry = HalpIommuAllocateRemappingTableEntry(v21, a2, a3, a4, v7[14], a5, a6);
    if ( RemappingTableEntry >= 0 )
      return (unsigned int)RemappingTableEntry;
    ExAcquireFastMutex(&HalpIrtLock);
    RtlClearBits(v16, ClearBitsAndSet, a2);
    KeReleaseGuardedMutex(&HalpIrtLock);
    *a1 = -1;
  }
LABEL_30:
  if ( v23 )
    HalpIrtReleaseDeviceAperture(v8, a2);
  return (unsigned int)RemappingTableEntry;
}
