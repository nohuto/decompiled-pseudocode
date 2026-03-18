/*
 * XREFs of ?vCalculateLine@@YGXPAU_TRIVERTEX@@0PAU_TRIANGLEDATA@@@Z @ 0x1EA921
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YGHPAVSURFACE@@PAU_TRIVERTEX@@11PAU_TRIANGLEDATA@@P6GX02@Z@Z @ 0x1E9AC4 (-bCalculateAndDrawTriangle@@YGHPAVSURFACE@@PAU_TRIVERTEX@@11PAU_TRIANGLEDATA@@P6GX02@Z@Z.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vEdgeDDA@@YGXPAU_TRIANGLEDATA@@PAU_TRIDDA@@@Z @ 0x1EAD37 (-vEdgeDDA@@YGXPAU_TRIANGLEDATA@@PAU_TRIDDA@@@Z.c)
 *     ?vHorizontalLine@@YGXPAU_TRIVERTEX@@0PAU_TRIANGLEDATA@@PAU_TRIDDA@@@Z @ 0x1EAEAE (-vHorizontalLine@@YGXPAU_TRIVERTEX@@0PAU_TRIANGLEDATA@@PAU_TRIDDA@@@Z.c)
 */

void __userpurge vCalculateLine(
        LONG *a1@<edx>,
        LONG *a2@<ecx>,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIANGLEDATA *a5)
{
  LONG v7; // edx
  LONG x; // eax
  LONG v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  LONG v12; // eax
  LONG v13; // ecx
  LONG v14; // edi
  LONG v15; // eax
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rax
  int v19; // ecx
  LONG v20; // esi
  unsigned __int64 v21; // kr18_8
  unsigned int v22; // ecx
  LONG v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // kr0C_4
  LONG v26; // eax
  LONG v27; // edx
  int v28; // esi
  __int64 v29; // kr30_8
  int v30; // ecx
  int v31; // ebx
  signed __int64 v32; // kr38_8
  __int64 v33; // [esp-8h] [ebp-10Ch]
  struct _TRIANGLEDATA *v34; // [esp+0h] [ebp-104h]
  struct _TRIDDA *v35; // [esp+4h] [ebp-100h]
  _TRIVERTEX v36[8]; // [esp+10h] [ebp-F4h] BYREF
  unsigned __int64 v37; // [esp+94h] [ebp-70h]
  __int64 v38; // [esp+9Ch] [ebp-68h]
  unsigned int v39; // [esp+A4h] [ebp-60h]
  unsigned int v40; // [esp+A8h] [ebp-5Ch]
  unsigned __int64 v41; // [esp+ACh] [ebp-58h]
  LONG v42; // [esp+B4h] [ebp-50h]
  LONG v43; // [esp+B8h] [ebp-4Ch]
  unsigned __int64 v44; // [esp+BCh] [ebp-48h]
  unsigned int v45; // [esp+C4h] [ebp-40h]
  unsigned int v46; // [esp+C8h] [ebp-3Ch]
  LONG y; // [esp+CCh] [ebp-38h]
  LONG v48; // [esp+D0h] [ebp-34h]
  int v49; // [esp+D4h] [ebp-30h]
  LONG *v50; // [esp+D8h] [ebp-2Ch]
  int v51; // [esp+DCh] [ebp-28h]
  unsigned int v52; // [esp+E4h] [ebp-20h]
  LONG v53; // [esp+E8h] [ebp-1Ch]
  int v54; // [esp+ECh] [ebp-18h]
  LONG v55; // [esp+F0h] [ebp-14h]
  unsigned __int64 v56; // [esp+F4h] [ebp-10h]
  int v57; // [esp+FCh] [ebp-8h]

  v52 = (unsigned int)a1;
  v50 = a2;
  memset(v36, 0, sizeof(v36));
  v7 = a1[1];
  x = a3[3].x;
  y = a3[3].y;
  v36[6].y = y;
  v45 = *(_DWORD *)&a3[3].Blue;
  *(_DWORD *)&v36[6].Blue = v45;
  v9 = a3[4].y;
  v48 = x;
  v36[6].x = x;
  v10 = *(_DWORD *)&a3[3].Red;
  v42 = v9;
  v36[7].y = v9;
  v11 = *(_DWORD *)&a3[4].Blue;
  v46 = v10;
  *(_DWORD *)&v36[6].Red = v10;
  v12 = a3[4].x;
  v39 = v11;
  *(_DWORD *)&v36[7].Blue = v11;
  v13 = a2[1];
  v43 = v12;
  v36[7].x = v12;
  v40 = *(_DWORD *)&a3[4].Red;
  *(_DWORD *)&v36[7].Red = v40;
  v53 = v13;
  if ( v7 < v13 )
  {
    v14 = *a1;
    v16 = v13 - v7;
    v13 = v7;
    v51 = v16;
    *(_DWORD *)&v36[0].Blue = v16;
    v53 = v7;
    v15 = *v50;
  }
  else
  {
    v14 = *a2;
    v51 = v7 - v13;
    *(_DWORD *)&v36[0].Blue = v7 - v13;
    v15 = *a1;
  }
  v36[0].y = v13;
  *(_DWORD *)&v36[0].Red = v15 - v14;
  v49 = v15 - v14;
  v54 = v15 - v14;
  v17 = (v13 - *(_DWORD *)&a3[8].Blue) >> 31;
  v57 = v13 - *(_DWORD *)&a3[8].Blue;
  v36[0].x = v14;
  v18 = v14 - *(_DWORD *)&a3[8].Red;
  v19 = v14 - *(_DWORD *)&a3[8].Red;
  v55 = v14;
  v56 = __PAIR64__(HIDWORD(v18), v19);
  v20 = a3[1].y;
  LODWORD(v38) = a3[1].x;
  HIDWORD(v38) = v20;
  v21 = *(_QWORD *)&a3[5].x
      + __PAIR64__(v17, v57) * __PAIR64__(y, v48)
      + __PAIR64__(HIDWORD(v18), v19) * __PAIR64__(v20, v38);
  v22 = *(_DWORD *)&a3[1].Blue;
  v33 = *(_QWORD *)&a3[1].Red;
  *(_QWORD *)&v36[4].x = v21;
  v37 = __PAIR64__(v22, v33);
  v23 = a3[2].x;
  LODWORD(v18) = a3[2].y;
  *(_QWORD *)&v36[4].Red = *(_QWORD *)&a3[5].Red + __PAIR64__(v17, v57) * __PAIR64__(v45, v46) + v56 * v33;
  v44 = __PAIR64__(v18, v23);
  v24 = *(_DWORD *)&a3[2].Red;
  LODWORD(v18) = *(_DWORD *)&a3[2].Blue;
  *(_QWORD *)&v36[5].x = *(_QWORD *)&a3[6].x + v56 * v44 + __PAIR64__(v17, v57) * __PAIR64__(v42, v43);
  v41 = __PAIR64__(v18, v24);
  v25 = *(_DWORD *)&a3[6].Red;
  *(_DWORD *)&v36[5].Red = v25 + v56 * v24 + v57 * v40;
  *(_DWORD *)&v36[5].Blue = (__PAIR64__(*(_DWORD *)&a3[6].Blue, v25)
                           + v56 * __PAIR64__(v18, v24)
                           + __PAIR64__(v17, v57) * __PAIR64__(v39, v40)) >> 32;
  if ( v51 )
  {
    v36[3].y = v53 - a3[7].x;
    v26 = *(_DWORD *)&a3->Blue;
    v36[3].x = 1;
    v27 = v53 + v51;
    *(_DWORD *)&v36[3].Red = v51;
    if ( v53 <= v26 && v27 >= a3->y )
    {
      if ( v27 > v26 )
        *(_DWORD *)&v36[3].Red = v26 - v53;
      *(_DWORD *)&v36[2].Blue = v53;
      HIDWORD(v56) = v51;
      LODWORD(v56) = v51 >> 31;
      v28 = 0;
      v29 = v51 + v51 * (__int64)v55 - v49 * (__int64)v53 - 1;
      v52 = v29;
      *(_QWORD *)&v36[1].x = v29;
      v55 = HIDWORD(v29);
      if ( v49 <= 0 )
      {
        if ( v49 >= 0 )
        {
          v30 = 0;
          v31 = 0;
        }
        else
        {
          *(_DWORD *)&v36[0].Red = -v49;
          v30 = ~((-1 - v54) / v51);
          v31 = v54 + v51 * ((-1 - v54) / v51 + 1);
        }
      }
      else
      {
        v30 = v49 / v51;
        v31 = v49 % v51;
      }
      v57 = v30;
      *(_DWORD *)&v36[1].Red = v30;
      *(_DWORD *)&v36[1].Blue = v31;
      v54 = v53 * v30;
      v32 = __PAIR64__(v55, v52) + v31 * v53;
      if ( v32 < 0 )
      {
        v28 = ~(unsigned int)(~v32 / __SPAIR64__(v56, HIDWORD(v56)));
      }
      else if ( v32 > 0 )
      {
        v28 = v32 / __SPAIR64__(v56, HIDWORD(v56));
      }
      v36[2].x = v32 - v51 * v28;
      *(_DWORD *)&v36[2].Red = v28 + v54;
      v36[2].y = v51 - v36[2].x - 1;
      *(_QWORD *)&v36[6].x = v57 * v38 + __PAIR64__(y, v48);
      *(_QWORD *)&v36[6].Red = v57 * v37 + __PAIR64__(v45, v46);
      *(_QWORD *)&v36[7].x = v57 * v44 + __PAIR64__(v42, v43);
      *(_QWORD *)&v36[7].Red = v57 * v41 + __PAIR64__(v39, v40);
      vEdgeDDA(v34, v35);
    }
  }
  else
  {
    vHorizontalLine(a3, v36, v34, v35);
  }
}
