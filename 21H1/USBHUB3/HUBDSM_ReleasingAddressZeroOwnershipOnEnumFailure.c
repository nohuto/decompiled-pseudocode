/*
 * XREFs of HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure @ 0x1C001DE70
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_ReleaseAddress0OwnershipFromUCX @ 0x1C0024BD4 (HUBUCX_ReleaseAddress0OwnershipFromUCX.c)
 */

__int64 __fastcall HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure(__int64 a1)
{
  HUBUCX_ReleaseAddress0OwnershipFromUCX(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
