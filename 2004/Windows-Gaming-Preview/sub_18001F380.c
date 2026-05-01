/*
 * XREFs of sub_18001F380 @ 0x18001F380
 * Callers:
 *     sub_180025100 @ 0x180025100 (sub_180025100.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001F380(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 15);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v1;
}
