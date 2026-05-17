/*
 * XREFs of _RtlpHpLfhSubsegmentFree@16 @ 0x4B377399
 * Callers:
 *     _RtlpHpLfhBucketAddSubsegment@16 @ 0x4B375FDC (_RtlpHpLfhBucketAddSubsegment@16.c)
 *     _RtlpHpLfhOwnerCleanup@8 @ 0x4B376752 (_RtlpHpLfhOwnerCleanup@8.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpHpLfhSubsegmentCountEmptyUnits@4 @ 0x4B376F07 (_RtlpHpLfhSubsegmentCountEmptyUnits@4.c)
 */

int __fastcall RtlpHpLfhSubsegmentFree(int a1, int a2, int a3, char a4)
{
  int v6; // edx

  _InterlockedDecrement((volatile signed __int32 *)(a3 + 32));
  _InterlockedExchangeAdd((volatile signed __int32 *)(a3 + 28), -*(__int16 *)(a2 + 18));
  v6 = RtlpHpLfhSubsegmentCountEmptyUnits((unsigned __int8 *)a2);
  if ( v6 && (RtlpHpLfhPerfFlags & 0x20) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 30) + 12),
      -((unsigned int)(v6 << *(_BYTE *)(a2 + 28)) >> 12));
  return ((int (__thiscall *)(int, _DWORD, int, int, int))(a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 8)))(
           a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 8),
           *(_DWORD *)a1,
           a2,
           *(unsigned __int8 *)(a2 + 29) << *(_BYTE *)(a2 + 28),
           a4 & 1);
}
