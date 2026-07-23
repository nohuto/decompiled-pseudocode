/*
 * XREFs of _RtlpQueryInformationActivationContextDetailedInformation@20 @ 0x4B2A9A59
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 * Callees:
 *     _RtlpCrackActivationContextStringSectionHeader@44 @ 0x4B2A9C14 (_RtlpCrackActivationContextStringSectionHeader@44.c)
 *     _RtlpLocateActivationContextSectionForQuery@44 @ 0x4B2B7EEA (_RtlpLocateActivationContextSectionForQuery@44.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __thiscall RtlpQueryInformationActivationContextDetailedInformation(
        _DWORD *this,
        char *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int *v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // ecx
  int result; // eax
  char *v9; // ecx
  bool v10; // zf
  _BYTE *v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char *v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // eax
  _DWORD *v19; // edx
  unsigned int v20; // eax
  char *v21; // esi
  char *v22; // esi
  int v23; // [esp-1Ch] [ebp-40h]
  size_t v24; // [esp-18h] [ebp-3Ch]
  int v25; // [esp-18h] [ebp-3Ch]
  int v26; // [esp-14h] [ebp-38h]
  int v27; // [esp-10h] [ebp-34h]
  int v28; // [esp-Ch] [ebp-30h]
  size_t v29; // [esp-4h] [ebp-28h]
  int v31; // [esp+10h] [ebp-14h] BYREF
  int v32; // [esp+14h] [ebp-10h] BYREF
  int v33; // [esp+18h] [ebp-Ch] BYREF
  char *v34; // [esp+1Ch] [ebp-8h] BYREF
  _DWORD *v35; // [esp+20h] [ebp-4h] BYREF

  v34 = 0;
  v4 = a4;
  v32 = -1073741595;
  if ( a4 )
    *a4 = 0;
  v5 = 1;
  HIDWORD(v24) = this;
  v6 = 48;
  LODWORD(v24) = 48;
  RtlpLocateActivationContextSectionForQuery(a2, a3, (int)a4, v24, (int)this, 1, (int)&v33, (int)&v31);
  if ( v34 == (char *)2 )
    return v32;
  result = RtlpCrackActivationContextStringSectionHeader(v7, &v34, v23, v25, v26, v27, v28, &v32, &v35);
  if ( result >= 0 )
  {
    v34 = (char *)this + this[6];
    v9 = (char *)this + *((_DWORD *)v34 + 3);
    v10 = *((_DWORD *)v34 + 2) == 1;
    if ( *((_DWORD *)v34 + 2) > 1u )
    {
      v11 = v9 + 24;
      do
      {
        if ( (*v11 & 2) != 0 )
          break;
        ++v5;
        v11 += 24;
      }
      while ( v5 < *((_DWORD *)v34 + 2) );
      v4 = a4;
      v10 = v5 == *((_DWORD *)v34 + 2);
    }
    if ( v10 )
    {
      DbgPrintEx(
        51,
        0,
        (int)"SXS: %s() found activation context data at %p with assembly roster that has no root\n",
        (int)"RtlpQueryInformationActivationContextDetailedInformation");
      return -1072365565;
    }
    else
    {
      v12 = (_DWORD *)((char *)this + *(_DWORD *)&v9[24 * v5 + 16]);
      v32 = (int)v12;
      v13 = v12[5];
      if ( v13 )
        v6 = v13 + 50;
      v14 = v12[10];
      if ( v14 )
        v6 += v14 + 2;
      v15 = v35[11];
      if ( v15 )
        v6 += v15 + 2;
      if ( v6 <= a3 )
      {
        v16 = a2 + 48;
        *(_DWORD *)a2 = this[7];
        *((_DWORD *)a2 + 1) = this[2];
        *((_DWORD *)a2 + 2) = *((_DWORD *)v34 + 2) - 1;
        *((_DWORD *)a2 + 3) = v12[4];
        v17 = v12[5];
        *((_DWORD *)a2 + 9) = 0;
        *((_DWORD *)a2 + 4) = v17 >> 1;
        *((_DWORD *)a2 + 5) = v12[9];
        v18 = v12[10];
        *((_DWORD *)a2 + 10) = 0;
        *((_DWORD *)a2 + 6) = v18 >> 1;
        v19 = v35;
        *((_DWORD *)a2 + 7) = v35[10];
        v20 = v19[11];
        *((_DWORD *)a2 + 11) = 0;
        *((_DWORD *)a2 + 8) = v20 >> 1;
        if ( v12[5] )
        {
          LODWORD(v29) = v12[5];
          memcpy(v16, (const void *)(v33 + v12[6]), v29);
          v12 = (_DWORD *)v32;
          *((_DWORD *)a2 + 9) = v16;
          v21 = &v16[v12[5]];
          *(_WORD *)v21 = 0;
          v16 = v21 + 2;
        }
        if ( v12[10] )
        {
          LODWORD(v29) = v12[10];
          memcpy(v16, (const void *)(v33 + v12[11]), v29);
          *((_DWORD *)a2 + 10) = v16;
          v22 = &v16[*(_DWORD *)(v32 + 40)];
          *(_WORD *)v22 = 0;
          v16 = v22 + 2;
        }
        if ( v35[11] )
        {
          LODWORD(v29) = v35[11];
          memcpy(v16, (char *)v35 + v35[12], v29);
          *((_DWORD *)a2 + 11) = v16;
          *(_WORD *)&v16[v35[11]] = 0;
        }
        if ( a4 )
          *a4 = v6;
        return 0;
      }
      else
      {
        if ( v4 )
          *v4 = v6;
        return -1073741789;
      }
    }
  }
  return result;
}
