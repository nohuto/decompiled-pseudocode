/*
 * XREFs of _SbpTraceContextUpdate@24 @ 0x4B385D98
 * Callers:
 *     _SbSelectProcedure@16 @ 0x4B2B82A0 (_SbSelectProcedure@16.c)
 *     _SbObtainTraceHandle@4 @ 0x4B2B8430 (_SbObtainTraceHandle@4.c)
 *     _SbUpdateSwitchContextBasedOnDll@12 @ 0x4B2B989E (_SbUpdateSwitchContextBasedOnDll@12.c)
 * Callees:
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __fastcall SbpTraceContextUpdate(int a1, __int16 a2, int a3, __int16 a4, unsigned __int16 a5, int a6)
{
  int v6; // eax
  __int16 v8; // [esp+Ch] [ebp-8Ch] BYREF
  _DWORD v9[33]; // [esp+10h] [ebp-88h] BYREF

  v8 = a2;
  v9[0] = a1;
  v9[4] = &v8;
  v9[8] = &a5;
  v9[6] = 2;
  v9[10] = 2;
  v9[1] = 0;
  v9[2] = 16;
  v9[3] = 0;
  v9[5] = 0;
  v9[7] = 0;
  v9[9] = 0;
  memset(&v9[11], 0, 84);
  v6 = 3;
  if ( a5 )
  {
    v9[12] = a6;
    v9[14] = a5;
    v9[13] = 0;
    v9[15] = 0;
    v6 = 4;
  }
  return EtwEventWrite(a3, a4, AeSbContextUpdateEvent, v6, (int)v9);
}
