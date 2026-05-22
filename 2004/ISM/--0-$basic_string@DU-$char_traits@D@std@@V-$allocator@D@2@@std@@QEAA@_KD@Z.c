/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@_KD@Z @ 0x180083158
 * Callers:
 *     ??$_Floating_to_string@M@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEBDM@Z @ 0x180082E7C (--$_Floating_to_string@M@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@PEB.c)
 * Callees:
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ??$_Reallocate_for@V_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@Z @ 0x180082EF8 (--$_Reallocate_for@V_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_@@D@-$basic_string@DU-$char_traits@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::string::string(_QWORD *a1, size_t Size)
{
  void *v4; // rsi

  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( Size > 0xF )
  {
    std::string::_Reallocate_for<_lambda_138c3d7c38c85abb84c7fc7bfe5747b7_,char>((__int64)a1, Size);
  }
  else
  {
    v4 = a1;
    if ( a1[3] >= 0x10uLL )
      v4 = (void *)*a1;
    a1[2] = Size;
    memset_0(v4, 0, Size);
    *((_BYTE *)v4 + Size) = 0;
  }
  return a1;
}
