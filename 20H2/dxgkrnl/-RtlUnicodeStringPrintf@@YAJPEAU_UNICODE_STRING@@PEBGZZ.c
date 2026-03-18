/*
 * XREFs of ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0046590
 * Callers:
 *     ?OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z @ 0x1C0275504 (-OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z.c)
 *     DpOpenSpbResource @ 0x1C02D5B10 (DpOpenSpbResource.c)
 * Callees:
 *     <none>
 */

__int64 RtlUnicodeStringPrintf(struct _UNICODE_STRING *a1, const unsigned __int16 *a2, ...)
{
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // r10
  size_t v5; // rdi
  int v6; // ebx
  unsigned __int64 MaximumLength; // rax
  int v8; // eax
  va_list Args; // [rsp+70h] [rbp+18h] BYREF

  va_start(Args, a2);
  Length = a1->Length;
  Buffer = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( (Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > (unsigned __int16)MaximumLength || (_WORD)MaximumLength == 0xFFFF )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( !a1->Buffer && (Length || (_WORD)MaximumLength) )
    {
      v6 = -1073741811;
    }
    else
    {
      Buffer = a1->Buffer;
      v5 = MaximumLength >> 1;
    }
    if ( v6 >= 0 )
    {
      v6 = 0;
      v8 = _vsnwprintf(Buffer, v5, a2, Args);
      if ( v8 < 0 || v8 > v5 )
      {
        LOWORD(v8) = v5;
        v6 = -2147483643;
      }
      a1->Length = 2 * v8;
    }
  }
  return (unsigned int)v6;
}
