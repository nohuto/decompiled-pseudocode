/*
 * XREFs of _EditionIsPointerInputRedirected@12 @ 0x15BA09
 * Callers:
 *     <none>
 * Callees:
 *     _INPUTDEST_FROM_PWND@4 @ 0x9B69A (_INPUTDEST_FROM_PWND@4.c)
 *     _IsPointerInputRedirected@16 @ 0x15BAA0 (_IsPointerInputRedirected@16.c)
 */

int __stdcall EditionIsPointerInputRedirected(int a1, int a2, void *a3)
{
  int v3; // ebx
  _DWORD *v5; // [esp+Ch] [ebp-D4h] BYREF
  _BYTE v6[104]; // [esp+10h] [ebp-D0h] BYREF
  _DWORD v7[26]; // [esp+78h] [ebp-68h] BYREF

  v5 = 0;
  v3 = IsPointerInputRedirected(a2, &v5);
  qmemcpy(v6, INPUTDEST_FROM_PWND(v5, v7), sizeof(v6));
  qmemcpy(a3, v6, 0x68u);
  return v3;
}
