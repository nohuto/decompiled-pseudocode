/*
 * XREFs of ?sizl@PDEVOBJ@@QAE?AUtagSIZE@@XZ @ 0x1D37FE
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA00EE (-vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z @ 0x1D2FCB (-DxLddmSharedPrimaryLockNotification@@YGJU_LUID@@IPBU_RECTL@@@Z.c)
 *     ?OverlapCheck@@YGHPAUHDEV__@@PAUHRGN__@@@Z @ 0x1D370A (-OverlapCheck@@YGHPAUHDEV__@@PAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall PDEVOBJ::sizl(PDEVOBJ *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  _DWORD *result; // eax
  int v4; // ecx

  v2 = *(_DWORD **)this;
  result = a2;
  if ( ((unsigned int)&loc_20000 & *(_DWORD *)(*(_DWORD *)this + 24)) != 0 )
  {
    *a2 = v2[266];
    v4 = v2[267];
  }
  else
  {
    *a2 = v2[359];
    v4 = v2[360];
  }
  a2[1] = v4;
  return result;
}
