/*
 * XREFs of sub_180038430 @ 0x180038430
 * Callers:
 *     sub_180028B34 @ 0x180028B34 (sub_180028B34.c)
 *     sub_18002CF54 @ 0x18002CF54 (sub_18002CF54.c)
 *     sub_180037C90 @ 0x180037C90 (sub_180037C90.c)
 *     sub_180037CB0 @ 0x180037CB0 (sub_180037CB0.c)
 *     sub_180038420 @ 0x180038420 (sub_180038420.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180038430(volatile signed __int64 *a1)
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
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 72))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
