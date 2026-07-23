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

ULONG __fastcall SbpTraceContextUpdate(unsigned int a1, __int16 a2, REGHANDLE RegHandle, unsigned __int16 a4, int a5)
{
  ULONG v7; // eax
  size_t v9; // [esp-4h] [ebp-9Ch]
  _DWORD StackCookie[13]; // [esp+Ch] [ebp-8Ch] BYREF
  _DWORD v11[21]; // [esp+40h] [ebp-58h] BYREF

  LODWORD(v9) = 80;
  memset(v11, 0, v9);
  LOWORD(StackCookie[0]) = a2;
  *(_QWORD *)&StackCookie[1] = a1;
  StackCookie[5] = StackCookie;
  StackCookie[9] = &a4;
  StackCookie[7] = 2;
  StackCookie[11] = 2;
  StackCookie[3] = 16;
  StackCookie[4] = 0;
  StackCookie[6] = 0;
  StackCookie[8] = 0;
  StackCookie[10] = 0;
  StackCookie[12] = 0;
  v7 = 3;
  if ( a4 )
  {
    v11[0] = a5;
    v11[2] = a4;
    v11[1] = 0;
    v11[3] = 0;
    v7 = 4;
  }
  return EtwEventWrite(RegHandle, &AeSbContextUpdateEvent, v7, (PEVENT_DATA_DESCRIPTOR)&StackCookie[1]);
}
