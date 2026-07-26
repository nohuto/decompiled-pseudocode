/*
 * XREFs of ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0025E2C
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012CDE8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisMSleep @ 0x1C0017320 (NdisMSleep.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0019FEC (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A1C8 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C001A53C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001A5D0 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001A6C0 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C350 (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0026310 (-ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z @ 0x1C0066F9C (-ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z.c)
 */

void __fastcall ndisIndicateInitialStateToFilter(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rsi
  _NDIS_FILTER_BLOCK *HigherFilter; // rdi
  _NDIS_FILTER_BLOCK *LowerFilter; // r13
  char v5; // r15
  unsigned __int64 *p_Lock; // r14
  unsigned int Flags; // eax
  _NDIS_MINIPORT_OFFLOAD *v8; // rax
  _NDIS_OFFLOAD *p_TopCapabilities; // rax
  __int128 v10; // xmm1
  _NDIS_FILTER_TASK_OFFLOAD *v11; // rcx
  KIRQL v12; // dl
  void (__fastcall *v13)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopHwTimestampCapabilities; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rax
  unsigned __int8 XState; // al
  void (__fastcall *v17)(void *, void *); // rax
  void (__fastcall *v18)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rcx
  KIRQL v19; // dl
  unsigned int v20; // eax
  _NDIS_FILTER_TASK_OFFLOAD *Offload; // rax
  __int128 v22; // xmm1
  unsigned int *p_UdpEsp; // rax
  _NDIS_FILTER_TASK_OFFLOAD *v24; // rcx
  void *v25; // rax
  KIRQL v26; // dl
  unsigned int v27; // eax
  void (__fastcall *v28)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // rax
  void *v29; // rax
  KIRQL v30; // dl
  unsigned int v31; // eax
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCapabilities; // rax
  bool v33; // zf
  _NDIS_TIMESTAMP_CAPABILITIES *v34; // rax
  void *v35; // rax
  KIRQL v36; // dl
  KIRQL v37; // dl
  unsigned int v38; // eax
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCurrentConfig; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v40; // rax
  KIRQL v41; // dl
  KIRQL v42; // dl
  _NDIS_TIMESTAMP_CAPABILITIES *v43; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v44; // rax
  KIRQL v45; // [rsp+38h] [rbp-D0h] BYREF
  KIRQL NewIrql[15]; // [rsp+39h] [rbp-CFh] BYREF
  struct _NDIS_STATUS_INDICATION v47; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v48; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v49; // [rsp+C8h] [rbp-40h]
  __int64 v50; // [rsp+D8h] [rbp-30h]
  __int128 v51; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-18h]
  __int128 v53; // [rsp+100h] [rbp-8h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  _OWORD v55[14]; // [rsp+118h] [rbp+10h] BYREF

  NewIrql[0] = 0;
  v45 = 0;
  memset(&v47, 0, sizeof(v47));
  Miniport = a1->Miniport;
  HigherFilter = a1->HigherFilter;
  LowerFilter = a1->LowerFilter;
  memset(v55, 0, 0xD8uLL);
  v51 = 0LL;
  v54 = 0LL;
  v5 = 1;
  v52 = 0LL;
  v53 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x3Fu,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      a1);
  p_Lock = &a1->Lock;
  v48 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  while ( 1 )
  {
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, NewIrql);
    Flags = a1->Flags;
    a1->LockThread = 0LL;
    if ( (Flags & 0x2000) == 0 )
      break;
    KeReleaseSpinLock(&a1->Lock, NewIrql[0]);
    if ( KeGetCurrentIrql() == 2 )
      KeStallExecutionProcessor(1u);
    else
      NdisMSleep(0x32u);
  }
  a1->Flags |= 0x2000u;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  *(_QWORD *)((char *)&v48 + 4) = *(_QWORD *)&a1->MediaConnectState;
  v49 = *(_OWORD *)&a1->XmitLinkSpeed;
  v50 = *(_QWORD *)&a1->PauseFunctions;
  LODWORD(v48) = 2621824;
  if ( HigherFilter )
  {
    while ( 1 )
    {
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v45);
      v20 = HigherFilter->Flags;
      HigherFilter->LockThread = 0LL;
      if ( (v20 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock(&HigherFilter->Lock, v45);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
    }
    HigherFilter->Flags |= 0x2000u;
    KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    Offload = HigherFilter->Offload;
    if ( Offload )
    {
      v55[0] = *(_OWORD *)&Offload->OffloadCaps.Header.Type;
      v55[1] = *(_OWORD *)((char *)&Offload->OffloadCaps.Checksum.IPv4Receive + 4);
      v55[2] = *(_OWORD *)((char *)&Offload->OffloadCaps.Checksum.IPv6Receive + 4);
      v55[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&Offload->OffloadCaps.LsoV1.IPv4 + 12);
      v55[4] = *(_OWORD *)&Offload->OffloadCaps.IPsecV1.Supported.IPv4Options;
      v55[5] = *(_OWORD *)&Offload->OffloadCaps.LsoV2.IPv4.Encapsulation;
      v55[6] = *(_OWORD *)&Offload->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize;
      v22 = *(_OWORD *)&Offload->OffloadCaps.IPsecV2.Encapsulation;
      p_UdpEsp = &Offload->OffloadCaps.IPsecV2.UdpEsp;
      v55[7] = v22;
      v55[8] = *(_OWORD *)p_UdpEsp;
      v55[9] = *((_OWORD *)p_UdpEsp + 1);
      v55[10] = *((_OWORD *)p_UdpEsp + 2);
      v55[11] = *((_OWORD *)p_UdpEsp + 3);
      v55[12] = *((_OWORD *)p_UdpEsp + 4);
      *(_QWORD *)&v55[13] = *((_QWORD *)p_UdpEsp + 10);
      if ( a1->Offload || !(unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v24 = a1->Offload;
        *(_OWORD *)&v24->OffloadCaps.Header.Type = v55[0];
        *(_OWORD *)((char *)&v24->OffloadCaps.Checksum.IPv4Receive + 4) = v55[1];
        *(_OWORD *)((char *)&v24->OffloadCaps.Checksum.IPv6Receive + 4) = v55[2];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v24->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v55[3];
        *(_OWORD *)&v24->OffloadCaps.IPsecV1.Supported.IPv4Options = v55[4];
        *(_OWORD *)&v24->OffloadCaps.LsoV2.IPv4.Encapsulation = v55[5];
        *(_OWORD *)&v24->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize = v55[6];
        v24 = (_NDIS_FILTER_TASK_OFFLOAD *)((char *)v24 + 128);
        v24[-1].OffloadCaps.UdpSegmentation.IPv6 = (_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6>)v55[7];
        *(_OWORD *)&v24->OffloadCaps.Header.Type = v55[8];
        *(_OWORD *)((char *)&v24->OffloadCaps.Checksum.IPv4Receive + 4) = v55[9];
        *(_OWORD *)((char *)&v24->OffloadCaps.Checksum.IPv6Receive + 4) = v55[10];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v24->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v55[11];
        *(_OWORD *)&v24->OffloadCaps.IPsecV1.Supported.IPv4Options = v55[12];
        *(_QWORD *)&v24->OffloadCaps.LsoV2.IPv4.Encapsulation = *(_QWORD *)&v55[13];
        v25 = Miniport;
        if ( LowerFilter )
          v25 = LowerFilter;
        v47.Header = (_NDIS_OBJECT_HEADER)7340440;
        v47.SourceHandle = v25;
        v47.StatusCode = 1073872902;
        v47.StatusBuffer = v55;
        v47.StatusBufferSize = 216;
        KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
        v26 = v45;
        HigherFilter->Flags &= ~0x2000u;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v26);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v47);
        else
          ndisFIndicateStatusInternal(a1, &v47);
        while ( 1 )
        {
          NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v45);
          v27 = HigherFilter->Flags;
          HigherFilter->LockThread = 0LL;
          if ( (v27 & 0x2000) == 0 )
            break;
          KeReleaseSpinLock(&HigherFilter->Lock, v45);
          if ( KeGetCurrentIrql() == 2 )
            KeStallExecutionProcessor(1u);
          else
            NdisMSleep(0x32u);
        }
        HigherFilter->Flags |= 0x2000u;
        KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
      }
      else
      {
        v5 = 0;
      }
    }
    v28 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
    if ( HigherFilter->MediaConnectState != MediaConnectStateConnected )
      v28 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
    a1->FilterIndicateReceiveNetBufferListsHandler = v28;
    memset(&v47, 0, sizeof(v47));
    v47.Header = (_NDIS_OBJECT_HEADER)7340440;
    v29 = Miniport;
    v47.StatusCode = 1073807383;
    if ( LowerFilter )
      v29 = LowerFilter;
    v47.StatusBufferSize = 40;
    v47.SourceHandle = v29;
    v47.StatusBuffer = &v48;
    KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
    v30 = v45;
    HigherFilter->Flags &= ~0x2000u;
    HigherFilter->LockThread = 0LL;
    KeReleaseSpinLock(&HigherFilter->Lock, v30);
    if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
      ndisFInvokeStatus(a1, &v47);
    else
      ndisFIndicateStatusInternal(a1, &v47);
    while ( 1 )
    {
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v45);
      v31 = HigherFilter->Flags;
      HigherFilter->LockThread = 0LL;
      if ( (v31 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock(&HigherFilter->Lock, v45);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
    }
    HigherFilter->Flags |= 0x2000u;
    KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    HwTimestampCapabilities = HigherFilter->HwTimestampCapabilities;
    if ( HwTimestampCapabilities )
    {
      v33 = a1->HwTimestampCapabilities == 0LL;
      v51 = *(_OWORD *)&HwTimestampCapabilities->Header.Type;
      v52 = *(_OWORD *)&HwTimestampCapabilities->CrossTimestamp;
      v53 = *(_OWORD *)&HwTimestampCapabilities->Reserved2;
      v54 = *(_QWORD *)&HwTimestampCapabilities->TimestampFlags.AllReceiveHw;
      if ( v33 )
      {
        v34 = ndisAllocateAndInitializeTimestampForFilter(HigherFilter->HwTimestampCapabilities);
        a1->HwTimestampCapabilities = v34;
        v5 = v34 != 0LL ? v5 : 0;
      }
      if ( v5 )
      {
        memset(&v47, 0, sizeof(v47));
        v47.Header = (_NDIS_OBJECT_HEADER)7340440;
        v35 = Miniport;
        v47.StatusCode = 1074073600;
        if ( LowerFilter )
          v35 = LowerFilter;
        v47.StatusBufferSize = 56;
        v47.SourceHandle = v35;
        v47.StatusBuffer = &v51;
        KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
        v36 = v45;
        HigherFilter->Flags &= ~0x2000u;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v36);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v47);
        else
          ndisFIndicateStatusInternal(a1, &v47);
      }
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
      v37 = v45;
      HigherFilter->Flags &= ~0x2000u;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v37);
    }
    while ( 1 )
    {
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(HigherFilter, &v45);
      v38 = HigherFilter->Flags;
      HigherFilter->LockThread = 0LL;
      if ( (v38 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock(&HigherFilter->Lock, v45);
      if ( KeGetCurrentIrql() == 2 )
        KeStallExecutionProcessor(1u);
      else
        NdisMSleep(0x32u);
    }
    HigherFilter->Flags |= 0x2000u;
    KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    HwTimestampCurrentConfig = HigherFilter->HwTimestampCurrentConfig;
    if ( HwTimestampCurrentConfig )
    {
      v33 = a1->HwTimestampCurrentConfig == 0LL;
      v51 = *(_OWORD *)&HwTimestampCurrentConfig->Header.Type;
      v52 = *(_OWORD *)&HwTimestampCurrentConfig->CrossTimestamp;
      v53 = *(_OWORD *)&HwTimestampCurrentConfig->Reserved2;
      v54 = *(_QWORD *)&HwTimestampCurrentConfig->TimestampFlags.AllReceiveHw;
      if ( v33 )
      {
        v40 = ndisAllocateAndInitializeTimestampForFilter(HigherFilter->HwTimestampCurrentConfig);
        a1->HwTimestampCurrentConfig = v40;
        v5 = v40 != 0LL ? v5 : 0;
      }
      if ( v5 )
      {
        memset(&v47, 0, sizeof(v47));
        v47.Header = (_NDIS_OBJECT_HEADER)7340440;
        v47.StatusCode = 1074073601;
        v47.StatusBuffer = &v51;
        if ( LowerFilter )
          Miniport = (_NDIS_MINIPORT_BLOCK *)LowerFilter;
        v47.StatusBufferSize = 56;
        v47.SourceHandle = Miniport;
        KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
        v41 = v45;
        HigherFilter->Flags &= ~0x2000u;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v41);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v47);
        else
          ndisFIndicateStatusInternal(a1, &v47);
      }
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
      v42 = v45;
      HigherFilter->Flags &= ~0x2000u;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v42);
    }
    p_Lock = &a1->Lock;
  }
  else
  {
    ndisMAcquireStInLockWithSpinLock(Miniport, &v45);
    v8 = Miniport->Offload;
    if ( v8 && v8->SupportsOffload )
    {
      p_TopCapabilities = &v8->TopCapabilities;
      v55[0] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v55[1] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v55[2] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v55[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v55[4] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      v55[5] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      v55[6] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize;
      v10 = *(_OWORD *)&p_TopCapabilities->IPsecV2.Encapsulation;
      p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
      v55[7] = v10;
      v55[8] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v55[9] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v55[10] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v55[11] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v55[12] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      *(_QWORD *)&v55[13] = *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      if ( !a1->Offload && (unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v5 = 0;
      }
      else
      {
        v11 = a1->Offload;
        v12 = v45;
        *(_OWORD *)&v11->OffloadCaps.Header.Type = v55[0];
        *(_OWORD *)((char *)&v11->OffloadCaps.Checksum.IPv4Receive + 4) = v55[1];
        *(_OWORD *)((char *)&v11->OffloadCaps.Checksum.IPv6Receive + 4) = v55[2];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v11->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v55[3];
        *(_OWORD *)&v11->OffloadCaps.IPsecV1.Supported.IPv4Options = v55[4];
        *(_OWORD *)&v11->OffloadCaps.LsoV2.IPv4.Encapsulation = v55[5];
        *(_OWORD *)&v11->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize = v55[6];
        v11 = (_NDIS_FILTER_TASK_OFFLOAD *)((char *)v11 + 128);
        v11[-1].OffloadCaps.UdpSegmentation.IPv6 = (_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6>)v55[7];
        *(_OWORD *)&v11->OffloadCaps.Header.Type = v55[8];
        *(_OWORD *)((char *)&v11->OffloadCaps.Checksum.IPv4Receive + 4) = v55[9];
        *(_OWORD *)((char *)&v11->OffloadCaps.Checksum.IPv6Receive + 4) = v55[10];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v11->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v55[11];
        *(_OWORD *)&v11->OffloadCaps.IPsecV1.Supported.IPv4Options = v55[12];
        *(_QWORD *)&v11->OffloadCaps.LsoV2.IPv4.Encapsulation = *(_QWORD *)&v55[13];
        v47.StatusBuffer = v55;
        v47.Header = (_NDIS_OBJECT_HEADER)7340440;
        v47.SourceHandle = Miniport;
        v47.StatusCode = 1073872902;
        v47.StatusBufferSize = 216;
        ndisMReleaseStInLockAndSpinLock(Miniport, v12);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v47);
        else
          ndisFIndicateStatusInternal(a1, &v47);
        ndisMAcquireStInLockWithSpinLock(Miniport, &v45);
      }
    }
    DWORD1(v48) = Miniport->MediaConnectState;
    DWORD2(v48) = Miniport->MediaDuplexState;
    v49 = *(_OWORD *)&Miniport->XmitLinkSpeed;
    v13 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFilterIndicateReceiveNetBufferLists;
    if ( Miniport->MediaConnectState != MediaConnectStateConnected )
      v13 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))ndisFakeFilterReceiveHandler;
    a1->FilterIndicateReceiveNetBufferListsHandler = v13;
    memset(&v47, 0, sizeof(v47));
    v47.StatusBuffer = &v48;
    v47.Header = (_NDIS_OBJECT_HEADER)7340440;
    v47.SourceHandle = Miniport;
    v47.StatusCode = 1073807383;
    v47.StatusBufferSize = 40;
    ndisMReleaseStInLockAndSpinLock(Miniport, v45);
    if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
      ndisFInvokeStatus(a1, &v47);
    else
      ndisFIndicateStatusInternal(a1, &v47);
    ndisMAcquireStInLockWithSpinLock(Miniport, &v45);
    TopHwTimestampCapabilities = Miniport->TopHwTimestampCapabilities;
    if ( TopHwTimestampCapabilities )
    {
      v33 = a1->HwTimestampCapabilities == 0LL;
      v51 = *(_OWORD *)&TopHwTimestampCapabilities->Header.Type;
      v52 = *(_OWORD *)&TopHwTimestampCapabilities->CrossTimestamp;
      v53 = *(_OWORD *)&TopHwTimestampCapabilities->Reserved2;
      v54 = *(_QWORD *)&TopHwTimestampCapabilities->TimestampFlags.AllReceiveHw;
      if ( v33 )
      {
        v43 = ndisAllocateAndInitializeTimestampForFilter(Miniport->TopHwTimestampCapabilities);
        a1->HwTimestampCapabilities = v43;
        v5 = v43 != 0LL ? v5 : 0;
      }
      if ( v5 )
      {
        memset(&v47, 0, sizeof(v47));
        v47.StatusBuffer = &v51;
        v47.Header = (_NDIS_OBJECT_HEADER)7340440;
        v47.SourceHandle = Miniport;
        v47.StatusCode = 1074073600;
        v47.StatusBufferSize = 56;
        ndisMReleaseStInLockAndSpinLock(Miniport, v45);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v47);
        else
          ndisFIndicateStatusInternal(a1, &v47);
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock(Miniport, v45);
    }
    ndisMAcquireStInLockWithSpinLock(Miniport, &v45);
    TopTimestampConfig = Miniport->TopTimestampConfig;
    if ( TopTimestampConfig )
    {
      v33 = a1->HwTimestampCurrentConfig == 0LL;
      v51 = *(_OWORD *)&TopTimestampConfig->Header.Type;
      v52 = *(_OWORD *)&TopTimestampConfig->CrossTimestamp;
      v53 = *(_OWORD *)&TopTimestampConfig->Reserved2;
      v54 = *(_QWORD *)&TopTimestampConfig->TimestampFlags.AllReceiveHw;
      if ( v33 )
      {
        v44 = ndisAllocateAndInitializeTimestampForFilter(Miniport->TopTimestampConfig);
        a1->HwTimestampCurrentConfig = v44;
        v5 = v44 != 0LL ? v5 : 0;
      }
      if ( v5 )
      {
        memset(&v47, 0, sizeof(v47));
        v47.StatusBuffer = &v51;
        v47.Header = (_NDIS_OBJECT_HEADER)7340440;
        v47.SourceHandle = Miniport;
        v47.StatusCode = 1074073601;
        v47.StatusBufferSize = 56;
        ndisMReleaseStInLockAndSpinLock(Miniport, v45);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v47);
        else
          ndisFIndicateStatusInternal(a1, &v47);
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock(Miniport, v45);
    }
  }
  XState = a1->XState;
  if ( a1->MediaConnectState == MediaConnectStateConnected )
  {
    v18 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFilterSendNetBufferLists;
    a1->XState = XState & 0xFE;
    v17 = ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    a1->XState = XState | 1;
    ndisUpdateFilterFakeStatus(a1);
    v17 = (void (__fastcall *)(void *, void *))NdisQueryOffloadState;
    v18 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFakeFilterSendHandler;
  }
  a1->FilterSendNetBufferListsHandler = v18;
  a1->FilterCancelSendNetBufferListsHandler = v17;
  KeAcquireSpinLockAtDpcLevel(p_Lock);
  v19 = NewIrql[0];
  a1->Flags &= ~0x2000u;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(p_Lock, v19);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x40u,
      (struct _GUID *)&WPP_852a249528343ec37be547ae98447114_Traceguids,
      a1);
}
