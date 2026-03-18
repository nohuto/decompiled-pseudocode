/*
 * XREFs of ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x1801D0D38
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CFF70 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801CBF78 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z @ 0x180215BD0 (-TelemetrySetPosition@InteractionSourceManager@@QEAAX_K@Z.c)
 */

void __fastcall CInteractionTracker::TelemetrySetPosition(CInteractionTracker *this)
{
  unsigned __int64 v2; // rdi

  if ( dword_180346E48
    && (qword_180346E58 & 0x400000000002LL) != 0
    && (qword_180346E60 & 0x400000000002LL) == qword_180346E60 )
  {
    v2 = 0LL;
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      v2 = *(_QWORD *)(*((_QWORD *)this + 40) + 608LL);
    InteractionSourceManager::TelemetrySetPosition((CInteractionTracker *)((char *)this + 192), v2);
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    {
      if ( v2 )
        *(_QWORD *)(*((_QWORD *)this + 40) + 608LL) = 0LL;
    }
  }
}
