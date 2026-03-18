/*
 * XREFs of CleanupResources @ 0x1C00BC728
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     CleanupGDI @ 0x1C00201C8 (CleanupGDI.c)
 *     CleanupPowerRequestList @ 0x1C006FF30 (CleanupPowerRequestList.c)
 *     ApiSetEditionUnloadCursorsAndIcons @ 0x1C00BC7CC (ApiSetEditionUnloadCursorsAndIcons.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 CleanupResources()
{
  __int64 v0; // rcx
  __int64 i; // rbx
  __int64 v2; // rcx
  int v3; // eax

  gdwHydraHint |= 0x20000u;
  gbCleanedUpResources = 1;
  CleanupPowerRequestList();
  for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v0) + 320); i; i = *(_QWORD *)(i + 664) )
  {
    v2 = *(_QWORD *)(i + 432);
    if ( v2 )
    {
      if ( qword_1C024FFF8 )
        qword_1C024FFF8(v2, 0LL);
    }
  }
  ApiSetEditionUnloadCursorsAndIcons();
  if ( qword_1C02509E8 )
    v3 = qword_1C02509E8();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C02509F0 )
    qword_1C02509F0();
  return CleanupGDI();
}
