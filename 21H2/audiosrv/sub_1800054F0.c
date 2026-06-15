/*
 * XREFs of sub_1800054F0 @ 0x1800054F0
 * Callers:
 *     sub_180074700 @ 0x180074700 (sub_180074700.c)
 * Callees:
 *     sub_180006524 @ 0x180006524 (sub_180006524.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall sub_1800054F0(struct _RTL_CRITICAL_SECTION *a1, char a2)
{
  ULONG_PTR SpinCount; // rcx

  DeleteCriticalSection(a1 + 25);
  SpinCount = a1[24].SpinCount;
  if ( SpinCount )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  sub_180006524(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1, 1056LL);
  return a1;
}
