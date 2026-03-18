/*
 * XREFs of IoSetAdapterCryptoEngineExtension @ 0x140559350
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020C420 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140459D9C (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetAdapterCryptoEngineExtension(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasValidCombinationOfExtensionTypes(a1, 7LL, a3) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(a1, 7, v5, v6);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_OWORD *)(IrpExtension + 20) = *a2;
  return 0LL;
}
