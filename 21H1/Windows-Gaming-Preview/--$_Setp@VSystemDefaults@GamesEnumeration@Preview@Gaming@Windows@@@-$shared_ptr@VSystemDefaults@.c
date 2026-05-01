/*
 * XREFs of ??$_Setp@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@?$shared_ptr@VSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@AEAAXPEAVSystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@U?$integral_constant@_N$0A@@1@@Z @ 0x18003D458
 * Callers:
 *     ?LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003C860 (-LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     ?PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003D730 (-PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004495C (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>::_Setp<Windows::Gaming::Preview::GamesEnumeration::SystemDefaults>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, __int64))
{
  _DWORD *result; // rax

  try
  {
    result = operator new(0x18uLL);
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = &std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::`vftable';
    *((_QWORD *)result + 2) = a2;
    *a1 = a2;
    a1[1] = result;
  }
  catch ( ... )
  {
    if ( a2 )
      (**a2)(a2, 1LL);
    throw;
  }
  return result;
}
