/*
 * XREFs of IopAllocateIrpWithExtension @ 0x1402ED748
 * Callers:
 *     IoAllocateIrpEx @ 0x1402A1700 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x140351A40 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrp @ 0x140361FF0 (IoAllocateIrp.c)
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140A6EBD4 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x1402EDEF0 (IopIsActivityTracingEnabled.c)
 *     IopAllocateIrpPrivate @ 0x140351A70 (IopAllocateIrpPrivate.c)
 *     IopInitActivityIdIrp @ 0x140500C9C (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 IrpPrivate; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx

  LOBYTE(a2) = a2 + 2;
  IrpPrivate = IopAllocateIrpPrivate(0LL, a2, a3, a4);
  v5 = IrpPrivate;
  if ( IrpPrivate )
  {
    *(_QWORD *)(IrpPrivate + 184) -= 144LL;
    v6 = *(_QWORD *)(IrpPrivate + 184);
    *(_BYTE *)(IrpPrivate + 67) -= 2;
    *(_BYTE *)(IrpPrivate + 66) -= 2;
    *(_QWORD *)(IrpPrivate + 200) = v6;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v5);
  }
  return v5;
}
