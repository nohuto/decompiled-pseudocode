/*
 * XREFs of sub_1800E69D4 @ 0x1800E69D4
 * Callers:
 *     sub_1800335A0 @ 0x1800335A0 (sub_1800335A0.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E69D4(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 104);
  result = (unsigned int)(v2 + a2);
  *(_DWORD *)(a1 + 104) = result;
  if ( v2 != (_DWORD)result && (!v2 || !(_DWORD)result) )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 200) + 320LL))(*(_QWORD *)(a1 + 200), a1 + 8);
  return result;
}
