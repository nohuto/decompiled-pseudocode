/*
 * XREFs of sub_1801105C0 @ 0x1801105C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 */

_BOOL8 __fastcall sub_1801105C0(__int64 a1)
{
  BOOL v2; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  sub_180066980((__int64)&lpCriticalSection, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 32) != 0LL;
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
