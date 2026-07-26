/*
 * XREFs of ?ndisOidFreeInternalCloneRequest@@YAXPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C00096B0
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000BF70 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C001E814 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisMOidRequestComplete @ 0x1C001E9B0 (NdisMOidRequestComplete.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D764 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C00AE938 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C00AEFC0 (ndisMInvokeDirectOidRequest.c)
 *     NdisFDirectOidRequestComplete @ 0x1C00AF780 (NdisFDirectOidRequestComplete.c)
 *     NdisMDirectOidRequestComplete @ 0x1C00AF860 (NdisMDirectOidRequestComplete.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00F92D0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A1C8 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 */

void __fastcall ndisOidFreeInternalCloneRequest(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        char a3,
        struct _NDIS_OID_REQUEST **a4)
{
  KSPIN_LOCK v4; // rsi
  bool v5; // zf
  struct _NDIS_FILTER_BLOCK *v6; // rbx
  KSPIN_LOCK *p_Type; // rbp
  struct _NDIS_OID_REQUEST *v9; // rdi
  KIRQL v10; // al
  KSPIN_LOCK *p_Lock; // rcx
  KIRQL v12; // dl
  __int64 v13; // rbx
  unsigned __int8 v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)&a2->NdisReserved[24];
  v5 = a1->Header.Type == 5;
  v6 = a1;
  p_Type = 0LL;
  v14 = 0;
  if ( !v5 )
  {
    p_Type = (KSPIN_LOCK *)&a1->Header.Type;
    v6 = 0LL;
  }
  v9 = a2;
  if ( v4 )
  {
    *(_QWORD *)&a2->NdisReserved[24] = 0LL;
    if ( a2->RequestType == NdisRequestMethod )
    {
      *(_QWORD *)(v4 + 60) = *(_QWORD *)&a2->DATA.METHOD_INFORMATION.BytesWritten;
      *(_DWORD *)(v4 + 68) = a2->DATA.METHOD_INFORMATION.BytesNeeded;
      *(_OWORD *)(v4 + 40) = *(_OWORD *)&a2->DATA.METHOD_INFORMATION.InformationBuffer;
    }
    else
    {
      *(_QWORD *)(v4 + 52) = *(_QWORD *)&a2->DATA.METHOD_INFORMATION.OutputBufferLength;
      *(_QWORD *)(v4 + 40) = a2->DATA.QUERY_INFORMATION.InformationBuffer;
      *(_DWORD *)(v4 + 48) = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
    }
    if ( a3 && (*(_DWORD *)(v4 + 88) & 0x400) == 0 )
    {
      if ( v6 )
      {
        NDIS_ACQUIRE_FILTER_SPIN_LOCK(v6, &v14);
        v12 = v14;
        p_Lock = &v6->Lock;
        v6->PendingOidRequest = (_NDIS_OID_REQUEST *)v4;
        v6->LockThread = 0LL;
      }
      else
      {
        v10 = KeAcquireSpinLockRaiseToDpc(p_Type + 12);
        p_Type[276] = v4;
        p_Lock = p_Type + 12;
        v12 = v10;
        p_Type[65] = 0LL;
      }
      KeReleaseSpinLock(p_Lock, v12);
    }
    v13 = *(_QWORD *)&v9->NdisReserved[24];
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)a2,
        11,
        13,
        (struct _GUID *)&WPP_0ab6cdb66a74331fb483b2e922e06dd7_Traceguids,
        (char)v9,
        (char)v9->RequestHandle);
    }
    if ( v13 )
    {
      *(_BYTE *)(v13 + 232) = v9->SupportedRevision;
      *(_DWORD *)(v13 + 152) = *(_DWORD *)&v9->NdisReserved[80];
    }
    ExFreePoolWithTag(v9, 0);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_0ab6cdb66a74331fb483b2e922e06dd7_Traceguids);
  }
  if ( a4 )
    *a4 = (struct _NDIS_OID_REQUEST *)v4;
}
