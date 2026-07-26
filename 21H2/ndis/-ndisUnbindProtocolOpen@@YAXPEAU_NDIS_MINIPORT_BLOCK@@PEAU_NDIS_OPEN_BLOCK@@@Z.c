/*
 * XREFs of ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013AE00
 * Callers:
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0120300 (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019CDC (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C0020550 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00256B8 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C00291EC (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C002A318 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002AC7C (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DB58 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FB5E0 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C010449C (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0105144 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONTEXT@@@Z @ 0x1C011FB34 (-ndisInvokeUnbindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_BIND_CONT.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0121EBC (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     NdisCloseAdapter @ 0x1C013A8A0 (NdisCloseAdapter.c)
 */

void __fastcall ndisUnbindProtocolOpen(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rsi
  char v4; // r15
  KIRQL v6; // al
  struct _NDIS_OPEN_BLOCK *i; // rdx
  KIRQL v8; // r13
  struct _KEVENT *WaitNetPnpEvent; // rbx
  __int64 v10; // rbx
  __int64 *Watchdog; // r15
  void *ProtocolBindingContext; // rdx
  __int64 v13; // rcx
  int v14; // edx
  int v15; // edx
  int v16; // r9d
  struct NDISWATCHDOG__ *v17; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall *v18)(struct NDISWATCHDOG__ *); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  void (__fastcall *v20)(struct NDISWATCHDOG__ *); // [rsp+48h] [rbp-B8h] BYREF
  struct _KEVENT v21; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT v22; // [rsp+68h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[88]; // [rsp+A0h] [rbp-60h] BYREF
  int v25; // [rsp+F8h] [rbp-8h]
  struct _KEVENT v26; // [rsp+100h] [rbp+0h] BYREF
  int v27; // [rsp+180h] [rbp+80h] BYREF
  BOOL v28; // [rsp+188h] [rbp+88h]
  __int64 v29; // [rsp+190h] [rbp+90h] BYREF
  struct NDISWATCHDOG__ *v30; // [rsp+198h] [rbp+98h] BYREF

  ProtocolHandle = a2->ProtocolHandle;
  v27 = 0;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xEu,
      (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
      a2);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v28 = ndisReferenceProtocol(ProtocolHandle, 6u);
  WAIT_FOR_PROTO_MUTEX(ProtocolHandle);
  v6 = KeAcquireSpinLockRaiseToDpc(&ProtocolHandle->Ref.SpinLock);
  for ( i = ProtocolHandle->OpenQueue; i && i != a2; i = i->ProtocolNextOpen )
    ;
  KeReleaseSpinLock(&ProtocolHandle->Ref.SpinLock, v6);
  v8 = KeAcquireSpinLockRaiseToDpc(&a2->SpinLock);
  a2->OpenFlags |= 0x10000u;
  if ( (a2->OpenFlags & 0x10) != 0 )
  {
    KeInitializeEvent(&v21, NotificationEvent, 0);
    a2->WaitNetPnpEvent = &v21;
    WaitNetPnpEvent = &v21;
  }
  else
  {
    WaitNetPnpEvent = a2->WaitNetPnpEvent;
  }
  if ( a2->ProtocolHandle->MajorNdisVersion < 6u && (a2->OpenFlags & 0x40000000) != 0 )
    v4 = 1;
  a2->CloseCompleteEvent = &Event;
  KeReleaseSpinLock(&a2->SpinLock, v8);
  if ( WaitNetPnpEvent )
    ndisWaitForKernelObject(WaitNetPnpEvent);
  if ( (a1->Flags & 0x20000) != 0 )
  {
    KeInitializeEvent(&v22, NotificationEvent, 0);
    a2->AfNotifyCompleteEvent = &v22;
    if ( a2->PendingAfNotifications )
      ndisWaitForKernelObject(&v22);
    a2->AfNotifyCompleteEvent = 0LL;
  }
  KeInitializeEvent(&v26, NotificationEvent, 0);
  a1->ProcessingOpen = a2;
  v10 = -1LL;
  v29 = -1LL;
  if ( v4 )
  {
    v25 = 0;
    a2->UnsolicitedUnbindEvent = &v26;
    a2->PendingLegacyUnbind = 1;
    NdisCloseAdapter(&v27, (__int64)a2);
  }
  else if ( ProtocolHandle->MajorNdisVersion < 6u )
  {
    ProtocolBindingContext = a2->ProtocolBindingContext;
    a2->PendingLegacyUnbind = 1;
    ProtocolHandle->UnbindAdapterHandler(&v27, ProtocolBindingContext, v24);
  }
  else
  {
    Watchdog = (__int64 *)ndisMakeWatchdog(&v30, a2, 4, ProtocolHandle->UnbindAdapterHandlerEx, 0x41EB0u, 0LL);
    if ( &v29 != Watchdog )
    {
      wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
        &v29,
        *Watchdog);
      v10 = v29;
      *Watchdog = -1LL;
    }
    if ( v30 != (struct NDISWATCHDOG__ *)-1LL )
    {
      v17 = v30;
      v18 = ndisFreeWatchdog;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v18, &v17);
    }
    v27 = ndisInvokeUnbindAdapter(ProtocolHandle, a2, (struct _NDIS_BIND_CONTEXT *)v24);
  }
  if ( v27 == 259 )
  {
    ndisWaitForEventThenDisarmWatchdog((struct NDISWATCHDOG__ *)v10, &v26);
    v27 = v25;
  }
  a1->ProcessingOpen = 0LL;
  if ( v10 != -1 )
  {
    v19 = v10;
    v20 = ndisFreeWatchdog;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v20, &v19);
  }
  ndisNotifyWmiBindUnbind(a1, ProtocolHandle, 0);
  if ( !MiniportSupportsReceiveThrottle(a1) )
  {
    if ( ProtocolHandle->IsIPv4 )
    {
      v14 = 3;
LABEL_38:
      ndisBindUnbindPeriodicReceives(v13, v14);
      goto LABEL_39;
    }
    if ( ProtocolHandle->IsIPv6 || ProtocolHandle->IsNdisTest6 )
    {
      v14 = 4;
      goto LABEL_38;
    }
  }
LABEL_39:
  ndisWaitForKernelObject(&Event);
  RELEASE_PROT_MUTEX(ProtocolHandle);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v28 )
    ndisDereferenceProtocol(ProtocolHandle, v15, 6u, v16);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xFu,
      (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids);
}
