/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x140B07614
 * Callers:
 *     MiInitializeSystemVa @ 0x140B071D0 (MiInitializeSystemVa.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 */

__int64 MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  dword_140C51B00 = (unsigned __int8)ExGenRandom(1);
  xmmword_140C51AE0 = 0LL;
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140C51AE0;
  xmmword_140C51AF0 = 0LL;
  v0 = 0xFFFFF6FB7DBED800uLL;
  do
  {
    if ( MI_READ_PTE_LOCK_FREE(v0) )
      RtlSetBits(&BitMapHeader, (__int64)(v0 + 0x90482412800LL) >> 3, 1u);
    v0 += 8LL;
  }
  while ( (v0 & 0xFFF) != 0 );
  RtlSetBits(&BitMapHeader, ((__int64)(v0 + 0x90482412800LL) >> 3) - 1, 1u);
  if ( (MiFlags & 0x100000) == 0 )
    *((_DWORD *)&xmmword_140C51AE0 + 7) &= ~0x2000u;
  return 1LL;
}
