/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x14035E600
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExpWorkerInitialization @ 0x140A66764 (ExpWorkerInitialization.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x140279D74 (PsBoostThreadIoQoS.c)
 */

void __fastcall KiAbThreadUnboostIoPriority(__int64 a1, int a2)
{
  _InterlockedDecrement((volatile signed __int32 *)((a2 != 0 ? 4 : 0) + a1 + 860));
  if ( a2 )
    PsBoostThreadIoQoS(a1, 1);
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
}
