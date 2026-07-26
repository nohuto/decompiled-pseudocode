/*
 * XREFs of ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B4EC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C0013D6C (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002C0DC (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0034858 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ndisIfCreateNetworkBlock @ 0x1C0034FF0 (ndisIfCreateNetworkBlock.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C0035EA4 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     ?ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x1C0035EE4 (-ndisGetNsiClientInfoForThread@@YAXPEAU_ETHREAD@@PEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00B4800 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ndisIfReleaseSiteId @ 0x1C00B4834 (ndisIfReleaseSiteId.c)
 *     ndisNsiChangeNetworkInfo @ 0x1C00B4868 (ndisNsiChangeNetworkInfo.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ndisNsiNotifyClientNetworkChange @ 0x1C0127B3C (ndisNsiNotifyClientNetworkChange.c)
 */

__int64 __fastcall ndisNsiSetAllNetworkInfo(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  int v2; // edi
  __int64 v3; // rbx
  char v4; // r13
  char v5; // r12
  _OWORD *v6; // rax
  char *v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm1
  const struct _GUID *v10; // r15
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  __int64 v12; // rsi
  int v13; // r11d
  const struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  int v15; // r11d
  int v16; // r11d
  int v17; // eax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v20; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rax
  KIRQL v23; // bl
  KIRQL NewIrql[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *v26; // [rsp+50h] [rbp-B8h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *v27[2]; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  struct _KEVENT Event; // [rsp+70h] [rbp-98h] BYREF
  char v30[528]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v31; // [rsp+298h] [rbp+190h] BYREF
  __int64 v32; // [rsp+2A8h] [rbp+1A0h]

  *(_DWORD *)&NewIrql[4] = 0;
  v28 = 0LL;
  v2 = 0;
  v32 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  *(_OWORD *)v27 = 0LL;
  v31 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_26d5752112ac3cd786e6296fc2fada98_Traceguids,
      a1);
  ndisGetNsiClientInfoForThread(KeGetCurrentThread(), (struct _NDIS_NSI_CLIENT_INFO *)&v31);
  KeEnterCriticalRegion();
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(v30, 0, sizeof(v30));
  if ( *((_DWORD *)a1 + 6) != 16 || *((_DWORD *)a1 + 10) != 528 )
    goto LABEL_4;
  v6 = (_OWORD *)*((_QWORD *)a1 + 4);
  v7 = v30;
  v8 = 4LL;
  do
  {
    *(_OWORD *)v7 = *v6;
    *((_OWORD *)v7 + 1) = v6[1];
    *((_OWORD *)v7 + 2) = v6[2];
    *((_OWORD *)v7 + 3) = v6[3];
    *((_OWORD *)v7 + 4) = v6[4];
    *((_OWORD *)v7 + 5) = v6[5];
    *((_OWORD *)v7 + 6) = v6[6];
    v7 += 128;
    v9 = v6[7];
    v6 += 8;
    *((_OWORD *)v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)v7 = *v6;
  if ( v30[0] != -84 || v30[1] != 1 || *(_WORD *)&v30[2] != 528 )
    *(_DWORD *)v30 = 34603436;
  v10 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  NetworkBlock = ndisIfFindNetworkBlock(v10);
  v26 = NetworkBlock;
  v12 = (__int64)NetworkBlock;
  if ( NetworkBlock
    && !ndisIsCompartmentAccessibleByClient(
          *((const struct _NDIS_IF_COMPARTMENT_BLOCK **)NetworkBlock + 6),
          (const struct _NDIS_NSI_CLIENT_INFO *)&v31,
          1) )
  {
    goto LABEL_14;
  }
  v13 = *((_DWORD *)a1 + 12);
  if ( v13 != 3 )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(*(unsigned int *)&v30[4]);
    v3 = (__int64)CompartmentBlock;
    if ( !CompartmentBlock
      || !ndisIsCompartmentAccessibleByClient(CompartmentBlock, (const struct _NDIS_NSI_CLIENT_INFO *)&v31, 1) )
    {
      goto LABEL_14;
    }
  }
  if ( !v13 )
  {
    if ( !v12 )
      goto LABEL_14;
    goto LABEL_37;
  }
  v15 = v13 - 1;
  if ( !v15 )
  {
    if ( v12 )
    {
      v2 = -1073741270;
      goto LABEL_42;
    }
    goto LABEL_32;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( !v12 )
    {
LABEL_32:
      v2 = ndisIfCreateNetworkBlock(v3, (__int64)v10, (__int64)v30, &v26);
      if ( v2 < 0 )
        goto LABEL_42;
      v12 = (__int64)v26;
      v4 = 1;
LABEL_39:
      ++*(_DWORD *)(v12 + 76);
      if ( v5 )
      {
        v27[1] = *((struct _NDIS_IF_NETWORK_BLOCK **)a1 + 4);
        v28 = *(unsigned int *)&NewIrql[4];
        HIDWORD(v27[0]) = 0;
      }
      KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
      ndisNsiNotifyClientNetworkChange(v12, v4);
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v12);
      goto LABEL_42;
    }
LABEL_37:
    v2 = ndisNsiChangeNetworkInfo(v12, (__int64)v30, *((_DWORD *)a1 + 10), 0, (int *)&NewIrql[4]);
    if ( !*(_DWORD *)&NewIrql[4] )
      goto LABEL_42;
    v5 = 1;
    goto LABEL_39;
  }
  if ( v16 != 1 )
  {
LABEL_4:
    v2 = -1073741811;
LABEL_42:
    KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
    goto LABEL_43;
  }
  if ( !v12 )
  {
LABEL_14:
    v2 = -1073741072;
    goto LABEL_42;
  }
  if ( *(_QWORD *)(v12 + 56) != v12 + 56 )
    goto LABEL_4;
  v17 = *(_DWORD *)(v12 + 72);
  if ( (v17 & 1) != 0 )
    goto LABEL_4;
  *(_DWORD *)(v12 + 72) = v17 | 1;
  v18 = *(_QWORD *)(v12 + 16);
  if ( *(_QWORD *)(v18 + 8) != v12 + 16 )
    goto LABEL_30;
  v19 = *(_QWORD **)(v12 + 24);
  if ( *v19 != v12 + 16
    || (--dword_1C00E3FB8,
        *v19 = v18,
        *(_QWORD *)(v18 + 8) = v19,
        ndisIfReleaseSiteId(*(_DWORD *)(v12 + 88)),
        COMPARTMENTBLOCK_DECREMENT_REF(v20),
        v21 = *(_QWORD *)v12,
        *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12)
    || (v22 = *(_QWORD **)(v12 + 8), *v22 != v12) )
  {
LABEL_30:
    __fastfail(3u);
  }
  *v22 = v21;
  *(_QWORD *)(v21 + 8) = v22;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(v12 + 608) = &Event;
  KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
  ndisNsiNotifyClientNetworkChange(v12, 2);
  v23 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NETWORKBLOCK_DECREMENT_REF((struct _NDIS_IF_NETWORK_BLOCK *)v12);
  KeReleaseSpinLock(&ndisIfListLock, v23);
  ndisWaitForKernelObject(&Event);
  *(_QWORD *)(v12 + 608) = 0LL;
  ExFreePoolWithTag((PVOID)v12, 0);
LABEL_43:
  KeLeaveCriticalRegion();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_26d5752112ac3cd786e6296fc2fada98_Traceguids,
      (char)a1,
      v2);
  return (unsigned int)v2;
}
