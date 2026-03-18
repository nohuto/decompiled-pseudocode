/*
 * XREFs of ?prunPlgRead8@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x244E0C
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z @ 0x244F18 (-prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z.c)
 *     ?vAdvXDDA@@YGXPAU_PLGDDA@@@Z @ 0x24513B (-vAdvXDDA@@YGXPAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__stdcall prunPlgRead8(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  struct _XLATEOBJ *v8; // edx
  unsigned __int8 *v10; // ebx
  struct _PLGRUN *v11; // edi
  int v12; // esi
  int v14; // edi
  unsigned __int8 *v15; // eax
  struct _XLATEOBJ *v16; // edx
  int v17; // esi
  struct _PLGRUN *i; // ecx
  unsigned __int8 *v19; // eax
  ULONG v20; // eax
  struct _PLGDDA *v21; // [esp+0h] [ebp-Ch]
  struct _PLGDDA *v22; // [esp+0h] [ebp-Ch]
  struct _PLGDDA *v23; // [esp+0h] [ebp-Ch]
  struct _PLGRUN *v24; // [esp+4h] [ebp-8h]
  unsigned __int8 *v25; // [esp+20h] [ebp+14h]
  int v26; // [esp+2Ch] [ebp+20h]

  v8 = a5;
  v10 = &a3[a6];
  if ( a4 )
  {
    v14 = a8 & 0x1F;
    v15 = &a4[4 * (a8 >> 5)];
    v25 = *(unsigned __int8 **)v15;
    v16 = a5;
    v26 = (int)v15;
    if ( a6 != a7 )
    {
      v17 = a7 - a6;
      for ( i = a2; ; i = a2 )
      {
        if ( v14 < 32 )
        {
          v19 = v25;
        }
        else
        {
          v14 = 0;
          v26 = (int)(v15 + 4);
          v19 = (unsigned __int8 *)*((_DWORD *)v15 + 1);
          v25 = v19;
        }
        if ( ((unsigned int)v19 & dword_25D790[v14]) != 0 )
        {
          v20 = *v10;
          if ( v16 )
            v20 = v16->pulXlate[*v10];
          *(_DWORD *)i = v20;
          a2 = prunPumpDDA(v21, v24);
        }
        vAdvXDDA(v21);
        v15 = (unsigned __int8 *)v26;
        ++v10;
        v16 = a5;
        ++v14;
        if ( !--v17 )
          break;
      }
    }
    return a2;
  }
  else
  {
    v11 = a2;
    if ( a6 != a7 )
    {
      v12 = a7 - a6;
      if ( a5 )
      {
        do
        {
          *(_DWORD *)v11 = v8->pulXlate[*v10];
          v11 = prunPumpDDA(v21, v24);
          vAdvXDDA(v23);
          v8 = a5;
          ++v10;
          --v12;
        }
        while ( v12 );
      }
      else
      {
        do
        {
          *(_DWORD *)v11 = *v10;
          v11 = prunPumpDDA(v21, v24);
          vAdvXDDA(v22);
          ++v10;
          --v12;
        }
        while ( v12 );
      }
    }
    return v11;
  }
}
