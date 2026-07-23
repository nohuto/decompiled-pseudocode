/*
 * XREFs of _RtlpQueryAssemblyInformationActivationContextDetailedInformation@20 @ 0x4B33DB86
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 * Callees:
 *     _RtlpLocateActivationContextSectionForQuery@44 @ 0x4B2B7EEA (_RtlpLocateActivationContextSectionForQuery@44.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpQueryAssemblyInformationActivationContextDetailedInformation(
        int a1,
        unsigned int a2,
        char *a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v5; // eax
  _DWORD *v7; // edi
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char *v13; // esi
  char *v14; // esi
  char *v15; // esi
  char *v16; // esi
  size_t v17; // [esp-18h] [ebp-34h]
  size_t v18; // [esp-4h] [ebp-20h]
  int v19; // [esp+Ch] [ebp-10h] BYREF
  int v20; // [esp+10h] [ebp-Ch] BYREF
  int v21; // [esp+14h] [ebp-8h] BYREF
  int v22; // [esp+18h] [ebp-4h] BYREF

  v20 = -1073741595;
  v21 = 0;
  if ( a5 )
    *a5 = 0;
  v5 = *(_DWORD *)(a1 + 24);
  if ( a2 < *(_DWORD *)(v5 + a1 + 8) )
  {
    _mm_lfence();
    v7 = (_DWORD *)(a1 + *(_DWORD *)(24 * a2 + a1 + *(_DWORD *)(v5 + a1 + 12) + 16));
    HIDWORD(v17) = a1;
    v8 = 88;
    LODWORD(v17) = 88;
    RtlpLocateActivationContextSectionForQuery(&v21, &v20, a3, a4, a5, v17, 0, 1, (int)&v22, (int)&v19);
    if ( v21 == 2 )
    {
      return v20;
    }
    else
    {
      v9 = v7[2];
      if ( v9 )
        v8 = v9 + 90;
      v10 = v7[5];
      if ( v10 )
        v8 += v10 + 2;
      v11 = v7[10];
      if ( v11 )
        v8 += v11 + 2;
      v12 = v7[20];
      if ( v12 )
        v8 += v12 + 2;
      if ( v8 <= a4 )
      {
        *(_DWORD *)a3 = v7[1];
        v13 = a3 + 88;
        *((_DWORD *)a3 + 1) = v7[2];
        *((_DWORD *)a3 + 2) = v7[4];
        *((_DWORD *)a3 + 3) = v7[5];
        *((_DWORD *)a3 + 4) = v7[7];
        *((_DWORD *)a3 + 5) = v7[8];
        *((_DWORD *)a3 + 6) = v7[9];
        *((_DWORD *)a3 + 7) = v7[10];
        *((_DWORD *)a3 + 8) = v7[12];
        *((_DWORD *)a3 + 9) = v7[13];
        *((_DWORD *)a3 + 10) = v7[14];
        *((_DWORD *)a3 + 11) = v7[16];
        *((_DWORD *)a3 + 12) = v7[17];
        *((_DWORD *)a3 + 13) = v7[18];
        *((_DWORD *)a3 + 14) = v7[19];
        *((_DWORD *)a3 + 15) = v7[20];
        *((_DWORD *)a3 + 16) = 0;
        *((_DWORD *)a3 + 17) = 0;
        *((_DWORD *)a3 + 18) = 0;
        *((_DWORD *)a3 + 19) = 0;
        *((_DWORD *)a3 + 20) = v7[22];
        if ( v7[2] )
        {
          LODWORD(v18) = v7[2];
          memcpy(a3 + 88, (const void *)(v22 + v7[3]), v18);
          *((_DWORD *)a3 + 16) = v13;
          v14 = &v13[v7[2]];
          *(_WORD *)v14 = 0;
          v13 = v14 + 2;
        }
        if ( v7[5] )
        {
          LODWORD(v18) = v7[5];
          memcpy(v13, (const void *)(v22 + v7[6]), v18);
          *((_DWORD *)a3 + 17) = v13;
          v15 = &v13[v7[5]];
          *(_WORD *)v15 = 0;
          v13 = v15 + 2;
        }
        if ( v7[10] )
        {
          LODWORD(v18) = v7[10];
          memcpy(v13, (const void *)(v22 + v7[11]), v18);
          *((_DWORD *)a3 + 18) = v13;
          v16 = &v13[v7[10]];
          *(_WORD *)v16 = 0;
          v13 = v16 + 2;
        }
        if ( v7[20] )
        {
          LODWORD(v18) = v7[20];
          memcpy(v13, (const void *)(v22 + v7[21]), v18);
          *((_DWORD *)a3 + 19) = v13;
          *(_WORD *)&v13[v7[20]] = 0;
        }
        if ( a5 )
          *a5 = v8;
        return 0;
      }
      else
      {
        if ( a5 )
          *a5 = v8;
        return -1073741789;
      }
    }
  }
  else
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      (int)"RtlpQueryAssemblyInformationActivationContextDetailedInformation");
    return -1073741811;
  }
}
