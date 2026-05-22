/*
 * XREFs of SpatialInteractionDevices::HasAllCaps_4_ @ 0x1800C78D0
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800C9BD0 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall SpatialInteractionDevices::HasAllCaps_4_(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  while ( *(_QWORD *)(a1 + 8 * v1) )
  {
    if ( (unsigned __int64)++v1 >= 4 )
      return 1;
  }
  return 0;
}
