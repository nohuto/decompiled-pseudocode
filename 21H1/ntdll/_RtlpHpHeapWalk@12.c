/*
 * XREFs of _RtlpHpHeapWalk@12 @ 0x4B37924D
 * Callers:
 *     _RtlpWalkHeapInternal@12 @ 0x4B35A1E8 (_RtlpWalkHeapInternal@12.c)
 * Callees:
 *     _RtlpHpLargeWalkHeap@8 @ 0x4B37A78A (_RtlpHpLargeWalkHeap@8.c)
 *     _RtlpHpSegWalk@12 @ 0x4B37DAD6 (_RtlpHpSegWalk@12.c)
 *     _RtlCSparseBitmapBitmaskRead@12 @ 0x4B37DCEF (_RtlCSparseBitmapBitmaskRead@12.c)
 */

int __fastcall RtlpHpHeapWalk(int a1, int *a2, char a3)
{
  int v5; // edx
  int result; // eax
  int v7; // edi
  int v8; // eax
  int i; // [esp+Ch] [ebp-4h]

  v5 = *a2;
  if ( !v5 )
  {
    a2[4] = 0;
    *((_WORD *)a2 + 5) = -32766;
    *a2 = a1;
    result = 0;
    a2[1] = 4096;
    *((_BYTE *)a2 + 9) = 0;
    a2[3] = 4096;
    a2[5] = a1;
    a2[6] = a1;
    return result;
  }
  if ( v5 == a1 )
  {
    *a2 = 0;
    v7 = 0;
    goto LABEL_10;
  }
  if ( (_WORD)v5 )
  {
    v7 = 0;
  }
  else
  {
    v8 = RtlCSparseBitmapBitmaskRead(a1);
    if ( !v8 )
      return RtlpHpLargeWalkHeap(a1, a2);
    v7 = v8 - 1;
  }
  if ( v7 >= 2 )
    return RtlpHpLargeWalkHeap(a1, a2);
LABEL_10:
  for ( i = a1 + ((v7 + 2) << 7); ; i += 128 )
  {
    result = RtlpHpSegWalk(a3);
    if ( result != -2147483622 )
      break;
    *a2 = 0;
    if ( ++v7 >= 2 )
      return RtlpHpLargeWalkHeap(a1, a2);
  }
  return result;
}
