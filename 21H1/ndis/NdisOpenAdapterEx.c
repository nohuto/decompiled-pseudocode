/*
 * XREFs of NdisOpenAdapterEx @ 0x1C012DF30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E0E0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D70 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0018FD0 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C0028C4C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qZZ @ 0x1C002996C (WPP_RECORDER_SF_qZZ.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C0029D78 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002A990 (-ndisUpdateCheckForLoopbackFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C002CAA0 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002CB14 (-ndisAllocateOpenBlock@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLO.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00709A8 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C00AA454 (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00F87D8 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FB73C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FDA50 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0100A84 (-ndisPktMonOpenRegister@@YAJPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0102EEC (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012E350 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFindRootDevice @ 0x1C013A548 (ndisFindRootDevice.c)
 */

NDIS_STATUS __stdcall NdisOpenAdapterEx(
        NDIS_HANDLE NdisProtocolHandle,
        NDIS_HANDLE ProtocolBindingContext,
        PNDIS_OPEN_PARAMETERS OpenParameters,
        NDIS_HANDLE BindContext,
        PNDIS_HANDLE NdisBindingHandle)
{
  struct _NDIS_OPEN_BLOCK *OpenBlock; // r14
  char v8; // r12
  char v9; // r13
  unsigned int MediumArraySize; // edx
  int v11; // r9d
  _UNICODE_STRING *v12; // rsi
  _UNICODE_STRING *v13; // r13
  __int64 v14; // rdi
  __int64 i; // rcx
  unsigned int FrameTypeArraySize; // eax
  __int64 v17; // r8
  KIRQL v18; // al
  int *v19; // rsi
  int v20; // r13d
  int v21; // ecx
  KIRQL v22; // dl
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  struct _NDIS_MINIPORT_BLOCK *v24; // rdx
  NDIS_STATUS v25; // esi
  struct _NDIS_OPEN_BLOCK **v26; // rbx
  int v27; // edx
  int v29; // eax
  struct _NDIS_OPEN_BLOCK **v30; // rcx
  __int64 v31; // rcx
  int v32; // [rsp+28h] [rbp-51h]
  KIRQL NewIrql[4]; // [rsp+58h] [rbp-21h] BYREF
  int v34; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v35; // [rsp+60h] [rbp-19h]
  __int64 v36; // [rsp+68h] [rbp-11h] BYREF
  _UNICODE_STRING *v37; // [rsp+70h] [rbp-9h]
  struct _NDIS_OPEN_BLOCK **PoolWithTag; // [rsp+78h] [rbp-1h]
  _UNICODE_STRING *v39; // [rsp+80h] [rbp+7h]
  _DWORD *v40; // [rsp+88h] [rbp+Fh]

  v36 = 0LL;
  PoolWithTag = 0LL;
  v37 = 0LL;
  *NdisBindingHandle = 0LL;
  OpenBlock = 0LL;
  v8 = 0;
  v34 = -1073741823;
  v9 = 0;
  LOBYTE(v35) = 0;
  if ( NdisProtocolHandle )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)ProtocolBindingContext,
        (__int64)OpenParameters,
        0x3Eu,
        v32,
        (char)NdisProtocolHandle,
        (unsigned __int16 *)NdisProtocolHandle + 36,
        &OpenParameters->AdapterName->Length);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) == KeGetCurrentThread() )
    {
      if ( ndisReferenceProtocol((struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, 9u) )
      {
        v12 = (_UNICODE_STRING *)*((_QWORD *)NdisProtocolHandle + 54);
        v8 = 1;
        v39 = v12;
        if ( v12 )
        {
          v13 = (_UNICODE_STRING *)*((_QWORD *)NdisProtocolHandle + 55);
          v14 = *((_QWORD *)NdisProtocolHandle + 57);
          v37 = v13;
          v36 = v14;
        }
        else
        {
          ndisFindRootDevice((__int64)OpenParameters->AdapterName, (__int64)&v36, MPREF_PT_OPENINGX);
          v14 = v36;
          v12 = v39;
          v13 = v37;
          v29 = (unsigned __int8)v35;
          if ( v36 )
            v29 = 1;
          v35 = v29;
        }
        *((_QWORD *)NdisProtocolHandle + 54) = 0LL;
        if ( !v14 )
        {
          v25 = -1073676282;
          v9 = 0;
          goto LABEL_82;
        }
        OpenBlock = ndisAllocateOpenBlock(
                      (struct _NDIS_MINIPORT_BLOCK *)v14,
                      (struct _NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle,
                      1);
        if ( OpenBlock )
        {
          v40 = (_DWORD *)(v14 + 124);
          if ( (*(_DWORD *)(v14 + 124) & 0x100) != 0
            || !*(_BYTE *)(v14 + 1995) && *(_DWORD *)(v14 + 2248) != 6 && *(_BYTE *)(v14 + 32) >= 6u )
          {
            v25 = -1073676282;
            goto LABEL_54;
          }
          if ( !*(_BYTE *)(v14 + 1994) )
            *(_BYTE *)(v14 + 1994) = 1;
          OpenBlock->ProtocolBindingContext = ProtocolBindingContext;
          OpenBlock->BindDeviceName = v12;
          OpenBlock->RootDeviceName = v13;
          OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)v14;
          OpenBlock->ProtocolHandle = (_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle;
          *NdisBindingHandle = OpenBlock;
          MediumArraySize = OpenParameters->MediumArraySize;
          if ( (*(_DWORD *)(v14 + 568) & 0x80000001) == 0x80000001 )
          {
            for ( i = 0LL; (unsigned int)i < MediumArraySize; i = (unsigned int)(i + 1) )
            {
              if ( OpenParameters->MediumArray[i] == NdisMediumWan )
                break;
            }
          }
          else
          {
            i = 0LL;
            if ( MediumArraySize )
            {
              v11 = *(_DWORD *)(v14 + 464);
              do
              {
                if ( OpenParameters->MediumArray[i] == v11 )
                  break;
                i = (unsigned int)(i + 1);
              }
              while ( (unsigned int)i < MediumArraySize );
            }
          }
          if ( (_DWORD)i == MediumArraySize )
          {
            v25 = -1073676263;
            goto LABEL_54;
          }
          *OpenParameters->SelectedMediumIndex = i;
          FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
          if ( FrameTypeArraySize <= 4 )
          {
            v17 = 0LL;
            for ( OpenBlock->FrameTypeArraySize = FrameTypeArraySize;
                  (unsigned int)v17 < OpenParameters->FrameTypeArraySize;
                  v17 = (unsigned int)(v17 + 1) )
            {
              OpenBlock->FrameTypeArray[v17] = __ROR2__(OpenParameters->FrameTypeArray[v17], 8);
            }
            if ( ndisDatapathVerifierMode == 1 )
            {
              if ( !MmIsDriverVerifyingByAddress(*((PVOID *)NdisProtocolHandle + 13)) )
                goto LABEL_24;
            }
            else if ( ndisDatapathVerifierMode != 2 )
            {
LABEL_24:
              v18 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
              OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
              NewIrql[0] = v18;
              ndisGlobalOpenList = OpenBlock;
              KeReleaseSpinLock(&ndisGlobalOpenListLock, v18);
              NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v14, NewIrql);
              v19 = (int *)(v14 + 120);
              if ( (*(_DWORD *)(v14 + 120) & 0x40000) == 0 )
              {
                while ( *(_BYTE *)(v14 + 89) )
                {
                  *(_QWORD *)(v14 + 520) = 0LL;
                  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v14 + 96));
                  KeStallExecutionProcessor(1u);
                  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 96));
                  *(_QWORD *)(v14 + 520) = KeGetCurrentThread();
                }
                *(_BYTE *)(v14 + 89) = 1;
                v14 = v36;
                *(_QWORD *)(v36 + 1864) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(&v34, OpenBlock, (struct _NDIS_MINIPORT_BLOCK *)v14);
              v20 = v34;
              if ( !v34 )
              {
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qqq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    v34 + 6,
                    v34 + 63,
                    (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
                    (char)OpenBlock,
                    (char)NdisProtocolHandle,
                    v14);
                v21 = *v19;
                if ( (*v19 & 0x20000000) == 0 && (*v19 & 0x20000) == 0 )
                {
                  ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v14, 2u);
                  v21 = *v19;
                }
                if ( (v21 & 0x20000) != 0 && *((_QWORD *)NdisProtocolHandle + 25) )
                {
                  PoolWithTag = (struct _NDIS_OPEN_BLOCK **)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedAdd(&OpenBlock->PendingAfNotifications, 1u);
                    v30 = PoolWithTag;
                    v14 = v36;
                    v20 = v34;
                    PoolWithTag[1] = 0LL;
                    *v30 = OpenBlock;
                    v30[3] = (struct _NDIS_OPEN_BLOCK *)ndisMFinishQueuedPendingOpen;
                    v30[4] = (struct _NDIS_OPEN_BLOCK *)v30;
                  }
                  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      2u,
                      0x13u,
                      0x40u,
                      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
                      OpenBlock);
                  }
                }
              }
              if ( (*v19 & 0x40000) == 0 )
              {
                *(_BYTE *)(v14 + 89) = 0;
                *(_QWORD *)(v14 + 1864) = 0LL;
              }
              v22 = NewIrql[0];
              *(_QWORD *)(v14 + 520) = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 96), v22);
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v14 + 5104));
              CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v14 + 5104));
              OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
              if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
                v20 = -1073741670;
              v25 = v20;
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v14 + 5104), v24);
              if ( !v20 )
              {
                if ( (*v40 & 0x2000) != 0 )
                {
                  v31 = *(_QWORD *)(v14 + 3984);
                  if ( v31 )
                    (*(void (__fastcall **)(_QWORD))(v31 + 32))(*(_QWORD *)(v31 + 8));
                }
                ndisPktMonOpenRegister(OpenBlock);
                v26 = PoolWithTag;
                *((_QWORD *)BindContext + 2) = OpenBlock;
                if ( !v26 )
                  goto LABEL_39;
                (*((void (__fastcall **)(void *, _QWORD))NdisProtocolHandle + 14))(
                  OpenBlock->ProtocolBindingContext,
                  0LL);
                ndisUpdateCheckForLoopbackFlag((struct _NDIS_MINIPORT_BLOCK *)v14);
                ndisQueueWorkitem((struct _WORK_QUEUE_ITEM *)(v26 + 1));
                v25 = 259;
              }
              if ( v25 == 259 )
              {
LABEL_39:
                ndisDereferencePackage((PVOID *)&ndisPkgs);
                if ( (_BYTE)v35 )
                  ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v14, 0x2Du);
                if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qqqL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v27,
                    6u,
                    0x41u,
                    (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
                    (char)NdisProtocolHandle,
                    v14,
                    (char)OpenBlock,
                    v25);
                return v25;
              }
              v9 = 1;
LABEL_82:
              *NdisBindingHandle = 0LL;
              if ( v8 )
                ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, MediumArraySize, 9u, v11);
              if ( v9 )
                ndisRemoveOpenFromGlobalList(OpenBlock);
              goto LABEL_39;
            }
            v14 = v36;
            OpenBlock->OpenFlags |= 1u;
            goto LABEL_24;
          }
        }
        v25 = -1073741670;
LABEL_54:
        v9 = 0;
        goto LABEL_82;
      }
      v25 = -1073676286;
    }
    else
    {
      v25 = v34;
    }
    v14 = v36;
    goto LABEL_82;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      6u,
      0x3Du,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids);
  return -1073741823;
}
