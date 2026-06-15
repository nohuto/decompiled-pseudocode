/*
 * XREFs of ?sndRegQueryUserValue@@YAHPEBG0KPEAG@Z @ 0x180133EA0
 * Callers:
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x180133CDC (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z @ 0x180133F28 (-sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z.c)
 */

__int64 __fastcall sndRegQueryUserValue(
        const unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int16 *a4)
{
  const unsigned __int16 *v7; // r8
  unsigned int Value; // ebx
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  hKey = (HKEY)a2;
  *a4 = 0;
  if ( RegOpenCurrentUser(1u, &hKey) )
    return 0LL;
  Value = sndRegQueryValue(hKey, a1, v7, a3, a4);
  RegCloseKey(hKey);
  return Value;
}
