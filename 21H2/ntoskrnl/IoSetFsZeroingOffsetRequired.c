/*
 * XREFs of IoSetFsZeroingOffsetRequired @ 0x140559460
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x14020C0F0 (IopIrpHasExtensionType.c)
 *     IopAllocateIrpExtension @ 0x14020C420 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140459D9C (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsZeroingOffsetRequired(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // r8
  __int64 v7; // r9
  _WORD *IrpExtension; // rax

  if ( IopIrpHasExtensionType(a1, 4u) )
    return 3221225505LL;
  if ( !IopIrpHasValidCombinationOfExtensionTypes(v3, v2, v4) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(a1, 4, v6, v7);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_DWORD *)IrpExtension + 10) = 0;
  return 0LL;
}
