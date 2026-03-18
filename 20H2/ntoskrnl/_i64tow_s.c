/*
 * XREFs of _i64tow_s @ 0x1403D6310
 * Callers:
 *     LocalGetStringForRelativeAttribute @ 0x14092BA44 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     x64tow_s @ 0x1403D63AC (x64tow_s.c)
 */

errno_t __cdecl i64tow_s(__int64 Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return x64tow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
