/*
 * XREFs of CleanupResources @ 0x1C004D1BC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ApiSetEditionUnloadCursorsAndIcons @ 0x1C004D260 (ApiSetEditionUnloadCursorsAndIcons.c)
 *     CleanupPowerRequestList @ 0x1C004D300 (CleanupPowerRequestList.c)
 *     CleanupGDI @ 0x1C00A74B8 (CleanupGDI.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
      if ( qword_1C0257FB8 )
        qword_1C0257FB8(v2, 0LL);
    }
  }
  ApiSetEditionUnloadCursorsAndIcons();
  if ( qword_1C02589A8 )
    v3 = qword_1C02589A8();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C02589B0 )
    qword_1C02589B0();
  return CleanupGDI();
}
