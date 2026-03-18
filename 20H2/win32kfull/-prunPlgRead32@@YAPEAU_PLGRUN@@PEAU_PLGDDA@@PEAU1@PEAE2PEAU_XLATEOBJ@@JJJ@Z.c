/*
 * XREFs of ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D6EE0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00DE150 (XLATEOBJ_iXlate.c)
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02D7434 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02D7608 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead32(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  ULONG *v10; // rdi
  unsigned int v11; // r10d
  __int64 v12; // rbp
  __int64 v13; // r14
  int v14; // ecx
  unsigned __int8 *v15; // r14
  int v16; // r13d
  __int64 v17; // r8
  __int64 v18; // r12
  __int64 v19; // r15
  int v20; // eax
  unsigned __int8 *v21; // rax
  ULONG v22; // eax
  int v24; // [rsp+78h] [rbp+30h]

  v10 = (ULONG *)&a3[4 * a6];
  if ( a4 )
  {
    v14 = a8 & 0x1F;
    v15 = &a4[4 * ((__int64)a8 >> 5)];
    v16 = *(_DWORD *)v15;
    if ( a6 != a7 )
    {
      v17 = a8 & 0x1F;
      v18 = (unsigned int)(a7 - a6);
      do
      {
        if ( v17 >= 32 )
          v16 = *((_DWORD *)v15 + 1);
        v19 = 0LL;
        if ( v17 < 32 )
          v19 = v17;
        v20 = 0;
        if ( v17 < 32 )
          v20 = v14;
        v24 = v20;
        v21 = v15 + 4;
        if ( v17 < 32 )
          v21 = v15;
        v15 = v21;
        if ( (dword_1C02FA2E0[v19] & v16) != 0 )
        {
          v22 = *v10;
          if ( pxlo )
            v22 = XLATEOBJ_iXlate(pxlo, v22);
          *(_DWORD *)a2 = v22;
          a2 = prunPumpDDA(a1, a2);
        }
        vAdvXDDA(a1);
        v17 = v19 + 1;
        ++v10;
        v14 = v24 + 1;
        --v18;
      }
      while ( v18 );
    }
  }
  else if ( a6 != a7 )
  {
    v11 = a7 - a6;
    if ( pxlo )
    {
      v13 = v11;
      do
      {
        *(_DWORD *)a2 = XLATEOBJ_iXlate(pxlo, *v10);
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        ++v10;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      v12 = v11;
      do
      {
        *(_DWORD *)a2 = *v10;
        a2 = prunPumpDDA(a1, a2);
        vAdvXDDA(a1);
        ++v10;
        --v12;
      }
      while ( v12 );
    }
  }
  return a2;
}
