/*
 * XREFs of sub_1800234D0 @ 0x1800234D0
 * Callers:
 *     sub_180020B94 @ 0x180020B94 (sub_180020B94.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180023050 @ 0x180023050 (sub_180023050.c)
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_1800272C0 @ 0x1800272C0 (sub_1800272C0.c)
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_1800375D0 @ 0x1800375D0 (sub_1800375D0.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_18004978C @ 0x18004978C (sub_18004978C.c)
 *     sub_18005BB40 @ 0x18005BB40 (sub_18005BB40.c)
 *     sub_18011C680 @ 0x18011C680 (sub_18011C680.c)
 *     sub_18011F784 @ 0x18011F784 (sub_18011F784.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall sub_1800234D0(__int64 a1)
{
  __int64 v1; // rcx
  BOOL v2; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 1;
  if ( v1 )
  {
    v5 = 0LL;
    *(_OWORD *)pvar = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
           v1,
           &xmmword_18015B7F8,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      v2 = LODWORD(pvar[1]) == 0;
    }
    PropVariantClear(pvar);
  }
  return v2;
}
