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
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-20h] BYREF
  HANDLE Handle; // [esp+20h] [ebp-8h] BYREF
  HANDLE KeyHandle; // [esp+24h] [ebp-4h] BYREF

  KeyHandle = 0;
  Handle = 0;
  if ( !gLocaleDataRegKey && OpenGlobalizationUserSettingsKey(0x20019u, &Handle) >= 0 )
  {
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&`RtlpGetLocaleDataKey'::`2'::KeyPath;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0
      && _InterlockedCompareExchange(&gLocaleDataRegKey, (signed __int32)KeyHandle, 0) )
    {
      NtClose(KeyHandle);
    }
    NtClose(Handle);
  }
  return gLocaleDataRegKey;
}
