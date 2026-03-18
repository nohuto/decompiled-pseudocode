/*
 * XREFs of _ApiSetpSearchForApiSet@12 @ 0xF9050
 * Callers:
 *     _ApiSetResolveToHost@20 @ 0xF8F9A (_ApiSetResolveToHost@20.c)
 * Callees:
 *     <none>
 */

int __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  const WCHAR *v3; // ebx
  int v4; // esi
  _DWORD *v5; // edi
  WCHAR v6; // dx
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  int v14; // [esp+18h] [ebp-8h]
  unsigned int v15; // [esp+1Ch] [ebp-4h]

  v3 = a2;
  v4 = 0;
  v15 = 0;
  v5 = a1;
  if ( a3 )
  {
    v14 = a3;
    do
    {
      v6 = *v3;
      if ( (unsigned __int16)(*v3 - 65) <= 0x19u )
        v6 += 32;
      ++v3;
      v4 = v6 + a1[6] * v4;
      --v14;
    }
    while ( v14 );
    v5 = a1;
    v15 = v4;
    v4 = 0;
  }
  v7 = 0;
  v8 = v5[3] - 1;
  if ( v8 < 0 )
    return v4;
  v9 = v5[5];
  while ( 1 )
  {
    v10 = (v7 + v8) >> 1;
    v11 = v9 + 8 * v10;
    v4 = 0;
    if ( v15 >= *(_DWORD *)((char *)v5 + v11) )
      break;
    v8 = v10 - 1;
LABEL_13:
    v9 = v5[5];
    if ( v7 > v8 )
      return v4;
  }
  if ( v15 > *(_DWORD *)((char *)v5 + v11) )
  {
    v7 = v10 + 1;
    goto LABEL_13;
  }
  v4 = (int)&v5[6 * *(_DWORD *)((char *)v5 + v11 + 4)] + v5[4];
  if ( !v4
    || !RtlCompareUnicodeStrings(a2, a3, (PCWCH)((char *)v5 + *(_DWORD *)(v4 + 4)), *(_DWORD *)(v4 + 12) >> 1, 1u) )
  {
    return v4;
  }
  return 0;
}
