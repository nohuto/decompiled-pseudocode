/*
 * XREFs of sub_1800C2EF0 @ 0x1800C2EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_18007C140 @ 0x18007C140 (sub_18007C140.c)
 *     sub_1800C3AEC @ 0x1800C3AEC (sub_1800C3AEC.c)
 *     sub_1800C3B84 @ 0x1800C3B84 (sub_1800C3B84.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C2EF0(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  sub_18007C140((__int64)a1, a2);
  v3 = sub_18007AB84((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_18020F8C8, a1[147], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_180210088, a1[136], 1LL);
  if ( a1[166] == 3 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_18020F888, v4, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_18020F828, v5, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_18020F848, v6, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_18020F868, v7, 1LL);
  }
  sub_1800C3B84(a1);
  sub_1800C3AEC(a1);
  return sub_1800C3B38(a1);
}
