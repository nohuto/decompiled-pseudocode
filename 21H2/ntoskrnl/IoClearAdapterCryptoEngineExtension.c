/*
 * XREFs of IoClearAdapterCryptoEngineExtension @ 0x140559250
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x14020B888 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x14020C0F0 (IopIrpHasExtensionType.c)
 *     IopAllocateIrpExtension @ 0x14020C420 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoClearAdapterCryptoEngineExtension(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasExtensionType(a1, 7u) )
    return 3221226021LL;
  IrpExtension = IopAllocateIrpExtension(v3, v2, v4, v5);
  if ( !IrpExtension )
    return 3221226021LL;
  *(_OWORD *)(IrpExtension + 20) = 0LL;
  IopFreeIrpExtension(a1, 7, 0);
  return 0LL;
}
