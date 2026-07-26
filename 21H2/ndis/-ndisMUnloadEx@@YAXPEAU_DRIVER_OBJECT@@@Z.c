/*
 * XREFs of ?ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C005FE00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C01170DC (-ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z.c)
 */

void __fastcall ndisMUnloadEx(struct _DRIVER_OBJECT *a1)
{
  struct _NDIS_M_DRIVER_BLOCK *DriverObjectExtension; // rbp
  struct _NDIS_M_DRIVER_BLOCK *v3; // rsi

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Au,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      a1);
  DriverObjectExtension = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(a1, (PVOID)0x4E4D4944);
  v3 = (struct _NDIS_M_DRIVER_BLOCK *)IoGetDriverObjectExtension(a1, (PVOID)0x4E494944);
  if ( DriverObjectExtension )
    ndisMInvokeDriverUnload(DriverObjectExtension, a1);
  if ( v3 )
    ndisMInvokeDriverUnload(v3, a1);
  if ( DriverObjectExtension )
  {
    ndisWaitForKernelObject(&DriverObjectExtension->MiniportsRemovedEvent);
    KeClearEvent(&DriverObjectExtension->MiniportsRemovedEvent);
  }
  if ( v3 )
  {
    ndisWaitForKernelObject(&v3->MiniportsRemovedEvent);
    KeClearEvent(&v3->MiniportsRemovedEvent);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Bu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)a1,
      (char)DriverObjectExtension,
      v3);
}
