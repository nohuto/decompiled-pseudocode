/*
 * XREFs of ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007F88C
 * Callers:
 *     ?ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C011E340 (-ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017980 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C002521C (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C00995D4 (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00F9620 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00FE0F8 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011DD40 (-ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0121AE0 (-ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisMReenumerateFailedAdapterInternal(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_IF_BLOCK *IfBlock; // r15
  unsigned int PnPFlags; // eax
  KIRQL v4; // dl
  __int64 v5; // rsi
  __int64 MiniportFatalErrorTimestampIndex; // rax
  unsigned __int64 v7; // r14
  __int64 LastMiniportFatalErrorReason; // rax
  KIRQL v9; // dl
  struct NDISWATCHDOG__ *Watchdog; // rax
  KIRQL NewIrql; // [rsp+80h] [rbp+30h] BYREF
  ULONG VerifierFlags; // [rsp+88h] [rbp+38h] BYREF
  ULONG v13; // [rsp+90h] [rbp+40h] BYREF

  IfBlock = a1->IfBlock;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  PnPFlags = a1->PnPFlags;
  a1->MiniportThread = 0LL;
  v4 = NewIrql;
  if ( (PnPFlags & 0x100) != 0 )
  {
    KeReleaseSpinLock(&a1->Lock, NewIrql);
  }
  else
  {
    a1->PnPFlags |= 0x100u;
    a1->WSyncFlags |= 4u;
    KeReleaseSpinLock(&a1->Lock, v4);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x11u,
        0x42u,
        (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
        a1);
    ndisLogMiniportEvent(a1, IfBlock->LastMiniportFatalErrorReason);
    v5 = MEMORY[0xFFFFF78000000008];
    MiniportFatalErrorTimestampIndex = IfBlock->MiniportFatalErrorTimestampIndex;
    v7 = IfBlock->MiniportFatalErrorTimestamp[MiniportFatalErrorTimestampIndex];
    IfBlock->MiniportFatalErrorTimestamp[MiniportFatalErrorTimestampIndex] = MEMORY[0xFFFFF78000000008];
    LastMiniportFatalErrorReason = (unsigned __int16)IfBlock->LastMiniportFatalErrorReason;
    IfBlock->MiniportFatalErrorTimestampIndex = ((unsigned int)IfBlock->MiniportFatalErrorTimestampIndex + 1) % 3;
    DbgkWerCaptureLiveKernelDump(
      L"NDIS",
      350LL,
      1LL,
      a1,
      a1->PhysicalDeviceObject,
      LastMiniportFatalErrorReason,
      a1,
      ndisFailedAdapterLiveDumpCallback,
      0);
    if ( ndisMAllowSilentReenumerate(a1) )
    {
      v7 = 0LL;
    }
    else
    {
      VerifierFlags = 0;
      if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 && (VerifierFlags & 0x200000) != 0 )
      {
        v13 = 0;
        if ( MmIsVerifierEnabled(&v13) < 0 || (v13 & 0x400000) == 0 )
          NT_ASSERT(
            "*** An NDIS miniport driver has encountered a fatal error
    This is NOT a break in NDIS.sys
    The most c"
            "ommon causes of these types of breaks are hung/unresponsive miniport firmware,
    failed power transitions,"
            " or failing MiniportRestart.
");
      }
    }
    ndisCancelOidRequestInternal(a1, 0LL, 0LL, 1u);
    if ( v7 && v5 - v7 <= 0x23C34600 )
    {
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
      v9 = NewIrql;
      a1->WSyncFlags &= ~4u;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v9);
      IoInvalidateDeviceState(a1->PhysicalDeviceObject);
    }
    else
    {
      if ( a1->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi && !ndisBugCheckOnReenumerationTimeout )
      {
        ndisDisarmWatchdog(a1->ReenumerateWatchdog.m_ptr);
        Watchdog = ndisAllocateWatchdog();
        wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
          (__int64 *)&a1->ReenumerateWatchdog,
          (__int64)Watchdog);
        ndisArmWatchdog(a1->ReenumerateWatchdog.m_ptr, a1, 0x27u, 0LL, 0x88B8u, 0LL);
      }
      ((void (__fastcall *)(void *, __int64, _QWORD))a1->ReenumerateSelfInterface->DeviceReset)(
        a1->ReenumerateSelfInterface->Context,
        1LL,
        0LL);
    }
  }
}
