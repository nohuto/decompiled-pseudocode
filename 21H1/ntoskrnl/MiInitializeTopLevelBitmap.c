/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x140A43BF8
 * Callers:
 *     MiInitializeSystemVa @ 0x140A430FC (MiInitializeSystemVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     RtlSetBits @ 0x1402E30C0 (RtlSetBits.c)
 */

void MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  dword_140C4E1B8 = (unsigned __int8)ExGenRandom(1);
  xmmword_140C4E198 = 0LL;
  BitMapHeader.SizeOfBitMap = 256;
  xmmword_140C4E1A8 = 0LL;
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140C4E198;
  v0 = 0xFFFFF6FB7DBED800uLL;
  do
  {
    if ( MI_READ_PTE_LOCK_FREE(v0) )
      RtlSetBits(&BitMapHeader, (__int64)(v0 + 0x90482412800LL) >> 3, 1u);
    v0 += 8LL;
  }
  while ( (v0 & 0xFFF) != 0 );
  RtlSetBits(&BitMapHeader, ((__int64)(v0 + 0x90482412800LL) >> 3) - 1, 1u);
  if ( (MiFlags & 0x200000) == 0 )
    *((_DWORD *)&xmmword_140C4E198 + 7) &= ~0x2000u;
}
