/*
 * XREFs of sub_18011C810 @ 0x18011C810
 * Callers:
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 *     sub_18011F504 @ 0x18011F504 (sub_18011F504.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011C810(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  *(_OWORD *)pvar = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(v2, &unk_180172B50, pvar) >= 0
    && LOWORD(pvar[0]) == 11
    && LOWORD(pvar[1]) == 0xFFFF )
  {
    v3 = 100000LL;
  }
  else
  {
    PropVariantClear(pvar);
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
           *(_QWORD *)(a1 + 40),
           &unk_180172CA0,
           pvar) >= 0
      && LOWORD(pvar[0]) == 65
      && LODWORD(pvar[1]) == 8
      && (unsigned __int64)(*v6 - 50000) <= 0xC350 )
    {
      v3 = *v6;
    }
  }
  PropVariantClear(pvar);
  return v3;
}
