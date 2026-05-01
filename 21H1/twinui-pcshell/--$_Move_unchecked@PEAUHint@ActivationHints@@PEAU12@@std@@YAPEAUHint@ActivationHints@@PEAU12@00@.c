/*
 * XREFs of ??$_Move_unchecked@PEAUHint@ActivationHints@@PEAU12@@std@@YAPEAUHint@ActivationHints@@PEAU12@00@Z @ 0x180054ED4
 * Callers:
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x180054E60 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x1803A9DF0 (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@QEAA-AV-$.c)
 * Callees:
 *     ??4Hint@ActivationHints@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803A92D0 (--4Hint@ActivationHints@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<ActivationHints::Hint *,ActivationHints::Hint *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 80LL )
  {
    ActivationHints::Hint::operator=(a3, i);
    a3 += 80LL;
  }
  return a3;
}
