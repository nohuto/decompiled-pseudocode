/*
 * XREFs of IoSetAdapterCryptoEngineExtension @ 0x140506070
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x14024EA70 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1405061F0 (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetAdapterCryptoEngineExtension(__int64 a1, _OWORD *a2)
{
  _WORD *IrpExtension; // rax

  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(a1, 7LL) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(a1, 7);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_OWORD *)(IrpExtension + 20) = *a2;
  return 0LL;
}
