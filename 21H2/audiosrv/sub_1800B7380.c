/*
 * XREFs of sub_1800B7380 @ 0x1800B7380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B7380(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  int v3; // eax

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
    *(_DWORD *)(a1 + 8) = v3 - 1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
