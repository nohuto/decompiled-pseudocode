/*
 * XREFs of NdisFreeIoWorkItem @ 0x1C0070CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001BB5C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0026598 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 */

void __stdcall NdisFreeIoWorkItem(NDIS_HANDLE NdisIoWorkItemHandle)
{
  __int64 v1; // rdx
  _NDIS_FILTER_DRIVER_BLOCK *v3; // rcx
  UCHAR Type; // al
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8

  v3 = (_NDIS_FILTER_DRIVER_BLOCK *)*((_QWORD *)NdisIoWorkItemHandle + 1);
  Type = v3->Header.Type;
  if ( v3->Header.Type == 2 )
  {
    v5 = 3;
    goto LABEL_12;
  }
  v5 = 4;
  switch ( Type )
  {
    case 4u:
      v6 = 1;
      goto LABEL_10;
    case 9u:
      v3 = (_NDIS_FILTER_DRIVER_BLOCK *)v3->FilterQueue;
      if ( v3->Header.Type != 2 )
      {
        if ( v3->Header.Type != 4 )
          break;
        v6 = 2;
LABEL_10:
        ndisDereferenceFilterDriver(v3, v1, v6);
        break;
      }
LABEL_12:
      ndisDereferenceDriver((struct _NDIS_M_DRIVER_BLOCK *)v3, 0, v5);
      break;
    case 0x11u:
      ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v3, 0x63u);
      break;
  }
  IoFreeWorkItem(*((PIO_WORKITEM *)NdisIoWorkItemHandle + 2));
  ExFreePoolWithTag(NdisIoWorkItemHandle, 0);
}
