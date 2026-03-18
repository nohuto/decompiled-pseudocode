/*
 * XREFs of ??0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z @ 0xF6EBC
 * Callers:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 *     ??1FRINGERECT@@QAE@XZ @ 0x55340 (--1FRINGERECT@@QAE@XZ.c)
 *     ?vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRUSHOBJ@@PAU_POINTL@@@Z @ 0x553A0 (-vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRU.c)
 *     ?EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x1EFC42 (-EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_REC.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

UMPDReleaseAcquireRFONTSem *__thiscall UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        UMPDReleaseAcquireRFONTSem *this,
        struct SURFACE *a2,
        struct _FONTOBJ *a3,
        int a4)
{
  int v5; // eax
  unsigned int *v7; // [esp+0h] [ebp-Ch]
  int **v8; // [esp+4h] [ebp-8h]

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 13) = (char *)this + 12;
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 15) = a3;
  v5 = *((_DWORD *)this + 14);
  if ( v5 && (*(_DWORD *)(v5 + 24) & 0x8080) == 0x8080 && a3 && a4 )
    *(_DWORD *)this = UMPDReleaseRFONTSem(
                        (UMPDReleaseAcquireRFONTSem *)((char *)this + 4),
                        (UMPDReleaseAcquireRFONTSem *)((char *)this + 8),
                        (unsigned int *)this + 13,
                        v7,
                        v8);
  return this;
}
