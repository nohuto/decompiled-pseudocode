/*
 * XREFs of _RtlpGetCustomCultureRegKey@0 @ 0x4B2D934B
 * Callers:
 *     _RtlpIsCustomLocale@4 @ 0x4B2D92D8 (_RtlpIsCustomLocale@4.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 */

int __stdcall RtlpGetCustomCultureRegKey()
{
  HANDLE KeyHandle; // [esp+0h] [ebp-4h] BYREF

  KeyHandle = 0;
  if ( !gCustomCultureRegKey
    && ZwOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&`RtlpGetCustomCultureRegKey'::`2'::ObjAttribute) >= 0
    && _InterlockedCompareExchange(&gCustomCultureRegKey, (signed __int32)KeyHandle, 0) )
  {
    NtClose(KeyHandle);
  }
  return gCustomCultureRegKey;
}
