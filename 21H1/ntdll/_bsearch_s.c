/*
 * XREFs of _bsearch_s @ 0x4B2F8220
 * Callers:
 *     _LdrpUnsuppressAddressTakenIat@12 @ 0x4B3345D2 (_LdrpUnsuppressAddressTakenIat@12.c)
 *     _RtlGuardCheckLongJumpTarget@12 @ 0x4B3639C0 (_RtlGuardCheckLongJumpTarget@12.c)
 *     _RtlpGetTargetRvaFlag@8 @ 0x4B363B9B (_RtlpGetTargetRvaFlag@8.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     @_guard_check_icall@4 @ 0x4B2F4CAB (@_guard_check_icall@4.c)
 */

void *__cdecl bsearch_s(
        const void *Key,
        const void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  char *v6; // ebx
  unsigned int v7; // edi
  char *v8; // esi
  unsigned int v9; // eax
  char v10; // cl
  int v11; // eax
  int v13; // [esp+Ch] [ebp-Ch]
  unsigned int v14; // [esp+10h] [ebp-8h]
  char *v15; // [esp+14h] [ebp-4h]

  v6 = (char *)Base;
  v7 = NumOfElements;
  v8 = (char *)Base + HIDWORD(NumOfElements) * (NumOfElements - 1);
  if ( (Base || !(_DWORD)NumOfElements) && HIDWORD(NumOfElements) && (_DWORD)SizeOfElements )
  {
    while ( 1 )
    {
      if ( v6 > v8 )
        return 0;
      v9 = v7 >> 1;
      v14 = v7 >> 1;
      if ( !(v7 >> 1) )
      {
        if ( !v7 )
          return 0;
        return ((int (__cdecl *)(_DWORD, const void *, char *))SizeOfElements)(HIDWORD(SizeOfElements), Key, v6) == 0
             ? v6
             : 0;
      }
      v10 = v7;
      v7 = v9 - 1;
      v13 = v10 & 1;
      if ( (v10 & 1) == 0 )
        --v9;
      v15 = &v6[HIDWORD(NumOfElements) * v9];
      v11 = ((int (__cdecl *)(_DWORD, const void *, char *))SizeOfElements)(HIDWORD(SizeOfElements), Key, v15);
      if ( !v11 )
        return v15;
      if ( v11 >= 0 )
        break;
      v8 = &v15[-HIDWORD(NumOfElements)];
      if ( v13 )
LABEL_14:
        v7 = v14;
    }
    v6 = &v15[HIDWORD(NumOfElements)];
    goto LABEL_14;
  }
  _invalid_parameter();
  return 0;
}
