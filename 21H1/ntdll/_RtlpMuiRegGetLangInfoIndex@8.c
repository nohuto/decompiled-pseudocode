/*
 * XREFs of _RtlpMuiRegGetLangInfoIndex@8 @ 0x4B2EA7BD
 * Callers:
 *     _RtlpMuiRegGetOrAddLangInfo@12 @ 0x4B2EA745 (_RtlpMuiRegGetOrAddLangInfo@12.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpMuiRegGetLangInfoIndex(int a1, char *a2)
{
  char *v2; // esi
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int v5; // eax
  int v6; // edx
  char *v7; // edi
  _WORD *v8; // ecx
  int v9; // edi
  unsigned int v10; // esi
  bool v11; // al
  __int64 v13; // [esp+Ch] [ebp-28h]
  unsigned __int16 v15; // [esp+18h] [ebp-1Ch]
  int v16; // [esp+1Ch] [ebp-18h]
  unsigned int v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+28h] [ebp-Ch]
  _WORD *v19; // [esp+2Ch] [ebp-8h]
  unsigned int v20; // [esp+30h] [ebp-4h]

  v2 = a2;
  if ( !a1 || !a2 || !*((_WORD *)a2 + 2) && *((__int16 *)a2 + 3) < 0 )
    goto LABEL_7;
  v18 = *(_DWORD *)(a1 + 12);
  v3 = (int)&a2[-v18] / 28;
  if ( v3 < 0 || v3 >= *(unsigned __int16 *)(a1 + 6) )
  {
    v4 = 0;
    v20 = 0;
    v17 = 0;
    v13 = *(unsigned __int16 *)(a1 + 6);
    if ( *(_WORD *)(a1 + 6) )
    {
      v5 = 0;
      v6 = *(_DWORD *)(a1 + 12);
      do
      {
        v7 = (char *)(v6 + 28 * v4);
        if ( *(_WORD *)v7 == *(_WORD *)v2 && *((_WORD *)v7 + 2) == *((_WORD *)v2 + 2) )
        {
          if ( *((_WORD *)v7 + 3) == *((_WORD *)v2 + 3) && *((_WORD *)v7 + 5) == *((_WORD *)v2 + 5) )
          {
            v16 = *((unsigned __int16 *)v7 + 4);
            v15 = *((_WORD *)v2 + 4);
            if ( ((v15 ^ v16) & 0xC000) == 0 )
            {
              v8 = v2 + 12;
              v9 = v7 - v2;
              v10 = 0;
              v11 = 1;
              v19 = v8;
              do
              {
                if ( v10 >= 4 )
                  break;
                v11 = (((unsigned __int16)(v15 ^ v16) >> (2 * v10++)) & 3) == 0 && *(_WORD *)((char *)v19 + v9) == *v19;
                ++v19;
              }
              while ( v11 );
              v2 = a2;
              v4 = v17;
              if ( v11 )
              {
                LOWORD(v3) = v17;
                return v3;
              }
              v6 = v18;
            }
          }
          v5 = v20;
        }
        v17 = v4 + 1;
        v5 = (__PAIR64__(v5, v4++) + 1) >> 32;
        v20 = v5;
      }
      while ( __SPAIR64__(v5, v4) < v13 );
    }
LABEL_7:
    LOWORD(v3) = -1;
  }
  return v3;
}
