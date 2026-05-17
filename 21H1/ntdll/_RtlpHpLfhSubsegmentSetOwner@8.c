/*
 * XREFs of _RtlpHpLfhSubsegmentSetOwner@8 @ 0x4B377A21
 * Callers:
 *     _RtlpHpLfhBucketAddSubsegment@16 @ 0x4B375FDC (_RtlpHpLfhBucketAddSubsegment@16.c)
 *     _RtlpHpLfhSlotAddSubsegment@8 @ 0x4B376A81 (_RtlpHpLfhSlotAddSubsegment@8.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpHpLfhSubsegmentSetOwner(int a1, __int32 a2)
{
  __int16 result; // ax
  volatile __int32 *v3; // esi
  unsigned __int32 v4; // edx

  result = *(_WORD *)(a1 + 16);
  v3 = (volatile __int32 *)(a1 + 8);
  if ( result == *(_WORD *)(a1 + 18) )
  {
    *v3 = a2;
  }
  else
  {
    v4 = _InterlockedExchange(v3, a2);
    if ( (v4 & 1) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), v4 >> 1);
  }
  return result;
}
