/*
 * XREFs of _wil_details_StagingConfig_QueryFeatureState@16 @ 0xF314E
 * Callers:
 *     _wil_StagingConfig_QueryFeatureState@20 @ 0x27A36C (_wil_StagingConfig_QueryFeatureState@20.c)
 * Callees:
 *     _wil_details_StagingConfigFeature_HasUniqueState@4 @ 0xF2ED0 (_wil_details_StagingConfigFeature_HasUniqueState@4.c)
 */

int __fastcall wil_details_StagingConfig_QueryFeatureState(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // edi
  int v8; // edx
  int *v9; // eax
  unsigned int v10; // esi
  unsigned int *v11; // esi
  int v12; // esi
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edi
  BOOL HasUniqueState; // eax
  unsigned int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  unsigned int v21; // edx
  _DWORD *v22; // eax
  int result; // eax
  int v24; // [esp+Ch] [ebp-20h] BYREF
  unsigned int v25; // [esp+10h] [ebp-1Ch]
  unsigned int v26; // [esp+14h] [ebp-18h]
  int v27; // [esp+18h] [ebp-14h]
  int *v28; // [esp+1Ch] [ebp-10h]
  _DWORD *v29; // [esp+20h] [ebp-Ch]
  unsigned int v30; // [esp+24h] [ebp-8h]
  int v31; // [esp+28h] [ebp-4h]

  v31 = a2;
  v29 = a1;
  v4 = 0;
  v5 = a1[5];
  v6 = 0;
  v28 = (int *)v29[6];
  v27 = v5;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v7 = 0;
  v30 = *(unsigned __int16 *)(v5 + 4);
  v8 = 12;
  if ( v30 )
  {
    v9 = v28;
    do
    {
      v10 = v30;
      if ( *v9 == a3 )
      {
        if ( a4 && v29[8] )
        {
          if ( (v9[1] & 1) == 0 )
          {
            v11 = (unsigned int *)&v28[3 * v6];
            v24 = *v11++;
            v25 = *v11;
            v26 = v11[1];
LABEL_12:
            if ( !a4 || !v29[8] )
              v8 = 8;
            v13 = *(_DWORD *)(v8 + v27);
            v14 = v25;
            if ( (v13 & 4) != 0 )
            {
              v14 = v25 & 0xFFFFCFFF;
              v25 &= 0xFFFFCFFF;
            }
            if ( (v13 & 2) != 0 )
            {
              v14 &= 0xFFFFF3FF;
              v25 = v14;
            }
            if ( (v13 & 1) != 0 )
            {
              v14 &= 0xFFFFFCFF;
              v25 = v14;
            }
            if ( (v13 & 8) != 0 )
            {
              v15 = 0;
              v25 = v14 & 0xC0FFFFFF;
              v26 = 0;
            }
            else
            {
              v15 = v26;
            }
            v12 = 0;
            HasUniqueState = wil_details_StagingConfigFeature_HasUniqueState(&v24);
            v18 = v31;
            if ( HasUniqueState )
            {
              *(_DWORD *)(v31 + 12) = v15;
              *(_DWORD *)(v18 + 8) = v17 >> 30;
              *(_BYTE *)(v18 + 4) = HIBYTE(v17) & 0x3F;
              *(_DWORD *)(v18 + 20) = (v17 >> 1) & 1;
              v19 = (v17 >> 12) & 3;
              if ( v19 || (v19 = (v17 >> 10) & 3) != 0 )
              {
                *(_DWORD *)v18 = v19;
              }
              else
              {
                v20 = (v17 >> 8) & 3;
                if ( v20 )
                  *(_DWORD *)v18 = v20;
              }
              v12 = 1;
            }
            goto LABEL_32;
          }
        }
        else
        {
          v24 = *v9;
          v25 = v9[1];
          v26 = v9[2];
          v7 = 1;
          if ( (v9[1] & 1) != 0 )
            break;
        }
        v10 = v30;
      }
      ++v6;
      v9 += 3;
    }
    while ( v6 < v10 );
  }
  v12 = 0;
  if ( v7 )
    goto LABEL_12;
  v18 = v31;
LABEL_32:
  v21 = 0;
  v22 = (_DWORD *)v29[7];
  if ( *(_WORD *)(v27 + 6) )
  {
    while ( 1 )
    {
      v18 = v31;
      if ( *v22 == a3 )
        break;
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)(v27 + 6) )
        goto LABEL_37;
    }
    v4 = 1;
  }
LABEL_37:
  result = v12;
  *(_DWORD *)(v18 + 16) = v4;
  return result;
}
