/*
 * XREFs of ?GetSourcePosition@SwitchItemThumbnailElement@@UEAA?AUCRect@Geometry@@XZ @ 0x18008B570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall SwitchItemThumbnailElement::GetSourcePosition(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // r8d
  _DWORD *result; // rax

  v2 = *(_DWORD *)(a1 - 204) - *(_DWORD *)(a1 - 212);
  v3 = *(_DWORD *)(a1 - 208) - *(_DWORD *)(a1 - 216);
  *a2 = 0;
  a2[1] = 0;
  a2[3] = v2;
  result = a2;
  a2[2] = v3;
  return result;
}
