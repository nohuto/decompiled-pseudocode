/*
 * XREFs of ?NumHandles@@YGKPAX@Z @ 0xCCB20
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned int __cdecl NumHandles()
{
  unsigned int result; // eax
  _DWORD ObjectInformation[15]; // [esp+8h] [ebp-40h] BYREF

  memset(ObjectInformation, 0, 0x38u);
  if ( !ghDisconnectDesk || ZwQueryObject(ghDisconnectDesk, ObjectBasicInformation, ObjectInformation, 0x38u, 0) )
    return 0;
  result = ObjectInformation[2];
  if ( ObjectInformation[2] > 1u )
  {
    _gdwHydraHint |= 0x400000u;
    return ObjectInformation[2];
  }
  return result;
}
