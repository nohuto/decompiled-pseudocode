/*
 * XREFs of IoSetFsZeroingOffsetRequired @ 0x140506180
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x14024EA70 (IopAllocateIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x1402F42C0 (IopIrpHasExtensionType.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1405061F0 (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsZeroingOffsetRequired(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _WORD *IrpExtension; // rax

  if ( IopIrpHasExtensionType(a1, 4u) )
    return 3221225505LL;
  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(v3, v2) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(a1, 4);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_DWORD *)IrpExtension + 10) = 0;
  return 0LL;
}
