/*
 * XREFs of sub_180065184 @ 0x180065184
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180065184(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = a2;
  *(_QWORD *)a1 = off_180149170;
  *(_DWORD *)(a1 + 16) = 16;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 24), 0, 0);
  *(_DWORD *)(a1 + 64) = 0;
  return a1;
}
