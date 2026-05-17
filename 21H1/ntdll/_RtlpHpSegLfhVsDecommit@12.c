/*
 * XREFs of _RtlpHpSegLfhVsDecommit@12 @ 0x4B37BD60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpScheduleCompaction@4 @ 0x4B358965 (_RtlpHpScheduleCompaction@4.c)
 *     _RtlpHpSegDescriptorValidate@8 @ 0x4B37B82D (_RtlpHpSegDescriptorValidate@8.c)
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 */

unsigned int __stdcall RtlpHpSegLfhVsDecommit(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // esi
  unsigned int result; // eax
  int v8; // [esp+Ch] [ebp-8h]
  unsigned int v9; // [esp+10h] [ebp-4h]
  unsigned int v10; // [esp+20h] [ebp+Ch]

  v8 = RtlpHpSegDescriptorValidate(a1, a2);
  v10 = (a2 - ((v8 - (v8 & *(_DWORD *)a1)) >> 4 << *(_BYTE *)(a1 + 4)) - ((unsigned int)v8 & *(_DWORD *)a1)) >> 12;
  v3 = a3 >> 12;
  if ( (*(_BYTE *)(a1 + 9) & 8) == 0 )
  {
    v4 = *(__int16 *)(a1 + 18);
    v5 = *(_DWORD *)(v4 + a1 + 4) >> *(_BYTE *)(a1 + 7);
    if ( v5 <= 8 )
      v5 = 8;
    v6 = *(_DWORD *)(v4 + a1 + 4) >> *(_BYTE *)(a1 + 8);
    if ( v6 <= 8 )
      v6 = 8;
    result = v3 + *(_DWORD *)(*(__int16 *)(a1 + 18) + a1 + 8) + *(_DWORD *)(v4 + a1 + 12);
    v9 = result;
    if ( result <= v5 )
    {
LABEL_9:
      if ( result <= v6 )
        return result;
      return RtlpHpSegPageRangeCommit(v10, -v3, 0, 0);
    }
    if ( RtlpHpScheduleCompaction() >= 0 )
    {
      result = v9;
      goto LABEL_9;
    }
  }
  return RtlpHpSegPageRangeCommit(v10, -v3, 0, 0);
}
