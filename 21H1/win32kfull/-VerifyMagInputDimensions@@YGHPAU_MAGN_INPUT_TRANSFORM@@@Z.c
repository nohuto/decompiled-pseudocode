/*
 * XREFs of ?VerifyMagInputDimensions@@YGHPAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x178D98
 * Callers:
 *     __SetMagnificationInputTransform@4 @ 0xCF572 (__SetMagnificationInputTransform@4.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall VerifyMagInputDimensions(ERECTL *this)
{
  int v1; // ecx

  if ( !ERECTL::bWrapped(this) && !ERECTL::bWrapped((ERECTL *)(v1 + 16)) )
    return 1;
  UserSetLastError((struct _NT_TIB *)0x57);
  return 0;
}
