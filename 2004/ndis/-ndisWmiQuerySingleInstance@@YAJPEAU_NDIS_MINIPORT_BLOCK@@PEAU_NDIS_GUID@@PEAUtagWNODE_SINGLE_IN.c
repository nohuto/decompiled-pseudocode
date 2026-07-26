/*
 * XREFs of ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C00105F0
 * Callers:
 *     ndisWMIDispatch @ 0x1C0010B00 (ndisWMIDispatch.c)
 *     NdisWdfQuerySingleInstance @ 0x1C00620D0 (NdisWdfQuerySingleInstance.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ndisQueryGuidData @ 0x1C00123C0 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x1C00126C0 (ndisQueryGuidDataSize.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0012BE8 (WPP_RECORDER_SF_qZ.c)
 *     NdisMSleep @ 0x1C00172E0 (NdisMSleep.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EB70 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B7E90 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B813C (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BE480 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE604 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C012A010 (-ndisReferenceMiniportByName@@YAXPEBU_UNICODE_STRING@@PEAPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_R.c)
 */

__int64 __fastcall ndisWmiQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *pNdisGuidMap,
        struct tagWNODE_SINGLE_INSTANCE *a3,
        unsigned int a4,
        unsigned int *a5)
{
  signed __int32 v8; // eax
  struct _NDIS_CO_VC_PTR_BLOCK *v9; // r15
  __int64 OffsetInstanceName; // rax
  wchar_t *v11; // rdx
  int GuidData; // edi
  struct _NDIS_CO_VC_PTR_BLOCK *v13; // rsi
  _NDIS_BIND_PATHS *BindPaths; // rcx
  GUID *p_Guid; // r8
  unsigned int i; // edx
  __int64 v17; // rax
  struct _NDIS_MINIPORT_BLOCK *v18; // rsi
  ULONG v19; // ebp
  ULONG v20; // edx
  struct _NDIS_WMI_NDK_CAPABILITIES *v21; // rcx
  char v22; // r14
  KIRQL v23; // al
  ULONG_PTR RefCountTracker; // r8
  KIRQL v25; // r15
  int v26; // ecx
  __int64 v27; // r10
  unsigned __int8 v28; // r9
  _BYTE *v29; // rdx
  unsigned int v32; // eax
  _LIST_ENTRY *p_WmiEnabledVcs; // r15
  _LIST_ENTRY *Flink; // r14
  unsigned __int16 v35; // r9
  ULONG_PTR v36; // rbp
  unsigned int v37; // edx
  int v38; // ecx
  char v39; // al
  struct _KEVENT *RemoveReadyEvent; // rcx
  char v41[8]; // [rsp+30h] [rbp-68h]
  char v42; // [rsp+30h] [rbp-68h]
  struct _NDIS_MINIPORT_BLOCK *v43; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v46; // [rsp+B8h] [rbp+20h]

  v46 = a4;
  v45 = 0;
  v43 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x2Bu,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      a1);
  v8 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v8 == 1 )
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
  v9 = 0LL;
  *a5 = 0;
  if ( (a3->WnodeHeader.Flags & 0x80u) != 0 )
    goto LABEL_11;
  OffsetInstanceName = a3->OffsetInstanceName;
  v11 = (wchar_t *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName + 2);
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  GuidData = 0;
  String2.Buffer = v11;
  v13 = 0LL;
  String2.MaximumLength = *(_WORD *)((char *)&a3->WnodeHeader.BufferSize + OffsetInstanceName);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength >= 0x30u && v11 && v11[5] == 58 )
  {
    p_WmiEnabledVcs = &a1->WmiEnabledVcs;
    Flink = a1->WmiEnabledVcs.Flink;
    if ( Flink == &a1->WmiEnabledVcs )
      goto LABEL_73;
    while ( 1 )
    {
      v13 = (struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20];
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)&Flink[-2].Blink, &String2, 1u) )
        break;
      Flink = Flink->Flink;
      v13 = 0LL;
      if ( Flink == p_WmiEnabledVcs )
        goto LABEL_72;
    }
    if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)&Flink[-20]) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x12u,
          0xAu,
          (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
          a1);
      GuidData = -1073741823;
    }
LABEL_72:
    if ( Flink == p_WmiEnabledVcs )
    {
LABEL_73:
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v11,
          18,
          11,
          (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
          (char)a1,
          (__int64)&String2);
      GuidData = -1073741162;
    }
    v9 = v13;
    if ( GuidData < 0 )
      v9 = 0LL;
  }
  else if ( !RtlEqualUnicodeString(a1->pAdapterInstanceName, &String2, 1u) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0xCu,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a1);
    GuidData = -1073741162;
  }
  if ( GuidData < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x2Cu,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a1);
    goto LABEL_49;
  }
  if ( !v9 )
  {
LABEL_11:
    BindPaths = a1->BindPaths;
    if ( BindPaths )
      ndisReferenceMiniportByName(BindPaths->Paths, &v43, 0, MPREF_WMI_QUERYONE);
  }
  if ( !pNdisGuidMap )
  {
    pNdisGuidMap = a1->pNdisGuidMap;
    p_Guid = &a3->WnodeHeader.Guid;
    if ( pNdisGuidMap )
    {
      for ( i = 0; i < a1->cNdisGuidMap; ++pNdisGuidMap )
      {
        if ( a3 == (struct tagWNODE_SINGLE_INSTANCE *)-24LL )
        {
          if ( (pNdisGuidMap->Flags & 2) != 0 && !pNdisGuidMap->Oid )
            goto LABEL_22;
        }
        else
        {
          v17 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&p_Guid->Data1;
          if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&p_Guid->Data1 )
            v17 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)a3->WnodeHeader.Guid.Data4;
          if ( !v17 )
            goto LABEL_22;
        }
        ++i;
      }
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x2Du,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a1);
    v18 = v43;
    GuidData = -1073741811;
    goto LABEL_27;
  }
LABEL_22:
  v18 = v43;
  GuidData = ndisQueryGuidDataSize(&v45, a1, pNdisGuidMap, v9, &a3->WnodeHeader.Guid, v43);
  if ( GuidData < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v35 = 46;
    goto LABEL_87;
  }
  v19 = v45 + a3->DataBlockOffset;
  if ( v19 < v45 )
  {
    GuidData = -1073741823;
    goto LABEL_27;
  }
  if ( v46 < v19 )
  {
    if ( v46 < 0x38 )
    {
      GuidData = -1073741789;
      v32 = 4;
    }
    else
    {
      a3->WnodeHeader.Flags |= 0x20u;
      v32 = 56;
      a3->WnodeHeader.BufferSize = 56;
      GuidData = 0;
      a3->OffsetInstanceName = v19;
    }
    *a5 = v32;
    goto LABEL_27;
  }
  v20 = v45;
  v21 = (struct _NDIS_WMI_NDK_CAPABILITIES *)((char *)a3 + a3->DataBlockOffset);
  v18 = v43;
  v42 = (char)v43;
  a3->WnodeHeader.TimeStamp.QuadPart = MEMORY[0xFFFFF78000000014];
  a3->WnodeHeader.BufferSize = v19;
  a3->SizeDataBlock = v20;
  GuidData = ndisQueryGuidData(v21, v20, a1, (__int64)v9, &a3->WnodeHeader.Guid, v42);
  if ( GuidData >= 0 )
  {
    GuidData = 0;
    *a5 = v19;
    goto LABEL_27;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v35 = 47;
LABEL_87:
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x12u,
      v35,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      a1);
  }
LABEL_27:
  if ( v9 )
    ndisDereferenceVcPtr(v9);
  if ( v18 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x14u,
        0x19u,
        (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
        v18);
    v22 = 0;
    v23 = KeAcquireSpinLockRaiseToDpc(&v18->Ref.SpinLock);
    RefCountTracker = (ULONG_PTR)v18->RefCountTracker;
    v25 = v23;
    if ( !RefCountTracker || RefCountTracker - 2 <= 1 )
      goto LABEL_42;
    if ( RefCountTracker == 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
    if ( *(_BYTE *)(RefCountTracker + 2) <= 0x61u )
      ndisBugCheckEx(0x1EuLL, 2uLL, RefCountTracker, 0x61uLL);
    v26 = *(unsigned __int8 *)(RefCountTracker + 1);
    if ( *(_BYTE *)(RefCountTracker + 1) )
    {
      if ( v26 != 1 )
        goto LABEL_42;
      v36 = RefCountTracker + 6216;
      v37 = *(_DWORD *)(RefCountTracker + 6272);
      v38 = (unsigned __int16)v37 >> 1;
      if ( v37 >> 17 < 0x3FFE && v38 == (v37 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 6216));
        *(_DWORD *)(v36 + 56) &= 0x10001u;
        goto LABEL_42;
      }
      if ( v38 != 0 || (v37 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 6216), 0);
        goto LABEL_42;
      }
    }
    else
    {
      v27 = *(_QWORD *)(RefCountTracker + 8);
      if ( v27 )
      {
        v28 = *(_BYTE *)(RefCountTracker + 3);
        if ( v28 )
        {
          while ( 1 )
          {
            v29 = (_BYTE *)(v27 + 2LL * (unsigned __int8)v26);
            if ( *v29 == 97 )
            {
              v39 = v29[1];
              if ( v39 )
                break;
            }
            LOBYTE(v26) = v26 + 1;
            if ( (unsigned __int8)v26 >= v28 )
              goto LABEL_41;
          }
          v29[1] = v39 - 1;
          goto LABEL_42;
        }
      }
LABEL_41:
      if ( _bittestandreset((signed __int32 *)(RefCountTracker + 28), 1u) )
      {
LABEL_42:
        if ( v18->Ref.ReferenceCount-- == 1 )
          v22 = 1;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v41 = v18->Ref.ReferenceCount;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x14u,
            0xEu,
            (struct _GUID *)&WPP_51efd63ed52c3a002f03851f2f400cea_Traceguids,
            (char)v18,
            *(_QWORD *)v41);
        }
        KeReleaseSpinLock(&v18->Ref.SpinLock, v25);
        if ( v22 )
        {
          RemoveReadyEvent = v18->RemoveReadyEvent;
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
            v18);
        goto LABEL_49;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 0x61uLL);
  }
LABEL_49:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v41 = GuidData;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x30u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1,
      *(_QWORD *)v41);
  }
  return (unsigned int)GuidData;
}
