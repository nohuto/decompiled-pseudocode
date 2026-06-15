/*
 * XREFs of sub_1800E9190 @ 0x1800E9190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall sub_1800E9190(__int64 a1, _QWORD *a2)
{
  return *(_DWORD *)(a1 + 8) == ((*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 88LL))(*a2) != 0);
}
