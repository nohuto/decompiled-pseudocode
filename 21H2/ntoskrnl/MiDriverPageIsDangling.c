/*
 * XREFs of MiDriverPageIsDangling @ 0x1405905CC
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiDeleteValidSystemPage @ 0x14033BEC0 (MiDeleteValidSystemPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax

  result = qword_140C4F4D8;
  if ( *(__int64 *)(a1 + 40) < 0 )
    --*(_QWORD *)(qword_140C4F4D8 + 200);
  --*(_QWORD *)(result + 208);
  return result;
}
