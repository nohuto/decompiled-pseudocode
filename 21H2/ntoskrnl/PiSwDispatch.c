/*
 * XREFs of PiSwDispatch @ 0x140764DB0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     PiSwDeviceDereference @ 0x140661C18 (PiSwDeviceDereference.c)
 *     PiSwIrpPropertySet @ 0x140762C04 (PiSwIrpPropertySet.c)
 *     PiSwIrpSetLifetime @ 0x140762F18 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14076308C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpStartCreate @ 0x140764EC8 (PiSwIrpStartCreate.c)
 *     PiAuDoesClientHaveAccess @ 0x14078A600 (PiAuDoesClientHaveAccess.c)
 *     PiSwIrpInterfacePropertySet @ 0x14084F808 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140860758 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpCleanup @ 0x140953700 (PiSwIrpCleanup.c)
 *     PiSwIrpGetLifetime @ 0x140953894 (PiSwIrpGetLifetime.c)
 */

__int64 __fastcall PiSwDispatch(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al
  IRP *v9; // rcx
  PVOID FsContext2; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    CurrentStackLocation->FileObject->FsContext2 = 0LL;
    Status = (unsigned __int8)PiAuDoesClientHaveAccess(128LL) == 0 ? 0xC0000022 : 0;
    a2->IoStatus.Status = Status;
LABEL_12:
    v9 = a2;
    goto LABEL_13;
  }
  if ( MajorFunction != 14 )
  {
    if ( MajorFunction == 2 )
    {
      FsContext2 = CurrentStackLocation->FileObject->FsContext2;
      if ( FsContext2 )
      {
        PiSwDeviceDereference(FsContext2);
        CurrentStackLocation->FileObject->FsContext2 = 0LL;
      }
    }
    else
    {
      if ( MajorFunction != 18 )
        return Status;
      if ( CurrentStackLocation->FileObject->FsContext2 )
        PiSwIrpCleanup();
    }
    Status = 0;
    a2->IoStatus.Status = 0;
    goto LABEL_12;
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x470400u:
      return (unsigned int)PiSwIrpStartCreate(a2);
    case 0x470404u:
      return (unsigned int)PiSwIrpPropertySet(a2, (__int64)a2, a3);
    case 0x470408u:
      return (unsigned int)PiSwIrpInterfaceRegister(a2, (__int64)a2, a3);
    case 0x47040Cu:
      return (unsigned int)PiSwIrpInterfaceSetState(a2);
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4654096 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654100 )
      return (unsigned int)PiSwIrpSetLifetime(a2, (__int64)a2, a3);
    v9 = a2;
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654104 )
      return (unsigned int)PiSwIrpGetLifetime(a2);
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
LABEL_13:
    IofCompleteRequest(v9, 0);
    return Status;
  }
  return (unsigned int)PiSwIrpInterfacePropertySet(a2);
}
