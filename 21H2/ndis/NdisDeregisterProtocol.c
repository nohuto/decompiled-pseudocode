/*
 * XREFs of NdisDeregisterProtocol @ 0x1C013ABC0
 * Callers:
 *     NdisDeregisterProtocolDriver @ 0x1C00983F0 (NdisDeregisterProtocolDriver.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012CD8 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C00256EC (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C002A318 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z @ 0x1C010653C (-SetRunningDriver@NDIS_BIND_PROTOCOL_DRIVER@@QEAAXPEAU_NDIS_PROTOCOL_BLOCK@@W4CallRunMode@@@Z.c)
 */

void __fastcall NdisDeregisterProtocol(_DWORD *a1, _NDIS_PROTOCOL_BLOCK *a2)
{
  KIRQL v4; // al
  struct _NDIS_PROTOCOL_BLOCK *i; // rdi
  _NDIS_M_DRIVER_BLOCK *AssociatedMiniDriver; // rax
  int v7; // edx
  int v8; // r9d
  __int64 v9; // [rsp+30h] [rbp-38h]
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      5u,
      0x12u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a2,
      &a2->Name.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  for ( i = ndisProtocolList; i && i != a2; i = i->NextProtocol )
    ;
  KeReleaseSpinLock(&ndisProtocolListLock, v4);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( !i )
  {
    *a1 = 0;
    return;
  }
  NDIS_BIND_PROTOCOL_DRIVER::SetRunningDriver(&a2->Bind._p->_t, 0LL, RunSynchronous);
  if ( ndisCloseRef(&a2->Ref.SpinLock) )
  {
    AssociatedMiniDriver = a2->AssociatedMiniDriver;
    if ( AssociatedMiniDriver )
    {
      AssociatedMiniDriver->AssociatedProtocol = 0LL;
      a2->AssociatedMiniDriver = 0LL;
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    a2->DeregEvent = &Event;
    ndisDereferenceProtocol(a2, v7, 0xFFu, v8);
    ndisWaitForKernelObject(&Event);
    *a1 = 0;
  }
  else
  {
    *a1 = -1073741823;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return;
    LODWORD(v9) = -1073741823;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x13u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a2,
      v9);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = *a1;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x14u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)a2,
      v9);
  }
}
