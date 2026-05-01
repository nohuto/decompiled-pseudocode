/*
 * XREFs of sub_1800679F4 @ 0x1800679F4
 * Callers:
 *     sub_180063764 @ 0x180063764 (sub_180063764.c)
 * Callees:
 *     sub_18000334C @ 0x18000334C (sub_18000334C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800679F4(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD *result; // rax
  __int64 v7; // rcx

  sub_18001E380();
  *(_DWORD *)(a1 + 160) |= 2u;
  v2 = *(_QWORD *)(a1 + 24) + 40LL;
  while ( *(_QWORD *)v2 != v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)v2 + 16LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    sub_18000334C(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 32) + 40LL;
  while ( *(_QWORD *)v4 != v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 16LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, 0LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  result = sub_18000F390();
  v7 = *(_QWORD *)(a1 + 136);
  if ( v7 )
  {
    TpReleaseCleanupGroupMembers(v7, 1LL);
    result = (_QWORD *)TpReleaseCleanupGroup(*(_QWORD *)(a1 + 136));
    *(_QWORD *)(a1 + 136) = 0LL;
  }
  return result;
}
