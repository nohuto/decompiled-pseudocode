/*
 * XREFs of ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C005C870
 * Callers:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C005ABB0 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C005BC34 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0015218 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B2C (WPP_RECORDER_SF_Lq.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005D040 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z @ 0x1C005D460 (-ndisWdfRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@W4_NDIS_TMP_REF_REASON@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C374 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x1C00A52BC (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6A50 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F86F0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

__int64 __fastcall ndisRequestNicActive(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned int v5; // esi
  KIRQL v6; // al
  KIRQL v8; // al
  KIRQL v9; // si
  __int64 v10; // r8
  bool v11; // cf
  KIRQL v12; // si
  int v13; // eax
  _KEVENT *p_PowerD0CompleteEvent; // rbp
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // esi
  struct _NDIS_MINIPORT_AOAC *v18; // rbx

  AoAc = a1->AoAc;
  v5 = a1->Flags & 0x80;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !*((_DWORD *)AoAc + 94) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v6);
    return 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v6);
  if ( v5 )
    return ndisWdfRequestNicActive(a1, a2, 0LL);
  if ( a1->SelectiveSuspend && (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
  {
    ndisWaitForKernelObject((char *)AoAc + 448);
    ndisCancelIdleRequestSync(a1, 7, 0, 0);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    v9 = v8;
    if ( !*((_BYTE *)AoAc + 384) )
    {
      *((_DWORD *)AoAc + 94) = 0;
      KeSetEvent((PRKEVENT)((char *)AoAc + 392), 0, 0);
      v10 = MEMORY[0xFFFFF78000000008];
      v11 = *((_BYTE *)AoAc + 1105) != 0;
      *((_QWORD *)AoAc + 108) = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)AoAc + 109) = v10 & -(__int64)v11;
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v9);
      if ( a1->SelectiveSuspend )
        ndisSelectiveSuspendClearStop(a1, 7LL);
      return 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v8);
  }
  ndisWaitForKernelObject((char *)AoAc + 392);
  ndisUpdateMiniportCsTrafficStatistics(a1, 2LL);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v13 = *((_DWORD *)AoAc + 94);
  if ( v13 == 2 )
  {
    if ( *((_BYTE *)AoAc + 387) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v12);
      v17 = -1073741823;
    }
    else
    {
      *((_DWORD *)AoAc + 94) = 3;
      ++*((_DWORD *)AoAc + 210);
      p_PowerD0CompleteEvent = &a1->PowerD0CompleteEvent;
      v15 = MEMORY[0xFFFFF78000000008];
      v11 = *((_BYTE *)AoAc + 1105) != 0;
      *((_QWORD *)AoAc + 108) = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)AoAc + 109) = v15 & -(__int64)v11;
      KeClearEvent(&a1->PowerD0CompleteEvent);
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v12);
      v16 = ndisRequestDevicePowerD0(a1, NdisMEventD0_NicActive);
      v17 = v16;
      if ( v16 == 259 )
        goto LABEL_26;
      v18 = a1->AoAc;
      NdisTraceLoggingUnexpectedAoAcError(a1, 1u, v16);
      *((_WORD *)v18 + 241) = *((_WORD *)v18 + 240);
      *((_WORD *)v18 + 240) = 1;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x16u,
          (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
          v17,
          a1);
    }
  }
  else
  {
    if ( v13 == 4 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x17u,
          (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
          a1);
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v12);
      return (unsigned int)-1073741823;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v12);
    v17 = 259;
  }
  if ( v17 == 259 )
  {
    p_PowerD0CompleteEvent = &a1->PowerD0CompleteEvent;
LABEL_26:
    if ( !a2 )
    {
      ndisWaitForKernelObject(p_PowerD0CompleteEvent);
      return 0;
    }
  }
  return v17;
}
