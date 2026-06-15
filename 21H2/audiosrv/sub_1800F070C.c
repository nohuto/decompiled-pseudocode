/*
 * XREFs of sub_1800F070C @ 0x1800F070C
 * Callers:
 *     sub_1800EFEC4 @ 0x1800EFEC4 (sub_1800EFEC4.c)
 *     sub_1800F06A0 @ 0x1800F06A0 (sub_1800F06A0.c)
 *     sub_1800F0804 @ 0x1800F0804 (sub_1800F0804.c)
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 *     sub_1800EFE6C @ 0x1800EFE6C (sub_1800EFE6C.c)
 */

void __fastcall sub_1800F070C(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    sub_1800EFE6C(*(__int64 ***)(a1 + 48), *(__int64 ***)(a1 + 56));
    sub_1800472E0(v2, (*(_QWORD *)(a1 + 64) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    sub_1800583E4(*(__int64 **)(a1 + 24), *(__int64 **)(a1 + 32));
    sub_1800472E0(v3, (*(_QWORD *)(a1 + 40) - v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( *(_QWORD *)a1 )
    CoTaskMemFree(*(LPVOID *)a1);
}
