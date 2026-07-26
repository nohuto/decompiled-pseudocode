/*
 * XREFs of ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005C2C8
 * Callers:
 *     ndisDispatchRequest @ 0x1C001D340 (ndisDispatchRequest.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C005AE50 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C0017B2C (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005A824 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C005CF4C (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 *     ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005D68C (-ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C374 (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A6FD0 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A7968 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C01148F8 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisNicQuietCheckRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  unsigned int v3; // ebx
  KIRQL v4; // bp
  KSPIN_LOCK *v5; // rcx
  unsigned int v6; // eax
  KIRQL v7; // al
  int v8; // eax
  char v9; // bp
  unsigned int v10; // esi
  struct _NDIS_MINIPORT_AOAC *v11; // rbx
  KIRQL v12; // al
  KIRQL v13; // bl

  AoAc = a1->AoAc;
  v3 = a1->Flags & 0x80;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !ndisAoAcIsD0Required(AoAc) && !*((_DWORD *)AoAc + 94) )
  {
    *((_DWORD *)AoAc + 94) = 1;
    KeClearEvent((PRKEVENT)((char *)AoAc + 392));
    KeClearEvent((PRKEVENT)((char *)AoAc + 448));
    if ( *((_QWORD *)AoAc + 108) )
    {
      *((_QWORD *)AoAc + 106) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 108);
      *((_QWORD *)AoAc + 108) = 0LL;
    }
    if ( (*((_DWORD *)AoAc + 97) & 1) != 0 && a1->LastWakeReason == 65534 )
    {
      ++*((_DWORD *)AoAc + 221);
      ndisUpdateCsSpuriousWakeStats(AoAc, (enum _NDIS_PM_WAKE_REASON_TYPE)65534);
    }
    *((_DWORD *)AoAc + 97) = 0;
    *((_DWORD *)AoAc + 277) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendStop(a1, 7LL);
    if ( v3 )
    {
      v6 = ndisWdfRequestNicQuiet(a1);
    }
    else
    {
      if ( a1->SelectiveSuspend && (a1->PnPFlags & 0x60) == 0x60 && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 )
      {
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
        *((_BYTE *)AoAc + 384) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v7);
        v8 = ndisSubmitIdleRequest(a1, 1u);
        v9 = v8;
        if ( v8 != 259 )
        {
          v11 = a1->AoAc;
          NdisTraceLoggingUnexpectedAoAcError(a1, 3u, 0);
          *((_WORD *)v11 + 241) = *((_WORD *)v11 + 240);
          *((_WORD *)v11 + 240) = 3;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xEu,
              0x1Eu,
              (struct _GUID *)WPP_dafd92df180233d1e8f46c99921014e6_Traceguids,
              v9,
              a1);
          v10 = -1073741823;
          goto LABEL_22;
        }
        v10 = 0;
LABEL_23:
        KeSetEvent((PRKEVENT)((char *)AoAc + 448), 0, 0);
        return v10;
      }
      v6 = ndisRequestNicQuiet(a1, 0);
    }
    v10 = v6;
    if ( v6 )
    {
LABEL_22:
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
      *((_DWORD *)AoAc + 94) = 4;
      v13 = v12;
      KeSetEvent((PRKEVENT)((char *)AoAc + 392), 0, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v13);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
  if ( (unsigned int)(*((_DWORD *)AoAc + 94) - 1) <= 1 && *((_QWORD *)AoAc + 109) )
  {
    *((_QWORD *)AoAc + 107) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 109);
    *((_QWORD *)AoAc + 109) = 0LL;
  }
  KeReleaseSpinLock(v5, v4);
  return 0LL;
}
