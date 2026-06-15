/*
 * XREFs of sub_180110550 @ 0x180110550
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180110550(struct _RTL_CRITICAL_SECTION **a1)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  sub_180066980((__int64)&lpCriticalSection, a1[3]);
  (*(void (__fastcall **)(struct _RTL_CRITICAL_SECTION **))&(*a1)->LockCount)(a1);
  ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION **, struct _RTL_CRITICAL_SECTION *))(*a1)->SpinCount)(a1, a1[1]);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
