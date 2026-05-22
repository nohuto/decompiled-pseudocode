/*
 * XREFs of ??$_Floating_to_string@M@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEBDM@Z @ 0x180082DDC
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180083270 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     sprintf_s @ 0x18003CDBC (sprintf_s.c)
 *     _scprintf @ 0x18003CE14 (_scprintf.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@_KD@Z @ 0x1800830B8 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@_KD@Z.c)
 */

_QWORD *__fastcall std::_Floating_to_string<float>(_QWORD *a1, __int64 a2, float a3)
{
  size_t v4; // rdi
  char *v5; // rcx

  v4 = scprintf("%f", a3);
  std::string::string(a1, v4);
  v5 = (char *)a1;
  if ( a1[3] >= 0x10uLL )
    v5 = (char *)*a1;
  sprintf_s(v5, v4 + 1, "%f", a3);
  return a1;
}
