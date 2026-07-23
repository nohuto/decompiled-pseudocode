/*
 * XREFs of RtlpHpConvertSegmentFlagsToFlags @ 0x1800F6C74
 * Callers:
 *     RtlHpQuerySegmentHeapRoutine @ 0x1800F25F0 (RtlHpQuerySegmentHeapRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpConvertSegmentFlagsToFlags(int a1)
{
  int v2; // r8d
  int v3; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // eax

  v2 = a1 & 1 | 8;
  if ( (a1 & 2) == 0 )
    v2 = a1 & 1;
  v3 = v2 | 0x8000000;
  if ( (a1 & 0x20000000) == 0 )
    v3 = v2;
  v5 = v3 | 0x20;
  if ( (a1 & 0x10000000) == 0 )
    v5 = v3;
  v6 = v5 | 0x40000;
  if ( (a1 & 0x40000000) == 0 )
    v6 = v5;
  v7 = v6 | 0x100;
  if ( (a1 & 0x100) == 0 )
    v7 = v6;
  v8 = a1 & 0xE00 | v7;
  if ( (a1 & 0xE00) == 0 )
    v8 = v7;
  v9 = v8 | 0x200;
  if ( (a1 & 0x8000000) == 0 )
    v9 = v8;
  return a1 & 0xF000 | (unsigned int)v9;
}
