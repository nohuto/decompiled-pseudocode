/*
 * XREFs of _RtlpQueryEnvironmentCache@24 @ 0x4B32E179
 * Callers:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 * Callees:
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlpQueryEnvironmentCache(_DWORD *a1, int a2, unsigned int a3, char *a4, unsigned int a5, _DWORD *a6)
{
  int v7; // eax
  int v8; // edx
  unsigned __int16 **v9; // edi
  unsigned int v10; // ecx
  void *Environment; // eax
  unsigned __int16 *v12; // edx
  int v13; // ecx
  unsigned int v14; // esi
  size_t v15; // esi
  int result; // eax
  int v17; // [esp+8h] [ebp-10h]
  unsigned __int16 **v18; // [esp+10h] [ebp-8h]

  if ( a3 - 1 > 0x13 )
    return -1073741568;
  v7 = 7 * a3;
  v8 = LdrpCurrentDllInitializer[7 * a3];
  v9 = (unsigned __int16 **)(&CsrServerApiRoutine + 7 * a3);
  v17 = v8;
  v18 = &v9[2 * v8];
  v10 = a3;
  if ( v9 >= v18 )
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
  while ( RtlCompareUnicodeStrings(*v9, v10, a2, v10, 1) )
  {
    v10 = a3;
    v9 += 2;
    if ( v9 >= v18 )
    {
      v7 = 7 * a3;
      v8 = v17;
      goto LABEL_6;
    }
  }
  v12 = &(*v9)[a3 + 1];
  v13 = v9[1] - v12;
  v14 = v13 - 1;
  if ( a4 )
  {
    if ( v14 < a5 )
    {
      *a6 = v14;
      v15 = 2 * v14;
      memcpy(a4, v12, v15);
      result = 0;
      *(_WORD *)&a4[v15] = 0;
      return result;
    }
    if ( a5 )
      *(_WORD *)a4 = 0;
  }
  *a6 = v13;
  return -1073741789;
}
