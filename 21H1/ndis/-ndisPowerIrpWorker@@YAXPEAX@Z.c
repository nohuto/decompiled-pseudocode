/*
 * XREFs of ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1C0082AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015144 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qs @ 0x1C0084048 (WPP_RECORDER_SF_qs_ea_1C0084048.c)
 *     WPP_RECORDER_SF_qsD @ 0x1C0084170 (WPP_RECORDER_SF_qsD_ea_1C0084170.c)
 *     ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A578 (-ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPowerIrpWorker(PIRP Irp, __int64 a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  const char *v6; // rdx
  int Power; // eax
  int v8; // r9d
  const char *v9; // rdx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)CurrentStackLocation->DeviceObject->DeviceExtension;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v6 = "SET";
    if ( CurrentStackLocation->MinorFunction != 2 )
      v6 = "QUERY";
    WPP_RECORDER_SF_qs(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v6, a3, 155);
  }
  if ( CurrentStackLocation->MinorFunction == 3 )
    Power = ndisQueryPower(Irp, CurrentStackLocation, DeviceExtension);
  else
    Power = ndisSetPower(Irp, CurrentStackLocation, DeviceExtension);
  if ( (Power & 0xC0000000) == 0xC0000000 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = "Set";
    if ( CurrentStackLocation->MinorFunction != 2 )
      v9 = "Query";
    WPP_RECORDER_SF_qsD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)v9, (unsigned int)"Query", v8);
  }
  ndisDereferenceMiniport(DeviceExtension, 0xDu);
}
