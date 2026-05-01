/*
 * XREFs of sub_180081A40 @ 0x180081A40
 * Callers:
 *     sub_18007E664 @ 0x18007E664 (sub_18007E664.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180081A40(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 56);
  return *(_QWORD *)(v1 + 800) > *(_QWORD *)(a1 + 72)
      || (HIWORD(*(_DWORD *)(v1 + 648)) & 3u) >= (unsigned __int64)*(int *)(a1 + 84);
}
