/*
 * XREFs of _RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation@20 @ 0x4B33DD92
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 * Callees:
 *     _RtlpLocateActivationContextSectionForQuery@44 @ 0x4B2B7EEA (_RtlpLocateActivationContextSectionForQuery@44.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
        int a1,
        int *a2,
        char *a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v5; // esi
  int v7; // edx
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  _DWORD *i; // ebx
  bool v12; // zf
  _DWORD *v13; // ecx
  unsigned int v14; // eax
  int v15; // ebx
  int v16; // ebx
  int v17; // edx
  _WORD *v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  _WORD *v22; // edi
  int v23; // eax
  int v24; // edx
  int v25; // ebx
  _DWORD *v26; // ecx
  size_t Size; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *v29; // [esp+10h] [ebp-14h] BYREF
  int v30; // [esp+14h] [ebp-10h] BYREF
  int v31; // [esp+18h] [ebp-Ch]
  int v32; // [esp+1Ch] [ebp-8h]
  int v33; // [esp+20h] [ebp-4h] BYREF

  v5 = 0;
  v30 = -1073741595;
  v33 = 0;
  v29 = 0;
  if ( a5 )
    *a5 = 0;
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + a1 + 8);
  v31 = *a2;
  if ( *a2 >= (unsigned int)(v7 - 1) )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      "RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation",
      v31,
      v7);
    return -1073741811;
  }
  RtlpLocateActivationContextSectionForQuery(&v29, &v30, a3, a4, a5, 0x58u, a1, a1, 2, (int)&v33, (int)&Size);
  if ( v29 == (_DWORD *)2 )
    return v30;
  v8 = (_DWORD *)a2[1];
  v29 = v8;
  v9 = *(_DWORD *)(v33 + 20);
  if ( (unsigned int)v8 >= v9 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() received invalid file index (%u, max is %u) in Assembly (%u)\n",
      "RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation",
      v8,
      v9,
      *a2);
    return -1073741811;
  }
  v10 = *(_DWORD *)(v33 + 24);
  if ( !v10 )
    return -1072365547;
  v30 = 0;
  v32 = v33 + v10;
  v31 = 0;
  if ( !v9 )
    return -1072365547;
  Size = *a2 + 1;
  for ( i = (_DWORD *)(v32 + 12); i[2] != Size; i += 6 )
  {
LABEL_16:
    if ( ++v31 >= v9 )
      return -1072365547;
  }
  if ( (_DWORD *)v30 != v29 || !*i )
  {
    ++v30;
    goto LABEL_16;
  }
  v12 = v33 + *i == 0;
  v13 = (_DWORD *)(v33 + *i);
  v29 = v13;
  if ( v12 )
    return -1072365547;
  v14 = 20;
  v30 = 24 * v31;
  v15 = *(_DWORD *)(24 * v31 + v32 + 8);
  if ( v15 )
    v14 = v15 + 22;
  v16 = v13[2];
  if ( v16 )
    v14 += v16 + 2;
  if ( v14 > a4 )
  {
    if ( a5 )
      *a5 = v14;
    return -1073741789;
  }
  v17 = v32;
  *(_DWORD *)a3 = v13[1];
  v18 = a3 + 20;
  *((_DWORD *)a3 + 1) = *(_DWORD *)(v30 + v17 + 8);
  *((_DWORD *)a3 + 2) = v13[2];
  v19 = v30;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 4) = 0;
  Size = *(_DWORD *)(v19 + v17 + 8);
  if ( Size )
  {
    memcpy(a3 + 20, (const void *)(v33 + *(_DWORD *)(v19 + v32 + 4)), Size);
    v20 = v30;
    v21 = v32;
    *((_DWORD *)a3 + 3) = v18;
    v22 = (_WORD *)((char *)v18 + *(_DWORD *)(v20 + v21 + 8));
    v13 = v29;
    *v22 = 0;
    v18 = v22 + 1;
  }
  if ( v13[2] )
  {
    v23 = v13[4];
    if ( v23 )
    {
      v24 = v33 + 44 * v23;
      v30 = v24;
      if ( v24 )
      {
        *((_DWORD *)a3 + 4) = v18;
        v25 = 0;
        if ( !v13[3] )
        {
LABEL_38:
          *v18 = 0;
          return v5;
        }
        v26 = v29;
        Size = (size_t)&a3[a4];
        while ( (unsigned int)v18 + *(_DWORD *)(v24 + 8 * v25 + 4) + 2 <= Size )
        {
          if ( *(_DWORD *)(v24 + 8 * v25 + 4) )
          {
            memcpy(v18, (const void *)(*(_DWORD *)(v24 + 8 * v25 + 4) + v33), *(_DWORD *)(v24 + 8 * v25));
            v24 = v30;
            v26 = v29;
            v18 = (_WORD *)((char *)v18 + *(_DWORD *)(v30 + 8 * v25));
          }
          if ( (unsigned int)++v25 >= v26[3] )
            goto LABEL_38;
        }
        return -1072365547;
      }
    }
  }
  return v5;
}
