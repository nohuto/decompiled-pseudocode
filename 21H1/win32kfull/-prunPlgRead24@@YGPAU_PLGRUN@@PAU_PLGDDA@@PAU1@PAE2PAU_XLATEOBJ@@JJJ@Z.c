/*
 * XREFs of ?prunPlgRead24@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x244A60
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 *     ?prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z @ 0x244F18 (-prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z.c)
 *     ?vAdvXDDA@@YGXPAU_PLGDDA@@@Z @ 0x24513B (-vAdvXDDA@@YGXPAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__stdcall prunPlgRead24(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *pxlo,
        int a6,
        ULONG iColor,
        int a8)
{
  ULONG v9; // esi
  unsigned __int8 *v10; // ebx
  struct _PLGRUN *v11; // edi
  ULONG v12; // esi
  int v13; // eax
  int v14; // edx
  unsigned __int8 *v15; // eax
  ULONG v16; // esi
  int v17; // eax
  ULONG v18; // eax
  struct _PLGDDA *v20; // [esp+0h] [ebp-Ch]
  struct _PLGDDA *v21; // [esp+0h] [ebp-Ch]
  struct _PLGDDA *v22; // [esp+0h] [ebp-Ch]
  struct _PLGRUN *v23; // [esp+4h] [ebp-8h]
  unsigned __int8 *v24; // [esp+1Ch] [ebp+10h]
  int v25; // [esp+28h] [ebp+1Ch]
  int v26; // [esp+30h] [ebp+24h]

  v9 = iColor;
  HIBYTE(iColor) = 0;
  v10 = &a3[3 * a6];
  if ( a4 )
  {
    v13 = a8 >> 5;
    v14 = a8 & 0x1F;
    v26 = v14;
    v15 = &a4[4 * v13];
    v25 = *(_DWORD *)v15;
    v11 = a2;
    v24 = v15;
    if ( a6 != v9 )
    {
      v16 = v9 - a6;
      do
      {
        if ( v14 < 32 )
        {
          v17 = v25;
        }
        else
        {
          v14 = 0;
          v24 = v15 + 4;
          v26 = 0;
          v17 = *((_DWORD *)v15 + 1);
          v25 = v17;
        }
        if ( (v17 & dword_25D790[v14]) != 0 )
        {
          LOWORD(iColor) = *(_WORD *)v10;
          BYTE2(iColor) = v10[2];
          if ( pxlo )
            v18 = XLATEOBJ_iXlate(pxlo, iColor);
          else
            v18 = iColor;
          *(_DWORD *)v11 = v18;
          v11 = prunPumpDDA(v20, v23);
        }
        vAdvXDDA(v20);
        v10 += 3;
        v15 = v24;
        v14 = ++v26;
        --v16;
      }
      while ( v16 );
    }
  }
  else
  {
    v11 = a2;
    if ( a6 != v9 )
    {
      v12 = v9 - a6;
      if ( pxlo )
      {
        do
        {
          LOWORD(iColor) = *(_WORD *)v10;
          BYTE2(iColor) = v10[2];
          *(_DWORD *)v11 = XLATEOBJ_iXlate(pxlo, iColor);
          v11 = prunPumpDDA(v20, v23);
          vAdvXDDA(v22);
          v10 += 3;
          --v12;
        }
        while ( v12 );
      }
      else
      {
        do
        {
          LOWORD(iColor) = *(_WORD *)v10;
          BYTE2(iColor) = v10[2];
          *(_DWORD *)v11 = iColor;
          v11 = prunPumpDDA(v20, v23);
          vAdvXDDA(v21);
          v10 += 3;
          --v12;
        }
        while ( v12 );
      }
    }
  }
  return v11;
}
