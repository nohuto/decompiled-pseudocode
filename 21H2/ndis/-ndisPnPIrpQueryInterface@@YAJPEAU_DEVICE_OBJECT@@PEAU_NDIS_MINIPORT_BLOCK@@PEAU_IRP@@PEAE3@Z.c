/*
 * XREFs of ?ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0039888
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001B510 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisPnPQuerySriovInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007C118 (-ndisPnPQuerySriovInterface@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisPnPIrpQueryInterface(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned __int8 v5; // bl
  unsigned int v7; // ecx
  _IO_SECURITY_CONTEXT *SecurityContext; // r8
  char *v9; // rax

  v5 = 0;
  v7 = 0;
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v9 = (char *)SecurityContext->SecurityQos - *(_QWORD *)&GUID_SRIOV_DEVICE_INTERFACE_STANDARD.Data1;
  if ( SecurityContext->SecurityQos == *(_SECURITY_QUALITY_OF_SERVICE **)&GUID_SRIOV_DEVICE_INTERFACE_STANDARD.Data1 )
    v9 = (char *)SecurityContext->AccessState - *(_QWORD *)GUID_SRIOV_DEVICE_INTERFACE_STANDARD.Data4;
  if ( v9 )
  {
    v5 = 1;
  }
  else
  {
    v7 = ndisPnPQuerySriovInterface(a2, a3);
    a3->IoStatus.Status = v7;
  }
  *a5 = v5;
  return v7;
}
