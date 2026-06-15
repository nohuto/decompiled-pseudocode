/*
 * XREFs of ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x180132CFC
 * Callers:
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x180132A88 (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1800DD5C0 (-StringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x18013292C (-GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z.c)
 *     ?sndRegQueryUserValue@@YAHPEBG0KPEAG@Z @ 0x180132EC0 (-sndRegQueryUserValue@@YAHPEBG0KPEAG@Z.c)
 *     ?sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z @ 0x180132F48 (-sndRegQueryValue@@YAHPEAUHKEY__@@PEBG1KPEAG@Z.c)
 */

_BOOL8 __fastcall sndQueryRegistry(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int *a6,
        HKEY a7)
{
  BOOL v8; // ebx
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // r8
  HKEY v12; // rcx
  const unsigned __int16 *v13; // rdx
  const unsigned __int16 *v14; // r8
  int Value; // eax
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData[3]; // [rsp+44h] [rbp-BCh] BYREF
  WCHAR SubKey[304]; // [rsp+50h] [rbp-B0h] BYREF

  pvData = 0;
  v8 = 0;
  if ( GetSoundRegistryPath(SubKey, (size_t)a2, a3, a2, a3) )
  {
    if ( a7 ? sndRegQueryValue(a7, SubKey, v10, 0x104u, a4) : (unsigned int)sndRegQueryUserValue(SubKey, v9, 0x104u, a4) )
    {
      pcbData[0] = 4;
      v12 = a7;
      if ( !a7 )
        v12 = HKEY_CURRENT_USER;
      if ( !RegGetValueW(v12, SubKey, gszDefaultFlags, 0x10u, 0LL, &pvData, pcbData) )
        pvData &= 0x380002u;
      if ( !(unsigned int)StringCbCatW(SubKey, 0x25CuLL, (char *)gszSlash)
        && !(unsigned int)StringCbCatW(SubKey, 0x25CuLL, (char *)aszActiveKey) )
      {
        if ( a7 )
          Value = sndRegQueryValue(a7, SubKey, v14, 0x12Eu, SubKey);
        else
          Value = sndRegQueryUserValue(SubKey, v13, 0x12Eu, SubKey);
        if ( Value )
          v8 = lstrcmpW(SubKey, aszBoolOne) == 0;
        else
          v8 = 1;
      }
    }
  }
  if ( pvData )
    *a6 |= pvData;
  return v8;
}
