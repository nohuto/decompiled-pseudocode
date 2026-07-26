/*
 * XREFs of ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C0115360
 * Callers:
 *     NdisLWMDeregisterMiniportDriver @ 0x1C00609C0 (NdisLWMDeregisterMiniportDriver.c)
 *     NdisMDeregisterMiniportDriver @ 0x1C0061550 (NdisMDeregisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x1C001BD2C (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C00256EC (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C005F784 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisInternalDeregisterMiniportDriver(struct _NDIS_M_DRIVER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r8
  _NDIS_PROTOCOL_BLOCK *AssociatedProtocol; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x6Cu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      a1);
  MiniportQueue = a1->MiniportQueue;
  if ( MiniportQueue )
  {
    DbgPrint(
      "NdisMDeregisterMiniportDriver: Deregistering miniport driver %p with active miniports %p\n",
      a1,
      MiniportQueue);
    if ( SLOBYTE(a1->Flags) < 0 )
      ndisBugCheckEx(0x2BuLL, (ULONG_PTR)a1, 0LL, 0LL);
  }
  AssociatedProtocol = a1->AssociatedProtocol;
  if ( AssociatedProtocol )
  {
    AssociatedProtocol->AssociatedMiniDriver = 0LL;
    a1->AssociatedProtocol = 0LL;
  }
  if ( ndisCloseRef(&a1->Ref.SpinLock) )
  {
    ndisDereferenceDriver(a1, 0, 0xFFu);
    if ( (a1->Flags & 0xC0) != 0 )
    {
      ndisWaitForKernelObject(&a1->MiniportsRemovedEvent);
      KeClearEvent(&a1->MiniportsRemovedEvent);
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x6Du,
        (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
        a1);
    _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(a1);
  }
}
