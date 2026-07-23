/*
 * XREFs of _RtlpQueryEnvironmentCache@24 @ 0x4B32E179
 * Callers:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 * Callees:
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpQueryEnvironmentCache(
        _DWORD *a1,
        unsigned int a2,
        const WCHAR *String1Length,
        _WORD *String1Length_4,
        unsigned int a5,
        int *a6)
{
  int v7; // eax
  int v8; // edx
  PCWCH *v9; // edi
  const WCHAR *v10; // ecx
  void *Environment; // eax
  const WCHAR *v12; // edx
  int v13; // ecx
  unsigned int v14; // esi
  int v15; // esi
  int result; // eax
  SIZE_T v17; // [esp-4h] [ebp-1Ch]
  BOOLEAN v18; // [esp+4h] [ebp-14h]
  int v19; // [esp+8h] [ebp-10h]
  PCWCH *v20; // [esp+10h] [ebp-8h]

  if ( (unsigned int)String1Length - 1 > 0x13 )
    return -1073741568;
  v7 = 7 * (_DWORD)String1Length;
  v8 = LdrpCurrentDllInitializer[7 * (_DWORD)String1Length];
  v9 = (PCWCH *)(&CsrServerApiRoutine + 7 * (_DWORD)String1Length);
  v19 = v8;
  v20 = &v9[2 * v8];
  v10 = String1Length;
  if ( v9 >= v20 )
  {
LABEL_6:
    if ( v8 == 3 )
    {
      Environment = (void *)dword_4B3A639C[v7];
    }
    else
    {
      Environment = (void *)dword_4B3A65D0;
      if ( !dword_4B3A65D0 )
        Environment = NtCurrentPeb()->ProcessParameters->Environment;
    }
    *a1 = Environment;
    return -1073741568;
  }
  while ( 1 )
  {
    LODWORD(v17) = 1;
    if ( !RtlCompareUnicodeStrings(*v9, __PAIR64__(a2, (unsigned int)v10), v10, v17, v18) )
      break;
    v10 = String1Length;
    v9 += 2;
    if ( v9 >= v20 )
    {
      v7 = 7 * (_DWORD)String1Length;
      v8 = v19;
      goto LABEL_6;
    }
  }
  v12 = &(*v9)[(_DWORD)String1Length + 1];
  v13 = v9[1] - v12;
  v14 = v13 - 1;
  if ( String1Length_4 )
  {
    if ( v14 < a5 )
    {
      *a6 = v14;
      v15 = v14;
      LODWORD(v17) = v15 * 2;
      memcpy(String1Length_4, v12, v17);
      result = 0;
      String1Length_4[v15] = 0;
      return result;
    }
    if ( a5 )
      *String1Length_4 = 0;
  }
  *a6 = v13;
  return -1073741789;
}
