/*
 * XREFs of _LdrEnumResources@20 @ 0x4B33EF20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _LdrpCompareResourceNamesWithValidation@24 @ 0x4B306D17 (_LdrpCompareResourceNamesWithValidation@24.c)
 */

int __thiscall LdrEnumResources(void *this, int a2, wchar_t **a3, unsigned int a4, void **a5, int a6)
{
  void *v6; // edi
  unsigned __int16 *v7; // eax
  int v8; // esi
  int v10; // ecx
  int v11; // eax
  bool v12; // zf
  int *v13; // ebx
  int v14; // ecx
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int *v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int *v25; // edx
  int *v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  unsigned int v31; // [esp+8h] [ebp-3Ch] BYREF
  unsigned int v32; // [esp+Ch] [ebp-38h]
  unsigned int v33; // [esp+10h] [ebp-34h]
  int v34; // [esp+14h] [ebp-30h]
  int *v35; // [esp+18h] [ebp-2Ch]
  int v36; // [esp+1Ch] [ebp-28h]
  int v37; // [esp+20h] [ebp-24h]
  unsigned int v38; // [esp+24h] [ebp-20h]
  int v39; // [esp+28h] [ebp-1Ch]
  void *v40; // [esp+2Ch] [ebp-18h]
  int *v41; // [esp+30h] [ebp-14h]
  int *v42; // [esp+34h] [ebp-10h]
  unsigned int v43; // [esp+38h] [ebp-Ch]
  int v44; // [esp+3Ch] [ebp-8h]
  char v45; // [esp+41h] [ebp-3h] BYREF
  char v46; // [esp+42h] [ebp-2h] BYREF
  char v47; // [esp+43h] [ebp-1h] BYREF

  v6 = 0;
  v43 = 0;
  if ( a6 )
  {
    this = *a5;
    v40 = *a5;
  }
  else
  {
    v40 = 0;
  }
  *a5 = 0;
  v7 = (unsigned __int16 *)RtlImageDirectoryEntryToData(this, a2, 1, 2, (int)&v31);
  v8 = (int)v7;
  if ( !v7 )
    return -1073741687;
  v10 = v7[7];
  v11 = v7[6];
  v12 = v11 + v10 == 0;
  v36 = 0;
  v31 = v11 + v10;
  v13 = (int *)(v8 + 16);
  v14 = 0;
  v35 = (int *)(v8 + 16);
  v34 = 0;
  if ( !v12 )
  {
    while ( 1 )
    {
      if ( !a4 || !LdrpCompareResourceNamesWithValidation(0, 0, *a3, v8, v13, &v47) )
      {
        v15 = v13[1];
        if ( v15 >= 0 )
          return -1073741701;
        v16 = *v13;
        if ( *v13 >= 0 )
          v16 = (unsigned __int16)v16;
        else
          v16 = v8 + (v16 & 0x7FFFFFFF);
        v17 = v15 & 0x7FFFFFFF;
        v37 = 0;
        v18 = (int *)(v17 + v8 + 16);
        v41 = v18;
        v32 = *(unsigned __int16 *)(v17 + v8 + 12) + *(unsigned __int16 *)(v17 + v8 + 14);
        if ( v32 )
        {
          while ( 1 )
          {
            if ( a4 <= 1 || (v19 = LdrpCompareResourceNamesWithValidation(0, 0, a3[1], v8, v18, &v46), v18 = v41, !v19) )
            {
              v20 = v18[1];
              if ( v20 >= 0 )
                return -1073741701;
              v21 = *v18;
              v21 = *v18 >= 0 ? (unsigned __int16)v21 : v8 + (v21 & 0x7FFFFFFF);
              v22 = v20 & 0x7FFFFFFF;
              v38 = 0;
              v44 = v22 + v8 + 16;
              v23 = *(unsigned __int16 *)(v22 + v8 + 14);
              v24 = *(unsigned __int16 *)(v22 + v8 + 12);
              v12 = v24 + v23 == 0;
              v33 = v24 + v23;
              v25 = (int *)v44;
              if ( !v12 )
                break;
            }
LABEL_34:
            v18 += 2;
            v41 = v18;
            if ( ++v37 >= v32 )
            {
              v13 = v35;
              goto LABEL_36;
            }
          }
          v26 = (int *)(a6 + 24 * v43);
          v42 = v26;
          while ( 2 )
          {
            if ( a4 <= 2 )
            {
LABEL_25:
              v39 = v25[1];
              if ( v39 < 0 )
                return -1073741701;
              v28 = *v25;
              if ( *v25 >= 0 )
                v28 = (unsigned __int16)v28;
              else
                v28 = v8 + (v28 & 0x7FFFFFFF);
              ++v43;
              v42 += 6;
              v25 = (int *)v44;
              if ( v43 > (unsigned int)v40 )
              {
                v34 = -1073741820;
              }
              else
              {
                v26[2] = v28;
                v29 = v39;
                *v26 = v16;
                v26[1] = v21;
                v26[3] = a2 + *(_DWORD *)(v29 + v8);
                v30 = *(_DWORD *)(v39 + v8 + 4);
                v26[5] = 0;
                v26[4] = v30;
              }
            }
            else
            {
              v27 = LdrpCompareResourceNamesWithValidation(0, 0, a3[2], v8, v25, &v45);
              v25 = (int *)v44;
              if ( !v27 )
              {
                v26 = v42;
                goto LABEL_25;
              }
            }
            v25 += 2;
            v26 = v42;
            ++v38;
            v44 = (int)v25;
            if ( v38 >= v33 )
            {
              v18 = v41;
              goto LABEL_34;
            }
            continue;
          }
        }
      }
LABEL_36:
      v13 += 2;
      v35 = v13;
      if ( ++v36 >= v31 )
      {
        v6 = (void *)v43;
        v14 = v34;
        break;
      }
    }
  }
  *a5 = v6;
  return v14;
}
