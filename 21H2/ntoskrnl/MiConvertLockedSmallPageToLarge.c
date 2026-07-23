/*
 * XREFs of MiConvertLockedSmallPageToLarge @ 0x1403F606C
 * Callers:
 *     MiDeleteClusterPage @ 0x140336580 (MiDeleteClusterPage.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F6180 (MiConvertSmallPageRangeToLarge.c)
 * Callees:
 *     MiSetPfnNodeBlinkHigh @ 0x1402346F4 (MiSetPfnNodeBlinkHigh.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E49B0 (MiSetPfnTbFlushStamp.c)
 */

char __fastcall MiConvertLockedSmallPageToLarge(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char v9; // di
  char result; // al

  if ( a4 )
  {
    MiSetPfnTbFlushStamp(a1, 0, 1);
    MiSetPfnNodeBlinkHigh(a1, 0, 1);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    if ( a1 != a2 )
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  }
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 < 0 )
    v7 &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 35) &= 0xF8u;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v8 = v7 & 0x8FFFFFF000000000uLL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) &= ~0x4000000000000000uLL;
  *(_QWORD *)(a1 + 40) = v8;
  *(_QWORD *)(a1 + 40) = v8 | 0x1000000000LL;
  if ( a1 == a2 )
    v9 = *(_BYTE *)(a1 + 39) & 0xFC | ~a3 & 3;
  else
    v9 = *(_BYTE *)(a1 + 39) & 0xFC;
  result = *(_BYTE *)(a1 + 34) & 0xEF;
  *(_BYTE *)(a1 + 39) = v9;
  *(_BYTE *)(a1 + 34) = result;
  return result;
}
