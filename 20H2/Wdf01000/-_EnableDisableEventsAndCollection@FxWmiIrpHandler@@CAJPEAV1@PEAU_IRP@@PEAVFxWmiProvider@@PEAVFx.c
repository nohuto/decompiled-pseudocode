/*
 * XREFs of ?_EnableDisableEventsAndCollection@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0018EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
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
  int Status; // edi
  unsigned __int8 v12; // r8
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 (__fastcall *v14)(unsigned __int64, _QWORD); // r9
  unsigned int v15; // eax

  Irp->IoStatus.Information = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x30 )
  {
    Status = -1073741811;
    goto $Done_7;
  }
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    v7 = 1;
  }
  else
  {
    if ( CurrentStackLocation->MinorFunction != 5 )
    {
      if ( CurrentStackLocation->MinorFunction == 6 )
      {
        v12 = 1;
      }
      else
      {
        if ( CurrentStackLocation->MinorFunction != 7 )
        {
          Status = Irp->IoStatus.Status;
          goto $Done_7;
        }
        v12 = 0;
      }
      Provider->m_DataBlockControlEnabled = v12;
      v9 = 2;
      goto LABEL_8;
    }
    v7 = 0;
  }
  m_Flags = Provider->m_Flags;
  Provider->m_EventControlEnabled = v7;
  if ( (m_Flags & 4) != 0 )
    Provider->m_TracingHandle = *(_QWORD *)&CurrentStackLocation->Parameters.CreatePipe.Parameters->CompletionMode;
  v9 = 1;
LABEL_8:
  if ( Provider->m_FunctionControl.m_Method )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Provider);
    Status = v14(ObjectHandleUnchecked, v9);
  }
  else
  {
    Status = 0;
  }
  if ( Status == 259 )
    Status = -1073741823;
  if ( Status < 0 )
  {
    if ( v9 == 1 )
    {
      v15 = Provider->m_Flags;
      Provider->m_EventControlEnabled = 0;
      if ( (v15 & 4) != 0 )
        Provider->m_TracingHandle = 0LL;
    }
    else
    {
      Provider->m_DataBlockControlEnabled = 0;
    }
  }
$Done_7:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
