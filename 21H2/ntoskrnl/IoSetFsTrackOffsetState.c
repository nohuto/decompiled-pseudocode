/*
 * XREFs of IoSetFsTrackOffsetState @ 0x1405593B0
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x14020C420 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x140459D9C (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsTrackOffsetState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  _WORD *IrpExtension; // rax

  if ( !IopIrpHasValidCombinationOfExtensionTypes(a1, 5LL, a3) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(a1, 5, v6, v7);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_QWORD *)IrpExtension + 5) = a2;
  *((_QWORD *)IrpExtension + 6) = a3;
  return 0LL;
}
