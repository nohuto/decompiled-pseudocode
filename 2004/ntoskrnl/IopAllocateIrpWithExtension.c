/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14026FE70
 * Callers:
 *     IoAllocateIrp @ 0x140271820 (IoAllocateIrp.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrpEx @ 0x140333530 (IoAllocateIrpEx.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140A6B348 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14028F830 (IopAllocateIrpPrivate.c)
 *     IopIsActivityTracingEnabled @ 0x140297AFC (IopIsActivityTracingEnabled.c)
 *     IopInitActivityIdIrp @ 0x1404FB844 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateIrpWithExtension(__int64 a1, __int64 a2)
{
  __int64 IrpPrivate; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  LOBYTE(a2) = a2 + 1;
  IrpPrivate = IopAllocateIrpPrivate(0LL, a2);
  v3 = IrpPrivate;
  if ( IrpPrivate )
  {
    *(_QWORD *)(IrpPrivate + 184) -= 72LL;
    v4 = *(_QWORD *)(IrpPrivate + 184);
    --*(_BYTE *)(IrpPrivate + 67);
    --*(_BYTE *)(IrpPrivate + 66);
    *(_QWORD *)(IrpPrivate + 200) = v4;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v3);
  }
  return v3;
}
