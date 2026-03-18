/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14020B830
 * Callers:
 *     IoAllocateIrpEx @ 0x14022CFA0 (IoAllocateIrpEx.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402AACA0 (IopAllocateIrpExReturn.c)
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140B2AC4C (IopInitializeReserveIrps.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x14020C4B8 (IopIsActivityTracingEnabled.c)
 *     IopAllocateIrpPrivate @ 0x1402AACD0 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x140556BE4 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, __int64 a2)
{
  __int64 IrpPrivate; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  LOBYTE(a2) = a2 + 2;
  IrpPrivate = IopAllocateIrpPrivate(0LL, a2);
  v3 = IrpPrivate;
  if ( IrpPrivate )
  {
    *(_QWORD *)(IrpPrivate + 184) -= 144LL;
    v4 = *(_QWORD *)(IrpPrivate + 184);
    *(_BYTE *)(IrpPrivate + 67) -= 2;
    *(_BYTE *)(IrpPrivate + 66) -= 2;
    *(_QWORD *)(IrpPrivate + 200) = v4;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v3);
  }
  return v3;
}
