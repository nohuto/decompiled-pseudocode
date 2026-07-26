/*
 * XREFs of ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C013242C
 * Callers:
 *     ?ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010BD60 (-ndisPauseFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A398 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_DqqZZ @ 0x1C003CF64 (WPP_RECORDER_SF_DqqZZ.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DB58 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C003E314 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0065C60 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C00FB5E0 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z @ 0x1C010BEB4 (-ndisFInvokePause@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_PAUSE_PARAMETERS@@@Z.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C0121EBC (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 */

void __fastcall ndisPauseFilterInner(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // r9
  int v7; // eax
  struct NDISWATCHDOG__ *v8; // rbx
  KIRQL v9; // dl
  int v10; // [rsp+28h] [rbp-49h]
  int v11; // [rsp+30h] [rbp-41h]
  KIRQL NewIrql[8]; // [rsp+58h] [rbp-19h] BYREF
  struct NDISWATCHDOG__ *v13; // [rsp+60h] [rbp-11h] BYREF
  void (__fastcall *v14)(struct NDISWATCHDOG__ *); // [rsp+68h] [rbp-9h] BYREF
  char v15; // [rsp+70h] [rbp-1h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp+Fh] BYREF
  struct _NDIS_FILTER_PAUSE_PARAMETERS v17; // [rsp+98h] [rbp+27h] BYREF

  Miniport = a1->Miniport;
  *(_QWORD *)&v17.Header.Type = 0LL;
  v17.PauseReason = 0;
  NewIrql[0] = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v11 = (int)a1;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids);
  }
  if ( a1->State == NdisFilterRunning )
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, NewIrql);
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    a1->Flags |= 2u;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql[0]);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DqqZZ(*((_QWORD *)WPP_GLOBAL_Control + 8), v3, v4, v5, v10, v11, (char)Miniport);
    a1->State = NdisFilterPausing;
    if ( (byte_1C00E6183 & 1) != 0 )
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
    a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v15;
    v17.Header = (_NDIS_OBJECT_HEADER)786842;
    v17.PauseReason = 1;
    ndisMakeWatchdog(&v13, a1, 17, FilterDriver->DefaultFilterCharacteristics.PauseHandler, 0x41EB0u, 0LL);
    v7 = ndisFInvokePause(a1, &v17);
    v8 = v13;
    if ( v7 == 259 )
      ndisWaitForEventThenDisarmWatchdog(v13, &Event);
    if ( v8 != (struct NDISWATCHDOG__ *)-1LL )
    {
      v13 = v8;
      v14 = ndisFreeWatchdog;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v14, &v13);
    }
    a1->AsyncOpContext = 0LL;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, NewIrql);
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    v9 = NewIrql[0];
    a1->Flags |= 4u;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v9);
    a1->State = NdisFilterPaused;
    if ( (byte_1C00E6183 & 1) != 0 )
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
      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
      a1);
}
