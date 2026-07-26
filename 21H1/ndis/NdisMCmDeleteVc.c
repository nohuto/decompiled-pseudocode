/*
 * XREFs of NdisMCmDeleteVc @ 0x1C00B94F0
 * Callers:
 *     <none>
 * Callees:
 *     NdisCoDeleteVc @ 0x1C00B8B20 (NdisCoDeleteVc.c)
 */

NDIS_STATUS __stdcall NdisMCmDeleteVc(NDIS_HANDLE NdisVcHandle)
{
  __int64 v1; // rcx
  void *v2; // rcx

  v1 = *((_QWORD *)NdisVcHandle + 9);
  if ( *(_QWORD *)(v1 + 32) )
    v2 = *(void **)(v1 + 32);
  else
    v2 = *(void **)(v1 + 40);
  return NdisCoDeleteVc(v2);
}
