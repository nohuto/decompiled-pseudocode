/*
 * XREFs of sub_18002C2F4 @ 0x18002C2F4
 * Callers:
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 * Callees:
 *     sub_18002C364 @ 0x18002C364 (sub_18002C364.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002C2F4(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) + 152LL))(*(_QWORD *)(a1 + 1200));
  if ( (unsigned int)dword_1800B3218 > 5 )
    return sub_18002C364(v2, &unk_18009EFEB);
  return result;
}
