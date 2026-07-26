/*
 * XREFs of NdisFreeNetBufferListPool @ 0x1C00ADB30
 * Callers:
 *     ndisUnloadPeriodicReceives @ 0x1C0147300 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z @ 0x1C00AE280 (-ndisPplDestroyPool@@YAXPEAUPPL_POOL_HANDLE__@@K@Z.c)
 */

void __stdcall NdisFreeNetBufferListPool(NDIS_HANDLE PoolHandle)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8
  unsigned int v5; // edx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x15u,
      0xFu,
      (struct _GUID *)&WPP_381cd7f30aef377c921a11f3e56e6a78_Traceguids,
      PoolHandle);
  if ( PoolHandle )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_1C00E5E78);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9);
    if ( v3[1] != (char *)PoolHandle + 72
      || (v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 10), *v4 != (char *)PoolHandle + 72) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&qword_1C00E5E78, v2);
    ndisPplDestroyPool(PoolHandle, v5);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x15u,
        0x10u,
        (struct _GUID *)&WPP_381cd7f30aef377c921a11f3e56e6a78_Traceguids,
        PoolHandle);
  }
}
