/*
 * XREFs of _SbpResolveBasedOnName@4 @ 0x4B386048
 * Callers:
 *     _SbpUpdateCache@16 @ 0x4B2B8498 (_SbpUpdateCache@16.c)
 *     _SbpUpdateCacheWithCurrentImpl@8 @ 0x4B3860EA (_SbpUpdateCacheWithCurrentImpl@8.c)
 * Callees:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _SbpLookup@8 @ 0x4B385EE1 (_SbpLookup@8.c)
 *     _SbpParseFuncName@20 @ 0x4B385FBD (_SbpParseFuncName@20.c)
 */

int __thiscall SbpResolveBasedOnName(_WORD *this)
{
  int v1; // esi
  _UNICODE_STRING DestinationString; // [esp+4h] [ebp-A14h] BYREF
  PVOID DllHandle; // [esp+Ch] [ebp-A0Ch] BYREF
  unsigned __int16 v5[1024]; // [esp+10h] [ebp-A08h] BYREF
  WCHAR SourceString[258]; // [esp+810h] [ebp-208h] BYREF

  v1 = 0;
  if ( this
    && SbpParseFuncName(this, SourceString, (int)this, v5, (int)this)
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (LdrGetDllHandleEx(1u, (PWSTR)1, 0, &DestinationString, &DllHandle) >= 0
     || LdrLoadDll(0, 0, &DestinationString, &DllHandle) >= 0) )
  {
    return SbpLookup((int)DllHandle, v5);
  }
  return v1;
}
