/*
 * XREFs of sub_1800BF3F8 @ 0x1800BF3F8
 * Callers:
 *     sub_1800BF950 @ 0x1800BF950 (sub_1800BF950.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800BF3F8(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  *(_OWORD *)pvar = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, &v7);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
               v7,
               &xmmword_18015C470,
               pvar),
        v3 < 0) )
  {
    sub_18005E8F8((__int64)"GetFormFactor", 1903, v3);
    v3 = 0;
  }
  else
  {
    *a2 = LOWORD(pvar[1]);
    PropVariantClear(pvar);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v3;
}
