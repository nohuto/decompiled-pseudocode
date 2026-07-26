/*
 * XREFs of ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00396E0
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001B340 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C003CEF4 (-ndisMInvokeFilterResourceRequirements@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpFilterResourceRequirements(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v8; // ecx
  int v9; // eax

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v8 = IoSynchronousCallDriver(a2->NextDeviceObject, a3);
  if ( v8 >= 0 )
  {
    v9 = ndisMInvokeFilterResourceRequirements(a2, a3);
    if ( !v9
      || v9 == 259
      || v9 == -2147483643
      || (v8 = -1073741823, v9 == -1073741823)
      || v9 == -1073741670
      || v9 == -1073741637 )
    {
      v8 = v9;
    }
    else
    {
      switch ( v9 )
      {
        case -1073676266:
          v8 = -1073741789;
          break;
        case -1073676268:
          v8 = -1073741306;
          break;
        case -1073676267:
          v8 = -1073741811;
          break;
      }
    }
  }
  a3->IoStatus.Status = v8;
  *a5 = 0;
  return (unsigned int)v8;
}
