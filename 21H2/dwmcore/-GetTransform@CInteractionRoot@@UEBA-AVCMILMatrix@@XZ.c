/*
 * XREFs of ?GetTransform@CInteractionRoot@@UEBA?AVCMILMatrix@@XZ @ 0x180111910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::GetTransform(__int64 a1, __int64 a2)
{
  char v2; // al

  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  v2 = *(_BYTE *)(a2 + 65) & 0xD7;
  *(_BYTE *)(a2 + 64) = 85;
  *(_BYTE *)(a2 + 65) = v2 | 0x17;
  return a2;
}
