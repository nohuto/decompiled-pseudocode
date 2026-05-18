/*
 * XREFs of sub_1800FCF40 @ 0x1800FCF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800FCF40(__int64 a1)
{
  __int64 result; // rax

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
  *(_DWORD *)(a1 + 1892) = 0;
  *(_WORD *)(a1 + 1896) = 256;
  return result;
}
