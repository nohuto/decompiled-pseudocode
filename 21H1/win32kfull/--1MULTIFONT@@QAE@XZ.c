/*
 * XREFs of ??1MULTIFONT@@QAE@XZ @ 0x201732
 * Callers:
 *     ?MulDestroyFont@@YGXPAU_FONTOBJ@@@Z @ 0x202E06 (-MulDestroyFont@@YGXPAU_FONTOBJ@@@Z.c)
 *     ?MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x204C5E (-MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PA.c)
 * Callees:
 *     ?DestroyTable@MULTIFONT@@QAEXXZ @ 0x2017E6 (-DestroyTable@MULTIFONT@@QAEXXZ.c)
 */

void __thiscall MULTIFONT::~MULTIFONT(MULTIFONT *this)
{
  int v2; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( *(_DWORD *)this )
  {
    v2 = *((_DWORD *)this + 1);
    if ( v2 )
    {
      v3 = *(_DWORD *)(*(_DWORD *)v2 + 16);
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v3) )
        MULTIFONT::DestroyTable(this);
    }
    *(_DWORD *)(*(_DWORD *)this + 36) = *((_DWORD *)this + 1);
  }
}
