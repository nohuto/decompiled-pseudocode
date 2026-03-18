/*
 * XREFs of BmlIsLowResAnalogTvOutput @ 0x1C0138EC0
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C0138818 (BmlFillPreferredMonitorMode.c)
 *     BmlGetMonitorModePreference @ 0x1C0138CAC (BmlGetMonitorModePreference.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsLowResAnalogTvOutput(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 80);
  return v1 == -1 || v1 > 0 && (v1 <= 3 || v1 == 14);
}
