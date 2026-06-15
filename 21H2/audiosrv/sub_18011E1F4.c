/*
 * XREFs of sub_18011E1F4 @ 0x18011E1F4
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011E1F4(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  PROPVARIANT v4; // rbx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)pvar = 0LL;
  v7 = 0LL;
  v3 = 0;
  v4 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(v2, &unk_18015B0D0, pvar) >= 0
    && LOWORD(pvar[0]) == 21 )
  {
    v4 = pvar[1];
  }
  PropVariantClear(pvar);
  LOBYTE(v3) = *(_QWORD *)(a1 + 192) != (_QWORD)v4;
  return v3;
}
