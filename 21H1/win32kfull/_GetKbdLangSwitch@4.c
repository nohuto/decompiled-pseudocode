/*
 * XREFs of _GetKbdLangSwitch@4 @ 0xD9D1E
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     <none>
 */

int __thiscall GetKbdLangSwitch(void *this)
{
  DWORD DefaultLocaleId; // [esp+8h] [ebp-8h] BYREF
  int v3; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  DefaultLocaleId = 0;
  FastGetProfileIntW(this, 25, L"Hotkey", 1, &v3, 0);
  WPP_MAIN_CB.Dpc.ProcessorHistory = 0;
  if ( v3 == 4 && ZwQueryDefaultLocale(0, &DefaultLocaleId) >= 0 && (DefaultLocaleId & 0x3FF) == 0x1E )
    WPP_MAIN_CB.Dpc.ProcessorHistory = 1;
  return 1;
}
