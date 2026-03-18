/*
 * XREFs of ?vGetBlendInfo@@YGXKPAVSURFACE@@KPAU_BLENDINFO@@@Z @ 0x835B8
 * Callers:
 *     _vSrcOpaqCopyS8D32@44 @ 0x55F00 (_vSrcOpaqCopyS8D32@44.c)
 *     ?pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z @ 0x83544 (-pvFillOpaqTableCT@@YGPAXKKKPAVSURFACE@@PAU_BLENDINFO@@H@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __userpurge vGetBlendInfo(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        struct SURFACE *a4,
        unsigned int a5,
        struct _BLENDINFO *a6)
{
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  int v12; // esi
  int v13; // eax
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // eax
  unsigned __int8 *v17; // edx
  int *v18; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  _DWORD v25[14]; // [esp+10h] [ebp-48h] BYREF
  int v26; // [esp+48h] [ebp-10h]
  int v27; // [esp+4Ch] [ebp-Ch]
  int v28; // [esp+50h] [ebp-8h]
  int v29; // [esp+54h] [ebp-4h]

  memset(v25, 0, sizeof(v25));
  v8 = *(_DWORD *)(a1 + 88);
  v9 = *(_DWORD *)(a1 + 28);
  if ( !v8 )
    v8 = *(_DWORD *)(v9 + 1112);
  v26 = *(_DWORD *)(v8 + 16);
  if ( (v26 & 2) != 0 )
  {
    v18 = *(int **)(v8 + 76);
    v14 = v18[9] - 8 + v18[6];
    v10 = *v18;
    v19 = v18[7] + v18[10] - 8;
    v29 = v18[1];
    v25[7] = v29;
    v20 = v18[2];
    v25[3] = v19;
    v21 = v18[11];
    v22 = v18[8] - 8;
    v28 = v20;
    v25[8] = v20;
    v12 = v21 + v22;
LABEL_23:
    v25[1] = v14;
    v25[6] = v10;
    v25[5] = v12;
    goto LABEL_7;
  }
  v10 = a2 == 2 ? 31 : 255;
  v11 = a2 == 2 ? 5 : 8;
  if ( (v26 & 4) != 0 )
  {
    v14 = a2 == 2 ? -3 : 0;
    v29 = v10 << v11;
    v25[7] = v10 << v11;
    v28 = v10 << v11 << v11;
    v12 = 3 * v11 - 8;
    v25[8] = v28;
    v25[3] = 2 * v11 - 8;
    goto LABEL_23;
  }
  if ( (v26 & 8) != 0 )
  {
    v12 = a2 == 2 ? -3 : 0;
    v28 = a2 == 2 ? 31 : 255;
    v25[8] = v28;
    v13 = v10 << v11;
    v10 = v10 << v11 << v11;
    v29 = v13;
    v14 = 3 * v11 - 8;
    v25[7] = v13;
    v25[6] = v10;
    v25[5] = v11 - 8;
    v25[3] = 2 * v11 - 8;
    v25[1] = v14;
  }
  else
  {
    v10 = v25[6];
    v12 = v25[5];
    v14 = v25[1];
    v28 = v25[8];
    v29 = v25[7];
  }
LABEL_7:
  LOBYTE(v15) = 0;
  v25[0] = 0;
  if ( v14 < 0 )
  {
    v15 = -v14;
    LOBYTE(v14) = 0;
    v25[0] = v15;
    v25[1] = 0;
  }
  v27 = 0;
  v25[2] = 0;
  if ( v25[3] < 0 )
  {
    v23 = -v25[3];
    v25[3] = 0;
    v27 = v23;
    v25[2] = v23;
  }
  v26 = 0;
  v25[4] = 0;
  if ( v12 < 0 )
  {
    v24 = -v12;
    LOBYTE(v12) = 0;
    v26 = v24;
    v25[4] = v24;
    v25[5] = 0;
  }
  v16 = gulGamma;
  if ( gulGamma == 1200 )
  {
    v16 = *(_DWORD *)(v9 + 1720);
    if ( !v16 )
      v16 = 1200;
  }
  if ( v16 < 0x44C )
  {
    v17 = (unsigned __int8 *)&ajGammaCT_10;
    v25[13] = &ajGammaCT_10;
  }
  else if ( v16 < 0x4B0 )
  {
    v17 = (unsigned __int8 *)&ajGammaCT_11;
    v25[13] = &ajGammaInvCT_11;
  }
  else if ( v16 >= 0x514 )
  {
    if ( v16 >= 0x578 )
    {
      if ( v16 >= 0x5DC )
      {
        if ( v16 >= 0x640 )
        {
          if ( v16 >= 0x6A4 )
          {
            if ( v16 >= 0x708 )
            {
              if ( v16 >= 0x76C )
              {
                if ( v16 >= 0x7D0 )
                {
                  if ( v16 >= 0x834 )
                  {
                    if ( v16 >= 0x898 )
                    {
                      v17 = (unsigned __int8 *)&ajGammaCT_22;
                      v25[13] = &ajGammaInvCT_22;
                    }
                    else
                    {
                      v17 = (unsigned __int8 *)&ajGammaCT_21;
                      v25[13] = &ajGammaInvCT_21;
                    }
                  }
                  else
                  {
                    v17 = (unsigned __int8 *)&ajGammaCT_20;
                    v25[13] = &ajGammaInvCT_20;
                  }
                }
                else
                {
                  v17 = (unsigned __int8 *)&ajGammaCT_19;
                  v25[13] = &ajGammaInvCT_19;
                }
              }
              else
              {
                v17 = (unsigned __int8 *)&ajGammaCT_18;
                v25[13] = &ajGammaInvCT_18;
              }
            }
            else
            {
              v17 = (unsigned __int8 *)&ajGammaCT_17;
              v25[13] = &ajGammaInvCT_17;
            }
          }
          else
          {
            v17 = (unsigned __int8 *)&ajGammaCT_16;
            v25[13] = &ajGammaInvCT_16;
          }
        }
        else
        {
          v17 = (unsigned __int8 *)&ajGammaCT_15;
          v25[13] = &ajGammaInvCT_15;
        }
      }
      else
      {
        v17 = (unsigned __int8 *)&ajGammaCT_14;
        v25[13] = &ajGammaInvCT_14;
      }
    }
    else
    {
      v17 = (unsigned __int8 *)&ajGammaCT_13;
      v25[13] = &ajGammaInvCT_13;
    }
  }
  else
  {
    v17 = (unsigned __int8 *)&ajGammaCT_12;
    v25[13] = &ajGammaInvCT_12;
  }
  v25[12] = v17;
  v25[9] = v17[(unsigned __int8)((a3 & v10) << v15 >> v14)];
  v25[10] = v17[(unsigned __int8)((a3 & v29) << v27 >> SLOBYTE(v25[3]))];
  v25[11] = v17[(unsigned __int8)((a3 & v28) << v26 >> v12)];
  qmemcpy(a4, v25, 0x38u);
}
