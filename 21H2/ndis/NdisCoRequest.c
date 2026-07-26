/*
 * XREFs of NdisCoRequest @ 0x1C00BA630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B5D4C (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B5F00 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCoOidRequest @ 0x1C00BA100 (NdisCoOidRequest.c)
 *     NdisCoRequestComplete @ 0x1C00BAA00 (NdisCoRequestComplete.c)
 */

__int64 __fastcall NdisCoRequest(
        NDIS_HANDLE NdisBindingHandle,
        __int64 a2,
        _QWORD *NdisVcHandle,
        _QWORD *NdisPartyHandle,
        char *a5)
{
  NDIS_HANDLE v8; // r12
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  unsigned int v12; // ebp
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 (__fastcall *v15)(PVOID, __int64, __int64, char *); // rbp
  KIRQL v16; // al
  KSPIN_LOCK *v17; // rcx
  NDIS_STATUS v19; // eax
  char *PoolWithTag; // rax
  char *OidRequest; // rbx
  _DWORD *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r10
  __int64 v26; // r11
  char v27; // [rsp+70h] [rbp+8h]
  PVOID v28; // [rsp+90h] [rbp+28h]

  v27 = (char)NdisBindingHandle;
  v8 = NdisBindingHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xFu,
      (struct _GUID *)&WPP_7eb625e829df31d5ca7cc7c4bda9cbf4_Traceguids,
      (char)NdisBindingHandle,
      a2,
      a5);
  if ( *((_DWORD *)a5 + 10) == -33554422
    && *((_DWORD *)a5 + 8) == 1
    && a2
    && ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)a2) )
  {
    if ( *(_DWORD *)(a2 + 396) >= 6u )
    {
      *(_QWORD *)(a2 + 400) = a5;
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 384));
      v11 = (KSPIN_LOCK *)(a2 + 384);
      if ( (*(_DWORD *)(a2 + 8) & 0x40000000) != 0 )
      {
        *(_BYTE *)(a2 + 592) = 1;
        *(_QWORD *)(a2 + 584) = a5;
        KeReleaseSpinLock(v11, v10);
LABEL_10:
        v12 = 259;
        goto LABEL_23;
      }
      KeReleaseSpinLock(v11, v10);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(a2 + 360))(*(_QWORD *)(a2 + 376));
      if ( v12 != 259 )
      {
        *(_QWORD *)(a2 + 400) = 0LL;
        ndisDereferenceAf((KSPIN_LOCK *)a2);
      }
      goto LABEL_23;
    }
    v13 = 0LL;
    *(_OWORD *)(a5 + 72) = 0LL;
    v14 = 0LL;
    *(_OWORD *)(a5 + 88) = 0LL;
    v15 = *(__int64 (__fastcall **)(PVOID, __int64, __int64, char *))(a2 + 80);
    v28 = *(PVOID *)(a2 + 376);
    *((_QWORD *)a5 + 11) = *(_QWORD *)(a2 + 48);
    *((_QWORD *)a5 + 9) = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 128LL);
    if ( NdisVcHandle )
    {
      *((_QWORD *)a5 + 10) = NdisVcHandle[18];
      v13 = NdisVcHandle[3];
    }
    if ( NdisPartyHandle )
    {
      *((_QWORD *)a5 + 12) = NdisPartyHandle[18];
      v14 = NdisPartyHandle[2];
    }
    if ( !v15 )
    {
      v12 = -1073741637;
      ndisDereferenceAf((KSPIN_LOCK *)a2);
      LOBYTE(v8) = v27;
      goto LABEL_23;
    }
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 384));
    v17 = (KSPIN_LOCK *)(a2 + 384);
    if ( (*(_DWORD *)(a2 + 8) & 0x40000000) != 0 )
    {
      *(_BYTE *)(a2 + 592) = 1;
      *(_QWORD *)(a2 + 584) = a5;
      KeReleaseSpinLock(v17, v16);
    }
    else
    {
      KeReleaseSpinLock(v17, v16);
      v19 = v15(v28, v13, v14, a5);
      v12 = v19;
      if ( v19 == 259 )
        goto LABEL_22;
      NdisCoRequestComplete(v19, (PVOID)a2, NdisVcHandle, NdisPartyHandle, a5);
    }
    v12 = 259;
LABEL_22:
    LOBYTE(v8) = v27;
    goto LABEL_23;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x6572444Eu);
  OidRequest = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag + 4, 0, 0xF4uLL);
    *(_DWORD *)OidRequest = 16253334;
    *((_DWORD *)OidRequest + 1) = *((_DWORD *)a5 + 8);
    if ( *((_DWORD *)a5 + 8) != 12 )
    {
      *((_DWORD *)OidRequest + 8) = *((_DWORD *)a5 + 10);
      *((_QWORD *)OidRequest + 5) = *((_QWORD *)a5 + 6);
      *((_DWORD *)OidRequest + 12) = *((_DWORD *)a5 + 14);
      *((_DWORD *)OidRequest + 13) = *((_DWORD *)a5 + 15);
      *((_DWORD *)OidRequest + 14) = *((_DWORD *)a5 + 16);
    }
    *((_QWORD *)OidRequest + 13) = v8;
    *((_QWORD *)OidRequest + 12) = a5;
    v12 = NdisCoOidRequest(v8, (NDIS_HANDLE)a2, NdisVcHandle, NdisPartyHandle, (PNDIS_OID_REQUEST)OidRequest);
    if ( v12 != 259 )
    {
      v22 = (_DWORD *)*((_QWORD *)OidRequest + 12);
      v23 = *((_QWORD *)OidRequest + 14);
      v24 = *((_QWORD *)OidRequest + 16);
      v25 = *((_QWORD *)OidRequest + 17);
      v26 = *((_QWORD *)OidRequest + 13);
      if ( v22[8] != 12 )
      {
        v22[15] = *((_DWORD *)OidRequest + 13);
        v22[16] = *((_DWORD *)OidRequest + 14);
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD *))(v26 + 1072))(v12, v25, v24, v23, v22);
      ExFreePoolWithTag(OidRequest, 0);
      goto LABEL_10;
    }
  }
  else
  {
    v12 = -1073741670;
  }
LABEL_23:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_7eb625e829df31d5ca7cc7c4bda9cbf4_Traceguids,
      (char)v8,
      a2,
      a5);
  return v12;
}
