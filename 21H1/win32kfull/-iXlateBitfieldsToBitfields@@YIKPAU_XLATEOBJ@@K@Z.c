/*
 * XREFs of ?iXlateBitfieldsToBitfields@@YIKPAU_XLATEOBJ@@K@Z @ 0xBB26C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall iXlateBitfieldsToBitfields(struct _XLATEOBJ *a1, unsigned int a2)
{
  unsigned int v3; // eax
  ULONG *pulXlate; // [esp+4h] [ebp-4h] BYREF

  pulXlate = a1[1].pulXlate;
  v3 = XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, a2);
  return XEPALOBJ::ulDispatchGFPEFunction(&pulXlate, *(_DWORD *)(a1[2].iUniq + 64), v3);
}
