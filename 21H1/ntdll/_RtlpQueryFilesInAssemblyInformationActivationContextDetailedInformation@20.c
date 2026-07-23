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
        _DWORD *a2,
        char *a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v5; // esi
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // eax
  _DWORD *i; // ebx
  bool v11; // zf
  _DWORD *v12; // ecx
  unsigned int v13; // eax
  int v14; // ebx
  int v15; // ebx
  int v16; // edx
  _WORD *v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  _WORD *v21; // edi
  int v22; // eax
  int v23; // edx
  int v24; // ebx
  _DWORD *v25; // ecx
  size_t v27; // [esp-18h] [ebp-3Ch]
  size_t v28; // [esp-4h] [ebp-28h]
  char *Size; // [esp+Ch] [ebp-18h] BYREF
  _DWORD *Size_4; // [esp+10h] [ebp-14h] BYREF
  int v31; // [esp+14h] [ebp-10h] BYREF
  int v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h]
  int v34; // [esp+20h] [ebp-4h] BYREF

  v5 = 0;
  v31 = -1073741595;
  v34 = 0;
  Size_4 = 0;
  if ( a5 )
    *a5 = 0;
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + a1 + 8);
  v32 = *a2;
  if ( *a2 >= (unsigned int)(v7 - 1) )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      (int)"RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation");
    return -1073741811;
  }
  HIDWORD(v27) = a1;
  LODWORD(v27) = 88;
  RtlpLocateActivationContextSectionForQuery(&Size_4, &v31, a3, a4, a5, v27, a1, 2, (int)&v34, (int)&Size);
  if ( Size_4 == (_DWORD *)2 )
    return v31;
  Size_4 = (_DWORD *)a2[1];
  v8 = *(_DWORD *)(v34 + 20);
  if ( (unsigned int)Size_4 >= v8 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() received invalid file index (%u, max is %u) in Assembly (%u)\n",
      (int)"RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation");
    return -1073741811;
  }
  v9 = *(_DWORD *)(v34 + 24);
  if ( !v9 )
    return -1072365547;
  v31 = 0;
  v33 = v34 + v9;
  v32 = 0;
  if ( !v8 )
    return -1072365547;
  Size = (char *)(*a2 + 1);
  for ( i = (_DWORD *)(v33 + 12); (char *)i[2] != Size; i += 6 )
  {
LABEL_16:
    if ( ++v32 >= v8 )
      return -1072365547;
  }
  if ( (_DWORD *)v31 != Size_4 || !*i )
  {
    ++v31;
    goto LABEL_16;
  }
  v11 = v34 + *i == 0;
  v12 = (_DWORD *)(v34 + *i);
  Size_4 = v12;
  if ( v11 )
    return -1072365547;
  v13 = 20;
  v31 = 24 * v32;
  v14 = *(_DWORD *)(24 * v32 + v33 + 8);
  if ( v14 )
    v13 = v14 + 22;
  v15 = v12[2];
  if ( v15 )
    v13 += v15 + 2;
  if ( v13 > a4 )
  {
    if ( a5 )
      *a5 = v13;
    return -1073741789;
  }
  v16 = v33;
  *(_DWORD *)a3 = v12[1];
  v17 = a3 + 20;
  *((_DWORD *)a3 + 1) = *(_DWORD *)(v31 + v16 + 8);
  *((_DWORD *)a3 + 2) = v12[2];
  v18 = v31;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 4) = 0;
  Size = *(char **)(v18 + v16 + 8);
  if ( Size )
  {
    LODWORD(v28) = Size;
    memcpy(a3 + 20, (const void *)(v34 + *(_DWORD *)(v18 + v33 + 4)), v28);
    v19 = v31;
    v20 = v33;
    *((_DWORD *)a3 + 3) = v17;
    v21 = (_WORD *)((char *)v17 + *(_DWORD *)(v19 + v20 + 8));
    v12 = Size_4;
    *v21 = 0;
    v17 = v21 + 1;
  }
  if ( v12[2] )
  {
    v22 = v12[4];
    if ( v22 )
    {
      v23 = v34 + 44 * v22;
      v31 = v23;
      if ( v23 )
      {
        *((_DWORD *)a3 + 4) = v17;
        v24 = 0;
        if ( !v12[3] )
        {
LABEL_38:
          *v17 = 0;
          return v5;
        }
        v25 = Size_4;
        Size = &a3[a4];
        while ( (char *)v17 + *(_DWORD *)(v23 + 8 * v24 + 4) + 2 <= Size )
        {
          if ( *(_DWORD *)(v23 + 8 * v24 + 4) )
          {
            LODWORD(v28) = *(_DWORD *)(v23 + 8 * v24);
            memcpy(v17, (const void *)(*(_DWORD *)(v23 + 8 * v24 + 4) + v34), v28);
            v23 = v31;
            v25 = Size_4;
            v17 = (_WORD *)((char *)v17 + *(_DWORD *)(v31 + 8 * v24));
          }
          if ( (unsigned int)++v24 >= v25[3] )
            goto LABEL_38;
        }
        return -1072365547;
      }
    }
  }
  return v5;
}
