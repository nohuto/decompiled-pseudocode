/*
 * XREFs of RtlpHpSegLfhVsDecommit @ 0x140256360
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x140256450 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeCommit @ 0x1402577C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpScheduleCompaction @ 0x14025A1F4 (RtlpHpScheduleCompaction.c)
 */

__int64 __fastcall RtlpHpSegLfhVsDecommit(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // r14
  int v8; // r15d
  unsigned int v9; // ebp
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi

  result = RtlpHpSegDescriptorValidate();
  v7 = a3 >> 12;
  v8 = result;
  v9 = (a2
      - (unsigned int)((result - (result & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8))
      - ((unsigned int)result & *(_DWORD *)a1)) >> 12;
  if ( (*(_BYTE *)(a1 + 13) & 8) != 0 )
    return RtlpHpSegPageRangeCommit(a1, v8, v9, -(int)v7, 0, 0LL);
  v10 = *(__int16 *)(a1 + 22);
  v11 = *(_QWORD *)(v10 + a1 + 8) >> *(_BYTE *)(a1 + 11);
  if ( v11 <= 8 )
    v11 = 8LL;
  v12 = *(_QWORD *)(v10 + a1 + 8) >> *(_BYTE *)(a1 + 12);
  if ( v12 <= 8 )
    v12 = 8LL;
  v13 = v7 + *(_QWORD *)(v10 + a1 + 16) + *(_QWORD *)(v10 + a1 + 24);
  if ( v13 > v11 )
  {
    result = RtlpHpScheduleCompaction(*(_QWORD *)(a1 + 56));
    if ( (int)result < 0 )
      return RtlpHpSegPageRangeCommit(a1, v8, v9, -(int)v7, 0, 0LL);
  }
  if ( v13 > v12 )
    return RtlpHpSegPageRangeCommit(a1, v8, v9, -(int)v7, 0, 0LL);
  return result;
}
