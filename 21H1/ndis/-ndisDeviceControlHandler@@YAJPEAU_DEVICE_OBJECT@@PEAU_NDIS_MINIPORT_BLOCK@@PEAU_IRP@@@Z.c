/*
 * XREFs of ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010E40
 * Callers:
 *     ?ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0012A50 (-ndisDeviceControlIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x1C0061480 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     ?ndisValidOid@@YAEPEAU_NDIS_USER_OPEN_CONTEXT@@K@Z @ 0x1C0008B54 (-ndisValidOid@@YAEPEAU_NDIS_USER_OPEN_CONTEXT@@K@Z.c)
 *     ?ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z @ 0x1C0008E50 (-ndisQueryDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@KPEAXI@Z.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B200 (WPP_RECORDER_SF_qDq.c)
 *     ?ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@3@Z @ 0x1C000C500 (-ndisQuerySetMiniportEx@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_R.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisReferenceWithTag @ 0x1C000DE10 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000E9D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C0012F28 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 *     NdisMSleep @ 0x1C0017320 (NdisMSleep.c)
 *     ?ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C001FF4C (-ndisGetAdapterHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ndisIsOidAllowedFromUsermode @ 0x1C003E360 (ndisIsOidAllowedFromUsermode.c)
 *     ndisIsOidAllowedFromUsermode_0 @ 0x1C003E38C (ndisIsOidAllowedFromUsermode_0.c)
 *     ?ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C003F0B0 (-ndisReportRefcountImbalance@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     memcmp @ 0x1C003F2F0 (memcmp.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005E4F0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x1C006A9B0 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     ?ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006AAC0 (-ndisGetAdapterRssInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006AD4C (-ndisGetHardwareInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetPerformanceCounters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006B1DC (-ndisGetPerformanceCounters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006B3C4 (-ndisGetPowerInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z @ 0x1C006BA38 (-ndisMethodDeviceOid@@YAHPEAU_NDIS_USER_OPEN_CONTEXT@@PEAU_NDIS_OID_REQUEST@@PEAEII@Z.c)
 *     ?ndisSetPerfTrackParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z @ 0x1C006BB88 (-ndisSetPerfTrackParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAH@Z.c)
 *     ?ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00727F0 (-ndisMGetLogData@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIovIoctlAttach@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0077D10 (-ndisIovIoctlAttach@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIovIoctlInvalidate@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0077D68 (-ndisIovIoctlInvalidate@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIovIoctlNotification@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0077E70 (-ndisIovIoctlNotification@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007CD58 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BDFC0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE144 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00BE2F0 (NdisFreeRefCount.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C011DE20 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C012046C (-ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDeviceControlHandler(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3)
{
  struct _IRP *v3; // r15
  struct _NDIS_MINIPORT_BLOCK *v4; // r13
  void *v6; // r14
  unsigned int PerformanceCounters; // r12d
  bool v8; // di
  signed __int32 v9; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _FILE_OBJECT *FileObject; // rax
  struct _NDIS_MINIPORT_BLOCK *v13; // rbx
  struct _NDIS_USER_OPEN_CONTEXT *FsContext; // r9
  KIRQL v15; // al
  struct _NDIS_M_DRIVER_BLOCK *v16; // rsi
  KIRQL v17; // r14
  _REFERENCE_EX *p_Ref; // r15
  int v19; // ebx
  KIRQL v20; // di
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v23; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v25; // r13
  struct _NDIS_MINIPORT_BLOCK *v26; // r12
  unsigned int v27; // r13d
  _NDIS_BIND_PATHS *BindPaths; // rdx
  _NDIS_BIND_PATHS *v29; // rcx
  bool v30; // zf
  char v31; // si
  KIRQL v32; // r14
  struct _NDIS_REFCOUNT_BLOCK *v33; // rcx
  unsigned int v34; // ecx
  unsigned int *p_Number; // rax
  __int64 v36; // r13
  KIRQL v37; // al
  ULONG_PTR v38; // r10
  KIRQL v39; // di
  ULONG_PTR v40; // rbx
  unsigned int v41; // r8d
  __int64 v42; // r9
  unsigned __int8 v43; // r8
  unsigned __int8 v44; // dl
  _BYTE *v45; // rcx
  char v46; // al
  char v47; // bl
  struct _NDIS_M_DRIVER_BLOCK *v48; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  void *v50; // rcx
  void *v51; // rcx
  _QWORD *v52; // rcx
  _QWORD *v53; // rbx
  unsigned int LowPart; // edx
  ULONG Length; // r14d
  void *MasterIrp; // rsi
  unsigned int Options; // ebx
  unsigned int v58; // ebx
  PVOID v59; // rcx
  PVOID v60; // r11
  __int64 v61; // rax
  unsigned int *v62; // r11
  int v63; // eax
  __int64 v64; // rdi
  unsigned __int64 v65; // r14
  _IRP::<unnamed_type_AssociatedIrp> v66; // rbx
  unsigned int Blink_low; // r10d
  unsigned int v68; // ecx
  int v69; // r8d
  struct _NDIS_USER_OPEN_CONTEXT *v70; // r9
  __int64 v71; // r10
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned int v74; // edx
  unsigned int v75; // ecx
  char *v76; // rsi
  int v77; // ecx
  int v78; // ecx
  int v79; // ecx
  UINT BytesNeeded; // eax
  NDIS_OID v81; // esi
  struct _NDIS_USER_OPEN_CONTEXT *v82; // r9
  _MDL *MdlAddress; // rcx
  SIZE_T ByteCount; // rdi
  PVOID MappedSystemVa; // rax
  PVOID PoolWithTag; // rax
  void *v87; // rbx
  unsigned int BytesWritten; // eax
  __int64 v89; // rax
  unsigned int v90; // ebx
  unsigned int *v91; // rdi
  unsigned int v92; // ebx
  const void *v93; // rsi
  _MDL *v94; // rcx
  ULONG v95; // esi
  unsigned __int8 *v96; // rax
  _IRP *v97; // r10
  unsigned __int8 *v98; // r10
  unsigned int v99; // r11d
  char v100; // bl
  int v101; // eax
  int v102; // eax
  struct _NDIS_MINIPORT_BLOCK *v103; // r14
  KIRQL v104; // si
  ULONG_PTR NsiRefCountTracker; // r8
  unsigned int v106; // edx
  ULONG_PTR v107; // rbx
  struct _KEVENT *NsiRequestsCompletedEvent; // rcx
  KIRQL v109; // al
  ULONG_PTR v110; // r8
  KIRQL v111; // si
  __int64 v112; // r10
  unsigned __int8 v113; // r9
  unsigned __int8 v114; // cl
  _BYTE *v115; // rdx
  char v116; // al
  ULONG_PTR v117; // rbx
  unsigned int v118; // edx
  int v119; // ebx
  struct _KEVENT *RemoveReadyEvent; // rcx
  __int64 v121; // r10
  unsigned __int8 v122; // r9
  unsigned __int8 v123; // cl
  _BYTE *v124; // rdx
  char v125; // al
  ULONG Priority[2]; // [rsp+28h] [rbp-D8h]
  unsigned int *v127; // [rsp+30h] [rbp-D0h]
  int v128; // [rsp+50h] [rbp-B0h] BYREF
  bool v129; // [rsp+54h] [rbp-ACh]
  PVOID P; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v131; // [rsp+60h] [rbp-A0h] BYREF
  KIRQL v132; // [rsp+61h] [rbp-9Fh]
  unsigned int v133; // [rsp+64h] [rbp-9Ch] BYREF
  struct _NDIS_USER_OPEN_CONTEXT *v134; // [rsp+68h] [rbp-98h]
  int v135; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h]
  char v137[8]; // [rsp+80h] [rbp-80h]
  unsigned int v138; // [rsp+88h] [rbp-78h]
  struct _NDIS_MINIPORT_BLOCK *v139; // [rsp+90h] [rbp-70h]
  char v140[8]; // [rsp+98h] [rbp-68h]
  _IO_STACK_LOCATION *v141; // [rsp+A0h] [rbp-60h]
  struct _NDIS_MINIPORT_BLOCK *v142; // [rsp+A8h] [rbp-58h]
  __int128 v143; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v144; // [rsp+C0h] [rbp-40h]
  struct _IRP *v145; // [rsp+D8h] [rbp-28h]
  struct _NDIS_OID_REQUEST v146; // [rsp+E0h] [rbp-20h] BYREF

  v3 = a3;
  v145 = a3;
  v4 = a2;
  v142 = a2;
  memset(&v146, 0, 0xF8uLL);
  v129 = 1;
  P = 0LL;
  v133 = 0;
  v128 = -1073741823;
  v6 = 0LL;
  v143 = 0LL;
  Src = 0LL;
  PerformanceCounters = 0;
  v144 = 0LL;
  v138 = 0;
  v8 = 0;
  v131 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x17u,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)v4,
      v3);
  v9 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v9 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  v3->IoStatus.Status = 259;
  v3->IoStatus.Information = 0LL;
  v141 = CurrentStackLocation;
  FileObject = CurrentStackLocation->FileObject;
  if ( !FileObject )
  {
    PerformanceCounters = -1073741823;
    goto LABEL_9;
  }
  if ( v4->Header.Type != 17 )
  {
    v129 = 0;
    PerformanceCounters = ndisDummyHandler(a1, &v4->Header, v3);
    goto LABEL_9;
  }
  v13 = 0LL;
  FsContext = (struct _NDIS_USER_OPEN_CONTEXT *)FileObject->FsContext;
  v134 = FsContext;
  *(_QWORD *)v137 = 0LL;
  v139 = 0LL;
  v135 = 1;
  if ( !v4->BindPaths )
  {
    *(_QWORD *)v137 = 0LL;
    goto LABEL_94;
  }
  v15 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v16 = ndisMiniDriverList;
  v17 = v15;
  *(_QWORD *)v140 = ndisMiniDriverList;
  if ( ndisMiniDriverList )
  {
LABEL_20:
    p_Ref = &v16->Ref;
    v19 = 1;
    v20 = KeAcquireSpinLockRaiseToDpc(&v16->Ref.SpinLock);
    if ( !v16->Ref.Closing )
    {
      ReferenceCount = v16->Ref.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v19 = 2;
      }
      else
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v16->Ref.RefCountTracker;
        v16->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker, 8u);
        v19 = 0;
      }
    }
    KeReleaseSpinLock(&v16->Ref.SpinLock, v20);
    if ( v19 )
    {
      v16 = v16->NextDriver;
      goto LABEL_88;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v17);
    v23 = KeAcquireSpinLockRaiseToDpc(&v16->Ref.SpinLock);
    MiniportQueue = v16->MiniportQueue;
    v25 = v23;
    v132 = v23;
    if ( !MiniportQueue )
      goto LABEL_49;
    v26 = v139;
    v27 = v135;
    while ( 1 )
    {
      BindPaths = MiniportQueue->BindPaths;
      if ( BindPaths )
      {
        if ( BindPaths->Number >= v27 )
        {
          v29 = v142->BindPaths;
          if ( v29->Paths[0].Length == BindPaths->Paths[0].Length
            && !memcmp(v29->Paths[0].Buffer, BindPaths->Paths[0].Buffer, v29->Paths[0].Length) )
          {
            break;
          }
        }
      }
LABEL_47:
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( !MiniportQueue )
      {
        v135 = v27;
        v25 = v132;
        v139 = v26;
        PerformanceCounters = v138;
LABEL_49:
        KeReleaseSpinLock(&p_Ref->SpinLock, v25);
        v36 = *(_QWORD *)v140;
        v17 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v16 = *(struct _NDIS_M_DRIVER_BLOCK **)(*(_QWORD *)v140 + 8LL);
        v37 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
        v38 = (ULONG_PTR)p_Ref->RefCountTracker;
        v39 = v37;
        if ( v38 - 2 > 1 )
        {
          if ( v38 < 2 )
            ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)p_Ref->RefCountTracker, 0LL);
          if ( *(_BYTE *)(v38 + 2) <= 8u )
            ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)p_Ref->RefCountTracker, 8uLL);
          if ( *(_BYTE *)(v38 + 1) )
          {
            if ( *(_BYTE *)(v38 + 1) == 1 )
            {
              v40 = v38 + 520;
              v41 = *(_DWORD *)(v38 + 576);
              if ( v41 >> 17 < 0x3FFE && (unsigned __int16)v41 >> 1 == (v41 >> 17) + 1 )
              {
                ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v38 + 520));
                *(_DWORD *)(v40 + 56) &= 0x10001u;
                goto LABEL_66;
              }
              if ( (unsigned __int16)v41 >> 1 || (v41 & 1) != 0 )
              {
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v38 + 520), 0);
                goto LABEL_66;
              }
LABEL_308:
              ndisReportRefcountImbalance(v38, 8u);
            }
          }
          else
          {
            v42 = *(_QWORD *)(v38 + 8);
            if ( !v42 || (v43 = *(_BYTE *)(v38 + 3), v44 = 0, !v43) )
            {
LABEL_65:
              if ( _bittestandreset((signed __int32 *)(v38 + 16), 8u) )
                goto LABEL_66;
              goto LABEL_308;
            }
            while ( 1 )
            {
              v45 = (_BYTE *)(v42 + 2LL * v44);
              if ( *v45 == 8 )
              {
                v46 = v45[1];
                if ( v46 )
                  break;
              }
              if ( ++v44 >= v43 )
                goto LABEL_65;
            }
            v45[1] = v46 - 1;
          }
        }
LABEL_66:
        v30 = p_Ref->ReferenceCount-- == 1;
        if ( v30 )
        {
          v47 = 1;
          if ( !p_Ref->ZeroBased )
          {
            NdisFreeRefCount((ULONG_PTR)p_Ref->RefCountTracker);
            p_Ref->RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
          }
        }
        else
        {
          v47 = 0;
        }
        KeReleaseSpinLock(&p_Ref->SpinLock, v39);
        if ( v47 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0x17u,
              (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
              v36);
          v48 = ndisMiniDriverList;
          p_NextDriver = &ndisMiniDriverList;
          if ( ndisMiniDriverList )
          {
            while ( v48 != (struct _NDIS_M_DRIVER_BLOCK *)v36 )
            {
              p_NextDriver = &v48->NextDriver;
              v48 = v48->NextDriver;
              if ( !v48 )
                goto LABEL_79;
            }
            *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(v36 + 8);
            ObfDereferenceObject(ndisDriverObject);
          }
LABEL_79:
          v50 = *(void **)(v36 + 888);
          if ( v50 )
          {
            ExFreePoolWithTag(v50, 0);
            *(_QWORD *)(v36 + 888) = 0LL;
          }
          v51 = *(void **)(v36 + 32);
          if ( v51 )
          {
            ExFreePoolWithTag(v51, 0);
            *(_QWORD *)(v36 + 32) = 0LL;
          }
          if ( (*(_BYTE *)(v36 + 26) & 1) != 0 )
          {
            v52 = *(_QWORD **)(v36 + 96);
            if ( v52 )
            {
              do
              {
                v53 = (_QWORD *)*v52;
                ExFreePoolWithTag(v52, 0);
                v52 = v53;
              }
              while ( v53 );
            }
          }
          KeSetEvent((PRKEVENT)(v36 + 368), 0, 0);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x14u,
              0x18u,
              (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
              v36);
        }
LABEL_88:
        *(_QWORD *)v140 = v16;
        if ( !v16 )
        {
          v3 = v145;
          v8 = 0;
          v4 = v142;
          v13 = *(struct _NDIS_MINIPORT_BLOCK **)v137;
          goto LABEL_90;
        }
        goto LABEL_20;
      }
    }
    KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
    v30 = (MiniportQueue->Flags & 0x80200020) == 0;
    MiniportQueue->MiniportThread = KeGetCurrentThread();
    if ( !v30
      || (MiniportQueue->PnPFlags & 0x1084110) != 0
      || MiniportQueue->PnPDeviceState != NdisPnPDeviceStarted
      || MiniportQueue->CurrentDevicePowerState != PowerDeviceD0 )
    {
LABEL_45:
      MiniportQueue->MiniportThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
      if ( v26 )
      {
        ndisDereferenceMiniportForNsi(v26, NSIREF_IOCTL, 0x57u);
        v26 = 0LL;
      }
      goto LABEL_47;
    }
    v31 = 1;
    v32 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
    if ( !MiniportQueue->Ref.Closing )
    {
      v33 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
      if ( v33 )
        NdisReferenceWithTag(v33, 0x57u);
      v34 = MiniportQueue->Ref.ReferenceCount;
      MiniportQueue->Ref.ReferenceCount = v34 + 1;
      if ( v34 != -1 )
        goto LABEL_41;
      MiniportQueue->Ref.ReferenceCount = -1;
    }
    v31 = 0;
LABEL_41:
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v127) = MiniportQueue->Ref.ReferenceCount;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0xCu,
        (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
        (char)MiniportQueue,
        v127);
    }
    KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v32);
    if ( v31 )
    {
      v26 = *(struct _NDIS_MINIPORT_BLOCK **)v137;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker, 0);
      p_Number = &MiniportQueue->BindPaths->Number;
      ++MiniportQueue->NsiOpenReferences;
      *(_QWORD *)v137 = MiniportQueue;
      v27 = *p_Number;
    }
    goto LABEL_45;
  }
LABEL_90:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v17);
  CurrentStackLocation = v141;
  if ( v13 )
  {
    FsContext = (struct _NDIS_USER_OPEN_CONTEXT *)&v143;
    *(_DWORD *)((char *)&v144 + 9) = 0;
    v4 = v13;
    *(_WORD *)((char *)&v144 + 13) = 0;
    v6 = 0LL;
    HIBYTE(v144) = 0;
    *((_QWORD *)&v143 + 1) = v13;
    *(_QWORD *)&v144 = v13->OidList;
    BYTE8(v144) = *((_BYTE *)v134 + 24);
    *(_QWORD *)&v143 = *(_QWORD *)v134;
    v134 = (struct _NDIS_USER_OPEN_CONTEXT *)&v143;
  }
  else
  {
    FsContext = v134;
    v6 = Src;
  }
LABEL_94:
  if ( (v4->PnPFlags & 0x4010) != 0 )
  {
    PerformanceCounters = -1073741436;
    goto LABEL_255;
  }
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart > 0x226044 )
  {
    switch ( LowPart )
    {
      case 0x226048u:
        v128 = ndisIovIoctlAttach(v4, v3);
        PerformanceCounters = v128;
        if ( v128 == 259 )
          v129 = 0;
        else
LABEL_112:
          v8 = 1;
        goto LABEL_241;
      case 0x22604Cu:
      case 0x226050u:
        v102 = ndisIovIoctlAttach(v4, v3);
        break;
      case 0x226054u:
        v102 = ndisIovIoctlInvalidate(v4, v3);
        break;
      default:
LABEL_235:
        PerformanceCounters = -1073741822;
        goto LABEL_241;
    }
  }
  else
  {
    if ( LowPart != 2252868 )
    {
      switch ( LowPart )
      {
        case 0x170002u:
          if ( CurrentStackLocation->Parameters.Create.Options < 4 )
          {
            PerformanceCounters = -1073741811;
            goto LABEL_241;
          }
          v81 = *(_DWORD *)v3->AssociatedIrp.MasterIrp;
          if ( !(unsigned __int8)ndisIsOidAllowedFromUsermode(v81) )
          {
            PerformanceCounters = -1073741790;
            goto LABEL_241;
          }
          if ( !ndisValidOid(v82, v81) )
          {
            PerformanceCounters = -1073741811;
            goto LABEL_241;
          }
          MdlAddress = v3->MdlAddress;
          if ( MdlAddress )
          {
            ByteCount = MdlAddress->ByteCount;
            if ( (_DWORD)ByteCount )
            {
              if ( (MdlAddress->MdlFlags & 5) != 0 )
                MappedSystemVa = MdlAddress->MappedSystemVa;
              else
                MappedSystemVa = MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0LL, 0, 0x40000000u);
              Src = MappedSystemVa;
              if ( !MappedSystemVa )
                goto LABEL_178;
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ByteCount, 0x6D61444Eu);
              v87 = PoolWithTag;
              if ( !PoolWithTag )
              {
                v8 = 0;
                PerformanceCounters = -1073741670;
                goto LABEL_241;
              }
              v6 = Src;
              memmove(PoolWithTag, Src, ByteCount);
LABEL_184:
              v128 = ndisQueryDeviceOid(v134, &v146, v81, v87, ByteCount);
              BytesWritten = v146.DATA.QUERY_INFORMATION.BytesWritten;
              v133 = v146.DATA.QUERY_INFORMATION.BytesWritten;
              if ( v146.DATA.QUERY_INFORMATION.BytesWritten > (unsigned int)ByteCount )
              {
                BytesWritten = 0;
                v128 = -1073676266;
                v133 = 0;
              }
              v30 = v128 == 0;
              v8 = 1;
              v3->IoStatus.Information = BytesWritten;
              if ( v30 && BytesWritten && v6 )
              {
                if ( !v87 )
                  goto LABEL_241;
                memmove(v6, v87, BytesWritten);
              }
              if ( v87 )
              {
                ExFreePoolWithTag(v87, 0);
                v59 = P;
                goto LABEL_242;
              }
              goto LABEL_241;
            }
          }
          else
          {
            LODWORD(ByteCount) = 0;
          }
          v87 = 0LL;
          goto LABEL_184;
        case 0x170006u:
          v89 = *((_QWORD *)FsContext + 2);
          if ( !v89 )
            goto LABEL_194;
          v90 = *(_DWORD *)v89;
          v91 = *(unsigned int **)(v89 + 8);
          goto LABEL_203;
        case 0x17000Eu:
          goto LABEL_197;
        case 0x17001Eu:
          if ( !v3->MdlAddress )
            goto LABEL_114;
          v128 = ndisMGetLogData(v4, v3);
          PerformanceCounters = v128;
          if ( v128 != 259 )
            v8 = 1;
          goto LABEL_241;
        case 0x170028u:
        case 0x17002Cu:
          Length = CurrentStackLocation->Parameters.Read.Length;
          MasterIrp = v3->AssociatedIrp.MasterIrp;
          if ( LowPart == 1507372 )
          {
            Options = CurrentStackLocation->Parameters.Create.Options;
            if ( Options < 4 || (Options & 3) != 0 || ((unsigned __int8)MasterIrp & 3) != 0 )
            {
LABEL_114:
              PerformanceCounters = -1073741811;
              goto LABEL_241;
            }
            v58 = Options >> 2;
            P = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v58, 0x6D61444Eu);
            v59 = P;
            if ( !P )
            {
              v128 = -1073741670;
              v8 = 0;
              goto LABEL_242;
            }
            memmove(P, MasterIrp, 4LL * v58);
            v60 = P;
          }
          else
          {
            v61 = *((_QWORD *)FsContext + 2);
            if ( !v61 )
            {
LABEL_194:
              PerformanceCounters = -1073741808;
              goto LABEL_241;
            }
            v58 = *(_DWORD *)v61;
            v60 = *(PVOID *)(v61 + 8);
          }
          if ( !(unsigned __int8)ndisIsOidAllowedFromUsermode_0(v60, v58) )
          {
            v8 = 0;
            PerformanceCounters = -1073741790;
            goto LABEL_241;
          }
          Priority[0] = Length;
          v63 = ndisQueryStatisticsOids(
                  v4,
                  v134,
                  v62,
                  v58,
                  (unsigned __int8 *)MasterIrp,
                  *(SIZE_T *)Priority,
                  &v133,
                  1u,
                  &v131);
          goto LABEL_111;
        case 0x170030u:
          if ( CurrentStackLocation->Parameters.Create.Options < 0xC )
            goto LABEL_114;
          v97 = v3->AssociatedIrp.MasterIrp;
          if ( ((unsigned __int8)v97 & 7) != 0 || !ndisValidOid(FsContext, *(_DWORD *)&v97->Type) )
            goto LABEL_114;
          v128 = ndisMethodDeviceOid(v134, &v146, v98, v99, v141->Parameters.Read.Length);
          v8 = 1;
          v133 = v146.DATA.METHOD_INFORMATION.BytesWritten;
          v3->IoStatus.Information = v146.DATA.METHOD_INFORMATION.BytesWritten + 8;
          goto LABEL_241;
        case 0x17003Eu:
          v131 = 1;
LABEL_197:
          v92 = CurrentStackLocation->Parameters.Create.Options;
          if ( v92 < 4 )
            goto LABEL_114;
          if ( (v92 & 3) != 0 )
            goto LABEL_114;
          v93 = v3->AssociatedIrp.MasterIrp;
          if ( ((unsigned __int8)v93 & 3) != 0 )
            goto LABEL_114;
          v90 = v92 >> 2;
          P = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v90, 0x6D61444Eu);
          v59 = P;
          if ( !P )
          {
            v128 = -1073741670;
            v8 = 0;
            goto LABEL_242;
          }
          memmove(P, v93, 4LL * v90);
          v91 = (unsigned int *)P;
LABEL_203:
          if ( !(unsigned __int8)ndisIsOidAllowedFromUsermode_0(v91, v90) )
          {
            v8 = 0;
            PerformanceCounters = -1073741790;
            goto LABEL_241;
          }
          v94 = v3->MdlAddress;
          if ( !v94
            || (v95 = v94->ByteCount) == 0
            || ((v94->MdlFlags & 5) == 0
              ? (v96 = (unsigned __int8 *)MmMapLockedPagesSpecifyCache(v94, 0, MmCached, 0LL, 0, 0x40000000u))
              : (v96 = (unsigned __int8 *)v94->MappedSystemVa),
                !v96) )
          {
LABEL_178:
            v128 = -1073741670;
            v8 = 0;
            goto LABEL_241;
          }
          Priority[0] = v95;
          v63 = ndisQueryStatisticsOids(v4, v134, v91, v90, v96, *(SIZE_T *)Priority, &v133, 0, &v131);
LABEL_111:
          v128 = v63;
          v3->IoStatus.Information = v133;
          goto LABEL_112;
        case 0x170068u:
          v128 = 0;
          PerformanceCounters = ndisSetPerfTrackParameters(v4, v3, &v128);
          v8 = 1;
          goto LABEL_241;
        case 0x17006Cu:
          v128 = 0;
          PerformanceCounters = ndisGetPerformanceCounters(v4, v3, &v128);
          v8 = 1;
          goto LABEL_241;
        case 0x170070u:
          v128 = 0;
          PerformanceCounters = ndisGetHardwareInfo(v4, v3, &v128);
          v8 = 1;
          goto LABEL_241;
        case 0x170078u:
          v128 = 0;
          PerformanceCounters = ndisGetPowerInfo(v4, v3, &v128);
          v8 = 1;
          goto LABEL_241;
        case 0x170090u:
          PerformanceCounters = ndisGetRdmaCapabilities(v4, v3);
          v128 = PerformanceCounters;
          v8 = 1;
          goto LABEL_241;
        case 0x170094u:
          v128 = 0;
          PerformanceCounters = ndisGetAdapterHardwareInfo(v4, v3, &v128);
          v8 = 1;
          goto LABEL_241;
        case 0x170098u:
          v128 = 0;
          PerformanceCounters = ndisGetAdapterRssInfo(v4, v3, &v128);
          v8 = 1;
          goto LABEL_241;
        case 0x17009Cu:
          v64 = CurrentStackLocation->Parameters.Create.Options;
          v65 = CurrentStackLocation->Parameters.Read.Length;
          v66.MasterIrp = (_IRP *)v3->AssociatedIrp;
          if ( (unsigned int)v64 < 0x2C )
            goto LABEL_150;
          if ( (unsigned int)v65 < 0x2C )
            goto LABEL_150;
          if ( LOBYTE(v66.MasterIrp->Type) != 0xB9 )
            goto LABEL_150;
          if ( v66.MasterIrp->Size < 0x2Cu )
            goto LABEL_150;
          Blink_low = LOWORD(v66.MasterIrp->ThreadListEntry.Blink);
          if ( Blink_low < 0x2C )
            goto LABEL_150;
          v68 = CurrentStackLocation->Parameters.Create.Options;
          if ( (unsigned int)v64 >= (unsigned int)v65 )
            v68 = CurrentStackLocation->Parameters.Read.Length;
          if ( Blink_low > v68 )
            goto LABEL_150;
          if ( !HIBYTE(v66.MasterIrp->Type) )
          {
            v8 = 0;
            PerformanceCounters = -1071448060;
            goto LABEL_241;
          }
          if ( !(unsigned __int8)ndisIsOidAllowedFromUsermode(HIDWORD(v66.MasterIrp->MdlAddress)) )
          {
            v8 = 0;
            PerformanceCounters = -1073741790;
            goto LABEL_241;
          }
          v72 = *((_QWORD *)v70 + 1);
          if ( (*(_BYTE *)(v72 + 32) >= 6u || (v69 & 0xFF000000) != 0xFF000000) && (*(_DWORD *)(v72 + 120) & 0x80u) == 0 )
          {
            v73 = *((_QWORD *)v70 + 2);
            if ( !v73 )
              goto LABEL_138;
            v74 = *(_DWORD *)(v73 + 4);
            v75 = 0;
            if ( v74 )
            {
              do
              {
                if ( *(_DWORD *)(*(_QWORD *)(v73 + 16) + 4LL * v75) == v69 )
                  break;
                ++v75;
              }
              while ( v75 < v74 );
              v70 = v134;
            }
            if ( v75 >= v74 )
            {
LABEL_138:
              v8 = 0;
              PerformanceCounters = -1073741637;
              goto LABEL_241;
            }
          }
          v76 = (char *)v66.MasterIrp + v71;
          if ( ((LOBYTE(v66.MasterIrp) + (_BYTE)v71) & 3) != 0 )
          {
            v8 = 0;
            PerformanceCounters = -2147483646;
            goto LABEL_241;
          }
          if ( !*((_BYTE *)v70 + 24) && (*(_DWORD *)&v66.MasterIrp->AllocationProcessorNumber & 0xFFFFFFFD) != 0 )
          {
            v8 = 0;
            PerformanceCounters = -1073741790;
            goto LABEL_241;
          }
          *(_DWORD *)&v146.NdisReserved[16] |= 8u;
          *(_QWORD *)&v146.NdisReserved[32] = &ndisIntReqIoctl;
          v146.Header = (NDIS_OBJECT_HEADER)15466902;
          v146.DATA.QUERY_INFORMATION.Oid = HIDWORD(v66.MasterIrp->MdlAddress);
          v146.RequestType = *(_DWORD *)&v66.MasterIrp->AllocationProcessorNumber;
          v146.PortNumber = (NDIS_PORT_NUMBER)v66.MasterIrp->MdlAddress;
          v146.DATA.QUERY_INFORMATION.InformationBuffer = (char *)v66.MasterIrp + v71;
          v146.DATA.QUERY_INFORMATION.InformationBufferLength = 0;
          if ( (unsigned int)v64 < (unsigned int)v65 )
            memset((char *)v66.MasterIrp + v64, 0, (unsigned int)(v65 - v64));
          v77 = *(_DWORD *)&v66.MasterIrp->AllocationProcessorNumber;
          if ( !v77 )
            goto LABEL_153;
          v78 = v77 - 1;
          if ( v78 )
          {
            v79 = v78 - 1;
            if ( v79 )
            {
              if ( v79 != 10 )
              {
LABEL_150:
                v8 = 0;
                PerformanceCounters = -1073741811;
                goto LABEL_241;
              }
              v146.DATA.QUERY_INFORMATION.InformationBufferLength = v64 - LOWORD(v66.MasterIrp->ThreadListEntry.Blink);
              v146.DATA.QUERY_INFORMATION.BytesWritten = v65 - LOWORD(v66.MasterIrp->ThreadListEntry.Blink);
              v146.DATA.QUERY_INFORMATION.BytesNeeded = v66.MasterIrp->Flags;
            }
            else
            {
LABEL_153:
              v146.DATA.QUERY_INFORMATION.InformationBufferLength = v65 - LOWORD(v66.MasterIrp->ThreadListEntry.Blink);
              memset(v76, 0, v146.DATA.QUERY_INFORMATION.InformationBufferLength);
            }
          }
          else
          {
            v146.DATA.QUERY_INFORMATION.InformationBufferLength = v64 - LOWORD(v66.MasterIrp->ThreadListEntry.Blink);
          }
          v146.Timeout = *(&v66.MasterIrp->Flags + 1);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qDq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              v69,
              0x18u,
              (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
              (char)&v146,
              v146.DATA.QUERY_INFORMATION.Oid,
              v4);
          HIDWORD(v66.MasterIrp->ThreadListEntry.Flink) = ndisQuerySetMiniportEx(
                                                            *((struct _NDIS_MINIPORT_BLOCK **)v134 + 1),
                                                            0LL,
                                                            &v146,
                                                            0,
                                                            0LL,
                                                            0LL);
          switch ( v146.RequestType )
          {
            case NdisRequestQueryInformation:
              goto LABEL_162;
            case NdisRequestSetInformation:
              HIDWORD(v66.MasterIrp->AssociatedIrp.SystemBuffer) = v146.DATA.QUERY_INFORMATION.BytesWritten;
              break;
            case NdisRequestQueryStatistics:
LABEL_162:
              v66.MasterIrp->AssociatedIrp.IrpCount = v146.DATA.QUERY_INFORMATION.BytesWritten;
              break;
            case NdisRequestMethod:
              v66.MasterIrp->AssociatedIrp.MasterIrp = *(_IRP **)&v146.DATA.METHOD_INFORMATION.BytesWritten;
              BytesNeeded = v146.DATA.METHOD_INFORMATION.BytesNeeded;
LABEL_164:
              LODWORD(v66.MasterIrp->ThreadListEntry.Flink) = BytesNeeded;
LABEL_165:
              v3->IoStatus.Information = v65;
              v8 = 1;
              v128 = 0;
              v59 = 0LL;
              goto LABEL_242;
            default:
              goto LABEL_165;
          }
          BytesNeeded = v146.DATA.QUERY_INFORMATION.BytesNeeded;
          goto LABEL_164;
        case 0x1700A8u:
          v100 = *((_BYTE *)FsContext + 24);
          if ( v100 )
            ndisMiniportFatalError(v4, NdisMEventErr_Min);
          v101 = 0;
          v8 = 1;
          if ( !v100 )
            v101 = -1073741790;
          PerformanceCounters = v101;
          v128 = v101;
          goto LABEL_241;
        case 0x1700B0u:
          PerformanceCounters = ndisGetPdInfo(v4, v3);
          v128 = PerformanceCounters;
          v8 = 1;
          goto LABEL_241;
        default:
          goto LABEL_235;
      }
    }
    v102 = ndisIovIoctlNotification(v4, v3);
  }
  v128 = v102;
  PerformanceCounters = v102;
  v8 = v102 != 259;
  v129 = v102 != 259;
LABEL_241:
  v59 = P;
LABEL_242:
  if ( (PerformanceCounters & 0xC0230000) == 0xC0230000 )
    PerformanceCounters = (unsigned __int16)PerformanceCounters | 0xC0010000;
  if ( v8 )
  {
    if ( v128 == -1073676268 )
    {
      PerformanceCounters = -2147483643;
    }
    else if ( v128 == -1073741637 )
    {
      PerformanceCounters = -1073741637;
      if ( v131 )
        PerformanceCounters = 0;
    }
    else if ( v128 )
    {
      PerformanceCounters = -1073741823;
    }
  }
  if ( v59 )
    ExFreePoolWithTag(v59, 0);
LABEL_255:
  v103 = *(struct _NDIS_MINIPORT_BLOCK **)v137;
  if ( !*(_QWORD *)v137 )
    goto LABEL_9;
  v104 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)v137 + 96LL));
  NsiRefCountTracker = (ULONG_PTR)v103->NsiRefCountTracker;
  v103->MiniportThread = KeGetCurrentThread();
  if ( NsiRefCountTracker - 2 > 1 )
  {
    if ( NsiRefCountTracker <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, NsiRefCountTracker, 0LL);
    if ( !*(_BYTE *)(NsiRefCountTracker + 2) )
      ndisBugCheckEx(0x1EuLL, 2uLL, NsiRefCountTracker, 0LL);
    if ( *(_BYTE *)(NsiRefCountTracker + 1) )
    {
      if ( *(_BYTE *)(NsiRefCountTracker + 1) == 1 )
      {
        v106 = *(_DWORD *)(NsiRefCountTracker + 64);
        v107 = NsiRefCountTracker + 8;
        if ( v106 >> 17 < 0x3FFE && (unsigned __int16)v106 >> 1 == (v106 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(NsiRefCountTracker + 8));
          *(_DWORD *)(v107 + 56) &= 0x10001u;
          goto LABEL_264;
        }
        if ( (unsigned __int16)v106 >> 1 || (v106 & 1) != 0 )
        {
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(NsiRefCountTracker + 8), 0);
          goto LABEL_264;
        }
LABEL_314:
        ndisReportRefcountImbalance(NsiRefCountTracker, 0);
      }
    }
    else
    {
      v112 = *(_QWORD *)(NsiRefCountTracker + 8);
      if ( !v112 || (v113 = *(_BYTE *)(NsiRefCountTracker + 3), v114 = 0, !v113) )
      {
LABEL_281:
        if ( _bittestandreset((signed __int32 *)(NsiRefCountTracker + 16), 0) )
          goto LABEL_264;
        goto LABEL_314;
      }
      while ( 1 )
      {
        v115 = (_BYTE *)(v112 + 2LL * v114);
        if ( !*v115 )
        {
          v116 = v115[1];
          if ( v116 )
            break;
        }
        if ( ++v114 >= v113 )
          goto LABEL_281;
      }
      v115[1] = v116 - 1;
    }
  }
LABEL_264:
  v30 = v103->NsiOpenReferences-- == 1;
  if ( v30 )
  {
    NsiRequestsCompletedEvent = v103->NsiRequestsCompletedEvent;
    if ( NsiRequestsCompletedEvent )
      KeSetEvent(NsiRequestsCompletedEvent, 0, 0);
  }
  v103->MiniportThread = 0LL;
  KeReleaseSpinLock(&v103->Lock, v104);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x19u,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      v103);
  v109 = KeAcquireSpinLockRaiseToDpc(&v103->Ref.SpinLock);
  v110 = (ULONG_PTR)v103->RefCountTracker;
  v111 = v109;
  if ( !v110 || v110 - 2 <= 1 )
    goto LABEL_290;
  if ( v110 == 1 )
    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
  if ( *(_BYTE *)(v110 + 2) <= 0x57u )
    ndisBugCheckEx(0x1EuLL, 2uLL, v110, 0x57uLL);
  if ( *(_BYTE *)(v110 + 1) )
  {
    if ( *(_BYTE *)(v110 + 1) == 1 )
    {
      v117 = v110 + 5576;
      v118 = *(_DWORD *)(v110 + 5632);
      if ( v118 >> 17 < 0x3FFE && (unsigned __int16)v118 >> 1 == (v118 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v110 + 5576));
        *(_DWORD *)(v117 + 56) &= 0x10001u;
        goto LABEL_290;
      }
      if ( (unsigned __int16)v118 >> 1 || (v118 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v110 + 5576), 0);
        goto LABEL_290;
      }
LABEL_316:
      ndisReportRefcountImbalance(v110, 0x57u);
    }
  }
  else
  {
    v121 = *(_QWORD *)(v110 + 8);
    if ( v121 )
    {
      v122 = *(_BYTE *)(v110 + 3);
      v123 = 0;
      if ( v122 )
      {
        while ( 1 )
        {
          v124 = (_BYTE *)(v121 + 2LL * v123);
          if ( *v124 == 87 )
          {
            v125 = v124[1];
            if ( v125 )
              break;
          }
          if ( ++v123 >= v122 )
            goto LABEL_305;
        }
        v124[1] = v125 - 1;
        goto LABEL_290;
      }
    }
LABEL_305:
    if ( !_bittestandreset((signed __int32 *)(v110 + 24), 0x17u) )
      goto LABEL_316;
  }
LABEL_290:
  v119 = v103->Ref.ReferenceCount - 1;
  v103->Ref.ReferenceCount = v119;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v127) = v119;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0xEu,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)v103,
      v127);
  }
  KeReleaseSpinLock(&v103->Ref.SpinLock, v111);
  if ( !v119 )
  {
    RemoveReadyEvent = v103->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x1Au,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      v103);
LABEL_9:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v129 && PerformanceCounters != 259 )
  {
    v3->IoStatus.Status = PerformanceCounters;
    IofCompleteRequest(v3, 2);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x19u,
      (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
      (char)v4,
      v3);
  return PerformanceCounters;
}
