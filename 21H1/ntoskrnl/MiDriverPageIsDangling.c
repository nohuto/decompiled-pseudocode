/*
 * XREFs of MiDriverPageIsDangling @ 0x14052FCD4
 * Callers:
 *     MiDeleteValidSystemPage @ 0x1402235A0 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
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
