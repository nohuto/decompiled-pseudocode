/*
 * XREFs of _LdrpLogFatalLdrEtwEvent@8 @ 0x4B330261
 * Callers:
 *     _LdrpInitializationFailure@4 @ 0x4B331C4E (_LdrpInitializationFailure@4.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 * Callees:
 *     _EtwEventWriteNoRegistration@16 @ 0x4B2ABD30 (_EtwEventWriteNoRegistration@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

_WORD *__fastcall LdrpLogFatalLdrEtwEvent(unsigned __int16 *a1, const EVENT_DESCRIPTOR *a2)
{
  const void **v3; // edi
  unsigned int v4; // ecx
  unsigned int v5; // esi
  _WORD *v6; // esi
  unsigned __int16 v7; // ax
  _WORD *result; // eax
  SIZE_T v9; // [esp-4h] [ebp-34h]
  size_t v10; // [esp-4h] [ebp-34h]
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+18h] [ebp-18h] BYREF

  v3 = (const void **)(a1 + 2);
  v4 = *a1;
  v5 = v4 + 2;
  if ( v4 + 2 <= a1[1] )
  {
    v6 = *v3;
    if ( !*((_WORD *)*v3 + (v4 >> 1)) )
    {
      v7 = v4;
      goto LABEL_7;
    }
    v5 = v4 + 2;
  }
  LODWORD(v9) = v5;
  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v9);
  v6 = result;
  if ( !result )
    return result;
  LODWORD(v10) = *a1;
  memcpy(result, *v3, v10);
  v6[*a1 >> 1] = 0;
  v7 = *a1;
LABEL_7:
  UserData.Ptr = (unsigned int)v6;
  UserData.Size = v7 + 2;
  UserData.Reserved = 0;
  result = (_WORD *)EtwEventWriteNoRegistration(&UserLoaderGuid, a2, 1u, &UserData);
  if ( v6 != *v3 )
    return (_WORD *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  return result;
}
