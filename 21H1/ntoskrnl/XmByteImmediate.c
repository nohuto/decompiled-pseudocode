/*
 * XREFs of XmByteImmediate @ 0x1404DFC10
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmGetImmediateSourceValue @ 0x140393AC0 (XmGetImmediateSourceValue.c)
 */

__int64 __fastcall XmByteImmediate(__int64 a1)
{
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, 0);
  return 1LL;
}
