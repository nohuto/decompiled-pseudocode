/*
 * XREFs of _UpdateDpiMetricsCacheDPISERVERINFO@0 @ 0xDB010
 * Callers:
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     ?UserReinitializeStockFonts@@YGXKH@Z @ 0xF013A (-UserReinitializeStockFonts@@YGXKH@Z.c)
 * Callees:
 *     _GetDPIServerInfoForDpi@4 @ 0x91B76 (_GetDPIServerInfoForDpi@4.c)
 *     ?ClearDPISERVERINFO@@YGXPAUtagDPISERVERINFO@@@Z @ 0xDB07A (-ClearDPISERVERINFO@@YGXPAUtagDPISERVERINFO@@@Z.c)
 */

void __stdcall UpdateDpiMetricsCacheDPISERVERINFO()
{
  unsigned int v0; // esi
  unsigned int i; // ecx
  int j; // edi
  struct tagDPISERVERINFO *v3; // [esp+0h] [ebp-Ch]

  v0 = 184;
  for ( i = 184; i < 0x678; i += 92 )
    *(_DWORD *)(i + _gpsi + 4564) = 0;
  for ( j = _gppiList; j; j = *(_DWORD *)(j + 208) )
    GetDPIServerInfoForDpi((void *)*(unsigned __int16 *)(j + 160));
  do
  {
    if ( !*(_DWORD *)(v0 + _gpsi + 4564) )
      ClearDPISERVERINFO(v3);
    v0 += 92;
  }
  while ( v0 < 0x678 );
}
