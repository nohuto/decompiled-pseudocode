/*
 * XREFs of ?pwszFamilyNameAlias@PFEOBJ@@QAEPAGPAH@Z @ 0x4BF60
 * Callers:
 *     _GreGetTextFaceW@16 @ 0x49888 (_GreGetTextFaceW@16.c)
 *     vLinkEudcPFEsWorker @ 0xDC252 (vLinkEudcPFEsWorker.c)
 *     ?bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC606 (-bAddEntry@PFFMEMOBJ@@QAEHKPAU_FD_GLYPHSET@@KPAU_IFIMETRICS@@KPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOA.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__thiscall PFEOBJ::pwszFamilyNameAlias(PFEOBJ *this, int *a2)
{
  int v2; // ecx

  v2 = *(_DWORD *)(*(_DWORD *)this + 20);
  *a2 = 0;
  if ( (*(_DWORD *)(v2 + 48) & 0x8000000) != 0 )
    *a2 = 1;
  return (unsigned __int16 *)(v2 + *(_DWORD *)(v2 + 8));
}
