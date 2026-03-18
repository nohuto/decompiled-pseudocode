/*
 * XREFs of _UIntMult@12 @ 0x145E74
 * Callers:
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 */

HRESULT __stdcall UIntMult(UINT uMultiplicand, UINT uMultiplier, UINT *puResult)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  ULONG *savedregs; // [esp+0h] [ebp+0h]

  return ULongLongToULong(v3 * (unsigned __int64)v4, savedregs);
}
