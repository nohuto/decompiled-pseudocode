/*
 * XREFs of _ApiSetpSearchForApiSetHost@16 @ 0x4B2CD9A9
 * Callers:
 *     _ApiSetResolveToHost@20 @ 0x4B2D012C (_ApiSetResolveToHost@20.c)
 * Callees:
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 */

int __fastcall ApiSetpSearchForApiSetHost(int a1, int a2, unsigned __int16 a3, int a4)
{
  int v4; // edx
  int v5; // ebx
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v4 = a4;
  v13 = *(_DWORD *)(a1 + 16);
  v5 = v13 + a4;
  v6 = 1;
  v7 = *(_DWORD *)(a1 + 20) - 1;
  v14 = 1;
  if ( v7 >= 1 )
  {
    v8 = a3;
    do
    {
      v15 = (v7 + v6) >> 1;
      v9 = v4 + v13 + 20 * v15;
      v10 = RtlCompareUnicodeStrings(a2, v8, v4 + *(_DWORD *)(v9 + 4), *(_DWORD *)(v9 + 8) >> 1, 1);
      if ( v10 < 0 )
      {
        v6 = v14;
        v7 = v15 - 1;
      }
      else
      {
        if ( v10 <= 0 )
          return v9;
        v6 = v15 + 1;
        v14 = v15 + 1;
      }
      v4 = a4;
      v8 = a3;
    }
    while ( v6 <= v7 );
  }
  return v5;
}
