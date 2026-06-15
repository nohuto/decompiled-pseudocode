/*
 * XREFs of sub_18002B054 @ 0x18002B054
 * Callers:
 *     sub_18003C570 @ 0x18003C570 (sub_18003C570.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800398A0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall sub_18002B054(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  BOOL result; // eax

  v2 = *a1;
  if ( *a1 )
  {
    `eh vector destructor iterator'(&v2[5].LockCount, 8uLL, 0x15uLL, sub_18002B9D0);
    `eh vector destructor iterator'(&v2[1], 8uLL, 0x15uLL, sub_18002B9D0);
    DeleteCriticalSection(v2);
    result = sub_180039D98(v2);
  }
  *a1 = 0LL;
  return result;
}
