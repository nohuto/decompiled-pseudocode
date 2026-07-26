/*
 * XREFs of ?ndisOidCloneForCompatibility@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_OID_REQUEST@@EPEAPEAU2@@Z @ 0x1C000AF10
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000BF70 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C00AE938 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C00AEFC0 (ndisMInvokeDirectOidRequest.c)
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00F92D0 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     NdisAllocateCloneOidRequest @ 0x1C000E430 (NdisAllocateCloneOidRequest.c)
 */

NDIS_STATUS __fastcall ndisOidCloneForCompatibility(
        struct _NDIS_OBJECT_HEADER *a1,
        struct _NDIS_OID_REQUEST *a2,
        char a3,
        struct _NDIS_OID_REQUEST **a4)
{
  struct _NDIS_OBJECT_HEADER *v4; // rbx
  struct _NDIS_OBJECT_HEADER *v7; // rbp
  __int64 v9; // rcx
  char v10; // r14
  NDIS_STATUS result; // eax
  int v12; // edx
  PNDIS_OID_REQUEST v13; // rcx
  int v14; // r9d
  KIRQL v15; // al
  KSPIN_LOCK *p_Type; // rcx

  v4 = a1;
  v7 = 0LL;
  if ( a1->Type != 5 )
  {
    v7 = a1;
    v4 = 0LL;
  }
  if ( v4 )
  {
    v9 = *(_QWORD *)&v4[4].Type;
    if ( *(_BYTE *)(v9 + 100) > 6u || *(_BYTE *)(v9 + 100) == 6 && *(_BYTE *)(v9 + 101) >= 0x32u )
      goto LABEL_7;
  }
  else if ( v7[8].Type > 6u || v7[8].Type == 6 && v7[8].Revision >= 0x32u )
  {
LABEL_7:
    v10 = 1;
    if ( a2->Header.Revision == 1 )
      goto LABEL_8;
    return 0;
  }
  v10 = 0;
  if ( a2->Header.Revision != 2 && a2->Header.Size == 236 )
    return 0;
LABEL_8:
  result = NdisAllocateCloneOidRequest(*(NDIS_HANDLE *)&a2->NdisReserved[32], a2, 0x7172444Eu, a4);
  if ( result )
    return result;
  v13 = *a4;
  if ( v10 )
  {
    v13->Header.Revision = 2;
    (*a4)->Header.Size = 248;
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v14 = 14;
    goto LABEL_12;
  }
  v13->Header.Revision = 1;
  (*a4)->Header.Size = 236;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v14 = 15;
LABEL_12:
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      v14,
      (struct _GUID *)&WPP_0ab6cdb66a74331fb483b2e922e06dd7_Traceguids,
      (char)a2,
      (char)*a4,
      a2->DATA.QUERY_INFORMATION.Oid);
  }
LABEL_13:
  *(_DWORD *)&(*a4)->NdisReserved[16] |= 0x8000000u;
  if ( a3 && (*(_DWORD *)&a2->NdisReserved[16] & 0x400) == 0 )
  {
    if ( v4 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v4[36].Type);
      p_Type = (KSPIN_LOCK *)&v4[36].Type;
      *(_QWORD *)&v4[38].Type = KeGetCurrentThread();
      *(_QWORD *)&v4[44].Type = *a4;
      *(_QWORD *)&v4[38].Type = 0LL;
    }
    else
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v7[24].Type);
      p_Type = (KSPIN_LOCK *)&v7[24].Type;
      *(_QWORD *)&v7[130].Type = KeGetCurrentThread();
      *(_QWORD *)&v7[552].Type = *a4;
      *(_QWORD *)&v7[130].Type = 0LL;
    }
    KeReleaseSpinLock(p_Type, v15);
  }
  return 0;
}
