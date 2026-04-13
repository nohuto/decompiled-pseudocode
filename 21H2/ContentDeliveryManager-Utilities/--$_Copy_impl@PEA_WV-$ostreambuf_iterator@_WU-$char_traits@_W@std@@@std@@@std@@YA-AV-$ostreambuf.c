/*
 * XREFs of ??$_Copy_impl@PEA_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@YA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@0@PEA_W0V10@U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800BC864
 * Callers:
 *     ?do_put@?$time_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBUtm@@DD@Z @ 0x1800C8850 (-do_put@-$time_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreambu.c)
 * Callees:
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800BE5B0 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 */

_OWORD *__fastcall std::_Copy_impl<wchar_t *,std::ostreambuf_iterator<wchar_t>>(
        _OWORD *a1,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        _OWORD *a4)
{
  __int64 v4; // rdi
  unsigned __int16 *v6; // rbx
  unsigned __int64 v7; // rsi
  _OWORD *result; // rax

  v4 = 0LL;
  v6 = a2;
  v7 = (a3 - (unsigned __int64)a2 + 1) >> 1;
  if ( (unsigned __int64)a2 > a3 )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=(a4, *v6);
      ++v4;
      ++v6;
    }
    while ( v4 != v7 );
  }
  result = a1;
  *a1 = *a4;
  return result;
}
