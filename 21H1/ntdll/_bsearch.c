/*
 * XREFs of _bsearch @ 0x4B2F8160
 * Callers:
 *     _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0 (_RtlpLocateActivationContextSection@20.c)
 *     _RtlpFindUnicodeStringInSection@32 @ 0x4B2CA720 (_RtlpFindUnicodeStringInSection@32.c)
 *     _RtlFindActivationContextSectionGuid@20 @ 0x4B2CD660 (_RtlFindActivationContextSectionGuid@20.c)
 *     _RtlSetProtectedPolicy@12 @ 0x4B2EA320 (_RtlSetProtectedPolicy@12.c)
 *     _RtlQueryProtectedPolicy@8 @ 0x4B2ED030 (_RtlQueryProtectedPolicy@8.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     @_guard_check_icall@4 @ 0x4B2F4CAB (@_guard_check_icall@4.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  char *v5; // ebx
  size_t v6; // edi
  char *v7; // esi
  size_t v8; // eax
  char v9; // cl
  int v10; // eax
  int v12; // [esp+Ch] [ebp-Ch]
  size_t v13; // [esp+10h] [ebp-8h]
  char *v14; // [esp+14h] [ebp-4h]

  v5 = (char *)Base;
  v6 = NumOfElements;
  v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    while ( 1 )
    {
      if ( v5 > v7 )
        return 0;
      v8 = v6 >> 1;
      v13 = v6 >> 1;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0;
        return CompareFunction(Key, v5) == 0 ? v5 : 0;
      }
      v9 = v6;
      v6 = v8 - 1;
      v12 = v9 & 1;
      if ( (v9 & 1) == 0 )
        --v8;
      v14 = &v5[SizeOfElements * v8];
      v10 = CompareFunction(Key, v14);
      if ( !v10 )
        return v14;
      if ( v10 >= 0 )
        break;
      v7 = &v14[-SizeOfElements];
      if ( v12 )
LABEL_14:
        v6 = v13;
    }
    v5 = &v14[SizeOfElements];
    goto LABEL_14;
  }
  _invalid_parameter();
  return 0;
}
