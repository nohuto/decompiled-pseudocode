/*
 * XREFs of ?ndisOidPostStatistics@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0006870
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A6968 (-ndisSSUpdateOidCacheValue@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostStatistics(struct _NDIS_REQ_TRACKER *a1)
{
  if ( *(_QWORD *)a1 && (*(_DWORD *)(*((_QWORD *)a1 + 4) + 4LL) & 0xFFFFFFFD) == 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a1 + 4448LL) )
      ndisSSUpdateOidCacheValue(a1);
  }
}
