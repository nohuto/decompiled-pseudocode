/*
 * XREFs of ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000BA10
 * Callers:
 *     ?ndisDoOidRequests@@YAXPEAX@Z @ 0x1C00084D0 (-ndisDoOidRequests@@YAXPEAX@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001BF54 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006F2F0 (-ndisMProcessDeferred@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139BB8 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_Dqqd @ 0x1C000AD9C (WPP_RECORDER_SF_Dqqd.c)
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisMSleep @ 0x1C0017320 (NdisMSleep.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C0099904 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009A6C0 (-ndisMOidRequestToRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     McTemplateK0jqxptdq_EtwWriteTransfer @ 0x1C00A1154 (McTemplateK0jqxptdq_EtwWriteTransfer.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1C00A1214 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A4F00 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A82B4 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00A88C4 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00F92D0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _KEVENT *AllRequestsCompletedEvent; // rsi
  _NDIS_OID_REQUEST *p_Blink; // r15
  _LIST_ENTRY *Flink; // r12
  char v5; // bl
  unsigned int WSyncFlags; // ecx
  unsigned int PnPFlags; // edx
  _LIST_ENTRY *p_OidRequestList; // rax
  _LIST_ENTRY *v9; // rcx
  KIRQL v10; // dl
  __int64 v11; // rdx
  UCHAR Type; // r11
  NDIS_OID Oid; // r14d
  char v14; // bl
  char v15; // si
  unsigned int Timeout; // eax
  unsigned int CheckForHangSeconds; // ecx
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // eax
  struct _NDIS_MINIPORT_BLOCK *v22; // rcx
  unsigned int v23; // r9d
  unsigned int v24; // r10d
  __int64 (__fastcall *v25)(__int128 *); // rax
  int v26; // r9d
  int v27; // ebx
  bool v28; // zf
  NDIS_REQUEST_TYPE RequestType; // edx
  unsigned int v30; // ecx
  int v31; // ecx
  int v32; // edx
  unsigned __int64 *p_Lock; // rcx
  unsigned int Flags; // eax
  KIRQL v35; // dl
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  _DEVICE_POWER_STATE v40; // esi
  KIRQL v41; // r14
  KIRQL v42; // dl
  KIRQL i; // al
  struct _NDIS_MINIPORT_BLOCK *v44; // rax
  int v45; // [rsp+20h] [rbp-69h]
  __int64 v46; // [rsp+48h] [rbp-41h]
  __int128 v47; // [rsp+50h] [rbp-39h] BYREF
  __int128 v48; // [rsp+60h] [rbp-29h]
  __int128 v49; // [rsp+70h] [rbp-19h]
  _OWORD v50[2]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v51; // [rsp+A0h] [rbp+17h]
  unsigned __int8 v52; // [rsp+F0h] [rbp+67h] BYREF
  NDIS_OID v53; // [rsp+F8h] [rbp+6Fh]
  struct _KEVENT *v54; // [rsp+100h] [rbp+77h]

  AllRequestsCompletedEvent = 0LL;
  v54 = 0LL;
  while ( 1 )
  {
    p_Blink = 0LL;
    Flink = 0LL;
    v5 = 0;
    v52 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    WSyncFlags = a1->WSyncFlags;
    a1->MiniportThread = KeGetCurrentThread();
    if ( (WSyncFlags & 1) == 0 )
    {
      PnPFlags = a1->PnPFlags;
      p_OidRequestList = &a1->OidRequestList;
      if ( p_OidRequestList->Flink == p_OidRequestList || (PnPFlags & 0x20000) != 0 )
      {
        if ( (PnPFlags & 0x20000) != 0 )
        {
          v5 = 1;
          if ( a1->AllRequestsCompletedEvent )
          {
            AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
            v54 = AllRequestsCompletedEvent;
            a1->AllRequestsCompletedEvent = 0LL;
          }
        }
      }
      else
      {
        a1->WSyncFlags = WSyncFlags | 1;
        Flink = p_OidRequestList->Flink;
        if ( p_OidRequestList->Flink->Blink != p_OidRequestList || (v9 = Flink->Flink, Flink->Flink->Blink != Flink) )
          __fastfail(3u);
        p_OidRequestList->Flink = v9;
        p_Blink = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
        v9->Blink = p_OidRequestList;
        a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
      }
    }
    v10 = v52;
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v10);
    if ( v5 )
      ndisCancelOidRequestOnMiniport(a1, 0LL, 1u);
    if ( AllRequestsCompletedEvent )
    {
      KeSetEvent(AllRequestsCompletedEvent, 0, 0);
      v54 = 0LL;
    }
    if ( !Flink )
      break;
    Type = a1->Header.Type;
    Oid = p_Blink->DATA.QUERY_INFORMATION.Oid;
    v14 = 0;
    v15 = 0;
    v53 = Oid;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    if ( Type == 17 )
    {
      Timeout = p_Blink->Timeout;
      if ( Timeout < 0x3C )
      {
        CheckForHangSeconds = a1->CheckForHangSeconds;
        if ( CheckForHangSeconds )
        {
          v18 = CheckForHangSeconds + Timeout - 1;
          if ( CheckForHangSeconds == 2 )
          {
            v19 = v18 >> 1;
          }
          else
          {
            v11 = v18 % CheckForHangSeconds;
            v19 = v18 / CheckForHangSeconds;
          }
          a1->CFHangXTicks = v19;
        }
      }
    }
    *(_DWORD *)&p_Blink->NdisReserved[16] &= ~4u;
    v20 = 0LL;
    v21 = 73;
    if ( a1->Header.Type == 17 )
      v22 = a1;
    else
      v22 = *(struct _NDIS_MINIPORT_BLOCK **)&a1->Reserved4.Length;
    if ( !p_Blink->PortNumber || (LODWORD(v22) = v22->InfoFlags, ((unsigned __int16)v22 & 0x200) == 0) )
    {
      v23 = p_Blink->DATA.QUERY_INFORMATION.Oid;
      v24 = 146;
      while ( v21 >= (unsigned int)v20 )
      {
        v11 = 3LL * v21;
        LODWORD(v22) = *((_DWORD *)&unk_1C00C7310 + 6 * v21);
        if ( (unsigned int)v22 > v23 )
        {
          if ( !v21 )
            break;
          v24 = v21 - 1;
        }
        else
        {
          if ( (_DWORD)v22 == v23 )
          {
            *(_DWORD *)&p_Blink->NdisReserved[20] = v21;
            LODWORD(v22) = *(_DWORD *)&p_Blink->NdisReserved[16];
            HIDWORD(v49) = 0;
            *(_DWORD *)&p_Blink->NdisReserved[16] = (unsigned int)v22 | 4;
            if ( Type == 17 )
            {
              *(_QWORD *)&v47 = a1;
              *(_QWORD *)&v48 = 0LL;
            }
            else
            {
              v44 = 0LL;
              if ( Type == 5 )
                v44 = a1;
              *(_QWORD *)&v48 = v44;
            }
            *(_QWORD *)&v49 = p_Blink;
            if ( ((unsigned __int16)v22 & 0x220) != 0 )
              *((_QWORD *)&v48 + 1) = *(_QWORD *)&p_Blink->NdisReserved[32];
            else
              *((_QWORD *)&v48 + 1) = 0LL;
            if ( ((unsigned __int8)v22 & 0x40) != 0 )
              *((_QWORD *)&v47 + 1) = *(_QWORD *)&p_Blink->NdisReserved[32];
            else
              *((_QWORD *)&v47 + 1) = 0LL;
            DWORD2(v49) = 0;
            if ( ((unsigned int)v22 & 0x840080) == 0 )
            {
              LODWORD(v22) = 3 * *(_DWORD *)&p_Blink->NdisReserved[20];
              v25 = (__int64 (__fastcall *)(__int128 *))*((_QWORD *)&unk_1C00C7310
                                                        + 3 * *(unsigned int *)&p_Blink->NdisReserved[20]
                                                        + 1);
              if ( v25 )
              {
                v14 = v25(&v47);
                if ( v14 == 1 )
                {
                  ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v47, v11, v20, v26);
                  v15 = 3;
                }
                else
                {
                  v15 = BYTE8(v49);
                }
              }
            }
            break;
          }
          v20 = v21 + 1;
        }
        v21 = v20 + ((v24 - (unsigned int)v20 + 1) >> 1);
        if ( v21 > v24 )
          break;
      }
    }
    if ( (byte_1C00E6081 & 0x40) != 0 )
    {
      LODWORD(v46) = Oid;
      McTemplateK0jqxptdq_EtwWriteTransfer(
        (_DWORD)v22,
        v11,
        (_DWORD)a1 + 4008,
        (_DWORD)a1 + 4008,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)p_Blink,
        v14,
        v15,
        v46,
        v47,
        v48,
        (_QWORD)v49);
    }
    if ( v14 == 1 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Dqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v11, v20, 0x14u, v45);
      AllRequestsCompletedEvent = v54;
    }
    else
    {
      v52 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      v27 = 0;
      v28 = (a1->Flags & 0x80000) == 0;
      a1->MiniportThread = KeGetCurrentThread();
      if ( !v28 )
      {
        v27 = -1073676275;
        goto LABEL_63;
      }
      RequestType = p_Blink->RequestType;
      if ( RequestType == NdisRequestQueryStatistics
        && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
      {
        v27 = -2147483633;
        goto LABEL_63;
      }
      v30 = a1->PnPFlags;
      if ( (v30 & 0x100) != 0 )
      {
        v27 = -1073676280;
        goto LABEL_63;
      }
      v31 = v30 & 0x20000;
      if ( !v31 && ((unsigned int)(a1->DriverPowerState - 2) > 2 || p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855) )
      {
        ++a1->RequestCount;
        a1->PendingOidRequest = p_Blink;
        if ( p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855
          && p_Blink->RequestType == NdisRequestSetInformation
          && p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
        {
          v40 = *(_DWORD *)p_Blink->DATA.QUERY_INFORMATION.InformationBuffer;
          if ( (unsigned int)(v40 - 1) <= 3 )
          {
            v41 = v52;
            v42 = v52;
            a1->MiniportThread = 0LL;
            KeReleaseSpinLock(&a1->Lock, v42);
            for ( i = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
                  a1->PendingReturnNBLCount;
                  i = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock) )
            {
              KeReleaseSpinLock(&a1->PowerStateLock, i);
              NdisMSleep(0x32u);
            }
            a1->PrevDriverPowerState = a1->DriverPowerState;
            a1->DriverPowerState = v40;
            KeReleaseSpinLock(&a1->PowerStateLock, v41);
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v52);
            Oid = v53;
          }
        }
        v32 = (int)Flink[1].Flink;
        if ( (a1->Flags & 0x20000) != 0 )
          v32 = LODWORD(Flink[1].Flink) | 0x2000;
        p_Lock = &a1->Lock;
        LODWORD(Flink[1].Flink) = v32 | 0x10000;
        a1->MiniportThread = 0LL;
        if ( a1->MajorNdisVersion < 6u )
        {
          KeReleaseSpinLockFromDpcLevel(p_Lock);
          v27 = ndisMOidRequestToRequest(a1, p_Blink);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        }
        else
        {
          KeReleaseSpinLock(p_Lock, v52);
          Flags = a1->Flags;
          if ( (Flags & 0x20000) != 0 )
          {
            v27 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, p_Blink);
          }
          else
          {
            if ( a1->SelectiveSuspend )
            {
              if ( (Flags & 0x80u) == 0 )
                ndisWdmSetBusySync(a1, 33LL, Oid);
              else
                ndisWdfSetBusySync(a1, 33LL, Oid);
            }
            v27 = ndisMInvokeOidRequest(a1, p_Blink);
            if ( v27 != 259 && a1->SelectiveSuspend )
              ndisClearBusy(a1, 1LL, 33LL);
          }
          v52 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        }
        --a1->RequestCount;
        if ( v27 != 259 )
        {
          p_Blink = a1->PendingOidRequest;
          a1->PendingOidRequest = 0LL;
        }
      }
      else
      {
        if ( (RequestType & 0xFFFFFFFD) == 0 )
        {
          p_Blink->DATA.QUERY_INFORMATION.BytesWritten = 0;
LABEL_112:
          v27 = -1073741823;
          goto LABEL_63;
        }
        if ( RequestType != NdisRequestSetInformation )
        {
          if ( RequestType != NdisRequestMethod )
            goto LABEL_63;
          p_Blink->DATA.METHOD_INFORMATION.BytesRead = 0;
          goto LABEL_112;
        }
        p_Blink->DATA.QUERY_INFORMATION.BytesWritten = p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength;
        v27 = -1071448017;
        if ( v31 )
          v27 = -1073741823;
      }
LABEL_63:
      v35 = v52;
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v35);
      AllRequestsCompletedEvent = v54;
      if ( v27 != 259 && p_Blink )
      {
        memset(v50, 0, sizeof(v50));
        v51 = 0LL;
        if ( (byte_1C00E6081 & 0x40) != 0 )
          McTemplateK0jqxqdq_EtwWriteTransfer(
            v37,
            (unsigned int)&CompletingOidRequestMiniportEx,
            (_DWORD)a1 + 4008,
            (_DWORD)a1 + 4008,
            a1->IfIndex,
            a1->NetLuid.Value,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v27);
        *(_QWORD *)&v51 = p_Blink;
        DWORD2(v51) = v27;
        *(_QWORD *)&v50[0] = a1;
        ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)v50, v36, v38, v39);
      }
    }
  }
}
