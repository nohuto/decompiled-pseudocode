/*
 * XREFs of PowerIsDisplayRequired @ 0x1C011EC90
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerIsDisplayIdleExpired @ 0x1C00974E0 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0097550 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 */

__int64 PowerIsDisplayRequired()
{
  unsigned __int64 GlobalTickCount; // rax
  unsigned int v1; // ecx

  GlobalTickCount = CInputGlobals::GetGlobalTickCount((__int64)gpInputGlobals, 0);
  v1 = 0;
  if ( qword_1C024B128 <= GlobalTickCount )
    return dword_1C024B148 > 0;
  return v1;
}
