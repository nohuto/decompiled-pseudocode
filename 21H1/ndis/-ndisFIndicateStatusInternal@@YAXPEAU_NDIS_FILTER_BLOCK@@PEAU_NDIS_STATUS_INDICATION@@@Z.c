/*
 * XREFs of ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A6C0
 * Callers:
 *     ?ndisFIndicateStatusWrapper@@YAXPEAX@Z @ 0x1C001A6A0 (-ndisFIndicateStatusWrapper@@YAXPEAX@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A6C0 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001ACA4 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0025E2C (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisStackExpansionFallbackWorker@@YAXPEAX@Z @ 0x1C00694D0 (-ndisStackExpansionFallbackWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C00161B4 (-ndisSwapFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@.c)
 *     NdisMSleep @ 0x1C0017320 (NdisMSleep.c)
 *     ?ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@1@Z @ 0x1C0019428 (-ndisRestoreFilterHandlersForMediaDisconnect@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOC.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001A53C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001A5D0 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A61C (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A6C0 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C001ABF8 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C350 (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C4F8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C001FFC0 (-ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024CAC (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008F738 (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008F7C8 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008F81C (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z @ 0x1C00AA578 (-ndisFIndicateTimestampChange@@YAEPEAU_NDIS_FILTER_BLOCK@@HPEAXK@Z.c)
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C00B1538 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisIfUpdateL2MtuSize@@YA_NPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C00B15F0 (-ndisIfUpdateL2MtuSize@@YA_NPEAU_NDIS_IF_BLOCK@@K@Z.c)
 */

void __fastcall ndisFIndicateStatusInternal(struct _NDIS_FILTER_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  BOOL v2; // ebx
  int v3; // r14d
  int StatusCode; // r13d
  _NDIS_MINIPORT_BLOCK *Miniport; // r15
  int *StatusBuffer; // rdi
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  int v10; // eax
  bool v11; // al
  KIRQL v12; // dl
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v14; // rbx
  KSPIN_LOCK *p_Lock; // r14
  KIRQL v16; // al
  unsigned int Flags; // ecx
  struct _NDIS_STATUS_INDICATION *v18; // rsi
  unsigned int v19; // r10d
  KIRQL v20; // dl
  unsigned int v21; // eax
  char v22; // bl
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectStateIndicateUp; // eax
  _NET_IF_MEDIA_CONNECT_STATE v24; // ecx
  _NET_IF_MEDIA_CONNECT_STATE v25; // eax
  int v26; // ecx
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // edx
  int v28; // ecx
  char v29; // al
  bool v30; // zf
  unsigned __int8 v31; // al
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-50h] BYREF
  BOOL v33; // [rsp+24h] [rbp-4Ch]
  unsigned int StatusBufferSize; // [rsp+28h] [rbp-48h]
  int v35; // [rsp+2Ch] [rbp-44h]
  struct _NDIS_STATUS_INDICATION *v36; // [rsp+30h] [rbp-40h]
  int v37; // [rsp+38h] [rbp-38h] BYREF
  int v38; // [rsp+3Ch] [rbp-34h]
  _NET_IF_MEDIA_DUPLEX_STATE v39; // [rsp+40h] [rbp-30h]
  int v40; // [rsp+44h] [rbp-2Ch]
  unsigned __int64 XmitLinkSpeedIndicateUp; // [rsp+48h] [rbp-28h]
  unsigned __int64 RcvLinkSpeedIndicateUp; // [rsp+50h] [rbp-20h]
  _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctionsIndicateUp; // [rsp+58h] [rbp-18h]
  unsigned int AutoNegotiationFlagsIndicateUp; // [rsp+5Ch] [rbp-14h]

  LOBYTE(v2) = 0;
  StatusCode = a2->StatusCode;
  LOBYTE(v3) = 0;
  Miniport = a1->Miniport;
  StatusBuffer = (int *)a2->StatusBuffer;
  StatusBufferSize = a2->StatusBufferSize;
  v36 = a2;
  v33 = v2;
  v35 = v3;
  if ( StatusCode == 1073873072 )
  {
    if ( a2->SourceHandle != (void *)0x1C0000000LL )
      return;
    ndisIfUpdateCurrentMacAddress(a1->IfBlock, (const struct _IF_PHYSICAL_ADDRESS_LH *)StatusBuffer);
  }
  if ( StatusCode != 1073873073 )
    goto LABEL_3;
  if ( a2->SourceHandle == (void *)0x1C0000000LL )
  {
    ndisIfUpdateL2MtuSize(a1->IfBlock, *(_DWORD *)a2->StatusBuffer);
LABEL_3:
    MediaDuplexStateIndicateUp = a1->MediaDuplexStateIndicateUp;
    v38 = 0;
    v40 = 0;
    v39 = MediaDuplexStateIndicateUp;
    XmitLinkSpeedIndicateUp = a1->XmitLinkSpeedIndicateUp;
    RcvLinkSpeedIndicateUp = a1->RcvLinkSpeedIndicateUp;
    PauseFunctionsIndicateUp = a1->PauseFunctionsIndicateUp;
    AutoNegotiationFlagsIndicateUp = a1->AutoNegotiationFlagsIndicateUp;
    v37 = 2621824;
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    v10 = v38;
    if ( StatusCode == 1073807372 )
      v10 = 2;
    v38 = v10;
    v11 = StatusCode == 1073807372;
    if ( StatusCode == 1073807371 )
    {
      v38 = 1;
      v11 = 1;
    }
    if ( v11 )
    {
      a2->StatusCode = 1073807383;
      a2->StatusBuffer = &v37;
      StatusBuffer = &v37;
      StatusCode = 1073807383;
      a2->StatusBufferSize = 40;
      StatusBufferSize = 40;
    }
    if ( StatusCode == 1073807383 )
    {
      MediaConnectStateIndicateUp = a1->MediaConnectStateIndicateUp;
      v24 = StatusBuffer[1];
      if ( MediaConnectStateIndicateUp != v24 )
      {
        if ( v24 == MediaConnectStateConnected )
        {
          LOBYTE(v3) = 1;
          v35 = v3;
        }
        else
        {
          v33 = MediaConnectStateIndicateUp == MediaConnectStateConnected;
        }
      }
      a1->MediaConnectStateIndicateUp = v24;
      a1->MediaDuplexStateIndicateUp = StatusBuffer[2];
      a1->XmitLinkSpeedIndicateUp = *((_QWORD *)StatusBuffer + 2);
      a1->RcvLinkSpeedIndicateUp = *((_QWORD *)StatusBuffer + 3);
      a1->PauseFunctionsIndicateUp = StatusBuffer[8];
      a1->AutoNegotiationFlagsIndicateUp = StatusBuffer[9];
      a1->IfBlock->MediaConnectState = v24;
      a1->IfBlock->MediaDuplexState = a1->MediaDuplexStateIndicateUp;
      a1->IfBlock->RcvLinkSpeed = a1->RcvLinkSpeedIndicateUp;
      a1->IfBlock->XmitLinkSpeed = a1->XmitLinkSpeedIndicateUp;
    }
    v12 = NewIrql[0];
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v12);
    HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(Miniport, a1, FPNPREF_FSTATUS);
    v14 = HigherFilterWithPnpRef;
    if ( HigherFilterWithPnpRef )
    {
      p_Lock = &HigherFilterWithPnpRef->Lock;
      while ( 1 )
      {
        v16 = KeAcquireSpinLockRaiseToDpc(p_Lock);
        v14->LockThread = 0LL;
        Flags = v14->Flags;
        NewIrql[0] = v16;
        if ( (Flags & 0x2000) == 0 )
          break;
        KeReleaseSpinLock(p_Lock, v16);
        if ( KeGetCurrentIrql() == 2 )
          KeStallExecutionProcessor(1u);
        else
          NdisMSleep(0x32u);
      }
      v14->Flags = Flags | 0x2000;
      KeReleaseSpinLockFromDpcLevel(p_Lock);
      v18 = v36;
      if ( StatusCode == 1073807383 )
      {
        if ( !StatusBuffer )
          goto LABEL_21;
        v19 = StatusBufferSize;
        if ( StatusBufferSize < 0x28 )
          goto LABEL_21;
        MediaConnectState = v14->MediaConnectState;
        v28 = StatusBuffer[1];
        if ( MediaConnectState != v28 )
        {
          if ( v28 == 1 )
          {
            LOBYTE(v35) = 1;
          }
          else
          {
            v29 = v33;
            if ( MediaConnectState == MediaConnectStateConnected )
              v29 = 1;
            LOBYTE(v33) = v29;
          }
        }
        v14->MediaConnectState = v28;
        v14->MediaDuplexState = StatusBuffer[2];
        v14->RcvLinkSpeed = *((_QWORD *)StatusBuffer + 3);
        v14->XmitLinkSpeed = *((_QWORD *)StatusBuffer + 2);
        v14->PauseFunctions = StatusBuffer[8];
        v14->AutoNegotiationFlags = StatusBuffer[9];
      }
      else
      {
        v19 = StatusBufferSize;
      }
      if ( StatusCode == 1073872902 )
      {
        v31 = ndisFIndicateOffloadChange(v14, StatusBuffer, v19);
      }
      else
      {
        if ( StatusCode == 1073938515 )
          ndisFilterIndicatePMCapabilities(v14, v18);
        if ( StatusCode == 1073938513 )
        {
          v31 = ndisFilterIndicateWoLPatternReject(v14, v18);
        }
        else if ( StatusCode == 1073938514 )
        {
          v31 = ndisFilterIndicatePMOffloadReject(v14, v18);
        }
        else
        {
          if ( (unsigned int)(StatusCode - 1074073600) > 1 )
            goto LABEL_21;
          v31 = ndisFIndicateTimestampChange(v14, StatusCode, StatusBuffer, v19);
        }
      }
      if ( !v31 )
      {
LABEL_27:
        KeAcquireSpinLockAtDpcLevel(p_Lock);
        v20 = NewIrql[0];
        v14->Flags &= ~0x2000u;
        v14->LockThread = 0LL;
        KeReleaseSpinLock(p_Lock, v20);
        ndisDereferenceRef(&v14->PnPRef.SpinLock, 8u);
        return;
      }
LABEL_21:
      if ( v14->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
        ndisFInvokeStatus(v14, v18);
      else
        ndisFIndicateStatusInternal(v14, v18);
      if ( v33 )
        ndisSwapFilterHandlersForMediaDisconnect(Miniport, a1, v14);
      if ( (_BYTE)v35 )
        ndisRestoreFilterHandlersForMediaDisconnect(Miniport, a1, v14);
      goto LABEL_27;
    }
    ndisMAcquireStInLockWithSpinLock(Miniport, NewIrql);
    v21 = StatusBufferSize;
    if ( StatusCode == 1073807383 && StatusBuffer && StatusBufferSize >= 0x28 )
    {
      v25 = Miniport->MediaConnectState;
      v26 = StatusBuffer[1];
      if ( v25 == v26 )
      {
        v21 = StatusBufferSize;
      }
      else
      {
        v30 = v25 == MediaConnectStateConnected;
        v21 = StatusBufferSize;
        if ( v30 )
        {
          v22 = 1;
LABEL_31:
          a2->Flags |= 2u;
          if ( StatusCode != 1073872902 )
          {
LABEL_32:
            ndisIndicateStatusInternal(Miniport, a2, 2u);
            if ( v22 )
              ndisSwapFilterHandlersForMediaDisconnect(Miniport, a1, 0LL);
            if ( (_BYTE)v3 )
              ndisRestoreFilterHandlersForMediaDisconnect(Miniport, a1, 0LL);
            goto LABEL_36;
          }
          if ( v21 >= 0x70
            && *(_BYTE *)StatusBuffer == 0xA7
            && *((_WORD *)StatusBuffer + 1) >= 0x70u
            && *((_BYTE *)StatusBuffer + 1) )
          {
            if ( Miniport->Offload )
              goto LABEL_32;
            ndisMAllocateMiniportOffload(Miniport);
          }
LABEL_36:
          ndisMReleaseStInLockAndSpinLock(Miniport, NewIrql[0]);
          return;
        }
        if ( v26 == 1 )
          LOBYTE(v3) = 1;
      }
    }
    v22 = v33;
    goto LABEL_31;
  }
}
