/*
 * XREFs of ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0131D4C
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010BCF0 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A1C8 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_DqqZZ @ 0x1C003C9C4 (WPP_RECORDER_SF_DqqZZ.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0065310 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FB430 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x1C010BE44 (-ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0121EEC (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 */

void __fastcall ndisPauseFilterInner(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  KIRQL v3; // dl
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r9
  int v8; // eax
  struct NDISWATCHDOG__ *v9; // rbx
  KIRQL v10; // dl
  int v11; // [rsp+28h] [rbp-49h]
  int v12; // [rsp+30h] [rbp-41h]
  KIRQL NewIrql[8]; // [rsp+58h] [rbp-19h] BYREF
  struct NDISWATCHDOG__ *v14; // [rsp+60h] [rbp-11h] BYREF
  void (__fastcall *v15)(struct NDISWATCHDOG__ *); // [rsp+68h] [rbp-9h] BYREF
  char v16; // [rsp+70h] [rbp-1h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp+Fh] BYREF
  struct _NDIS_FILTER_PAUSE_PARAMETERS v18; // [rsp+98h] [rbp+27h] BYREF

  Miniport = a1->Miniport;
  *(_QWORD *)&v18.Header.Type = 0LL;
  v18.PauseReason = 0;
  NewIrql[0] = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = (int)a1;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids);
  }
  if ( a1->State == NdisFilterRunning )
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, NewIrql);
    a1->LockThread = 0LL;
    v3 = NewIrql[0];
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 2u;
    KeReleaseSpinLock(&a1->Lock, v3);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DqqZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), v4, v5, v6, v11, v12, (char)Miniport);
    a1->State = NdisFilterPausing;
    if ( (byte_1C00E6083 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        5,
        1,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    FilterDriver = a1->FilterDriver;
    a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v16;
    v18.Header = (_NDIS_OBJECT_HEADER)786842;
    v18.PauseReason = 1;
    ndisMakeWatchdog(&v14, a1, 17, FilterDriver->DefaultFilterCharacteristics.PauseHandler, 0x41EB0u, 0LL);
    v8 = ndisFInvokePause(a1, &v18);
    v9 = v14;
    if ( v8 == 259 )
      ndisWaitForEventThenDisarmWatchdog(v14, &Event);
    if ( v9 != (struct NDISWATCHDOG__ *)-1LL )
    {
      v14 = v9;
      v15 = ndisFreeWatchdog;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v15, &v14);
    }
    a1->AsyncOpContext = 0LL;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, NewIrql);
    v10 = NewIrql[0];
    a1->LockThread = 0LL;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 4u;
    KeReleaseSpinLock(&a1->Lock, v10);
    a1->State = NdisFilterPaused;
    if ( (byte_1C00E6083 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        2,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_3188c4384181338fe0d477b94428bcd6_Traceguids,
      a1);
}
