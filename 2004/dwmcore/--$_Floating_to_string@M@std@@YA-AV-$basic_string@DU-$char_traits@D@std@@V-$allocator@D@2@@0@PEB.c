/*
 * XREFs of ??$_Floating_to_string@M@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEBDM@Z @ 0x180156350
 * Callers:
 *     ??$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180155F8C (--$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     sprintf_s @ 0x1800E338C (sprintf_s.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _scprintf @ 0x1800E3BF0 (_scprintf.c)
 *     ??$_Reallocate_for@V_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@Z @ 0x180156410 (--$_Reallocate_for@V_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@-$basic_string@DU-$char_traits@.c)
 */

_QWORD *__fastcall std::_Floating_to_string<float>(_QWORD *a1, __int64 a2, float a3)
{
  int v4; // eax
  __int64 v5; // rdi
  void *v6; // rsi
  char *v7; // rcx

  v4 = scprintf("%f", a3);
  a1[2] = 0LL;
  v5 = v4;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( (unsigned __int64)v4 > 0xF )
  {
    std::string::_Reallocate_for<_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_,char>(a1, v4);
  }
  else
  {
    v6 = a1;
    if ( a1[3] >= 0x10uLL )
      v6 = (void *)*a1;
    a1[2] = v4;
    memset_0(v6, 0, v4);
    *((_BYTE *)v6 + v5) = 0;
  }
  v7 = (char *)a1;
  if ( a1[3] >= 0x10uLL )
    v7 = (char *)*a1;
  sprintf_s(v7, v5 + 1, "%f", a3);
  return a1;
}
