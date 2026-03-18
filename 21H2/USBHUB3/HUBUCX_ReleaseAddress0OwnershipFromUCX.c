/*
 * XREFs of HUBUCX_ReleaseAddress0OwnershipFromUCX @ 0x1C0024FF8
 * Callers:
 *     HUBDSM_ReleasingAddressZeroOwnershipOnRenumRetry @ 0x1C001E3B0 (HUBDSM_ReleasingAddressZeroOwnershipOnRenumRetry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_ReleaseAddress0OwnershipFromUCX(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*a1 + 440LL))(*(_QWORD *)(*a1 + 248LL), a1[3]);
}
