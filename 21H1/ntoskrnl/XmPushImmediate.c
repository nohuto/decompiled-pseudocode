/*
 * XREFs of XmPushImmediate @ 0x1404E0200
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmGetImmediateSourceValue @ 0x140393AC0 (XmGetImmediateSourceValue.c)
 */

__int64 __fastcall XmPushImmediate(__int64 a1)
{
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, *(_DWORD *)(a1 + 112) & 2);
  return 1LL;
}
