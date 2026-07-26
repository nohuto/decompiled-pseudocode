/*
 * XREFs of ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C001E814
 * Callers:
 *     ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0020470 (-ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_M.c)
 *     ?ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00AC270 (-ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@.c)
 * Callees:
 *     ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00096B0 (-ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001B5F8 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x1C001E8AC (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00A4F00 (-ndisClearBusy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@@Z.c)
 */

void __fastcall ndisMRawOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        int a3)
{
  __int64 v3; // rax
  struct _NDIS_OID_REQUEST *v6; // rbx
  __int64 v7; // rcx
  NdisWatchdogState *v8; // rcx
  struct _NDIS_OID_REQUEST *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 470);
  v9 = a2;
  v6 = a2;
  v7 = *(_QWORD *)(v3 + 352);
  if ( !v7 || *(_QWORD *)(v7 + 64) == *(_QWORD *)(v3 + 176) )
    v8 = (NdisWatchdogState *)*((_QWORD *)a1 + 681);
  else
    v8 = (NdisWatchdogState *)*((_QWORD *)a1 + 682);
  if ( v8 != (NdisWatchdogState *)-1LL )
    NdisWatchdogState::CancelTimer(v8);
  if ( (*(_DWORD *)&v6->NdisReserved[16] & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((struct _NDIS_FILTER_BLOCK *)a1, v6, 1, &v9);
    v6 = v9;
  }
  if ( (*(_DWORD *)&v6->NdisReserved[16] & 0x400) != 0 )
  {
    *(_DWORD *)&v6->NdisReserved[8] = a3;
    KeSetEvent((PRKEVENT)&v6->NdisReserved[40], 0, 0);
  }
  else
  {
    if ( *((_QWORD *)a1 + 556) )
      ndisClearBusy(a1, 1LL, 33LL);
    ndisMOidRequestCompleteInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v6, a3, 0LL);
  }
}
