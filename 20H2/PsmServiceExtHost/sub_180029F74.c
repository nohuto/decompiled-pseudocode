/*
 * XREFs of sub_180029F74 @ 0x180029F74
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180076C18 @ 0x180076C18 (sub_180076C18.c)
 */

__int64 __fastcall sub_180029F74(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) + 144LL))(
         *(_QWORD *)(a1 + 1200),
         a2,
         0LL);
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 )
  {
    v4 = qword_1800B3230 & 8;
    if ( v4 == qword_1800B3230 )
      sub_180076C18(v4, &unk_18009EC42);
  }
  return v2;
}
