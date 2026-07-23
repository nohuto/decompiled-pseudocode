/*
 * XREFs of _RtlFindUnicodeSubstring@12 @ 0x4B2E61F0
 * Callers:
 *     _RtlpReplaceFirstUnicodeSubstringOfEqualLength@12 @ 0x4B2E61A5 (_RtlpReplaceFirstUnicodeSubstringOfEqualLength@12.c)
 * Callees:
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  int Length; // edx
  int v4; // ecx
  wchar_t *Buffer; // edi
  int v6; // esi
  wchar_t *v7; // ebx
  wchar_t *v8; // eax
  wchar_t *v9; // edx
  int v10; // ecx
  bool v11; // zf
  unsigned __int16 v13; // si
  unsigned __int16 v14; // ax
  wchar_t *v15; // eax
  size_t v16; // [esp-4h] [ebp-2Ch]
  wchar_t *v17; // [esp+Ch] [ebp-1Ch]
  wchar_t *v18; // [esp+Ch] [ebp-1Ch]
  wchar_t *v19; // [esp+10h] [ebp-18h]
  unsigned __int16 v20; // [esp+14h] [ebp-14h]
  wchar_t *v21; // [esp+1Ch] [ebp-Ch]
  int v22; // [esp+20h] [ebp-8h]
  wchar_t *v23; // [esp+24h] [ebp-4h]

  Length = SearchString->Length;
  v4 = FullString->Length;
  if ( (unsigned __int16)v4 >= (unsigned __int16)Length )
  {
    Buffer = FullString->Buffer;
    v6 = SearchString->Length;
    v7 = (wchar_t *)((char *)Buffer + v4 - Length);
    v19 = v7;
    if ( !CaseInSensitive )
    {
      if ( Buffer <= v7 )
      {
        v15 = SearchString->Buffer;
        v18 = v15;
        do
        {
          LODWORD(v16) = v6;
          if ( !memcmp(Buffer, v15, v16) )
            return (PWCHAR)Buffer;
          v15 = v18;
          ++Buffer;
        }
        while ( Buffer <= v7 );
      }
      return 0;
    }
    v8 = SearchString->Buffer;
    v17 = v8;
    v9 = (wchar_t *)((char *)v8 + Length);
    v21 = (wchar_t *)((char *)v8 + v6);
    if ( Buffer <= v7 )
    {
      v10 = (char *)Buffer - (char *)v8;
      v22 = (char *)Buffer - (char *)v8;
      while ( 1 )
      {
        v23 = v8;
        v11 = v8 == v9;
        if ( v8 >= v9 )
          goto LABEL_9;
        while ( 1 )
        {
          v20 = *(wchar_t *)((char *)v8 + v10);
          if ( v20 != *v8 )
            break;
LABEL_7:
          v23 = ++v8;
          if ( v8 >= v9 )
            goto LABEL_8;
        }
        v13 = NLS_UPCASE(*v8);
        v14 = NLS_UPCASE(v20);
        v9 = v21;
        v11 = v14 == v13;
        v8 = v23;
        if ( v11 )
          break;
LABEL_8:
        v7 = v19;
        v11 = v8 == v9;
        v10 = v22;
LABEL_9:
        if ( v11 )
          return (PWCHAR)Buffer;
        v8 = v17;
        ++Buffer;
        v10 += 2;
        v22 = v10;
        if ( Buffer > v7 )
          return 0;
      }
      v10 = v22;
      goto LABEL_7;
    }
  }
  return 0;
}
