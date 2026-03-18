/*
 * XREFs of CleanupResources @ 0x1C005C278
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     CleanupGDI @ 0x1C0012D08 (CleanupGDI.c)
 *     ApiSetEditionUnloadCursorsAndIcons @ 0x1C005C31C (ApiSetEditionUnloadCursorsAndIcons.c)
 *     CleanupPowerRequestList @ 0x1C0063050 (CleanupPowerRequestList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
  for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v0) + 320); i; i = *(_QWORD *)(i + 656) )
  {
    v2 = *(_QWORD *)(i + 424);
    if ( v2 )
    {
      if ( qword_1C0251FF8 )
        qword_1C0251FF8(v2, 0LL);
    }
  }
  ApiSetEditionUnloadCursorsAndIcons();
  if ( qword_1C02529E8 )
    v3 = qword_1C02529E8();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C02529F0 )
    qword_1C02529F0();
  return CleanupGDI();
}
