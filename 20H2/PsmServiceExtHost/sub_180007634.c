/*
 * XREFs of sub_180007634 @ 0x180007634
 * Callers:
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 *     sub_180069BA4 @ 0x180069BA4 (sub_180069BA4.c)
 * Callees:
 *     sub_18000769C @ 0x18000769C (sub_18000769C.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007634(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  PVOID v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  PVOID P; // [rsp+48h] [rbp+20h] BYREF

  P = 0LL;
  v4 = sub_18000769C(a1, a2, &P);
  v5 = P;
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = *((_QWORD *)P + 6);
    *a3 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v6 = 0;
  }
  if ( v5 )
    sub_1800265B0(v5);
  return v6;
}
