/*
 * XREFs of PiSwDispatch @ 0x140746A60
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     PiAuDoesClientHaveAccess @ 0x1406CB08C (PiAuDoesClientHaveAccess.c)
 *     PiSwIrpStartCreate @ 0x140746B88 (PiSwIrpStartCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x140746F1C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpSetLifetime @ 0x14076D8F8 (PiSwIrpSetLifetime.c)
 *     PiSwIrpCleanup @ 0x14076F6FC (PiSwIrpCleanup.c)
 *     PiSwDeviceDereference @ 0x14076FC40 (PiSwDeviceDereference.c)
 *     PiSwIrpPropertySet @ 0x1407867C4 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407B85E4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CAAFC (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x1408B14A0 (PiSwIrpGetLifetime.c)
 */

__int64 __fastcall PiSwDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al
  IRP *v8; // rcx
  PVOID FsContext2; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    CurrentStackLocation->FileObject->FsContext2 = 0LL;
    Status = PiAuDoesClientHaveAccess(0x80u) == 0 ? 0xC0000022 : 0;
    a2->IoStatus.Status = Status;
LABEL_12:
    v8 = a2;
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
      return (unsigned int)PiSwIrpPropertySet(a2);
    case 0x470408u:
      return (unsigned int)PiSwIrpInterfaceRegister(a2);
    case 0x47040Cu:
      return (unsigned int)PiSwIrpInterfaceSetState(a2);
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4654096 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654100 )
      return (unsigned int)PiSwIrpSetLifetime(a2);
    v8 = a2;
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654104 )
      return (unsigned int)PiSwIrpGetLifetime(a2);
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
LABEL_13:
    IofCompleteRequest(v8, 0);
    return Status;
  }
  return (unsigned int)PiSwIrpInterfacePropertySet(a2);
}
