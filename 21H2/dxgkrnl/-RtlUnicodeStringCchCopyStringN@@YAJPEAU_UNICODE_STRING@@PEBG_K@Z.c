/*
 * XREFs of ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C002636C
 * Callers:
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C01FAB24 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCchCopyStringN(struct _UNICODE_STRING *a1, wchar_t *a2, unsigned __int64 a3)
{
  unsigned __int16 Length; // r10
  unsigned __int64 MaximumLength; // r9
  wchar_t *Buffer; // rbx
  __int64 result; // rax
  __int16 v9; // cx
  unsigned __int64 v10; // rdx

  Length = a1->Length;
  if ( (a1->Length & 1) != 0 )
    return 3221225485LL;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return 3221225485LL;
  if ( Length > (unsigned __int16)MaximumLength )
    return 3221225485LL;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return 3221225485LL;
  Buffer = a1->Buffer;
  result = 0LL;
  if ( !Buffer && (Length || (_WORD)MaximumLength) )
    return 3221225485LL;
  v9 = 0;
  v10 = MaximumLength >> 1;
  if ( a3 > 0x7FFF )
  {
    result = 3221225485LL;
  }
  else if ( v10 )
  {
    while ( a3 )
    {
      if ( *a2 )
      {
        *Buffer++ = *a2++;
        --a3;
        ++v9;
        if ( --v10 )
          continue;
      }
      if ( !v10 )
        goto LABEL_17;
      break;
    }
  }
  else
  {
LABEL_17:
    if ( a3 )
    {
      if ( *a2 )
        result = 2147483653LL;
    }
  }
  a1->Length = 2 * v9;
  return result;
}
