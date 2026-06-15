/*
 * XREFs of sub_1800E5E20 @ 0x1800E5E20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

ULONGLONG __fastcall sub_1800E5E20(__int64 a1, __int64 a2)
{
  ULONGLONG result; // rax

  *(_DWORD *)(a1 + 92) += (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 224LL))(a2) != 0 ? 1 : -1;
  result = GetTickCount64();
  *(_QWORD *)(a1 + 96) = result;
  return result;
}
