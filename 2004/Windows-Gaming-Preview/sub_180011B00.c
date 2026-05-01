/*
 * XREFs of sub_180011B00 @ 0x180011B00
 * Callers:
 *     sub_18000F42C @ 0x18000F42C (sub_18000F42C.c)
 *     sub_180011B70 @ 0x180011B70 (sub_180011B70.c)
 *     sub_18002777C @ 0x18002777C (sub_18002777C.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_1800296C0 @ 0x1800296C0 (sub_1800296C0.c)
 *     sub_180029A70 @ 0x180029A70 (sub_180029A70.c)
 *     sub_18002CDA4 @ 0x18002CDA4 (sub_18002CDA4.c)
 *     sub_180037BA0 @ 0x180037BA0 (sub_180037BA0.c)
 *     sub_180037BC0 @ 0x180037BC0 (sub_180037BC0.c)
 *     sub_18003ABD0 @ 0x18003ABD0 (sub_18003ABD0.c)
 *     sub_18003B680 @ 0x18003B680 (sub_18003B680.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180011B00(volatile signed __int64 *a1)
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
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 192))(a1, 1LL);
    if ( qword_18005ADB0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 16LL))(qword_18005ADB0);
  }
  return v2;
}
