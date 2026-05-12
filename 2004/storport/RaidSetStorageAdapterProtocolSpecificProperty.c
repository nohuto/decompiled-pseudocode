/*
 * XREFs of RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C0031D34
 * Callers:
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C002F3EC (RaidAdapterStorageSetPropertyIoctl.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C000D3A0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     memmove @ 0x1C001D740 (memmove.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C00431A0 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 */

__int64 __fastcall RaidSetStorageAdapterProtocolSpecificProperty(__int64 a1, IRP *a2, _QWORD *a3)
{
  _IRP *MasterIrp; // rsi
  unsigned int *v4; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned __int64 Length; // r8
  int v10; // edi
  __int64 IrpCount; // rax
  unsigned int SystemBuffer_high; // ecx
  unsigned int v13; // ebx
  int v14; // eax
  ULONG v16; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v4 = 0LL;
  v16 = 0;
  P = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *a3 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x48 )
    return (unsigned int)-1073741585;
  if ( LODWORD(MasterIrp->MdlAddress)
    && HIDWORD(MasterIrp->MdlAddress)
    && ((IrpCount = (unsigned int)MasterIrp->AssociatedIrp.IrpCount, !(_DWORD)IrpCount)
     || (unsigned int)IrpCount >= 0x40 && HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer)) )
  {
    if ( (unsigned int)Length < 0x48 )
    {
      if ( (unsigned int)Length < 8 )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        *a3 = 8LL;
        v10 = 0;
        *(_DWORD *)&MasterIrp->Type = 72;
        *(_DWORD *)(&MasterIrp->Size + 1) = 72;
      }
      return (unsigned int)v10;
    }
    if ( Length < IrpCount + (unsigned __int64)HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) + 8 )
      return (unsigned int)-1073741585;
    v10 = RaBuildSetProtocolSpecificPropertyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &P, &v16);
    if ( v10 < 0 )
    {
      v4 = (unsigned int *)P;
    }
    else
    {
      v4 = (unsigned int *)P;
      v10 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (unsigned int *)P, v16, 0LL, 0, 64);
      if ( v10 >= 0 )
      {
        SystemBuffer_high = HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer);
        *(_DWORD *)&MasterIrp->Type = 72;
        *(_DWORD *)(&MasterIrp->Size + 1) = 72;
        LODWORD(MasterIrp->ThreadListEntry.Flink) = v4[15];
        if ( SystemBuffer_high )
        {
          if ( SystemBuffer_high >= v4[14] )
            SystemBuffer_high = v4[14];
          v13 = SystemBuffer_high;
          memmove(
            (char *)&MasterIrp->MdlAddress + (unsigned int)MasterIrp->AssociatedIrp.IrpCount,
            (char *)v4 + v4[13] + 36,
            SystemBuffer_high);
          v14 = MasterIrp->AssociatedIrp.IrpCount + 8;
          HIDWORD(MasterIrp->AssociatedIrp.SystemBuffer) = v13;
          *a3 = v13 + v14;
        }
        else
        {
          *a3 = 72LL;
        }
      }
    }
  }
  else
  {
    v10 = -1073741585;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x72536152u);
  return (unsigned int)v10;
}
