/*
 * XREFs of ?GetMrtContrast@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@XZ @ 0x18044B9E4
 * Callers:
 *     ?GetContrastForParams@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z @ 0x18044A8A0 (-GetContrastForParams@ImmersiveIcons@@YA-AW4RESOURCE_CONTRAST@@AEBULoadIconParams@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 ImmersiveIcons::GetMrtContrast()
{
  unsigned int v0; // edi
  int v1; // ebx
  int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0;
  v4 = 0LL;
  LODWORD(v4) = 16;
  if ( SystemParametersInfoW(0x42u, 0x10u, &v4, 0) && (BYTE4(v4) & 1) != 0 )
  {
    v1 = 5 * ((unsigned __int16)GetSysColor(5) >> 8);
    v2 = (unsigned __int8)(GetSysColor(5) >> 16) + v1;
    LOBYTE(v0) = v2 + 2 * (unsigned int)(unsigned __int8)GetSysColor(5) > 0x400;
    v0 += 2;
  }
  return v0;
}
