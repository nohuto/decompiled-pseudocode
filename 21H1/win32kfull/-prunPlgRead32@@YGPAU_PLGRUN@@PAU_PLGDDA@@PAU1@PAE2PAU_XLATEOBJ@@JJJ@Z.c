/*
 * XREFs of ?prunPlgRead32@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@PAE2PAU_XLATEOBJ@@JJJ@Z @ 0x244B9D
 * Callers:
 *     <none>
 * Callees:
 *     _XLATEOBJ_iXlate@8 @ 0xC5A04 (_XLATEOBJ_iXlate@8.c)
 *     ?prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z @ 0x244F18 (-prunPumpDDA@@YGPAU_PLGRUN@@PAU_PLGDDA@@PAU1@@Z.c)
 *     ?vAdvXDDA@@YGXPAU_PLGDDA@@@Z @ 0x24513B (-vAdvXDDA@@YGXPAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__stdcall prunPlgRead32(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  XLATEOBJ *v8; // edx
  ULONG *v10; // ebx
  struct _PLGRUN *v11; // edi
  int v12; // esi
  struct _PLGRUN *result; // eax
  int v14; // edi
  unsigned __int8 *v15; // edx
  int v16; // esi
  unsigned __int8 *v17; // ecx
  ULONG v18; // edx
  struct _PLGDDA *v19; // [esp+0h] [ebp-Ch]
  struct _PLGDDA *v20; // [esp+0h] [ebp-Ch]
  struct _PLGDDA *v21; // [esp+0h] [ebp-Ch]
  struct _PLGRUN *v22; // [esp+4h] [ebp-8h]
  unsigned __int8 *v23; // [esp+20h] [ebp+14h]
  int v24; // [esp+2Ch] [ebp+20h]

  v8 = pxlo;
  v10 = (ULONG *)&a3[4 * a6];
  if ( a4 )
  {
    v14 = a8 & 0x1F;
    v15 = &a4[4 * (a8 >> 5)];
    v23 = *(unsigned __int8 **)v15;
    result = a2;
    v24 = (int)v15;
    if ( a6 != a7 )
    {
      v16 = a7 - a6;
      do
      {
        if ( v14 < 32 )
        {
          v17 = v23;
        }
        else
        {
          v14 = 0;
          v24 = (int)(v15 + 4);
          v17 = (unsigned __int8 *)*((_DWORD *)v15 + 1);
          v23 = v17;
        }
        if ( ((unsigned int)v17 & dword_25D790[v14]) != 0 )
        {
          v18 = *v10;
          if ( pxlo )
          {
            v18 = XLATEOBJ_iXlate(pxlo, *v10);
            result = a2;
          }
          *(_DWORD *)result = v18;
          a2 = prunPumpDDA(v19, v22);
        }
        vAdvXDDA(v19);
        v15 = (unsigned __int8 *)v24;
        ++v10;
        result = a2;
        ++v14;
        --v16;
      }
      while ( v16 );
    }
  }
  else
  {
    v11 = a2;
    if ( a6 != a7 )
    {
      v12 = a7 - a6;
      if ( pxlo )
      {
        do
        {
          *(_DWORD *)v11 = XLATEOBJ_iXlate(v8, *v10);
          v11 = prunPumpDDA(v19, v22);
          vAdvXDDA(v21);
          v8 = pxlo;
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
          v11 = prunPumpDDA(v19, v22);
          vAdvXDDA(v20);
          ++v10;
          --v12;
        }
        while ( v12 );
      }
    }
    return v11;
  }
  return result;
}
