/*
 * XREFs of ??$remove@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEBV?$function@$$A6AXXZ@std@@@std@@@std@@@std@@PEBV?$function@$$A6AXXZ@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEBV?$function@$$A6AXXZ@std@@@std@@@std@@@0@V10@V10@AEBQEBV?$function@$$A6AXXZ@0@@Z @ 0x18015662C
 * Callers:
 *     ?RemoveHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXPEBV?$function@$$A6AXXZ@std@@0@Z @ 0x180163720 (-RemoveHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEA.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::remove<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::function<void (void)> const *>>>,std::function<void (void)> const *>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        _QWORD *a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r9

  if ( a2 != (_QWORD *)a3 )
  {
    do
    {
      if ( *a2 == *a4 )
        break;
      ++a2;
    }
    while ( a2 != (_QWORD *)a3 );
    if ( a2 != (_QWORD *)a3 )
    {
      v6 = 0LL;
      v7 = a2 + 1;
      v8 = (a3 - (unsigned __int64)(a2 + 1) + 7) >> 3;
      if ( (unsigned __int64)(a2 + 1) > a3 )
        v8 = 0LL;
      if ( v8 )
      {
        do
        {
          if ( *v7 != *a4 )
            *a2++ = *v7;
          ++v7;
          ++v6;
        }
        while ( v6 != v8 );
      }
    }
  }
  *a1 = a2;
  return a1;
}
