/*
 * XREFs of IoSetActivityIdIrp @ 0x140377070
 * Callers:
 *     IoReuseIrp @ 0x140324AD0 (IoReuseIrp.c)
 *     IoMakeAssociatedIrpPriv @ 0x1403266B8 (IoMakeAssociatedIrpPriv.c)
 *     IopInitActivityIdIrp @ 0x1404FB844 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwActivityIdControl @ 0x140277DD0 (EtwActivityIdControl.c)
 *     IopFreeIrpExtension @ 0x14032660C (IopFreeIrpExtension.c)
 *     IopAllocateIrpExtension @ 0x140326CF0 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IoSetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  NTSTATUS v4; // ebx
  _WORD *IrpExtension; // rax

  v4 = 0;
  IrpExtension = IopAllocateIrpExtension(a1, 0);
  if ( !IrpExtension )
    return 3221225626LL;
  if ( a2 )
  {
    *(_OWORD *)(IrpExtension + 12) = *a2;
  }
  else
  {
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152) )
      v4 = EtwActivityIdControl(1u, (LPGUID)(IrpExtension + 12));
    else
      v4 = -1073741637;
    if ( v4 < 0 )
      IopFreeIrpExtension(a1, 0, 1);
  }
  return (unsigned int)v4;
}
