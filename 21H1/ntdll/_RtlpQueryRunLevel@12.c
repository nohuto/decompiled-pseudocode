/*
 * XREFs of _RtlpQueryRunLevel@12 @ 0x4B33E03F
 * Callers:
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 * Callees:
 *     _RtlpLocateActivationContextSectionForQuery@44 @ 0x4B2B7EEA (_RtlpLocateActivationContextSectionForQuery@44.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpQueryRunLevel(int a1, int a2, _DWORD *a3)
{
  unsigned int v3; // edi
  int v5; // esi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  bool v9; // zf
  _BYTE *v10; // eax
  int v11; // eax
  size_t v13; // [esp-18h] [ebp-68h]
  int v14; // [esp+Ch] [ebp-44h] BYREF
  int v15; // [esp+10h] [ebp-40h] BYREF
  int v16; // [esp+14h] [ebp-3Ch] BYREF
  int v17; // [esp+18h] [ebp-38h] BYREF
  int v18; // [esp+1Ch] [ebp-34h] BYREF
  _BYTE v19[48]; // [esp+20h] [ebp-30h] BYREF

  v14 = -1073741595;
  v3 = 1;
  HIDWORD(v13) = a2;
  LODWORD(v13) = 48;
  v5 = 0;
  v15 = 0;
  RtlpLocateActivationContextSectionForQuery(&v15, &v14, v19, 0x30u, &v18, v13, a1, 1, (int)&v17, (int)&v16);
  if ( v15 != 1 )
    return v14;
  v6 = *(_DWORD *)(a2 + 24);
  v7 = *(_DWORD *)(v6 + a2 + 8);
  v8 = a2 + *(_DWORD *)(v6 + a2 + 12);
  v9 = v7 == 1;
  if ( v7 > 1 )
  {
    v10 = (_BYTE *)(v8 + 24);
    do
    {
      if ( (*v10 & 2) != 0 )
        break;
      ++v3;
      v10 += 24;
    }
    while ( v3 < v7 );
    v9 = v3 == v7;
  }
  if ( v9 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() found activation context data at %p with assembly roster that has no root\n",
      (int)"RtlpQueryRunLevel");
  }
  else
  {
    v11 = *(_DWORD *)(24 * v3 + v8 + 16);
    if ( *(_DWORD *)(v11 + a2) == 108 )
    {
      *a3 = 0;
      a3[1] = *(_DWORD *)(v11 + a2 + 100);
      a3[2] = *(_DWORD *)(v11 + a2 + 104);
      return v5;
    }
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() found activation context data at %p with wrong format\n",
      (int)"RtlpQueryRunLevel");
  }
  return -1072365565;
}
