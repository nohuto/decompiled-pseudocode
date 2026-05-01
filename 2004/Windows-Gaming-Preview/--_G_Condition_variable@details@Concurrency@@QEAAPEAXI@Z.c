/*
 * XREFs of ??_G_Condition_variable@details@Concurrency@@QEAAPEAXI@Z @ 0x180010000
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E744 @ 0x18000E744 (sub_18000E744.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

Concurrency::details::_Condition_variable *__fastcall Concurrency::details::_Condition_variable::`scalar deleting destructor'(
        Concurrency::details::_Condition_variable *this,
        char a2)
{
  sub_18000E744((__int64)this);
  if ( (a2 & 1) != 0 )
    j_j__o_free(this, 64LL);
  return this;
}
