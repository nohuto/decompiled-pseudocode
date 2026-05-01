/*
 * XREFs of ?GetPropertyDirectlyFromWindow@LightweightPropertySet@@SAKPEAUHWND__@@PEBG@Z @ 0x1802C8EB8
 * Callers:
 *     _lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator() @ 0x1802A090C (_lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator().c)
 *     ?s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z @ 0x1802AD790 (-s_RecoverWindowsProc@ViewEventDispatcher@@CAHPEAUHWND__@@_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z @ 0x1802C8FE4 (-s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z.c)
 */

HANDLE __fastcall LightweightPropertySet::GetPropertyDirectlyFromWindow(
        HWND hWnd,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  WCHAR String[256]; // [rsp+20h] [rbp-218h] BYREF

  LightweightPropertySet::s_MangleName(L"ExperienceId", String, a3);
  return GetPropW(hWnd, String);
}
