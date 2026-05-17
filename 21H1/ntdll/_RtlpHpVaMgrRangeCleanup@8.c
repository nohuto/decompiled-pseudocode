/*
 * XREFs of _RtlpHpVaMgrRangeCleanup@8 @ 0x4B37AF05
 * Callers:
 *     _RtlpHpVaMgrRangeFree@8 @ 0x4B37B24F (_RtlpHpVaMgrRangeFree@8.c)
 * Callees:
 *     _RtlCSparseBitmapBitsClear@12 @ 0x4B37DE0D (_RtlCSparseBitmapBitsClear@12.c)
 */

int __fastcall RtlpHpVaMgrRangeCleanup(int a1, char *a2)
{
  char *v2; // edi
  int v3; // ebx
  unsigned int v4; // ebx
  int result; // eax
  char v7; // [esp+14h] [ebp-4h]

  v2 = a2;
  v7 = *a2;
  if ( (*a2 & 4) != 0 )
    v3 = *((_DWORD *)a2 + 3);
  else
    v3 = *((unsigned __int16 *)a2 + 6);
  v4 = (unsigned int)&a2[16 * v3];
  result = RtlCSparseBitmapBitsClear(8 << *(_DWORD *)(*(_DWORD *)(a1 + 12) + 12));
  if ( (v7 & 4) == 0 )
  {
    while ( 1 )
    {
      v2 += 16;
      if ( (unsigned int)v2 >= v4 )
        break;
      result = RtlCSparseBitmapBitsClear(8 << *(_DWORD *)(*(_DWORD *)(a1 + 12) + 12));
    }
  }
  return result;
}
