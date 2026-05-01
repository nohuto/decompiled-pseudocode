/*
 * XREFs of ?ReadRegStringValue@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEBGPEAGK@Z @ 0x1800E01FC
 * Callers:
 *     ?ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGK@Z @ 0x1800E0190 (-ReadExePath@Private@BrowserChannels@@YA_NPEAUHKEY__@@PEAGK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall BrowserChannels::Private::ReadRegStringValue(
        BrowserChannels::Private *this,
        const WCHAR *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4)
{
  DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = 2 * (_DWORD)a4;
  return RegGetValueW((HKEY)this, 0LL, a2, 2u, v5, a3, (LPDWORD)&v6) == 0;
}
