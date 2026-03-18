/*
 * XREFs of ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C005D068
 * Callers:
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C03788C4 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCchCatStringN(struct _UNICODE_STRING *a1, wchar_t *a2)
{
  unsigned __int64 Length; // r9
  unsigned __int64 MaximumLength; // r8
  wchar_t *Buffer; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  __int16 v11; // r8
  wchar_t *v12; // rbx
  unsigned __int64 v13; // rdx

  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return 3221225485LL;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return 3221225485LL;
  if ( (unsigned __int16)Length > (unsigned __int16)MaximumLength )
    return 3221225485LL;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return 3221225485LL;
  Buffer = a1->Buffer;
  result = 0LL;
  if ( !Buffer && ((_WORD)Length || (_WORD)MaximumLength) )
    return 3221225485LL;
  v8 = Length >> 1;
  v9 = 1LL;
  v10 = MaximumLength >> 1;
  v11 = 0;
  v12 = &Buffer[v8];
  v13 = v10 - v8;
  if ( v13 )
  {
    while ( v9 )
    {
      if ( *a2 )
      {
        *v12++ = *a2++;
        --v9;
        ++v11;
        if ( --v13 )
          continue;
      }
      if ( v13 || !v9 )
        break;
      goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    if ( *a2 )
      result = 2147483653LL;
  }
  a1->Length = 2 * (v11 + v8);
  return result;
}
