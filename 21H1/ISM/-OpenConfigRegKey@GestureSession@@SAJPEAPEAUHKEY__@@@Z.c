/*
 * XREFs of ?OpenConfigRegKey@GestureSession@@SAJPEAPEAUHKEY__@@@Z @ 0x180183164
 * Callers:
 *     ?StaticInitConfig@GestureRecognizer@@KAXXZ @ 0x180185BD4 (-StaticInitConfig@GestureRecognizer@@KAXXZ.c)
 * Callees:
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?RefreshScreenSize@GestureSession@@SAJXZ @ 0x180183558 (-RefreshScreenSize@GestureSession@@SAJXZ.c)
 */

__int64 __fastcall GestureSession::OpenConfigRegKey(PHKEY phkResult)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  WCHAR SubKey[31]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v6[466]; // [rsp+6Eh] [rbp-92h] BYREF

  if ( GestureSession::s_refreshScreenSize )
  {
    result = GestureSession::RefreshScreenSize();
    if ( (int)result < 0 )
      return result;
    GestureSession::s_refreshScreenSize = 0;
  }
  wcscpy(SubKey, L"Software\\Microsoft\\Shell\\Input");
  memset_0(v6, 0, 0x1CAuLL);
  _o_wcscat_s(SubKey, 260LL, L"\\");
  v3 = -1LL;
  v4 = -1LL;
  do
    ++v4;
  while ( SubKey[v4] );
  _o__itow_s((unsigned int)GestureSession::s_horizontalResolution, &SubKey[v4], 260 - v4, 10LL);
  _o_wcscat_s(SubKey, 260LL, L"x");
  do
    ++v3;
  while ( SubKey[v3] );
  _o__itow_s((unsigned int)GestureSession::s_verticalResolution, &SubKey[v3], 260 - v3, 10LL);
  RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, phkResult);
  if ( !*phkResult )
    RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Shell\\Input", 0, 1u, phkResult);
  return 0LL;
}
