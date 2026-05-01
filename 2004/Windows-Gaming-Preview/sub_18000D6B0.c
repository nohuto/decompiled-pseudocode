/*
 * XREFs of sub_18000D6B0 @ 0x18000D6B0
 * Callers:
 *     sub_18000BFE0 @ 0x18000BFE0 (sub_18000BFE0.c)
 *     sub_18000D824 @ 0x18000D824 (sub_18000D824.c)
 *     sub_18000D850 @ 0x18000D850 (sub_18000D850.c)
 *     sub_180010260 @ 0x180010260 (sub_180010260.c)
 *     sub_180010390 @ 0x180010390 (sub_180010390.c)
 *     sub_1800139F0 @ 0x1800139F0 (sub_1800139F0.c)
 *     sub_18002DB60 @ 0x18002DB60 (sub_18002DB60.c)
 *     sub_180031860 @ 0x180031860 (sub_180031860.c)
 *     sub_180032D68 @ 0x180032D68 (sub_180032D68.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000D6B0(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 7);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 7, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 80))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
