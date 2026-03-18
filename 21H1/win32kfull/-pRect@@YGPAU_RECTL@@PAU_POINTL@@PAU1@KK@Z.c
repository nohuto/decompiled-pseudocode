/*
 * XREFs of ?pRect@@YGPAU_RECTL@@PAU_POINTL@@PAU1@KK@Z @ 0x216F4D
 * Callers:
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 * Callees:
 *     <none>
 */

struct _RECTL *__userpurge pRect@<eax>(
        _DWORD *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _POINTL *a3,
        struct _RECTL *a4,
        unsigned int a5,
        unsigned int a6)
{
  if ( !a2 )
    return 0;
  *a1 = *a2;
  a1[2] = (char *)a3 + *a2;
  a1[1] = a2[1];
  a1[3] = (char *)a4 + a2[1];
  return (struct _RECTL *)a1;
}
