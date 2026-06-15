/*
 * XREFs of sub_180046038 @ 0x180046038
 * Callers:
 *     sub_18006DA9C @ 0x18006DA9C (sub_18006DA9C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180046038(__int64 a1, bool *a2, _DWORD *a3, _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 808);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
  *a4 = 50000LL;
  *a3 = *(_DWORD *)(a1 + 848);
  *a2 = *(_DWORD *)(a1 + 852) != 0;
  if ( v4 )
    LeaveCriticalSection(v4);
}
