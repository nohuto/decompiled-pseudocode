/*
 * XREFs of ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18004BA98
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004B4A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180042298 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

__int64 __fastcall OpenComposedEvent(int a1, __int64 a2, void **a3)
{
  unsigned int v4; // ebx
  HANDLE v5; // rax
  WCHAR Name[28]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  if ( (int)StringCchPrintfW(Name, 0x1AuLL, (size_t *)L"%s%x", L"DwmComposedEvent_", a1) >= 0 )
  {
    v5 = OpenEventW(0x100000u, 0, Name);
    *a3 = v5;
    if ( !v5 )
    {
      v4 = -2144980991;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CC404, 1LL, -2144980991, 0x2Eu);
    }
  }
  return v4;
}
