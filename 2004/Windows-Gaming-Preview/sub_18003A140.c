/*
 * XREFs of sub_18003A140 @ 0x18003A140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003A140(__int64 a1, char a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  *(_BYTE *)(a1 + 160) = a2 != 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
