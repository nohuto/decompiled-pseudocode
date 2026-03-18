/*
 * XREFs of MiDriverPageIsDangling @ 0x140533CF4
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x1402AC570 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 * Callees:
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 */

_BOOL8 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rdx

  result = MI_PFN_IS_PROTO(a1);
  if ( result )
    --*(_QWORD *)(v2 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}
