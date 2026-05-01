/*
 * XREFs of sub_1800635C4 @ 0x1800635C4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180025F18 @ 0x180025F18 (sub_180025F18.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180027598 @ 0x180027598 (sub_180027598.c)
 *     sub_180040E64 @ 0x180040E64 (sub_180040E64.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18006AC18 @ 0x18006AC18 (sub_18006AC18.c)
 *     sub_18006D5A8 @ 0x18006D5A8 (sub_18006D5A8.c)
 *     sub_180070460 @ 0x180070460 (sub_180070460.c)
 *     sub_180070FC4 @ 0x180070FC4 (sub_180070FC4.c)
 *     sub_180081F98 @ 0x180081F98 (sub_180081F98.c)
 */

_QWORD *__fastcall sub_1800635C4(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *i; // rsi
  void *v4; // r8
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // r8
  _QWORD *result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 2720);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)(a1 + 2720) = 0LL;
  }
  sub_180070460(a1 + 536);
  sub_18006AC18(a1);
  sub_18001E380();
  for ( i = (_QWORD *)(a1 + 688); (_QWORD *)*i != i; sub_18006D5A8(*i - 8LL) )
    ;
  sub_180040E64(a1 + 680);
  sub_180070460(a1 + 704);
  sub_180070460(a1 + 728);
  v4 = *(void **)(a1 + 760);
  if ( v4 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  sub_18000F390();
  sub_180070FC4(a1);
  v5 = *(_QWORD *)(a1 + 1680);
  if ( v5 )
    TpReleaseWork(v5);
  v6 = *(void **)(a1 + 360);
  if ( v6 )
    NtClose(v6);
  v7 = *(void **)(a1 + 376);
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  if ( *(_DWORD *)(a1 + 2496) || *(_DWORD *)(a1 + 2500) )
    NtDeleteWnfStateName(a1 + 2496);
  sub_180081F98(a1 + 2104);
  for ( result = (_QWORD *)sub_180025F18(a1 + 2328, 4); ; result = (_QWORD *)sub_180027598(a1 + 2328, v9) )
  {
    v9 = result;
    if ( !result )
      break;
    sub_1800274E0(result);
  }
  v10 = *(_QWORD *)(a1 + 560);
  if ( v10 )
    result = (_QWORD *)TpReleaseTimer(v10);
  *(_DWORD *)(a1 + 672) &= ~1u;
  return result;
}
