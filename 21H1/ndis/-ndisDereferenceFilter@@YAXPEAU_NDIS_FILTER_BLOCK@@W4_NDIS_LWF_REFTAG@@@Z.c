/*
 * XREFs of ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0067184
 * Callers:
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0067D70 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C00694D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C008ED20 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013747C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A61C (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C00202F0 (NdisNblTrackerDeregisterComponent.c)
 *     ?ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0026598 (-ndisDereferenceFilterDriver@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@EW4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisDeinitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@@Z @ 0x1C0127DC4 (-ndisDeinitializeZeroBasedRef@@YAXPEAU_REFERENCE_EX@@@Z.c)
 */

void __fastcall ndisDereferenceFilter(char *P, unsigned __int8 a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *v3; // rsi
  KIRQL v4; // al
  char *v5; // rcx
  PVOID *v6; // rdx
  KIRQL v7; // r8
  void **i; // rdx
  char *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v15; // rax
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall *v19)(struct NDISWATCHDOG__ *); // [rsp+40h] [rbp+18h] BYREF

  if ( ndisDereferenceRef((PKSPIN_LOCK)P + 9, a2) )
  {
    v3 = (_NDIS_FILTER_DRIVER_BLOCK *)*((_QWORD *)P + 2);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalFilterListLock);
    v5 = (char *)ndisGlobalFilterList;
    v6 = &ndisGlobalFilterList;
    while ( v5 )
    {
      if ( v5 == P )
      {
        *v6 = (PVOID)*((_QWORD *)P + 13);
        break;
      }
      v6 = (PVOID *)(v5 + 104);
      v5 = (char *)*((_QWORD *)v5 + 13);
    }
    KeReleaseSpinLock(&ndisGlobalFilterListLock, v4);
    v7 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
    for ( i = (void **)&v3->FilterQueue; ; i = (void **)(v9 + 8) )
    {
      v9 = (char *)*i;
      if ( !*i )
        break;
      if ( v9 == P )
      {
        *i = (void *)*((_QWORD *)P + 1);
        break;
      }
    }
    KeReleaseSpinLock(&v3->Lock, v7);
    v10 = (void *)*((_QWORD *)P + 83);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *((_QWORD *)P + 83) = 0LL;
    }
    v11 = (void *)*((_QWORD *)P + 96);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)P + 96) = 0LL;
    }
    v12 = (void *)*((_QWORD *)P + 97);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)P + 97) = 0LL;
    }
    ndisDeinitializeZeroBasedRef((struct _REFERENCE_EX *)P + 13);
    NdisNblTrackerDeregisterComponent(*((_QWORD *)P + 82));
    v13 = (void *)*((_QWORD *)P + 6);
    *((_QWORD *)P + 82) = 0LL;
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *((_QWORD *)P + 6) = 0LL;
    }
    v14 = (void *)*((_QWORD *)P + 53);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)P + 53) = 0LL;
    }
    v15 = ndisVerifierNdisDispatch;
    *P = 0;
    if ( v15 && *((_QWORD *)P + 98) )
    {
      (*((void (**)(void))v15 + 2))();
      *((_QWORD *)P + 98) = 0LL;
    }
    if ( *((_QWORD *)P + 23) != -1LL )
    {
      v18 = *((_QWORD *)P + 23);
      v19 = ndisFreeWatchdog;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v19, &v18);
    }
    v16 = (void *)*((_QWORD *)P + 5);
    *((_QWORD *)P + 5) = 0LL;
    if ( v16 )
      ExFreePoolWithTag(v16, 0x7274534Bu);
    ExFreePoolWithTag(P, 0);
    ndisDereferenceFilterDriver(v3, v17, 3u);
  }
}
