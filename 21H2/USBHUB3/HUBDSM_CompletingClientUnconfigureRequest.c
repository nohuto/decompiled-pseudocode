/*
 * XREFs of HUBDSM_CompletingClientUnconfigureRequest @ 0x1C001CE00
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x1C00145C4 (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x1C0025F40 (HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration.c)
 */

__int64 __fastcall HUBDSM_CompletingClientUnconfigureRequest(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_QWORD *)(v1 + 48) )
  {
    HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(*(_QWORD *)(a1 + 960));
    *(_QWORD *)(v1 + 48) = 0LL;
  }
  HUBPDO_CompleteClientSerialRequestWithStatusSuccess(v1);
  return 4077LL;
}
