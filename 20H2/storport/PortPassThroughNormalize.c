/*
 * XREFs of PortPassThroughNormalize @ 0x1C005A124
 * Callers:
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C0059FDC (PortPassThroughMarshalResultsFromSrb.c)
 *     PortPassThroughValidate @ 0x1C007E2D8 (PortPassThroughValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughNormalize(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  _IRP *MasterIrp; // rdi
  unsigned int Options; // ebp
  _IRP *v7; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !IoIs32bitProcess(a2) )
  {
    if ( Options >= 0x38 )
    {
      if ( MasterIrp->Type == 56 )
      {
        *(_OWORD *)a1 = *(_OWORD *)&MasterIrp->Type;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&MasterIrp->Flags;
        *(_LIST_ENTRY *)(a1 + 32) = MasterIrp->ThreadListEntry;
        *(_QWORD *)(a1 + 48) = MasterIrp->IoStatus.Pointer;
        goto LABEL_10;
      }
      return 3221225561LL;
    }
    return 3221225485LL;
  }
  if ( Options < 0x2C )
    return 3221225485LL;
  v7 = a2->AssociatedIrp.MasterIrp;
  if ( v7->Type != 44 )
    return 3221225561LL;
  *(_OWORD *)a1 = *(_OWORD *)&v7->Type;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v7->Flags;
  *(_OWORD *)(a1 + 36) = *(_OWORD *)((char *)&v7->AssociatedIrp.SystemBuffer + 4);
  *(_QWORD *)(a1 + 24) = *(&v7->Flags + 1);
  *(_DWORD *)(a1 + 32) = v7->AssociatedIrp.IrpCount;
LABEL_10:
  if ( !CurrentStackLocation->Parameters.Read.Length )
  {
    *(_BYTE *)(a1 + 7) = 0;
    *(_DWORD *)(a1 + 32) = 0;
  }
  return 0LL;
}
