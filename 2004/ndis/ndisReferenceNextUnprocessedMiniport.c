/*
 * XREFs of ndisReferenceNextUnprocessedMiniport @ 0x1C0137080
 * Callers:
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x1C012BA8C (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D958 (-ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceNextUnprocessedMiniport(__int64 a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  KIRQL v4; // bp
  signed __int32 InterlockedFlags; // eax
  signed __int32 v6; // ett

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_43e0b26b30053098bc4fdc70ee8af55c_Traceguids,
      a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 392));
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
  v4 = v2;
  while ( v3 )
  {
    if ( ndisIsMiniportReady(v3) )
    {
      _m_prefetchw(&v3->InterlockedFlags);
      InterlockedFlags = v3->InterlockedFlags;
      do
      {
        v6 = InterlockedFlags;
        InterlockedFlags = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&v3->InterlockedFlags,
                             InterlockedFlags,
                             InterlockedFlags);
      }
      while ( v6 != InterlockedFlags );
      if ( (InterlockedFlags & 0x80) == 0 && ndisReferenceMiniport(v3, 0x52u) )
      {
        _InterlockedOr((volatile signed __int32 *)&v3->InterlockedFlags, 0x80u);
        break;
      }
    }
    v3 = v3->NextMiniport;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 392), v4);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      (struct _GUID *)&WPP_43e0b26b30053098bc4fdc70ee8af55c_Traceguids,
      a1);
  return v3;
}
