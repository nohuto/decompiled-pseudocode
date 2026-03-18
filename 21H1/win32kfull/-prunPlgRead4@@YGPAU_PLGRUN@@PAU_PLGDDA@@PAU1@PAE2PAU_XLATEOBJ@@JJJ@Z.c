/*
 * XREFs of ?prunPlgRead4@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x244CA1
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z @ 0x244F18 (-prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z.c)
 *     ?vAdvXDDA@@YGXPAU_PLGDDA@@@Z @ 0x24513B (-vAdvXDDA@@YGXPAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__stdcall prunPlgRead4(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  int v9; // esi
  unsigned __int8 *v10; // edx
  struct _PLGRUN *v11; // edi
  struct _XLATEOBJ *v12; // eax
  unsigned int v13; // edx
  int v14; // ecx
  struct _PLGRUN *result; // eax
  int v16; // edi
  int v17; // ecx
  unsigned int v18; // edx
  int v19; // eax
  int v20; // edi
  int v21; // edx
  int v22; // edi
  struct _PLGDDA *v23; // [esp+0h] [ebp-Ch]
  struct _PLGDDA *v24; // [esp+0h] [ebp-Ch]
  struct _PLGRUN *v25; // [esp+4h] [ebp-8h]
  unsigned __int8 *v26; // [esp+1Ch] [ebp+10h]
  unsigned __int8 *v27; // [esp+20h] [ebp+14h]
  unsigned __int8 *v28; // [esp+28h] [ebp+1Ch]
  int v29; // [esp+30h] [ebp+24h]

  v8 = a6;
  v9 = a6 & 7;
  v10 = *(unsigned __int8 **)&a3[4 * (a6 >> 3)];
  v28 = &a3[4 * (a6 >> 3)];
  v26 = v10;
  if ( a4 )
  {
    v16 = a8 & 0x1F;
    v17 = *(_DWORD *)&a4[4 * (a8 >> 5)];
    v27 = &a4[4 * (a8 >> 5)];
    result = a2;
    v29 = v17;
    if ( v8 < a7 )
    {
      while ( 1 )
      {
        if ( (v17 & dword_25D790[v16]) != 0 )
        {
          v18 = ((unsigned int)v26 & dword_25D76C[v9]) >> dword_25D74C[v9];
          if ( a5 )
          {
            v18 = a5->pulXlate[v18];
            result = a2;
          }
          *(_DWORD *)result = v18;
          a2 = prunPumpDDA(v23, v25);
        }
        vAdvXDDA(v23);
        ++v8;
        v19 = v9 + 1;
        v20 = v16 + 1;
        v21 = v20;
        if ( v8 >= a7 )
          break;
        if ( (v19 & 8) != 0 )
        {
          v28 += 4;
          v26 = *(unsigned __int8 **)v28;
        }
        v9 = (v19 & 8) == 0 ? v19 : 0;
        v22 = v20 & 0x20;
        if ( v22 )
        {
          v27 += 4;
          v17 = *(_DWORD *)v27;
          v29 = *(_DWORD *)v27;
        }
        else
        {
          v17 = v29;
        }
        result = a2;
        v16 = v22 == 0 ? v21 : 0;
      }
      return a2;
    }
  }
  else
  {
    v11 = a2;
    if ( v8 < a7 )
    {
      v12 = a5;
      while ( 1 )
      {
        v13 = ((unsigned int)v26 & dword_25D76C[v9]) >> dword_25D74C[v9];
        if ( v12 )
          v13 = v12->pulXlate[v13];
        *(_DWORD *)v11 = v13;
        v11 = prunPumpDDA(v23, v25);
        vAdvXDDA(v24);
        ++v8;
        v14 = v9 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v14 & 8) != 0 )
        {
          v28 += 4;
          v26 = *(unsigned __int8 **)v28;
        }
        v12 = a5;
        v9 = (v14 & 8) == 0 ? v14 : 0;
      }
    }
    return v11;
  }
  return result;
}
