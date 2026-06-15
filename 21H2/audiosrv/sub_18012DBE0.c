/*
 * XREFs of sub_18012DBE0 @ 0x18012DBE0
 * Callers:
 *     sub_1800BA940 @ 0x1800BA940 (sub_1800BA940.c)
 * Callees:
 *     sub_180003ECC @ 0x180003ECC (sub_180003ECC.c)
 *     sub_18012D91C @ 0x18012D91C (sub_18012D91C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 sub_18012DBE0()
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx
  unsigned int v1; // edi

  v0 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  sub_18012D91C(v0);
  v1 = sub_180003ECC((__int64)v0);
  if ( v0 )
    LeaveCriticalSection(v0);
  return v1;
}
