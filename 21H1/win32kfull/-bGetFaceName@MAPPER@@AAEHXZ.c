/*
 * XREFs of ?bGetFaceName@MAPPER@@AAEHXZ @ 0x8ACA6
 * Callers:
 *     ?ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z @ 0x49FBA (-ppfeGetAMatch@@YGPAVPFE@@AAVXDCOBJ@@PAUtagENUMLOGFONTEXDVW@@PBGKKPAKPAU_POINTL@@3H@Z.c)
 *     ??0MAPPER@@QAE@PAVXDCOBJ@@PAKPAU_POINTL@@1PBUtagENUMLOGFONTEXDVW@@PBGKHK@Z @ 0x680A0 (--0MAPPER@@QAE@PAVXDCOBJ@@PAKPAU_POINTL@@1PBUtagENUMLOGFONTEXDVW@@PBGKHK@Z.c)
 * Callees:
 *     ?bCalculateWishCell@MAPPER@@AAEHXZ @ 0x4AFA2 (-bCalculateWishCell@MAPPER@@AAEHXZ.c)
 *     ?FindFaceName@@YGPAGK@Z @ 0x8ADBC (-FindFaceName@@YGPAGK@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QAEHPBG@Z @ 0x8ADEA (-bFindBitmapFont@MAPPER@@QAEHPBG@Z.c)
 *     ?bCalcOrientation@MAPPER@@QAEHXZ @ 0x8AE80 (-bCalcOrientation@MAPPER@@QAEHXZ.c)
 */

int __thiscall MAPPER::bGetFaceName(MAPPER *this)
{
  unsigned __int8 v2; // cl
  int v3; // edx
  int v4; // eax
  const unsigned __int16 *FaceName; // ebx
  unsigned __int16 *v6; // eax
  unsigned int v8; // [esp+0h] [ebp-Ch]
  unsigned int v9; // [esp+0h] [ebp-Ch]

  v2 = *((_BYTE *)this + 244);
  if ( v2 == 1 )
    v2 = MAPPER::DefaultCharset;
  v3 = *((_DWORD *)this + 55);
  *((_DWORD *)this + 55) = (unsigned int)&loc_20000 | v3;
  if ( v2 || (v3 & 0x100) == 0 || (v3 & 4) == 0 && !MAPPER::bCalculateWishCell(this) )
    goto LABEL_13;
  if ( ((unsigned int)&loc_80000 & *((_DWORD *)this + 55)) == 0 && !MAPPER::bCalcOrientation(this) )
    goto LABEL_13;
  v4 = *((_DWORD *)this + 41);
  if ( v4 )
  {
    if ( v4 != 900 && v4 != 1800 && v4 != 2700 )
      goto LABEL_13;
  }
  FaceName = FindFaceName(v8);
  if ( MAPPER::bFindBitmapFont(this, FaceName) || (FaceName = FindFaceName(v9), MAPPER::bFindBitmapFont(this, FaceName)) )
  {
    *((_DWORD *)this + 2) = FaceName;
    return 1;
  }
  if ( (*((_DWORD *)this + 55) & 0x100000) == 0 )
  {
LABEL_13:
    v6 = FindFaceName(v8);
    if ( *v6 || (*((_DWORD *)this + 55) & 0x40000000) == 0 )
      *((_DWORD *)this + 2) = v6;
    return 1;
  }
  return 0;
}
