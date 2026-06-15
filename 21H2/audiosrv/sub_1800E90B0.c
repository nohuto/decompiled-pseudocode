/*
 * XREFs of sub_1800E90B0 @ 0x1800E90B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_1800E90B0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = *a2;
  return (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 80LL))(*a2) != 2
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2) != 3;
}
