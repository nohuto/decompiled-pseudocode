/*
 * XREFs of ?_EnableDisableEventsAndCollection@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C00142B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxWmiIrpHandler::_EnableDisableEventsAndCollection(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 v7; // r8
  unsigned int m_Flags; // eax
  unsigned int v9; // ebp
  unsigned int Status; // edi
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v13)(unsigned __int64, _QWORD); // r9
  int v14; // eax
  unsigned __int8 v15; // r8
  unsigned int v16; // eax

  Irp->IoStatus.Information = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x30 )
  {
    Status = -1073741811;
    goto $Done_5;
  }
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 4u:
      v7 = 1;
LABEL_4:
      m_Flags = Provider->m_Flags;
      Provider->m_EventControlEnabled = v7;
      if ( (m_Flags & 4) != 0 )
        Provider->m_TracingHandle = *(_QWORD *)&CurrentStackLocation->Parameters.CreatePipe.Parameters->CompletionMode;
      v9 = 1;
      goto LABEL_7;
    case 5u:
      v7 = 0;
      goto LABEL_4;
    case 6u:
      v15 = 1;
      break;
    case 7u:
      v15 = 0;
      break;
    default:
      Status = Irp->IoStatus.Status;
      goto $Done_5;
  }
  Provider->m_DataBlockControlEnabled = v15;
  v9 = 2;
LABEL_7:
  if ( Provider->m_FunctionControl.m_Method )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Provider);
    v14 = v13(ObjectHandleUnchecked, v9);
    Status = v14;
    if ( v14 == 259 )
    {
      Status = -1073741823;
    }
    else if ( v14 >= 0 )
    {
      goto $Done_5;
    }
    if ( v9 == 1 )
    {
      v16 = Provider->m_Flags;
      Provider->m_EventControlEnabled = 0;
      if ( (v16 & 4) != 0 )
        Provider->m_TracingHandle = 0LL;
    }
    else
    {
      Provider->m_DataBlockControlEnabled = 0;
    }
  }
  else
  {
    Status = 0;
  }
$Done_5:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
