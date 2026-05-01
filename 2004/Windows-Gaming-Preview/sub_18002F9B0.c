/*
 * XREFs of sub_18002F9B0 @ 0x18002F9B0
 * Callers:
 *     sub_18002F100 @ 0x18002F100 (sub_18002F100.c)
 *     sub_18002F400 @ 0x18002F400 (sub_18002F400.c)
 *     sub_18002FAF4 @ 0x18002FAF4 (sub_18002FAF4.c)
 *     sub_18002FBB8 @ 0x18002FBB8 (sub_18002FBB8.c)
 *     sub_18002FD90 @ 0x18002FD90 (sub_18002FD90.c)
 *     sub_180037190 @ 0x180037190 (sub_180037190.c)
 *     sub_180037320 @ 0x180037320 (sub_180037320.c)
 *     sub_18003B8C0 @ 0x18003B8C0 (sub_18003B8C0.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     sub_18003C2A0 @ 0x18003C2A0 (sub_18003C2A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002F9B0(volatile signed __int64 *a1)
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
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 64))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
