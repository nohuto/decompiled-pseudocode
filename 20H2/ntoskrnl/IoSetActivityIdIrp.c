/*
 * XREFs of IoSetActivityIdIrp @ 0x140379000
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x1402F3C98 (IoMakeAssociatedIrpPriv.c)
 *     IoReuseIrp @ 0x1402F4000 (IoReuseIrp.c)
 *     IopInitActivityIdIrp @ 0x1404FF118 (IopInitActivityIdIrp.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x14024EA70 (IopAllocateIrpExtension.c)
 *     IopFreeIrpExtension @ 0x1402F3AD0 (IopFreeIrpExtension.c)
 *     EtwActivityIdControl @ 0x1403640E0 (EtwActivityIdControl.c)
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
