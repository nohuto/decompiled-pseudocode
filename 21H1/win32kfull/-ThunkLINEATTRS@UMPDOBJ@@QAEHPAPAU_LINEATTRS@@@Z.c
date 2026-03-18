/*
 * XREFs of ?ThunkLINEATTRS@UMPDOBJ@@QAEHPAPAU_LINEATTRS@@@Z @ 0x1F3F8B
 * Callers:
 *     ?UMPDDrvStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x20F1ED (-UMPDDrvStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@.c)
 *     ?UMPDDrvStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x20F420 (-UMPDDrvStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_PO.c)
 * Callees:
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 */

int __thiscall UMPDOBJ::ThunkLINEATTRS(UMPDOBJ *this, struct _LINEATTRS **Src)
{
  char **v2; // esi
  char *v4; // ecx
  int v6; // ebx
  unsigned int v7; // ebx
  char *KernelPtr; // eax
  void **v9; // [esp-Ch] [ebp-14h]

  v2 = (char **)Src;
  v4 = (char *)*Src;
  if ( !*Src )
    return 1;
  v6 = *((_DWORD *)v4 + 5);
  v9 = (void **)Src;
  Src = (struct _LINEATTRS **)*((_DWORD *)v4 + 6);
  v7 = 4 * v6;
  if ( !UMPDOBJ::ThunkMemBlock(this, v9, 0x20u) || !UMPDOBJ::ThunkMemBlock(this, (void **)&Src, v7) )
    return 0;
  KernelPtr = UMPDOBJ::GetKernelPtr(this, *v2);
  *((_DWORD *)KernelPtr + 6) = Src;
  return 1;
}
