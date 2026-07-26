/*
 * XREFs of ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C002655C
 * Callers:
 *     NdisAllocateIoWorkItem @ 0x1C00390E0 (NdisAllocateIoWorkItem.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0067844 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     NdisFDeregisterFilterDriver @ 0x1C006A720 (NdisFDeregisterFilterDriver.c)
 *     NdisFreeIoWorkItem @ 0x1C00713C0 (NdisFreeIoWorkItem.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00FFB10 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C011D130 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012D1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A5DC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0067624 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisDereferenceFilterDriver(_NDIS_FILTER_DRIVER_BLOCK *this, __int64 a2, unsigned __int8 a3)
{
  _NDIS_FILTER_DRIVER_BLOCK *v4; // rbx
  KIRQL v5; // al
  struct _NDIS_FILTER_DRIVER_BLOCK *v6; // rcx
  struct _NDIS_FILTER_DRIVER_BLOCK **p_NextFilterDriver; // rdx
  KIRQL v8; // di
  PVOID v9; // rcx
  unsigned int v10; // edx
  wchar_t *Buffer; // rcx

  v4 = this;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x2Du,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      this);
  if ( ndisDereferenceRef(&v4->Ref.SpinLock, a3) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
    v6 = ndisFilterDriverList;
    p_NextFilterDriver = &ndisFilterDriverList;
    v8 = v5;
    while ( v6 )
    {
      if ( v6 == v4 )
      {
        v9 = ndisDriverObject;
        *p_NextFilterDriver = v4->NextFilterDriver;
        ObfDereferenceObject(v9);
        break;
      }
      p_NextFilterDriver = &v6->NextFilterDriver;
      v6 = v6->NextFilterDriver;
    }
    KeReleaseSpinLock(&ndisFilterDriverListLock, v8);
    Buffer = v4->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v4->ImageName.Buffer = 0LL;
    }
    _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v4, v10);
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x2Eu,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      v4);
}
