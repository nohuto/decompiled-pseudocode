/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x14032EF60
 * Callers:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExpWorkerInitialization @ 0x140A6DA34 (ExpWorkerInitialization.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14035D3B8 (PsBoostThreadIoQoS.c)
 */

void __fastcall KiAbThreadUnboostIoPriority(__int64 a1, int a2)
{
  _InterlockedDecrement((volatile signed __int32 *)((a2 != 0 ? 4 : 0) + a1 + 860));
  if ( a2 )
    PsBoostThreadIoQoS(a1, 1LL);
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
}
