/*
 * XREFs of sub_1800736A0 @ 0x1800736A0
 * Callers:
 *     sub_180073964 @ 0x180073964 (sub_180073964.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800736A0(__int64 a1)
{
  int v1; // eax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 1352);
  if ( (v1 & 8) != 0 )
    return 0;
  v4 = -100000000LL;
  *(_DWORD *)(a1 + 1352) = v1 | 8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  TpSetTimer(*(_QWORD *)(a1 + 1344), &v4, 0LL, 1000LL);
  return 1;
}
