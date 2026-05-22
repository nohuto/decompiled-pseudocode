/*
 * XREFs of ??$_Uninitialized_move@PEAUInputProvider@@PEAU1@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800287C4
 * Callers:
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x180028670 (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@0AEAV?$allocator@UInputProvider@@@0@@Z @ 0x180028B24 (--$_Destroy_range@V-$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@0AEAV-$allocato.c)
 */

_OWORD *__fastcall std::_Uninitialized_move<InputProvider *,InputProvider *,std::allocator<InputProvider>>(
        char *a1,
        char *a2,
        char *a3)
{
  _OWORD *v3; // rbx
  char *v4; // r9
  char *v5; // rcx

  v3 = a3;
  v4 = a1;
  if ( a1 != a2 )
  {
    a3 += 16;
    v4 = (char *)(a1 - (char *)v3);
    do
    {
      v5 = &v4[(_QWORD)a3];
      *v3 = *(_OWORD *)&a3[(_QWORD)v4 - 16];
      *(_QWORD *)a3 = 0LL;
      if ( a3 != &v4[(_QWORD)a3] )
      {
        *(_QWORD *)a3 = *(_QWORD *)v5;
        *(_QWORD *)v5 = 0LL;
      }
      a3 += 24;
      v3 = (_OWORD *)((char *)v3 + 24);
    }
    while ( &v4[(_QWORD)a3 - 16] != a2 );
  }
  std::_Destroy_range<std::allocator<InputProvider>>(v3, v3, a3, v4);
  return v3;
}
