/*
 * XREFs of _wil_details_StagingConfig_QueryFeatureState@16 @ 0x4B306B98
 * Callers:
 *     _wil_StagingConfig_QueryFeatureState@20 @ 0x4B3A1088 (_wil_StagingConfig_QueryFeatureState@20.c)
 * Callees:
 *     _wil_details_StagingConfigFeature_HasUniqueState@4 @ 0x4B3068E7 (_wil_details_StagingConfigFeature_HasUniqueState@4.c)
 */

int __fastcall wil_details_StagingConfig_QueryFeatureState(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // edx
  int v9; // ecx
  int *v10; // eax
  unsigned int *v11; // esi
  int v12; // esi
  unsigned int v13; // edx
  int v14; // eax
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
  unsigned int v28; // [esp+1Ch] [ebp-10h]
  int v29; // [esp+20h] [ebp-Ch]
  int v30; // [esp+24h] [ebp-8h]
  _DWORD *v31; // [esp+28h] [ebp-4h]

  v30 = a2;
  v5 = 0;
  v31 = a1;
  v6 = a1[5];
  v7 = 0;
  v8 = 0;
  v27 = v31[6];
  v29 = v6;
  v28 = *(unsigned __int16 *)(v6 + 4);
  v9 = 12;
  if ( v28 )
  {
    v10 = (int *)a1[6];
    do
    {
      if ( *v10 == a3 )
      {
        if ( a4 && v31[8] )
        {
          if ( (v10[1] & 1) == 0 )
          {
            v11 = (unsigned int *)(v27 + 12 * v8);
            v24 = *v11++;
            v25 = *v11;
            v26 = v11[1];
LABEL_11:
            if ( !a4 || !v31[8] )
              v9 = 8;
            v13 = v25;
            v14 = *(_DWORD *)(v9 + v29);
            if ( (v14 & 4) != 0 )
            {
              v13 = v25 & 0xFFFFCFFF;
              v25 &= 0xFFFFCFFF;
            }
            if ( (v14 & 2) != 0 )
            {
              v13 &= 0xFFFFF3FF;
              v25 = v13;
            }
            if ( (v14 & 1) != 0 )
            {
              v13 &= 0xFFFFFCFF;
              v25 = v13;
            }
            if ( (v14 & 8) != 0 )
            {
              v15 = 0;
              v25 = v13 & 0xC0FFFFFF;
              v26 = 0;
            }
            else
            {
              v15 = v26;
            }
            v12 = 0;
            HasUniqueState = wil_details_StagingConfigFeature_HasUniqueState(&v24);
            v18 = v30;
            if ( HasUniqueState )
            {
              *(_DWORD *)(v30 + 12) = v15;
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
            goto LABEL_31;
          }
        }
        else
        {
          v24 = *v10;
          v25 = v10[1];
          v26 = v10[2];
          v7 = 1;
          if ( (v10[1] & 1) != 0 )
            break;
        }
      }
      ++v8;
      v10 += 3;
    }
    while ( v8 < v28 );
  }
  v12 = 0;
  if ( v7 )
    goto LABEL_11;
  v18 = v30;
LABEL_31:
  v21 = 0;
  v22 = (_DWORD *)v31[7];
  if ( *(_WORD *)(v29 + 6) )
  {
    while ( 1 )
    {
      v18 = v30;
      if ( *v22 == a3 )
        break;
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)(v29 + 6) )
        goto LABEL_36;
    }
    v5 = 1;
  }
LABEL_36:
  result = v12;
  *(_DWORD *)(v18 + 16) = v5;
  return result;
}
