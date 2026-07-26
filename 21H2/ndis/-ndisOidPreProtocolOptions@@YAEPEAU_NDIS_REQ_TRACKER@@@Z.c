/*
 * XREFs of ?ndisOidPreProtocolOptions@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003BAF4 (-GetMiniportFromReqTracker@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

bool __fastcall ndisOidPreProtocolOptions(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v3; // bl
  __int64 v4; // rcx
  struct _NDIS_MINIPORT_BLOCK *MiniportFromReqTracker; // r15
  int v6; // eax
  __int64 v8; // rbp
  unsigned int *v9; // r14
  KIRQL v10; // al
  unsigned int v11; // ecx

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0;
  MiniportFromReqTracker = GetMiniportFromReqTracker(a1);
  v6 = *(_DWORD *)(v1 + 4);
  if ( v6 != 1 || *(_QWORD *)(v1 + 40) && *(_DWORD *)(v1 + 48) >= 4u )
  {
    v8 = *(_QWORD *)(v4 + 24);
    if ( v8 && v6 == 1 && *(_DWORD *)(v1 + 32) == 65810 )
    {
      v9 = *(unsigned int **)(v1 + 40);
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 232));
      v11 = *v9;
      if ( (*v9 & 4) != 0 )
      {
        *v9 = v11 & 0xFFFFFFFB;
        *(_DWORD *)(v8 + 224) |= 8u;
        v11 = *v9;
      }
      if ( (v11 & 2) != 0 && (MiniportFromReqTracker->MacOptions & 8) != 0 )
      {
        *v9 = v11 & 0xFFFFFFFD;
        *(_DWORD *)(v8 + 224) |= 2u;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 232), v10);
      *(_DWORD *)(v1 + 52) = 4;
    }
    if ( *(_QWORD *)a1 )
      return MiniportFromReqTracker->MajorNdisVersion >= 6u;
    return v3;
  }
  else
  {
    *(_DWORD *)(v4 + 40) = -1073741811;
    return 1;
  }
}
