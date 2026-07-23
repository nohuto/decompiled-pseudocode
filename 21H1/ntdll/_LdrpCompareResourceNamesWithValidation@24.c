/*
 * XREFs of _LdrpCompareResourceNamesWithValidation@24 @ 0x4B306D17
 * Callers:
 *     _ResourceEntryBinarySearch@32 @ 0x4B306E16 (_ResourceEntryBinarySearch@32.c)
 *     _LdrEnumResources@20 @ 0x4B33EF20 (_LdrEnumResources@20.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _wcsncmp @ 0x4B2FA7E0 (_wcsncmp.c)
 */

int __fastcall LdrpCompareResourceNamesWithValidation(int a1, int a2, wchar_t *String1, int a4, int *a5, _BYTE *a6)
{
  char v8; // dl
  wchar_t *v9; // esi
  int v10; // edi
  int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // edi
  int v15; // ecx
  size_t v17; // [esp-4h] [ebp-1Ch]
  int v19; // [esp+10h] [ebp-8h] BYREF
  int v20; // [esp+14h] [ebp-4h] BYREF

  v20 = 0;
  v19 = 0;
  if ( !a1 || (v8 = 1, !a2) )
    v8 = 0;
  v9 = String1;
  *a6 = 1;
  v10 = *a5;
  if ( ((unsigned int)String1 & 0xFFFF0000) != 0 )
  {
    if ( v10 >= 0 )
      return -1;
    v12 = a4;
    v13 = a2 + (a1 & 0xFFFFFFFC);
    if ( v8 && a4 + (v10 & 0x7FFFFFFFu) > v13
      || (v14 = v10 & 0x7FFFFFFF, v8)
      && (RtlULongLongToUInt(
            &v20,
            2 * *(unsigned __int16 *)(v14 + a4),
            (unsigned __int64)*(unsigned __int16 *)(v14 + a4) >> 31) < 0
       || (RtlULongPtrAdd(v14, v20, &v19) & 0x80000000) != 0
       || (v12 = a4, a4 + v19 > v13)) )
    {
      *a6 = 0;
      return -1;
    }
    LODWORD(v17) = *(unsigned __int16 *)(v14 + v12);
    v15 = wcsncmp(String1, (const wchar_t *)(v12 + v14 + 2), v17);
    if ( v15 )
      return v15;
    while ( *v9++ )
      ;
    if ( v9 - (String1 + 1) == *(unsigned __int16 *)(v14 + a4) )
      return v15;
    return 1;
  }
  if ( v10 < 0 )
    return 1;
  return (int)String1 - v10;
}
