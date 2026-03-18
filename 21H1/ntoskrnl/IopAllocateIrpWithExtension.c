/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14033F4AC
 * Callers:
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrp @ 0x1402E0EB0 (IoAllocateIrp.c)
 *     IoAllocateIrpEx @ 0x1402F6690 (IoAllocateIrpEx.c)
 *     IopMountVolume @ 0x140701D54 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140A6B0E8 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140252FB0 (IopAllocateIrpPrivate.c)
 *     IopIsActivityTracingEnabled @ 0x14025B27C (IopIsActivityTracingEnabled.c)
 *     IopInitActivityIdIrp @ 0x1404FB1F4 (IopInitActivityIdIrp.c)
 */

_QWORD *__fastcall IopAllocateIrpWithExtension(__int64 a1, char a2, char a3)
{
  _QWORD *IrpPrivate; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx

  IrpPrivate = IopAllocateIrpPrivate(0LL, a2 + 1, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    IrpPrivate[23] -= 72LL;
    v5 = IrpPrivate[23];
    --*((_BYTE *)IrpPrivate + 67);
    --*((_BYTE *)IrpPrivate + 66);
    IrpPrivate[25] = v5;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v4);
  }
  return v4;
}
