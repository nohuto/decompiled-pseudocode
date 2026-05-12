/*
 * XREFs of RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x1C0048960
 * Callers:
 *     RaUnitStorageSetPropertyIoctl @ 0x1C0048AB8 (RaUnitStorageSetPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001B3F4 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C00431A0 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 */

__int64 __fastcall RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r8
  PVOID v3; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v7; // r9d
  unsigned __int64 Length; // r10
  signed int v9; // ebx
  __int64 IrpCount; // rax
  __int64 v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v3 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v13 = 0;
  P = 0LL;
  v7 = *(_DWORD *)(&MasterIrp->Size + 1);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v9 = -1073741637;
LABEL_24:
      a2->IoStatus.Information = 0LL;
      return RaidCompleteRequestEx(a2, 0, v9);
    }
    goto LABEL_14;
  }
  if ( CurrentStackLocation->Parameters.Create.Options < 0x48 )
  {
LABEL_5:
    v9 = -1073741585;
    goto LABEL_24;
  }
  if ( LODWORD(MasterIrp->MdlAddress)
    && HIDWORD(MasterIrp->MdlAddress)
    && ((IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount, !(_DWORD)IrpCount)
     || (unsigned int)IrpCount >= 0x40 && HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer)) )
  {
    if ( (unsigned int)Length < 0x48 )
    {
      if ( (unsigned int)Length < 8 )
      {
        v9 = -1073741789;
        goto LABEL_24;
      }
      *(_DWORD *)&MasterIrp->Type = 72;
      *(_DWORD *)(&MasterIrp->Size + 1) = 72;
      a2->IoStatus.Information = 8LL;
LABEL_14:
      v9 = 0;
      return RaidCompleteRequestEx(a2, 0, v9);
    }
    if ( Length < IrpCount + (unsigned __int64)HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) + 8 )
      goto LABEL_5;
    v9 = RaBuildSetProtocolSpecificPropertyBufferForMiniport(*(_QWORD *)(a1 + 8), (__int64)a2, &P, (ULONG *)&v13);
    v3 = P;
    if ( v9 >= 0 )
      v9 = RaidUnitSendSrbIoControlSynchronously(a1, (__int64)a2, (__int64)P, v13, 0LL, v12, 64);
  }
  else
  {
    v9 = -1073741585;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72536152u);
  if ( v9 < 0 )
    goto LABEL_24;
  return RaidCompleteRequestEx(a2, 0, v9);
}
