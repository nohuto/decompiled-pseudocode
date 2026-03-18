/*
 * XREFs of _MagpRevokeInputTransfrom@0 @ 0x13E0A7
 * Callers:
 *     <none>
 * Callees:
 *     __SetMagnificationInputTransform@4 @ 0xCF572 (__SetMagnificationInputTransform@4.c)
 */

int __stdcall MagpRevokeInputTransfrom()
{
  _DWORD v1[9]; // [esp+0h] [ebp-24h] BYREF

  v1[8] = 3;
  memset(v1, 0, 32);
  return _SetMagnificationInputTransform(v1) != 0 ? 0 : -1073741823;
}
