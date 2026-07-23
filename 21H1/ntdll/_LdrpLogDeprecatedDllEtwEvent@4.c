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
  SIZE_T v7; // [esp-4h] [ebp-2Ch]
  size_t v8; // [esp-4h] [ebp-2Ch]
  ULONGLONG RegHandle; // [esp+Ch] [ebp-1Ch] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+14h] [ebp-14h] BYREF

  v2 = *this;
  v3 = (const void **)(this + 2);
  if ( v2 + 2 > this[1] || (v4 = (wchar_t *)*v3, *((_WORD *)*v3 + (v2 >> 1))) )
  {
    LODWORD(v7) = v2 + 2;
    result = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v7);
    v4 = result;
    if ( !result )
      return result;
    LODWORD(v8) = *this;
    memcpy(result, *v3, v8);
    v4[*this >> 1] = 0;
  }
  result = (wchar_t *)CompatCachepLookupCdb(v4, 4);
  if ( result )
  {
    result = (wchar_t *)EtwEventRegister(&UserLoaderGuid, 0, 0, &RegHandle);
    if ( !result )
    {
      v6 = *this;
      UserData.Ptr = (unsigned int)v4;
      UserData.Size = v6 + 2;
      UserData.Reserved = 0;
      EtwEventWrite(RegHandle, &DeprecatedDll, 1u, &UserData);
      result = (wchar_t *)EtwEventUnregister(RegHandle);
    }
    if ( v4 != *v3 )
      return (wchar_t *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return result;
}
