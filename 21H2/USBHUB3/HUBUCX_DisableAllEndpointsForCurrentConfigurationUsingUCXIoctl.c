/*
 * XREFs of HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C00258C8
 * Callers:
 *     HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach @ 0x1C001CC30 (HUBDSM_DisablingEndpointsInControllerOHubStopOnDetach.c)
 *     HUBDSM_DisablingEndpointsOnDetachWithSpecialFile @ 0x1C001CD30 (HUBDSM_DisablingEndpointsOnDetachWithSpecialFile.c)
 *     HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending @ 0x1C001CD60 (HUBDSM_DisablingEndpointsOnDetachWithSpecialFileAndResetPending.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C0023E38 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 */

_UNKNOWN **__fastcall HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl(__int64 a1)
{
  __int64 v1; // rax
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned int i; // r9d
  int v8; // ecx
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( !v1 )
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 504, 4028);
  if ( !*(_DWORD *)(a1 + 96) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x37u,
        (__int64)&WPP_0fdba02233013f1195f31cf9301a7589_Traceguids);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 504, 4028);
  }
  v4 = v1 + 16;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  v5 = *(_QWORD *)(v1 + 16);
  v6 = v5 - 8;
  if ( v4 == v5 )
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 504, 4028);
  do
  {
    for ( i = 0; i < *(_DWORD *)(v6 + 24); ++i )
    {
      v8 = *(_DWORD *)(v6 + 72LL * i + 48);
      if ( v8 == 4 )
      {
        *(_DWORD *)(v6 + 72LL * i + 48) = 5;
        *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 128))++) = *(_QWORD *)(v6 + 72LL * i + 40);
      }
      else if ( v8 == 6 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = *(_QWORD *)(v6 + 72LL * i + 40);
      }
    }
    v9 = *(_QWORD *)(v6 + 8);
    v6 = v9 - 8;
  }
  while ( v4 != v9 );
  if ( !*(_DWORD *)(a1 + 128) )
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 504, 4028);
  return HUBUCX_EnableDisableEndpointsUsingUCXIoctl((__int64 *)a1);
}
