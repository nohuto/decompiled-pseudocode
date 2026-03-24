/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x1402D0FD0
 * Callers:
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ExpWorkerInitialization @ 0x140A6AE74 (ExpWorkerInitialization.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x140287458 (PsBoostThreadIoQoS.c)
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall KiAbThreadUnboostIoPriority(__int64 a1, __int64 a2)
{
  _InterlockedDecrement((volatile signed __int32 *)(((_DWORD)a2 != 0 ? 4 : 0) + a1 + 860));
  if ( (_DWORD)a2 )
    return PsBoostThreadIoQoS(a1, 1LL);
  LODWORD(a2) = 1;
  return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
}
