/*
 * XREFs of ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000A710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxDevice::DispatchWithLock(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 MajorFunction; // al
  NTSTATUS v6; // esi
  _IO_STACK_LOCATION *v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // r8
  _IO_STACK_LOCATION *v10; // rax
  __int64 v11; // rbp
  unsigned __int8 MinorFunction; // r14
  unsigned __int64 v13; // rdi
  __int64 v14; // r10
  __int64 (__fastcall *v15)(unsigned __int64, _IRP *, _QWORD *); // r9
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // edi
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // r15d
  unsigned int v23; // r11d
  __int16 v24; // dx
  unsigned int v25; // eax
  _IO_STACK_LOCATION *v26; // rax
  unsigned __int64 v27; // rcx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction < 0x16u )
  {
LABEL_2:
    if ( ((__int64)DeviceObject[1].CurrentIrp & 1) != 0 )
    {
      v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
      if ( v6 >= 0 )
      {
        v7 = Irp->Tail.Overlay.CurrentStackLocation;
        *(_OWORD *)&v7[-1].MajorFunction = *(_OWORD *)&v7->MajorFunction;
        *(_OWORD *)&v7[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v7->Parameters.NotifyDirectoryEx.CompletionFilter;
        *(_OWORD *)(&v7[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v7->Parameters.SetQuota + 6);
        v7[-1].FileObject = v7->FileObject;
        v7[-1].Control = 0;
        if ( IoSetCompletionRoutineEx(
               DeviceObject,
               Irp,
               (PIO_COMPLETION_ROUTINE)FxDevice::_CompletionRoutineForRemlockMaintenance,
               DeviceObject,
               1u,
               1u,
               1u) < 0 )
        {
          v26 = Irp->Tail.Overlay.CurrentStackLocation;
          v26[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxDevice::_CompletionRoutineForRemlockMaintenance;
          v26[-1].Context = DeviceObject;
          v26[-1].Control = -32;
        }
        --Irp->CurrentLocation;
        --Irp->Tail.Overlay.CurrentStackLocation;
        goto LABEL_7;
      }
LABEL_46:
      Irp->IoStatus.Status = v6;
      IofCompleteRequest(Irp, 0);
      return (unsigned int)v6;
    }
    goto LABEL_7;
  }
  if ( MajorFunction <= 0x17u )
    goto LABEL_20;
  if ( MajorFunction != 27 )
    goto LABEL_2;
  if ( CurrentStackLocation->MinorFunction == 2 )
    v20 = 2;
  else
LABEL_20:
    v20 = 1;
  v21 = v20 - 1;
  if ( v21 )
  {
    if ( v21 == 1 )
    {
      v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
      if ( v6 < 0 )
        goto LABEL_46;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, 0x20u);
    }
  }
  else
  {
    v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&DeviceObject[1], Irp, a5, 1u, 0x20u);
    if ( v6 < 0 )
      goto LABEL_46;
  }
LABEL_7:
  v8 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
  v9 = *(_QWORD **)(v8 + 368);
  if ( v9 == (_QWORD *)(v8 + 368) )
  {
LABEL_11:
    if ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 14 )
    {
$LN208:
      v17 = *(_QWORD *)(v8 + 640);
    }
    else
    {
      switch ( Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
      {
        case 0u:
        case 2u:
        case 0x10u:
        case 0x12u:
          v17 = *(_QWORD *)(v8 + 656);
          return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v17 + 64LL))(v17, Irp);
        case 3u:
        case 4u:
        case 0xFu:
          goto $LN208;
        case 0x16u:
        case 0x1Bu:
          v17 = *(_QWORD *)(v8 + 648);
          if ( !v17 )
            goto LABEL_50;
          return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v17 + 64LL))(v17, Irp);
        case 0x17u:
          v17 = *(_QWORD *)(v8 + 664);
          return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v17 + 64LL))(v17, Irp);
        default:
LABEL_50:
          v17 = *(_QWORD *)(v8 + 672);
          break;
      }
    }
    return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v17 + 64LL))(v17, Irp);
  }
  else
  {
    v10 = Irp->Tail.Overlay.CurrentStackLocation;
    v11 = v10->MajorFunction;
    MinorFunction = v10->MinorFunction;
    v13 = 0LL;
    v14 = 3 * v11;
    while ( 1 )
    {
      v15 = (__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v9[v14 + 2];
      v16 = v9;
      v9 = (_QWORD *)*v9;
      if ( v15 )
        break;
LABEL_10:
      if ( v9 == (_QWORD *)(v8 + 368) )
        goto LABEL_11;
    }
    v22 = v16[v14 + 3];
    if ( v22 )
    {
      v23 = 0;
      while ( *(_BYTE *)(v23 + v16[v14 + 4]) != MinorFunction )
      {
        if ( ++v23 >= v22 )
          goto LABEL_10;
      }
    }
    v24 = *(_WORD *)(v8 + 10);
    if ( *((_BYTE *)v16 + 688) )
    {
      v27 = v8 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v24 )
        v27 = 0LL;
      v25 = v15(v27, Irp, v9);
    }
    else
    {
      if ( v24 )
        v13 = v8 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v25 = v15(v13, Irp, v9);
    }
    v18 = v25;
    if ( (unsigned __int8)v11 >= 0x16u && ((unsigned __int8)v11 <= 0x17u || (_BYTE)v11 == 27 && MinorFunction != 2) )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v8 + 144) + 336LL), Irp, 0x20u);
  }
  return v18;
}
