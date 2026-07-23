/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x14024F460
 * Callers:
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExpWorkerInitialization @ 0x140A6BE74 (ExpWorkerInitialization.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402045F8 (PsBoostThreadIoQoS.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall KiAbThreadUnboostIoPriority(__int64 a1, __int64 a2)
{
  _InterlockedDecrement((volatile signed __int32 *)(((_DWORD)a2 != 0 ? 4 : 0) + a1 + 860));
  if ( (_DWORD)a2 )
    return PsBoostThreadIoQoS(a1, 1);
  LODWORD(a2) = 1;
  return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
}
