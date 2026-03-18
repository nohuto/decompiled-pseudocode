/*
 * XREFs of IoSetFsTrackOffsetState @ 0x1405060D0
 * Callers:
 *     <none>
 * Callees:
 *     IopAllocateIrpExtension @ 0x14024EA70 (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1405061F0 (IopIrpHasValidCombinationOfExtensionTypes.c)
 */

__int64 __fastcall IoSetFsTrackOffsetState(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *IrpExtension; // rax

  if ( !(unsigned __int8)IopIrpHasValidCombinationOfExtensionTypes(a1, 5LL) )
    return 3221225659LL;
  IrpExtension = IopAllocateIrpExtension(a1, 5);
  if ( !IrpExtension )
    return 3221225626LL;
  *((_QWORD *)IrpExtension + 5) = a2;
  *((_QWORD *)IrpExtension + 6) = a3;
  return 0LL;
}
