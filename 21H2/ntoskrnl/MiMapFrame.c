/*
 * XREFs of MiMapFrame @ 0x140591EB4
 * Callers:
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 *     MiMapSystemCachePage @ 0x140591F50 (MiMapSystemCachePage.c)
 * Callees:
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 */

__int64 __fastcall MiMapFrame(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // r8d
  int v4; // eax

  v3 = 4;
  if ( a2 <= qword_140C50840 && ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v4 = *(unsigned __int8 *)(48 * a2 - 0x21FFFFFFFFDELL) >> 6;
    if ( !v4 || v4 == 3 )
    {
      v3 = 12;
    }
    else if ( v4 == 2 )
    {
      v3 = 28;
    }
  }
  *(_QWORD *)a1 = MiMakeValidPte(a1, a2, v3 | 0xA0000000);
  return (__int64)(a1 << 25) >> 16;
}
