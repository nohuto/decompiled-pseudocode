/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x140A49458
 * Callers:
 *     MiInitializeSystemVa @ 0x140A4895C (MiInitializeSystemVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 *     RtlSetBits @ 0x1402D6370 (RtlSetBits.c)
 */

void MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  dword_140C4E078 = (unsigned __int8)ExGenRandom(1);
  xmmword_140C4E058 = 0LL;
  BitMapHeader.SizeOfBitMap = 256;
  xmmword_140C4E068 = 0LL;
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140C4E058;
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
    *((_DWORD *)&xmmword_140C4E058 + 7) &= ~0x2000u;
}
