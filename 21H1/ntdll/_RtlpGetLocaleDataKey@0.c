/*
 * XREFs of _RtlpGetLocaleDataKey@0 @ 0x4B363354
 * Callers:
 *     _RtlpGetUserLocaleName@4 @ 0x4B3633E0 (_RtlpGetUserLocaleName@4.c)
 * Callees:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 */

int __stdcall RtlpGetLocaleDataKey()
{
  _DWORD v1[6]; // [esp+8h] [ebp-20h] BYREF
  HANDLE v2; // [esp+20h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+24h] [ebp-4h] BYREF

  Handle = 0;
  v2 = 0;
  if ( !gLocaleDataRegKey && OpenGlobalizationUserSettingsKey((void *)0x20019, (int)&v2) >= 0 )
  {
    v1[1] = v2;
    v1[0] = 24;
    v1[3] = 64;
    v1[2] = &`RtlpGetLocaleDataKey'::`2'::KeyPath;
    v1[4] = 0;
    v1[5] = 0;
    if ( ZwOpenKey((int)&Handle, 0x80000000, (int)v1) >= 0
      && _InterlockedCompareExchange(&gLocaleDataRegKey, (signed __int32)Handle, 0) )
    {
      NtClose(Handle);
    }
    NtClose(v2);
  }
  return gLocaleDataRegKey;
}
