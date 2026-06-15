/*
 * XREFs of sub_1800D1500 @ 0x1800D1500
 * Callers:
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 * Callees:
 *     sub_1800D0B30 @ 0x1800D0B30 (sub_1800D0B30.c)
 */

__int64 __fastcall sub_1800D1500(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v6; // rdx
  __int64 *v7; // r14
  __int64 *i; // rbx

  *a3 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v7 = *(__int64 **)(a1 + 64);
  for ( i = *(__int64 **)(a1 + 56); i != v7 && CompareStringW(0x7Fu, 1u, a2, -1, *(PCNZWCH *)(*i + 296), -1) != 2; ++i )
    ;
  if ( i != *(__int64 **)(a1 + 64) )
  {
    if ( *i )
      sub_1800D0B30(*i, v6, a3);
    else
      *a3 = 0LL;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
