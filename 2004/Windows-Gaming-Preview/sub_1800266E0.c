/*
 * XREFs of sub_1800266E0 @ 0x1800266E0
 * Callers:
 *     sub_18001ADC0 @ 0x18001ADC0 (sub_18001ADC0.c)
 *     sub_18001AE70 @ 0x18001AE70 (sub_18001AE70.c)
 *     sub_18001C380 @ 0x18001C380 (sub_18001C380.c)
 *     sub_18001C7D0 @ 0x18001C7D0 (sub_18001C7D0.c)
 *     sub_18001CA70 @ 0x18001CA70 (sub_18001CA70.c)
 *     sub_18001D0C0 @ 0x18001D0C0 (sub_18001D0C0.c)
 *     sub_18001D4E0 @ 0x18001D4E0 (sub_18001D4E0.c)
 *     sub_18001DCA8 @ 0x18001DCA8 (sub_18001DCA8.c)
 *     sub_18001DDB4 @ 0x18001DDB4 (sub_18001DDB4.c)
 *     sub_18001FBB0 @ 0x18001FBB0 (sub_18001FBB0.c)
 *     sub_18001FC40 @ 0x18001FC40 (sub_18001FC40.c)
 *     sub_18001FCF0 @ 0x18001FCF0 (sub_18001FCF0.c)
 *     sub_180025540 @ 0x180025540 (sub_180025540.c)
 *     sub_180025560 @ 0x180025560 (sub_180025560.c)
 *     sub_180026750 @ 0x180026750 (sub_180026750.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800266E0(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 4);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 4, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 112))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
