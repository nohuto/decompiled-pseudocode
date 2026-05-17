/*
 * XREFs of _LdrpLogDeprecatedDllEtwEvent@4 @ 0x4B2EBC3E
 * Callers:
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 * Callees:
 *     _EtwEventRegister@16 @ 0x4B2AE0A0 (_EtwEventRegister@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _CompatCachepLookupCdb@8 @ 0x4B2D1C4D (_CompatCachepLookupCdb@8.c)
 *     _EtwEventUnregister@8 @ 0x4B2D99B0 (_EtwEventUnregister@8.c)
 *     _EtwEventWrite@20 @ 0x4B2E1250 (_EtwEventWrite@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

wchar_t *__thiscall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *this)
{
  unsigned int v2; // ecx
  const void **v3; // edi
  wchar_t *v4; // esi
  wchar_t *result; // eax
  int v6; // eax
  int v7; // [esp+Ch] [ebp-1Ch] BYREF
  int v8; // [esp+10h] [ebp-18h]
  _DWORD v9[4]; // [esp+14h] [ebp-14h] BYREF

  v2 = *this;
  v3 = (const void **)(this + 2);
  if ( v2 + 2 > this[1] || (v4 = (wchar_t *)*v3, *((_WORD *)*v3 + (v2 >> 1))) )
  {
    result = (wchar_t *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v2 + 2);
    v4 = result;
    if ( !result )
      return result;
    memcpy(result, *v3, *this);
    v4[*this >> 1] = 0;
  }
  result = (wchar_t *)CompatCachepLookupCdb(v4, 4);
  if ( result )
  {
    result = (wchar_t *)EtwEventRegister(UserLoaderGuid, 0, 0, (int)&v7);
    if ( !result )
    {
      v6 = *this;
      v9[0] = v4;
      v9[2] = v6 + 2;
      v9[1] = 0;
      v9[3] = 0;
      EtwEventWrite(v7, v8, DeprecatedDll, 1, (int)v9);
      result = (wchar_t *)EtwEventUnregister(v7, v8);
    }
    if ( v4 != *v3 )
      return (wchar_t *)RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v4);
  }
  return result;
}
