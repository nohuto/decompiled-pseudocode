/*
 * XREFs of ?prunPlgRead1@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x2448F1
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z @ 0x244F18 (-prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z.c)
 *     ?vAdvXDDA@@YGXPAU_PLGDDA@@@Z @ 0x24513B (-vAdvXDDA@@YGXPAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__stdcall prunPlgRead1(
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
  ULONG *pulXlate; // eax
  struct _PLGRUN *v12; // edi
  int v13; // eax
  int v14; // eax
  struct _PLGRUN *result; // eax
  int v16; // edi
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // edi
  int v21; // edi
  struct _PLGDDA *v22; // [esp+0h] [ebp-14h]
  struct _PLGDDA *v23; // [esp+0h] [ebp-14h]
  struct _PLGRUN *v24; // [esp+4h] [ebp-10h]
  int v25; // [esp+Ch] [ebp-8h]
  ULONG v26; // [esp+10h] [ebp-4h]
  unsigned __int8 *v27; // [esp+24h] [ebp+10h]
  unsigned __int8 *v28; // [esp+28h] [ebp+14h]
  int v29; // [esp+2Ch] [ebp+18h]
  unsigned __int8 *v30; // [esp+30h] [ebp+1Ch]
  int v31; // [esp+38h] [ebp+24h]

  v8 = a6;
  v9 = a6 & 0x1F;
  v10 = *(unsigned __int8 **)&a3[4 * (a6 >> 5)];
  v30 = &a3[4 * (a6 >> 5)];
  v27 = v10;
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v26 = *pulXlate;
    v29 = pulXlate[1];
  }
  else
  {
    v26 = 0;
    v29 = 1;
  }
  if ( a4 )
  {
    v16 = a8 & 0x1F;
    v17 = *(_DWORD *)&a4[4 * (a8 >> 5)];
    v28 = &a4[4 * (a8 >> 5)];
    result = a2;
    v31 = v17;
    if ( v8 < a7 )
    {
      while ( 1 )
      {
        if ( (v17 & dword_25D790[v16]) != 0 )
        {
          v18 = v29;
          if ( ((unsigned int)v10 & dword_25D790[v9]) == 0 )
            v18 = v26;
          *(_DWORD *)result = v18;
          a2 = prunPumpDDA(v22, v24);
        }
        vAdvXDDA(v22);
        ++v8;
        v19 = v9 + 1;
        v20 = v16 + 1;
        v25 = v20;
        if ( v8 >= a7 )
          break;
        if ( (v19 & 0x20) != 0 )
        {
          v30 += 4;
          v10 = *(unsigned __int8 **)v30;
          v27 = *(unsigned __int8 **)v30;
        }
        else
        {
          v10 = v27;
        }
        v9 = (v19 & 0x20) == 0 ? v19 : 0;
        v21 = v20 & 0x20;
        if ( v21 )
        {
          v28 += 4;
          v17 = *(_DWORD *)v28;
          v31 = *(_DWORD *)v28;
        }
        else
        {
          v17 = v31;
        }
        result = a2;
        v16 = v21 == 0 ? v25 : 0;
      }
      return a2;
    }
  }
  else
  {
    v12 = a2;
    if ( v8 < a7 )
    {
      while ( 1 )
      {
        v13 = v29;
        if ( ((unsigned int)v10 & dword_25D790[v9]) == 0 )
          v13 = v26;
        *(_DWORD *)v12 = v13;
        v12 = prunPumpDDA(v22, v24);
        vAdvXDDA(v23);
        ++v8;
        v14 = v9 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v14 & 0x20) != 0 )
        {
          v30 += 4;
          v10 = *(unsigned __int8 **)v30;
          v27 = *(unsigned __int8 **)v30;
        }
        else
        {
          v10 = v27;
        }
        v9 = (v14 & 0x20) == 0 ? v14 : 0;
      }
    }
    return v12;
  }
  return result;
}
