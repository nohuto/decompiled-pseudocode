/*
 * XREFs of IopSetCopyInformationExtension @ 0x1403F149C
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F1D8C (IopAllocateAndPopulateWriteIrp.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020DB80 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140507CE0 (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IopSetCopyInformationExtension(__int64 a1, _OWORD *a2)
{
  __int64 v3; // r11
  _WORD *IrpExtension; // rax

  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(a1, 9LL) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(v3, 9);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_OWORD *)IrpExtension + 4) = *a2;
  return 0LL;
}
