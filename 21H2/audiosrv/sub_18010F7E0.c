/*
 * XREFs of sub_18010F7E0 @ 0x18010F7E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010FC78 @ 0x18010FC78 (sub_18010FC78.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18010F7E0(__int64 a1)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 80));
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48)) )
    sub_18010FC78(a1);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
