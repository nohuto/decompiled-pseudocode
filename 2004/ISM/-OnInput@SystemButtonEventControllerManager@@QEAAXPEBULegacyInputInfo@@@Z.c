/*
 * XREFs of ?OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z @ 0x180102530
 * Callers:
 *     ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801826C0 (-OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z @ 0x1801023E8 (-SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z.c)
 */

void __fastcall SystemButtonEventControllerManager::OnInput(
        SystemButtonEventController **this,
        const struct LegacyInputInfo *a2)
{
  int v2; // r8d
  SystemButtonEventController *v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  switch ( *((_DWORD *)a2 + 16) )
  {
    case 0xED:
      v2 = 1;
      break;
    case 0xEE:
      v2 = 2;
      break;
    case 0xEF:
      v2 = 3;
      break;
  }
  v3 = *this;
  v4 = *((unsigned __int64 *)a2 + 2);
  BYTE12(v4) = *((_BYTE *)a2 + 68);
  DWORD2(v4) = v2;
  SystemButtonEventController::SendSystemButtonEvent(v3, (const struct SystemButtonEventInfo *)&v4);
}
