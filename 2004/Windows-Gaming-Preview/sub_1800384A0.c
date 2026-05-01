/*
 * XREFs of sub_1800384A0 @ 0x1800384A0
 * Callers:
 *     sub_18002F700 @ 0x18002F700 (sub_18002F700.c)
 *     sub_1800378C0 @ 0x1800378C0 (sub_1800378C0.c)
 *     sub_1800378E0 @ 0x1800378E0 (sub_1800378E0.c)
 *     sub_180037910 @ 0x180037910 (sub_180037910.c)
 *     sub_180037930 @ 0x180037930 (sub_180037930.c)
 *     sub_180037950 @ 0x180037950 (sub_180037950.c)
 *     sub_180037970 @ 0x180037970 (sub_180037970.c)
 *     sub_180037990 @ 0x180037990 (sub_180037990.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800384A0(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 17);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 17, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_5;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_5:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 48))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
