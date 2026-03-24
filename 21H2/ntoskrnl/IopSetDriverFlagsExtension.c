/*
 * XREFs of IopSetDriverFlagsExtension @ 0x1402EDF88
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x1402ED8C8 (IoMakeAssociatedIrpPriv.c)
 *     IoPageReadEx @ 0x14031C130 (IoPageReadEx.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1402EE1B0 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetDriverFlagsExtension(__int64 a1, __int64 a2)
{
  __int64 IrpExtension; // rax

  IrpExtension = IopAllocateIrpExtension(a1, 8LL);
  if ( !IrpExtension )
    return 3221225626LL;
  *(_QWORD *)(IrpExtension + 56) = a2;
  return 0LL;
}
