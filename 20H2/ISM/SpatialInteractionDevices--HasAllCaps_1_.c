/*
 * XREFs of SpatialInteractionDevices::HasAllCaps_1_ @ 0x1800C7430
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800C9770 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall SpatialInteractionDevices::HasAllCaps_1_(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  while ( *(_QWORD *)(a1 + 8 * v1) )
  {
    if ( ++v1 )
      return 1;
  }
  return 0;
}
