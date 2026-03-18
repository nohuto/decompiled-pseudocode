/*
 * XREFs of ??0MULTIFONT@@QAE@PAU_FONTOBJ@@JPAU_VDEV@@@Z @ 0x2015B7
 * Callers:
 *     ?MulDestroyFont@@YGXPAU_FONTOBJ@@@Z @ 0x202E06 (-MulDestroyFont@@YGXPAU_FONTOBJ@@@Z.c)
 *     ?MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x204C5E (-MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PA.c)
 * Callees:
 *     <none>
 */

MULTIFONT *__thiscall MULTIFONT::MULTIFONT(MULTIFONT *this, struct _FONTOBJ *a2, unsigned int a3, struct _VDEV *a4)
{
  PVOID pvConsumer; // ecx
  _DWORD *v6; // ecx

  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    pvConsumer = a2->pvConsumer;
    if ( pvConsumer )
    {
      *((_DWORD *)this + 1) = pvConsumer;
    }
    else
    {
      if ( a3 <= 0x3FFFFFFE )
        *(_DWORD *)(*(_DWORD *)this + 36) = EngAllocMem(1u, 4 * a3 + 4, 0x6C756D47u);
      else
        a2->pvConsumer = 0;
      v6 = *(_DWORD **)(*(_DWORD *)this + 36);
      *((_DWORD *)this + 1) = v6;
      if ( v6 )
        *v6 = a4;
    }
  }
  return this;
}
