/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x140320A10
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExpWorkerInitialization @ 0x140A66D84 (ExpWorkerInitialization.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x1402DB77C (PsBoostThreadIoQoS.c)
 */

void __fastcall KiAbThreadUnboostIoPriority(__int64 a1, int a2)
{
  _InterlockedDecrement((volatile signed __int32 *)((a2 != 0 ? 4 : 0) + a1 + 860));
  if ( a2 )
    PsBoostThreadIoQoS(a1, 1LL);
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
}
