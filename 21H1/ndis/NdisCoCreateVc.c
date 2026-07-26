/*
 * XREFs of NdisCoCreateVc @ 0x1C00B7FC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

NDIS_STATUS __stdcall NdisCoCreateVc(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE ProtocolVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  bool v7; // r13
  _QWORD *v8; // r15
  NDIS_STATUS v9; // ebp
  _DWORD *v10; // rbx
  int v11; // r12d
  _DWORD *PoolWithTag; // rax
  KSPIN_LOCK *v13; // rax
  KSPIN_LOCK *v14; // rdi
  LARGE_INTEGER *v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  KSPIN_LOCK v20; // rax
  KSPIN_LOCK v21; // rdx
  __int64 v22; // rax
  KSPIN_LOCK v23; // rax
  KSPIN_LOCK v24; // rdx
  NDIS_HANDLE *v25; // r12
  NDIS_HANDLE *v26; // r13
  _DWORD *v27; // r8
  NDIS_STATUS v28; // eax
  __int64 v29; // rax
  KSPIN_LOCK v30; // rax
  KSPIN_LOCK v31; // rdx
  KSPIN_LOCK *v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  _LIST_ENTRY *v35; // rdx
  void (__fastcall *v36)(_QWORD); // rax
  KSPIN_LOCK v37; // rax
  __int64 v38; // rax
  KSPIN_LOCK v39; // rcx
  KSPIN_LOCK v40; // rax
  __int64 v41; // rax
  unsigned __int8 v42; // dl
  bool v43; // al
  void (__fastcall *v44)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (__fastcall *v45)(void *, struct _NDIS_PACKET **, unsigned int); // rcx
  void (__fastcall *v46)(int, void *, struct _NDIS_PACKET *); // rdx
  void (__fastcall *v47)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r8
  void (__fastcall *v48)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r9
  KIRQL NewIrql; // [rsp+40h] [rbp-58h]
  int v51; // [rsp+44h] [rbp-54h]
  LARGE_INTEGER *v52; // [rsp+48h] [rbp-50h]
  char Increment; // [rsp+A0h] [rbp+8h]
  bool v54; // [rsp+A8h] [rbp+10h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xAu,
      (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids);
  v52 = (LARGE_INTEGER *)*((_QWORD *)NdisBindingHandle + 2);
  v7 = NdisAfHandle && (*((_DWORD *)NdisAfHandle + 2) & 1) != 0;
  v54 = v7;
  if ( !NdisAfHandle || (Increment = 1, NdisBindingHandle != *((NDIS_HANDLE *)NdisAfHandle + 46)) )
    Increment = 0;
  v8 = *NdisVcHandle;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_DWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 64LL) & 0x40000000;
  v51 = v11;
  if ( v8 && !v11 )
  {
    v9 = -1073741823;
    goto LABEL_120;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x158uLL, 0x6F63444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_120;
  }
  memset(PoolWithTag, 0, 0x158uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)v10 + 2);
  *((_QWORD *)v10 + 20) = v10 + 38;
  *((_QWORD *)v10 + 19) = v10 + 38;
  *((_QWORD *)v10 + 5) = v10 + 8;
  *((_QWORD *)v10 + 4) = v10 + 8;
  *((_QWORD *)v10 + 7) = v10 + 12;
  *((_QWORD *)v10 + 6) = v10 + 12;
  if ( v8 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x13u,
        0xCu,
        (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids);
    v14 = (KSPIN_LOCK *)v8[9];
    *((_QWORD *)v10 + 25) = v8[25];
LABEL_27:
    v15 = v52;
    goto LABEL_28;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xBu,
      (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids);
  v13 = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6F63444Eu);
  v14 = v13;
  if ( !v13 )
  {
    v9 = -1073741670;
    ExFreePoolWithTag(v10, 0);
    v10 = 0LL;
    goto LABEL_120;
  }
  memset(v13, 0, 0x90uLL);
  KeInitializeSpinLock(v14 + 1);
  v15 = v52;
  v14[15] = (KSPIN_LOCK)v52;
  if ( !v7 )
  {
    v9 = (*((__int64 (__fastcall **)(LARGE_INTEGER, _DWORD *, _DWORD *))NdisBindingHandle + 121))(v52[3], v10, v10 + 50);
    if ( v9 )
    {
      ExFreePoolWithTag(v14, 0);
      goto LABEL_98;
    }
    *((_BYTE *)v10 + 336) = 1;
    goto LABEL_27;
  }
LABEL_28:
  *((_QWORD *)v10 + 26) = *(_QWORD *)(v15[470].QuadPart + 280);
  if ( LOBYTE(v15[4].LowPart) < 6u )
    v16 = 0LL;
  else
    v16 = *(_QWORD *)(v15[470].QuadPart + 536);
  *((_QWORD *)v10 + 30) = v16;
  if ( !v7 )
  {
    *((_QWORD *)v10 + 27) = *(_QWORD *)(v15[470].QuadPart + 512);
    *((_QWORD *)v10 + 28) = *(_QWORD *)(v15[470].QuadPart + 520);
    *((_QWORD *)v10 + 29) = *(_QWORD *)(v15[470].QuadPart + 528);
  }
  *((_QWORD *)v10 + 24) = v15;
  *((_QWORD *)v10 + 1) = (char *)v14 + 4;
  *((_QWORD *)v10 + 9) = v14;
  *((_QWORD *)v10 + 8) = NdisAfHandle;
  *v10 = 1;
  if ( !NdisAfHandle )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x13u,
        0xDu,
        (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids);
    *((_QWORD *)v10 + 3) = ProtocolVcContext;
    *((_QWORD *)v10 + 10) = NdisBindingHandle;
    v14[5] = (KSPIN_LOCK)v10;
    v37 = *((_QWORD *)v10 + 3);
    v10[22] = 1;
    v14[3] = v37;
    v14[2] = (KSPIN_LOCK)NdisBindingHandle;
    v38 = *((_QWORD *)NdisBindingHandle + 3);
    if ( *(_BYTE *)(v38 + 56) < 6u )
    {
      v39 = 0LL;
      v14[6] = *(_QWORD *)(v38 + 304);
      v40 = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 312LL);
      v14[8] = 0LL;
    }
    else
    {
      v14[8] = *(_QWORD *)(v38 + 216);
      v39 = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 208LL);
      v40 = 0LL;
      v14[6] = 0LL;
    }
    v14[9] = v39;
    v14[7] = v40;
    *((_QWORD *)v10 + 21) = *((_QWORD *)NdisBindingHandle + 125);
    v41 = *((_QWORD *)NdisBindingHandle + 126);
    *((_QWORD *)v10 + 18) = ProtocolVcContext;
    *((_QWORD *)v10 + 22) = v41;
    ExInterlockedInsertHeadList(
      (PLIST_ENTRY)((char *)NdisBindingHandle + 1048),
      (PLIST_ENTRY)v10 + 2,
      (PKSPIN_LOCK)NdisBindingHandle + 29);
    goto LABEL_98;
  }
  *((_QWORD *)v10 + 10) = *((_QWORD *)NdisAfHandle + 46);
  *((_QWORD *)v10 + 17) = *((_QWORD *)NdisAfHandle + 5);
  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
  {
    *((_QWORD *)v10 + 14) = *((_QWORD *)NdisAfHandle + 36);
    *((_QWORD *)v10 + 15) = *((_QWORD *)NdisAfHandle + 41);
    v17 = *((_QWORD *)NdisAfHandle + 44);
  }
  else
  {
    *((_QWORD *)v10 + 14) = *((_QWORD *)NdisAfHandle + 17);
    *((_QWORD *)v10 + 15) = *((_QWORD *)NdisAfHandle + 22);
    v17 = *((_QWORD *)NdisAfHandle + 25);
  }
  *((_QWORD *)v10 + 16) = v17;
  if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
  {
    *((_QWORD *)v10 + 21) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 4) + 96LL);
    *((_QWORD *)v10 + 22) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 4) + 104LL);
    v18 = *((_QWORD *)NdisAfHandle + 4);
  }
  else
  {
    *((_QWORD *)v10 + 21) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 3) + 96LL);
    *((_QWORD *)v10 + 22) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 3) + 104LL);
    v18 = *((_QWORD *)NdisAfHandle + 3);
  }
  *((_QWORD *)v10 + 23) = *(_QWORD *)(v18 + 112);
  if ( v8 )
    *((_DWORD *)v14 + 1) |= 0x10u;
  if ( !v11 )
  {
    v14[2] = *((_QWORD *)NdisAfHandle + 46);
    v19 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
    if ( *(_BYTE *)(v19 + 56) < 6u )
    {
      v21 = 0LL;
      v14[7] = *(_QWORD *)(v19 + 312);
      v20 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
      v14[8] = 0LL;
    }
    else
    {
      v14[8] = *(_QWORD *)(v19 + 216);
      v20 = 0LL;
      v21 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
      v14[7] = 0LL;
    }
    v14[9] = v21;
    v14[6] = v20;
    v10[22] = 1;
    if ( Increment )
      v14[5] = (KSPIN_LOCK)v10;
    else
      v14[4] = (KSPIN_LOCK)v10;
    goto LABEL_58;
  }
  if ( Increment )
  {
    if ( v8 )
    {
      v14[5] = (KSPIN_LOCK)v8;
      *((_DWORD *)v8 + 22) = 0;
    }
    else
    {
      v14[2] = *((_QWORD *)NdisAfHandle + 46);
      v22 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
      if ( *(_BYTE *)(v22 + 56) < 6u )
      {
        v24 = 0LL;
        v14[7] = *(_QWORD *)(v22 + 312);
        v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
        v14[8] = 0LL;
      }
      else
      {
        v14[8] = *(_QWORD *)(v22 + 216);
        v23 = 0LL;
        v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
        v14[7] = 0LL;
      }
      v14[9] = v24;
      v14[6] = v23;
    }
    v14[4] = (KSPIN_LOCK)v10;
  }
  else
  {
    v14[2] = *((_QWORD *)NdisAfHandle + 46);
    v29 = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL);
    if ( *(_BYTE *)(v29 + 56) < 6u )
    {
      v31 = 0LL;
      v14[7] = *(_QWORD *)(v29 + 312);
      v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 304LL);
      v14[8] = 0LL;
    }
    else
    {
      v14[8] = *(_QWORD *)(v29 + 216);
      v30 = 0LL;
      v31 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 208LL);
      v14[7] = 0LL;
    }
    v14[9] = v31;
    v14[6] = v30;
    v14[5] = (KSPIN_LOCK)v10;
    if ( v8 )
    {
      v14[4] = (KSPIN_LOCK)v8;
      *((_DWORD *)v8 + 22) = 1;
      goto LABEL_58;
    }
  }
  v10[22] = 1;
LABEL_58:
  v25 = (NDIS_HANDLE *)(v10 + 36);
  v26 = (NDIS_HANDLE *)(v10 + 6);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 2);
  if ( NdisBindingHandle == *((NDIS_HANDLE *)NdisAfHandle + 46) )
  {
    *v26 = ProtocolVcContext;
    v27 = v10 + 36;
    if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
      v28 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 4) + 8LL))(
              *((_QWORD *)NdisAfHandle + 6),
              v10,
              v27);
    else
      v28 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 3) + 8LL))(
              *((_QWORD *)NdisAfHandle + 6),
              v10,
              v27);
    v9 = v28;
    if ( v54 )
      *((_QWORD *)v10 + 25) = *v25;
  }
  else
  {
    *v25 = ProtocolVcContext;
    v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _DWORD *))(*((_QWORD *)NdisAfHandle + 46) + 984LL))(
           *((_QWORD *)NdisAfHandle + 47),
           v10,
           v10 + 6);
  }
  if ( !v9 && (!v8 || v51 && !Increment) )
    v14[3] = (KSPIN_LOCK)*v26;
  if ( v8 )
    *((_DWORD *)v14 + 1) &= ~0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)v10 + 2, NewIrql);
  if ( !v9 )
  {
    v32 = (KSPIN_LOCK *)((char *)NdisBindingHandle + 232);
    if ( Increment )
    {
      ExInterlockedInsertHeadList((PLIST_ENTRY)((char *)NdisBindingHandle + 1048), (PLIST_ENTRY)v10 + 2, v32);
      *((_QWORD *)v10 + 13) = *v25;
      if ( *((_DWORD *)NdisAfHandle + 98) >= 6u )
        v33 = *((_QWORD *)NdisAfHandle + 4);
      else
        v33 = *((_QWORD *)NdisAfHandle + 3);
      *((_QWORD *)v10 + 12) = *(_QWORD *)(v33 + 16);
      if ( v54 )
        goto LABEL_99;
      v34 = *((_QWORD *)NdisAfHandle + 5);
      v35 = (_LIST_ENTRY *)(v10 + 38);
    }
    else
    {
      *((_QWORD *)v10 + 13) = *v26;
      *((_QWORD *)v10 + 12) = *(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 992LL);
      ExInterlockedInsertHeadList((PLIST_ENTRY)((char *)NdisBindingHandle + 1048), (PLIST_ENTRY)(v10 + 38), v32);
      v34 = *((_QWORD *)NdisAfHandle + 46);
      v35 = (_LIST_ENTRY *)(v10 + 8);
    }
    ExInterlockedInsertHeadList((PLIST_ENTRY)(v34 + 1048), v35, (PKSPIN_LOCK)(v34 + 232));
    goto LABEL_99;
  }
  if ( !v8 )
  {
    if ( !v54 )
    {
      v36 = (void (__fastcall *)(_QWORD))*((_QWORD *)v10 + 27);
      if ( v36 )
        v36(*((_QWORD *)v10 + 25));
    }
    ExFreePoolWithTag(v14, 0);
  }
  ExFreePoolWithTag(v10, 0);
  v10 = 0LL;
LABEL_98:
  if ( v9 )
    goto LABEL_120;
LABEL_99:
  v42 = *(_BYTE *)(*((_QWORD *)v10 + 24) + 32LL);
  if ( NdisAfHandle )
  {
    v43 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)NdisAfHandle + 46) + 24LL) + 56LL) >= 6u;
  }
  else
  {
    if ( *(_BYTE *)(*((_QWORD *)NdisBindingHandle + 3) + 56LL) >= 6u )
    {
LABEL_111:
      if ( v42 < 6u )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x13u,
            0xFu,
            (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids);
        v44 = 0LL;
        v45 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
        v46 = ndisMCoSendCompleteToNetBufferLists;
        v47 = 0LL;
        v48 = ndisCoSendNetBufferListsToNdisPacket;
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x13u,
            0xEu,
            (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids);
        v44 = ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
        v45 = 0LL;
        v46 = 0LL;
        v47 = ndisMCoSendNetBufferListsCompleteToNetBufferLists;
        v48 = ndisCoSendNetBufferListsToNetBufferLists;
      }
      *((_QWORD *)v10 + 31) = v48;
      *((_QWORD *)v10 + 32) = v47;
      *((_QWORD *)v10 + 33) = 0LL;
      *((_QWORD *)v10 + 34) = v46;
      *((_QWORD *)v10 + 35) = v45;
      goto LABEL_119;
    }
    v43 = 0;
  }
  if ( v43 )
    goto LABEL_111;
  if ( v42 < 6u )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x13u,
        0x11u,
        (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids);
    *((_QWORD *)v10 + 31) = 0LL;
    *((_QWORD *)v10 + 33) = ndisCoSendPacketsToNdisPackets;
    *((_QWORD *)v10 + 34) = ndisMCoSendCompleteToNdisPacket;
    *((_QWORD *)v10 + 35) = ndisMCoIndicateReceiveNdisPacketToNdisPacket;
    v44 = 0LL;
    *((_QWORD *)v10 + 32) = 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x13u,
        0x10u,
        (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids);
    *((_QWORD *)v10 + 31) = 0LL;
    *((_QWORD *)v10 + 32) = ndisMCoSendNetBufferListsCompleteToNdisPackets;
    *((_QWORD *)v10 + 33) = ndisCoSendPacketsToNetBufferLists;
    v44 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
    *((_QWORD *)v10 + 34) = 0LL;
    *((_QWORD *)v10 + 35) = 0LL;
  }
LABEL_119:
  *((_QWORD *)v10 + 36) = v44;
  *((LARGE_INTEGER *)v10 + 39) = ExInterlockedAddLargeInteger(v52 + 167, (LARGE_INTEGER)0x100000000LL, &ndisGlobalLock);
LABEL_120:
  *NdisVcHandle = v10;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x12u,
      (struct _GUID *)&WPP_efcd9713de433365d671794f7ef4fa0a_Traceguids,
      (char)v10,
      v9);
  return v9;
}
