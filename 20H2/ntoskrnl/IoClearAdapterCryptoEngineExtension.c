/*
 * XREFs of IoClearAdapterCryptoEngineExtension @ 0x140505F70
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x14024EA70 (IopAllocateIrpExtension.c)
 *     IopFreeIrpExtension @ 0x1402F3AD0 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x1402F42C0 (IopIrpHasExtensionType.c)
 */

__int64 __fastcall IoClearAdapterCryptoEngineExtension(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasExtensionType(a1, 7u) )
    return 3221226021LL;
  IrpExtension = IopAllocateIrpExtension(v3, v2);
  if ( !IrpExtension )
    return 3221226021LL;
  *(_OWORD *)(IrpExtension + 20) = 0LL;
  IopFreeIrpExtension(a1, 7, 0);
  return 0LL;
}
