/*
 * XREFs of sub_1800488A0 @ 0x1800488A0
 * Callers:
 *     sub_18001B8D0 @ 0x18001B8D0 (sub_18001B8D0.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800488A0(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v5 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v2 = 10;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(v1, &xmmword_18015C470, pvar) >= 0
    && LOWORD(pvar[0]) == 19
    && LOWORD(pvar[1]) < 0xBu )
  {
    v2 = LOWORD(pvar[1]);
  }
  PropVariantClear(pvar);
  return v2;
}
