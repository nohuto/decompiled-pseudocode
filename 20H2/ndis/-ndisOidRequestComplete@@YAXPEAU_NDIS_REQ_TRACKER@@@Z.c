/*
 * XREFs of ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000BA10 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000BF70 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C000E7D0 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C001E86C (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006DE44 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x1C0092AB0 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C0099C24 (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1C0099DC4 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1C00AF860 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B140 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qDq @ 0x1C000B200 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_Dqqqqd @ 0x1C000B910 (WPP_RECORDER_SF_Dqqqqd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C000E2D0 (WPP_RECORDER_SF_qDd.c)
 *     NdisDereferenceWithTag @ 0x1C000EFB0 (NdisDereferenceWithTag.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001A5DC (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EB70 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060078 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00708A0 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x1C00A16D4 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     ndisFInvokeDirectOidRequestComplete @ 0x1C00AF974 (ndisFInvokeDirectOidRequestComplete.c)
 *     ndisInvokeDirectOidRequestComplete @ 0x1C00AFA54 (ndisInvokeDirectOidRequestComplete.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BE480 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BE604 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     NdisFreeRefCount @ 0x1C00BE7B0 (NdisFreeRefCount.c)
 *     ?ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01387E4 (-ndisMFinishClose@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisOidRequestComplete(struct _NDIS_REQ_TRACKER *a1, int a2, int a3, int a4)
{
  __int64 v4; // rbp
  struct _NDIS_OPEN_BLOCK *v6; // r15
  struct _NDIS_OPEN_BLOCK *v7; // r13
  struct _NDIS_OPEN_BLOCK *v8; // rdi
  int v9; // eax
  bool v10; // r12
  _DWORD *v11; // rsi
  ULONG_PTR v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  void (__fastcall *v15)(struct _NDIS_REQ_TRACKER *); // rax
  __int64 v16; // r14
  _DWORD *v17; // r8
  int v18; // r14d
  bool v19; // cl
  int v20; // edi
  int v21; // r14d
  ULONG_PTR v22; // rdi
  __int64 v23; // rdi
  KIRQL v24; // al
  KSPIN_LOCK *v25; // rdi
  KIRQL v26; // al
  ULONG_PTR v27; // r8
  KIRQL v28; // bp
  int v29; // ecx
  __int64 v30; // r10
  unsigned __int8 v31; // r9
  _BYTE *v32; // rdx
  bool v33; // zf
  unsigned int v34; // ebp
  __int64 v35; // rdi
  _NDIS_MINIPORT_BLOCK *v36; // r14
  int v37; // esi
  int v38; // r8d
  char v39; // al
  unsigned int v40; // ecx
  int v41; // ecx
  KIRQL v42; // dl
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // ecx
  __int64 v50; // r8
  _NDIS_OID_REQUEST *v51; // rdx
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rsi
  KIRQL v53; // r12
  struct _NDIS_OPEN_BLOCK *v54; // rdi
  KSPIN_LOCK *p_RefCountLock; // rbp
  char v56; // di
  KIRQL v57; // al
  __int64 v58; // rax
  struct _NDIS_MINIPORT_BLOCK **v59; // rax
  struct _NDIS_MINIPORT_BLOCK *v60; // rbp
  int v61; // edx
  int v62; // r8d
  int v63; // ecx
  KIRQL v64; // dl
  ULONG_PTR v65; // rsi
  unsigned int v66; // edx
  int v67; // ecx
  __int64 v68; // [rsp+40h] [rbp-68h]
  unsigned __int8 v69; // [rsp+B0h] [rbp+8h] BYREF
  char v70; // [rsp+B8h] [rbp+10h]
  bool v71; // [rsp+C0h] [rbp+18h]
  struct _NDIS_OPEN_BLOCK *v72; // [rsp+C8h] [rbp+20h]

  v4 = *((_QWORD *)a1 + 4);
  v6 = 0LL;
  v72 = 0LL;
  v7 = 0LL;
  v69 = 0;
  v8 = *(struct _NDIS_OPEN_BLOCK **)(v4 + 104);
  v70 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v68 = *((_QWORD *)a1 + 2);
    WPP_RECORDER_SF_Dqqqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
  }
  *(_DWORD *)(v4 + 88) |= 1u;
  v9 = *(_DWORD *)(v4 + 88);
  v10 = (v9 & 0x200000) != 0;
  v11 = (_DWORD *)*((_QWORD *)a1 + 4);
  v71 = v10;
  if ( (v9 & 0x220) != 0 )
  {
    *((_QWORD *)a1 + 3) = v8;
    v6 = v8;
    v33 = (*(_DWORD *)(v4 + 88) & 0x200) == 0;
    v72 = v8;
    if ( v33 )
      goto LABEL_6;
  }
  else
  {
    *((_QWORD *)a1 + 3) = 0LL;
    if ( v8->Header.Type == 5 )
    {
      v7 = v8;
      *((_QWORD *)a1 + 1) = v8;
      goto LABEL_6;
    }
  }
  v70 = 1;
LABEL_6:
  v12 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_BYTE *)(v12 + 32) > 6u || *(_BYTE *)(v12 + 32) == 6 && *(_BYTE *)(v12 + 33) >= 0x28u)
      && !*((_DWORD *)a1 + 10) )
    {
      v43 = v11[1];
      if ( (v43 & 0xFFFFFFFD) != 0 )
      {
        if ( v43 != 12 )
          goto LABEL_11;
        v44 = v11[13];
        v45 = v11[15];
      }
      else
      {
        v44 = v11[12];
        v45 = v11[13];
      }
      if ( v45 > v44 )
        ndisBugCheckEx(0x1DuLL, v12, (ULONG_PTR)v11, 0LL);
    }
  }
  else
  {
    v12 = *((_QWORD *)a1 + 2);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 16);
      if ( *(_BYTE *)(v13 + 100) > 6u || *(_BYTE *)(v13 + 100) == 6 && *(_BYTE *)(v13 + 101) >= 0x28u )
      {
        v46 = *(_QWORD *)(v12 + 32);
        if ( (*(_BYTE *)(v46 + 32) > 6u || *(_BYTE *)(v46 + 32) == 6 && *(_BYTE *)(v46 + 33) >= 0x28u)
          && !*((_DWORD *)a1 + 10) )
        {
          v47 = v11[1];
          if ( (v47 & 0xFFFFFFFD) != 0 )
          {
            if ( v47 != 12 )
              goto LABEL_11;
            v48 = v11[13];
            v49 = v11[15];
          }
          else
          {
            v48 = v11[12];
            v49 = v11[13];
          }
          if ( v49 > v48 )
            ndisBugCheckEx(0x1DuLL, v12, (ULONG_PTR)v11, 0LL);
        }
      }
    }
  }
LABEL_11:
  v14 = v11;
  if ( (v11[22] & 0x1240004) == 4 )
  {
    v15 = (void (__fastcall *)(struct _NDIS_REQ_TRACKER *))*((_QWORD *)&unk_1C00C7340 + 3 * (unsigned int)v11[23]);
    v14 = v11;
    if ( v15 )
    {
      v15(a1);
      v14 = (_DWORD *)*((_QWORD *)a1 + 4);
    }
  }
  v16 = *(_QWORD *)a1;
  v17 = v14;
  if ( *(_QWORD *)a1 && v14[8] == -50265855 && *((_DWORD *)a1 + 10) )
  {
    v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 3872));
    *(_DWORD *)(v16 + 3880) = *(_DWORD *)(v16 + 3884);
    v69 = v57;
    *(_DWORD *)(v16 + 3884) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 3872), v57);
    v17 = (_DWORD *)*((_QWORD *)a1 + 4);
  }
  v18 = *(_DWORD *)(v4 + 88);
  v19 = (v18 & 2) != 0;
  LOBYTE(v12) = (v18 & 0x100) != 0;
  v20 = v17[1];
  v21 = v18 & 0x2000000;
  if ( (*(_DWORD *)(v4 + 88) & 8) != 0 )
  {
    *(_DWORD *)(v4 + 80) = *((_DWORD *)a1 + 10);
    KeSetEvent((PRKEVENT)(v4 + 112), 0, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  else if ( v19 )
  {
    if ( (*(_DWORD *)(v4 + 88) & 0x100) != 0 )
    {
      v58 = *((_QWORD *)a1 + 2);
      if ( v58 )
        v59 = (struct _NDIS_MINIPORT_BLOCK **)(v58 + 32);
      else
        v59 = (struct _NDIS_MINIPORT_BLOCK **)a1;
      v60 = *v59;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(*v59, &v69);
      if ( v20 == 1 && (v60->Flags & 0x200000) != 0 )
      {
        v63 = *((_DWORD *)a1 + 10);
        if ( v63 && v63 != -1073676276 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v61) = 3;
          WPP_RECORDER_SF_qDd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v61,
            v62,
            17,
            (struct _GUID *)&WPP_0e2ec831e88c31193e413b6f3daa2a3f_Traceguids,
            (char)v60,
            *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
            v63);
        }
        ndisMResetCompleteStage2(v60);
      }
      v60->Flags &= ~0x1000000u;
      v64 = v69;
      v60->MiniportThread = 0LL;
      KeReleaseSpinLock(&v60->Lock, v64);
      v17 = (_DWORD *)*((_QWORD *)a1 + 4);
    }
    ExFreePoolWithTag(v17, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  v22 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
  {
    v23 = *((_QWORD *)a1 + 2);
    if ( !v23 )
      goto LABEL_35;
    if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
    {
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 144));
      if ( v10 )
      {
        --*(_DWORD *)(v23 + 712);
      }
      else
      {
        *(_DWORD *)(v23 + 56) &= ~0x800u;
        *(_QWORD *)(v23 + 176) = 0LL;
      }
      *(_QWORD *)(v23 + 152) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v23 + 144), v24);
    }
    v25 = (KSPIN_LOCK *)(v23 + 312);
    if ( v10 )
    {
      ndisDereferenceRef(v25, 0x10u);
      goto LABEL_35;
    }
    v26 = KeAcquireSpinLockRaiseToDpc(v25);
    v27 = v25[2];
    v28 = v26;
    if ( v27 - 2 <= 1 )
      goto LABEL_33;
    if ( v27 <= 1 )
      ndisBugCheckEx(0x1EuLL, 3uLL, v27, 0LL);
    if ( *(_BYTE *)(v27 + 2) <= 0xFu )
      ndisBugCheckEx(0x1EuLL, 2uLL, v27, 0xFuLL);
    v29 = *(unsigned __int8 *)(v27 + 1);
    if ( *(_BYTE *)(v27 + 1) )
    {
      if ( v29 != 1 )
        goto LABEL_33;
      v65 = v27 + 968;
      v66 = *(_DWORD *)(v27 + 1024);
      v67 = (unsigned __int16)v66 >> 1;
      if ( v66 >> 17 < 0x3FFE && v67 == (v66 >> 17) + 1 )
      {
        ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v27 + 968));
        *(_DWORD *)(v65 + 56) &= 0x10001u;
        goto LABEL_33;
      }
      if ( v67 != 0 || (v66 & 1) != 0 )
      {
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 968), 0);
        goto LABEL_33;
      }
    }
    else
    {
      v30 = *(_QWORD *)(v27 + 8);
      if ( v30 )
      {
        v31 = *(_BYTE *)(v27 + 3);
        if ( v31 )
        {
          while ( 1 )
          {
            v32 = (_BYTE *)(v30 + 2LL * (unsigned __int8)v29);
            if ( *v32 == 15 )
            {
              v39 = v32[1];
              if ( v39 )
                break;
            }
            LOBYTE(v29) = v29 + 1;
            if ( (unsigned __int8)v29 >= v31 )
              goto LABEL_32;
          }
          v32[1] = v39 - 1;
          goto LABEL_33;
        }
      }
LABEL_32:
      if ( _bittestandreset((signed __int32 *)(v27 + 16), 0xFu) )
      {
LABEL_33:
        v33 = (*((_WORD *)v25 + 4))-- == 1;
        if ( v33 && !*((_BYTE *)v25 + 11) )
        {
          NdisFreeRefCount(v25[2]);
          v25[2] = 1LL;
        }
        KeReleaseSpinLock(v25, v28);
        goto LABEL_35;
      }
    }
    ndisBugCheckEx(0x1EuLL, 0LL, v27, 0xFuLL);
  }
  v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 96));
  *(_QWORD *)(v22 + 520) = KeGetCurrentThread();
  if ( !v10 )
  {
    v40 = *(_DWORD *)(v22 + 4420) & 0xFFFFFFFD;
    *(_DWORD *)(v22 + 4420) = v40;
    if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
    {
      if ( (byte_1C00E61C1 & 0x40) != 0 )
      {
        McTemplateK0jqxd_EtwWriteTransfer(
          v40,
          (unsigned int)&ClearingOidRequest,
          v22 + 4008,
          v22 + 4008,
          *(_DWORD *)(v22 + 4056),
          *(_QWORD *)(v22 + 4024),
          1);
        v40 = *(_DWORD *)(v22 + 4420);
      }
      *(_DWORD *)(v22 + 4420) = v40 & 0xFFFFFFFE;
      *(_QWORD *)(v22 + 2216) = 0LL;
    }
    v41 = *((_DWORD *)a1 + 11);
    if ( (v41 & 3) == 2 && *(_DWORD **)(v22 + 2208) != v11 )
      ndisBugCheckEx(0x26uLL, v22, (ULONG_PTR)v11, 0LL);
    if ( (v41 & 1) == 0 && *(_QWORD *)(v22 + 2208) )
      *(_QWORD *)(v22 + 2208) = 0LL;
  }
  v42 = v69;
  *(_QWORD *)(v22 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 96), v42);
  *(_WORD *)(v22 + 1822) = 0;
LABEL_35:
  if ( v6 && !v21 )
  {
    if ( !v70 )
    {
      v50 = *((unsigned int *)a1 + 10);
      v51 = (_NDIS_OID_REQUEST *)*((_QWORD *)a1 + 4);
      if ( v10 )
        ndisInvokeDirectOidRequestComplete((char)v6, (char)v51, v50);
      else
        v6->OidRequestCompleteHandler(v6, v51, v50);
    }
    MiniportHandle = v6->MiniportHandle;
    v53 = KeAcquireSpinLockRaiseToDpc(&MiniportHandle->Lock);
    v54 = v72;
    MiniportHandle->MiniportThread = KeGetCurrentThread();
    p_RefCountLock = &v54->RefCountLock;
    KeAcquireSpinLockAtDpcLevel(&v54->RefCountLock);
    NdisDereferenceWithTag((ULONG_PTR)v54->RefCountTracker);
    v33 = v54->References-- == 1;
    v56 = v33;
    KeReleaseSpinLockFromDpcLevel(p_RefCountLock);
    if ( v56 )
      ndisMFinishClose(v72);
    MiniportHandle->MiniportThread = 0LL;
    KeReleaseSpinLock(&MiniportHandle->Lock, v53);
    v10 = v71;
  }
  if ( v7 && !v21 )
  {
    if ( (byte_1C00E61C1 & 0x40) != 0 )
      McTemplateK0jqxqdq_EtwWriteTransfer(
        *((_QWORD *)a1 + 4),
        (unsigned int)&CompletingOidRequestFilterEx,
        (_DWORD)v7 + 672,
        (_DWORD)v7 + 672,
        (char)v7->OidRequestCompleteHandler,
        *(_QWORD *)&v7->Offload[11].Encapsulation.BufferLength,
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
        *((_DWORD *)a1 + 10));
    v34 = *((_DWORD *)a1 + 10);
    v35 = *((_QWORD *)a1 + 4);
    if ( v10 )
    {
      ndisFInvokeDirectOidRequestComplete((char)v7, *((_QWORD *)a1 + 4));
    }
    else
    {
      v36 = v7->MiniportHandle;
      v37 = *(_DWORD *)(v35 + 32);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v68) = *((_DWORD *)a1 + 10);
        WPP_RECORDER_SF_qDqd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v12,
          (int)v17,
          0xAu,
          (struct _GUID *)&WPP_0e2ec831e88c31193e413b6f3daa2a3f_Traceguids,
          (char)v7,
          v37,
          v35,
          v68);
      }
      ((void (__fastcall *)(_NDIS_PROTOCOL_BLOCK *, __int64, _QWORD))v36->WakeUpDpcTimer.Timer.TimerListEntry.Blink)(
        v7->ProtocolHandle,
        v35,
        v34);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v38,
          0xBu,
          (struct _GUID *)&WPP_0e2ec831e88c31193e413b6f3daa2a3f_Traceguids,
          (char)v7,
          v37,
          v35);
    }
  }
  *((_QWORD *)a1 + 4) = 0LL;
}
