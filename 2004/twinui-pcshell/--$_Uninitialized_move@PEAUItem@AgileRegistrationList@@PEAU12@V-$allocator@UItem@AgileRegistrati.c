/*
 * XREFs of ??$_Uninitialized_move@PEAUItem@AgileRegistrationList@@PEAU12@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@QEAU12@0PEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180145C00
 * Callers:
 *     ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x180145640 (--$_Emplace_reallocate@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$al.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@0AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180145420 (--$_Destroy_range@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistr.c)
 */

char *__fastcall std::_Uninitialized_move<AgileRegistrationList::Item *,AgileRegistrationList::Item *,std::allocator<AgileRegistrationList::Item>>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  _QWORD *v4; // r8
  char *v5; // r9
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v4 = a1 + 1;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      *(_DWORD *)a3 = *((_DWORD *)v4 - 2);
      a3 += 16;
      v6 = *v4;
      *v4 = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = v6;
      v4 += 2;
    }
    while ( v4 - 1 != a2 );
  }
  std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>((__int64)a3, (__int64)a3);
  return a3;
}
