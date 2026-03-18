/*
 * XREFs of ?flFontType@PFEOBJ@@QAEKXZ @ 0x8487E
 * Callers:
 *     ?bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z @ 0x4A170 (-bFoundExactMatch@MAPPER@@QAEHPAPAU_FONTHASH@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 *     ?vDeletePFELink@FHOBJ@@QAEXPAU_HASHBUCKET@@IAAVPFEOBJ@@@Z @ 0xCE504 (-vDeletePFELink@FHOBJ@@QAEXPAU_HASHBUCKET@@IAAVPFEOBJ@@@Z.c)
 *     ?bAddPFELink@FHOBJ@@QAEHPAU_HASHBUCKET@@IPBGAAVPFEOBJ@@H@Z @ 0xDE7EC (-bAddPFELink@FHOBJ@@QAEHPAU_HASHBUCKET@@IPBGAAVPFEOBJ@@H@Z.c)
 *     _NtGdiGetETM@8 @ 0x22132A (_NtGdiGetETM@8.c)
 * Callees:
 *     <none>
 */

int __thiscall PFEOBJ::flFontType(PFEOBJ *this)
{
  int v1; // ebx
  int v2; // edx
  int v3; // ecx
  int v4; // ebx
  int v5; // ecx
  int v6; // eax

  v1 = *(_DWORD *)this;
  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 20) + 48);
  if ( (v2 & 1) != 0 )
    v3 = 4;
  else
    v3 = ((unsigned int)v2 >> 1) & 1;
  v4 = *(_DWORD *)(v1 + 8);
  v5 = (2 * (v4 & 1)) | v3;
  v6 = v5;
  if ( v2 < 0 )
  {
    v5 |= (unsigned int)&loc_1FFFFC + 4;
    if ( (v2 & 0x4000) != 0 )
      v5 = v6 | 0x600000;
    if ( (v2 & 0x4000000) != 0 )
      v5 |= 0x100000u;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v5 |= 0x1000000u;
    if ( (v4 & 0x100) != 0 )
      return v5 | 0x800000;
  }
  return v5;
}
