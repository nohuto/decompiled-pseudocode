/*
 * XREFs of _ApiSetpSearchForApiSet@12 @ 0x4B2D03B0
 * Callers:
 *     _ApiSetResolveToHost@20 @ 0x4B2D012C (_ApiSetResolveToHost@20.c)
 *     _ApiSetQuerySchemaInfo@16 @ 0x4B2D0221 (_ApiSetQuerySchemaInfo@16.c)
 * Callees:
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 */

int __fastcall ApiSetpSearchForApiSet(int a1, const WCHAR *a2, unsigned __int16 a3)
{
  int v3; // ebx
  const WCHAR *v4; // esi
  unsigned int v5; // edi
  int v6; // edx
  unsigned __int16 v7; // ax
  int v8; // ecx
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  bool v15; // zf
  SIZE_T v17; // [esp-10h] [ebp-28h]
  SIZE_T v18; // [esp-4h] [ebp-1Ch]
  BOOLEAN v19; // [esp+4h] [ebp-14h]
  int v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+10h] [ebp-8h]

  v3 = a1;
  v4 = a2;
  v5 = 0;
  if ( a3 )
  {
    v6 = a3;
    do
    {
      v7 = *v4;
      if ( (unsigned __int16)(*v4 - 65) <= 0x19u )
        v7 += 32;
      ++v4;
      v5 = v7 + *(_DWORD *)(a1 + 24) * v5;
      --v6;
    }
    while ( v6 );
    v3 = a1;
  }
  v8 = 0;
  v9 = 0;
  v10 = *(_DWORD *)(v3 + 12) - 1;
  if ( v10 < 0 )
    return v8;
  v11 = *(_DWORD *)(v3 + 20);
  v21 = v11;
  while ( 1 )
  {
    v12 = (v10 + v9) >> 1;
    v13 = v11 + 8 * v12;
    if ( v5 < *(_DWORD *)(v13 + v3) )
    {
      v10 = v12 - 1;
      goto LABEL_12;
    }
    if ( v5 <= *(_DWORD *)(v13 + v3) )
      break;
    v9 = v12 + 1;
LABEL_12:
    v11 = v21;
    v3 = a1;
    if ( v9 > v10 )
      return 0;
  }
  v14 = *(_DWORD *)(a1 + 16) + 24 * *(_DWORD *)(v13 + v3 + 4);
  v15 = a1 + v14 == 0;
  v8 = a1 + v14;
  v22 = v8;
  if ( v15 )
    return v8;
  LODWORD(v18) = 1;
  HIDWORD(v17) = a1 + *(_DWORD *)(v8 + 4);
  LODWORD(v17) = a3;
  if ( !RtlCompareUnicodeStrings(a2, v17, (PCWCH)(*(_DWORD *)(v8 + 12) >> 1), v18, v19) )
    return v22;
  return 0;
}
