/*
 * XREFs of ?GetSize@CHolographicInteropTarget@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F2A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHolographicInteropTarget::GetSize(__int64 a1, _DWORD *a2)
{
  return EmitterShapes::CPointSpawner::GetRandomPoint(a1 - *(int *)(a1 - 4), a2);
}
