/*
 * XREFs of LockProcessByClientId @ 0x1C0038134
 * Callers:
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x1C00380A0 (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 *     NtMITPostWindowEventMessage @ 0x1C01361D0 (NtMITPostWindowEventMessage.c)
 *     UserFindBaseWindowHandle @ 0x1C0143E44 (UserFindBaseWindowHandle.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01BF8B0 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 * Callees:
 *     LockProcessByClientIdEx @ 0x1C00383DC (LockProcessByClientIdEx.c)
 */

__int64 __fastcall LockProcessByClientId(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = -1;
  result = LockProcessByClientIdEx(a1, a2, &v4);
  if ( (int)result >= 0 && v4 != gSessionId )
  {
    ObfDereferenceObject(*a2);
    *a2 = 0LL;
    return 3221225473LL;
  }
  return result;
}
