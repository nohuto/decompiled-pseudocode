/*
 * XREFs of ?GetDropTarget@AppResizeData@@UEAA?AUResizeDropTarget@@XZ @ 0x18008BA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppResizeData::GetDropTarget(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 80);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 16) = v2;
  return a2;
}
