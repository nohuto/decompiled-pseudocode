/*
 * XREFs of sub_180039A50 @ 0x180039A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180039A50(__int64 a1, _BYTE *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  *a2 = *(_BYTE *)(a1 + 96);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
