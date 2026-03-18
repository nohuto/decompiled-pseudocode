/*
 * XREFs of ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C001C4DC
 * Callers:
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0057880 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0059B40 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?FindFaceName@@YAPEAGK@Z @ 0x1C001C640 (-FindFaceName@@YAPEAGK@Z.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1C001C67C (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C001C760 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C005D108 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 */

__int64 __fastcall MAPPER::bGetFaceName(MAPPER *this)
{
  unsigned __int8 v1; // r10
  int v3; // edx
  int v4; // eax
  char v5; // r9
  char v6; // r8
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  const unsigned __int16 *FaceName; // rsi
  unsigned __int16 *v11; // rax

  v1 = *((_BYTE *)this + 284);
  v3 = *((_DWORD *)this + 63);
  if ( v1 == 1 )
    v1 = MAPPER::DefaultCharset;
  *((_DWORD *)this + 63) = v3 | 0x20000;
  v4 = v1 | 0x8000;
  v5 = *(_BYTE *)(*((_QWORD *)this + 1) + 27LL) & 3;
  if ( v5 != 1 )
    v4 = v1;
  v6 = *(_BYTE *)(*((_QWORD *)this + 1) + 27LL) & 0x70;
  if ( v6 == 16 )
  {
    v7 = v4 | 0x4000;
  }
  else
  {
    v7 = v4;
    if ( !v5 && v6 == 48 )
      v7 = v4 | 0x8000;
  }
  v8 = v7 | 0x2000;
  if ( (v3 & 0x2000000) == 0 )
    v8 = v7;
  if ( v1 || (v3 & 0x100) == 0 || (v3 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_21;
  if ( (*((_DWORD *)this + 63) & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation(this) )
    goto LABEL_21;
  v9 = *((_DWORD *)this + 44);
  if ( v9 )
  {
    if ( v9 != 900 && v9 != 1800 && v9 != 2700 )
      goto LABEL_21;
  }
  FaceName = FindFaceName(v8 | 0x1000);
  if ( MAPPER::bFindBitmapFont(this, FaceName)
    || (FaceName = FindFaceName(v8 | 0x800), MAPPER::bFindBitmapFont(this, FaceName)) )
  {
    *((_QWORD *)this + 2) = FaceName;
    return 1LL;
  }
  if ( (*((_DWORD *)this + 63) & 0x100000) == 0 )
  {
LABEL_21:
    v11 = FindFaceName(v8);
    if ( *v11 || (*((_DWORD *)this + 63) & 0x40000000) == 0 )
      *((_QWORD *)this + 2) = v11;
    return 1LL;
  }
  return 0LL;
}
