/*
 * XREFs of ?_QueryQuadWord@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005EDD0
 * Callers:
 *     RegistryReadLastLoggedTime @ 0x1C005FCB8 (RegistryReadLastLoggedTime.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 */

__int64 __fastcall FxRegKey::_QueryQuadWord(void *Key, _UNICODE_STRING *ValueName, _LARGE_INTEGER *Value)
{
  NTSTATUS v4; // edx
  unsigned int length; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 buffer[20]; // [rsp+38h] [rbp-30h] BYREF

  length = 20;
  v4 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x14u, &length);
  if ( ((int)(v4 + 0x80000000) < 0 || v4 == -2147483643) && *(_DWORD *)&buffer[4] != 11 )
    v4 = -1073741788;
  if ( v4 >= 0 )
    *Value = *(_LARGE_INTEGER *)&buffer[12];
  return (unsigned int)v4;
}
