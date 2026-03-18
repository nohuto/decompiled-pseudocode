/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14031F2B8
 * Callers:
 *     IoAllocateIrp @ 0x140204780 (IoAllocateIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrpEx @ 0x1403064E0 (IoAllocateIrpEx.c)
 *     IopMountVolume @ 0x1406CC9E8 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140A71C54 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x140209C94 (IopIsActivityTracingEnabled.c)
 *     IopAllocateIrpPrivate @ 0x1402113E0 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x1404FF118 (IopInitActivityIdIrp.c)
 */

_QWORD *__fastcall IopAllocateIrpWithExtension(__int64 a1, char a2, char a3)
{
  _QWORD *IrpPrivate; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx

  IrpPrivate = IopAllocateIrpPrivate(0LL, a2 + 2, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    IrpPrivate[23] -= 144LL;
    v5 = IrpPrivate[23];
    *((_BYTE *)IrpPrivate + 67) -= 2;
    *((_BYTE *)IrpPrivate + 66) -= 2;
    IrpPrivate[25] = v5;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v4);
  }
  return v4;
}
