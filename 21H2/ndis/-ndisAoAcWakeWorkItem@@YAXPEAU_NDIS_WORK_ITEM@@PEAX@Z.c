/*
 * XREFs of ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C005B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0015428 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C005A2DC (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C005D2D0 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C4F4 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x1C00A543C (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisAoAcWakeWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 AoAc; // rbx
  KIRQL v4; // al
  bool v5; // zf
  KIRQL v6; // si
  __int64 v7; // rax
  __int64 v8; // rdx
  bool v9; // cf
  int v10; // eax
  char v11; // si
  struct _NDIS_MINIPORT_AOAC *v12; // rbx
  int v13; // [rsp+30h] [rbp-28h]

  AoAc = (__int64)a2->AoAc;
  if ( a2->SelectiveSuspend && (a2->PnPFlags & 0x60) == 0x60 && (unsigned int)(a2->DeviceCaps.DeviceWake - 2) <= 2 )
  {
    ndisWaitForKernelObject((void *)(AoAc + 448));
    ndisCancelIdleRequestSync(a2, 7, 0, 0);
  }
  ndisWaitForKernelObject((void *)(AoAc + 392));
  ndisUpdateMiniportCsTrafficStatistics(a2, 2LL);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v5 = *(_DWORD *)(AoAc + 376) == 2;
  v6 = v4;
  *(_BYTE *)(AoAc + 288) = 0;
  if ( v5 )
  {
    *(_DWORD *)(AoAc + 376) = 3;
    KeClearEvent(&a2->PowerD0CompleteEvent);
    *(_DWORD *)(AoAc + 64) = 3;
    v7 = MEMORY[0xFFFFF78000000014];
    ++*(_DWORD *)(AoAc + 840);
    *(_QWORD *)(AoAc + 488) = v7;
    *(_BYTE *)(AoAc + 496) = 1;
    v8 = MEMORY[0xFFFFF78000000008];
    v9 = *(_BYTE *)(AoAc + 1105) != 0;
    *(_QWORD *)(AoAc + 864) = MEMORY[0xFFFFF78000000008];
    v5 = *(_WORD *)(AoAc + 290) == 20;
    *(_QWORD *)(AoAc + 872) = v8 & -(__int64)v9;
    if ( v5 )
      ++*(_DWORD *)(AoAc + 880);
    ndisAoAcActiveRefIncrement(AoAc, 0);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_DWORD *)(AoAc + 52);
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x2Bu,
        (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
        (char)a2,
        v13);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v6);
    v10 = ndisRequestDevicePowerD0(a2, (enum _NDIS_MINIPORT_EVENT)*(_WORD *)(AoAc + 290));
    v11 = v10;
    if ( v10 != 259 )
    {
      v12 = a2->AoAc;
      NdisTraceLoggingUnexpectedAoAcError(a2, 7u, v10);
      *((_WORD *)v12 + 241) = *((_WORD *)v12 + 240);
      *((_WORD *)v12 + 240) = 7;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x2Cu,
          (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
          v11,
          a2);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
  }
  ndisDereferenceMiniport(a2, 4u);
}
