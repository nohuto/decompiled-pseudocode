/*
 * XREFs of HalpDispatchPnp @ 0x140765140
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402695B0 (KeQueryActiveProcessorCountEx.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1403A73EC (HalpPassIrpFromFdoToPdo.c)
 *     HalpInitializeLateSystemActions @ 0x1403AD6CC (HalpInitializeLateSystemActions.c)
 *     HalpAllocateCR3Root @ 0x1403CBC38 (HalpAllocateCR3Root.c)
 *     HalpQueryInterface @ 0x1407653C0 (HalpQueryInterface.c)
 *     HalpQueryResources @ 0x1407B9734 (HalpQueryResources.c)
 *     HalpQueryAcpiResourceRequirements @ 0x1407B9864 (HalpQueryAcpiResourceRequirements.c)
 *     HalpQueryIdPdo @ 0x1407D0AF0 (HalpQueryIdPdo.c)
 *     HalpQueryDeviceRelations @ 0x1407D0EB0 (HalpQueryDeviceRelations.c)
 *     HalpQueryIdFdo @ 0x1407D1898 (HalpQueryIdFdo.c)
 *     HalpInitSystemHelper @ 0x14099D0C8 (HalpInitSystemHelper.c)
 */

NTSTATUS __fastcall HalpDispatchPnp(_QWORD *Object, PIRP Irp)
{
  _DWORD *v2; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int MinorFunction; // ecx
  unsigned int v7; // ecx
  NTSTATUS DeviceRelations; // eax
  NTSTATUS Status; // ebx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  unsigned int v17; // eax
  NTSTATUS Interface; // eax
  ULONG ActiveProcessorCount; // r14d
  unsigned int i; // ebp
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx

  v2 = (_DWORD *)Object[8];
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( *v2 == 192 )
  {
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( MinorFunction <= 7 )
    {
      if ( MinorFunction == 7 )
      {
        DeviceRelations = HalpQueryDeviceRelations(Object);
        goto LABEL_5;
      }
      Status = 0;
      if ( !CurrentStackLocation->MinorFunction )
      {
        if ( v2[8] == 129 )
        {
          HalpInitializeLateSystemActions();
          ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
          for ( i = 0; i < ActiveProcessorCount; ++i )
            HalpAllocateCR3Root(i);
          HalpInitSystemHelper(25LL);
        }
        goto LABEL_16;
      }
      v22 = MinorFunction - 1;
      if ( !v22 )
      {
        Status = -1073741823;
        goto LABEL_16;
      }
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_16;
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_16;
      v25 = v24 - 1;
      if ( !v25 || v25 - 1 <= 1 )
        goto LABEL_16;
    }
    else
    {
      v7 = MinorFunction - 8;
      if ( !v7 )
      {
        DeviceRelations = HalpQueryInterface(
                            (_DWORD)Object,
                            CurrentStackLocation->Parameters.WMI.ProviderId,
                            CurrentStackLocation->Parameters.QueryInterface.Version,
                            CurrentStackLocation->Parameters.CreatePipe.Parameters,
                            CurrentStackLocation->Parameters.QueryInterface.Size,
                            CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
                            (__int64)&Irp->IoStatus.Information);
LABEL_5:
        Status = DeviceRelations;
        goto LABEL_6;
      }
      v11 = v7 - 1;
      if ( !v11 )
      {
        SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
        if ( WORD1(SecurityContext->SecurityQos) != 1 )
          goto LABEL_7;
        v17 = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFEC3;
        SecurityContext->FullCreateOptions = 1;
        HIDWORD(SecurityContext->SecurityQos) = v17 | 0xC0;
        Status = 0;
        LODWORD(SecurityContext->AccessState) = -1;
        HIDWORD(SecurityContext->AccessState) = -1;
        HIDWORD(SecurityContext[1].AccessState) = 4;
        SecurityContext[1].DesiredAccess = 4;
        *(PSECURITY_QUALITY_OF_SERVICE *)((char *)&SecurityContext[2].SecurityQos + 4) = 0LL;
        HIDWORD(SecurityContext[2].AccessState) = 0;
        goto LABEL_16;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        DeviceRelations = HalpQueryResources(Object, &Irp->IoStatus.Information);
        goto LABEL_5;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 8;
        if ( !v14 )
        {
          DeviceRelations = HalpQueryIdPdo(
                              Object,
                              CurrentStackLocation->Parameters.Read.Length,
                              &Irp->IoStatus.Information);
          goto LABEL_5;
        }
        v15 = v14 - 1;
        if ( !v15 || v15 == 2 )
        {
LABEL_15:
          Status = 0;
          goto LABEL_16;
        }
      }
      else
      {
        v21 = v2[8];
        if ( v21 == 129 )
        {
          DeviceRelations = HalpQueryAcpiResourceRequirements(&Irp->IoStatus.Information);
          goto LABEL_5;
        }
        if ( (unsigned int)(v21 - 130) <= 1 )
          goto LABEL_15;
      }
    }
    Status = -1073741637;
LABEL_6:
    if ( Status == -1073741637 )
    {
LABEL_7:
      Status = Irp->IoStatus.Status;
LABEL_8:
      IofCompleteRequest(Irp, 0);
      return Status;
    }
LABEL_16:
    Irp->IoStatus.Status = Status;
    goto LABEL_8;
  }
  if ( *v2 != 193 )
  {
    Status = -1073741808;
    goto LABEL_6;
  }
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 7u:
      Interface = HalpQueryDeviceRelations(Object);
      break;
    case 8u:
      Interface = HalpQueryInterface(
                    (_DWORD)Object,
                    CurrentStackLocation->Parameters.WMI.ProviderId,
                    CurrentStackLocation->Parameters.QueryInterface.Version,
                    CurrentStackLocation->Parameters.CreatePipe.Parameters,
                    CurrentStackLocation->Parameters.QueryInterface.Size,
                    CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart,
                    (__int64)&Irp->IoStatus.Information);
      break;
    case 0x13u:
      Interface = HalpQueryIdFdo(
                    (unsigned int)CurrentStackLocation->MinorFunction - 8,
                    CurrentStackLocation->Parameters.Read.Length,
                    &Irp->IoStatus.Information);
      break;
    default:
      return HalpPassIrpFromFdoToPdo((__int64)Object, Irp);
  }
  Status = Interface;
  if ( (int)(Interface + 0x80000000) >= 0 && Interface != -1073741637 )
    goto LABEL_16;
  if ( Interface != -1073741637 )
    Irp->IoStatus.Status = Interface;
  return HalpPassIrpFromFdoToPdo((__int64)Object, Irp);
}
