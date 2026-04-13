/*
 * XREFs of ?_Init@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800AD4A4
 * Callers:
 *     ?_Getcat@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800AD3D0 (-_Getcat@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfac.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C1090 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??$_Getvals@_W@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAX_WAEBV_Locinfo@1@@Z @ 0x1800AD4E8 (--$_Getvals@_W@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAX_WA.c)
 *     _Getdateorder @ 0x1800CC9A8 (_Getdateorder.c)
 */

__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Init(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  try
  {
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getvals<wchar_t>(a1);
    result = Getdateorder(v2);
    *(_DWORD *)(a1 + 40) = result;
  }
  catch ( ... )
  {
    std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Tidy((void **)a1);
    throw;
  }
  return result;
}
