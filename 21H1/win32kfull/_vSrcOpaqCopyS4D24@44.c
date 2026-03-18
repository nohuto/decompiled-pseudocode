/*
 * XREFs of _vSrcOpaqCopyS4D24@44 @ 0x1D577F
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?pvFillOpaqTable@@YGPAXKKKPAVSURFACE@@@Z @ 0x9C0EE (-pvFillOpaqTable@@YGPAXKKKPAVSURFACE@@@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __stdcall vSrcOpaqCopyS4D24(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10,
        int *a11)
{
  int *v11; // ecx
  _BYTE *v12; // edi
  _BYTE *v13; // esi
  signed int v14; // eax
  int v15; // eax
  unsigned __int8 *v16; // edx
  _BYTE *v17; // ebx
  int *v18; // ecx
  unsigned int v19; // edi
  _BYTE *v20; // ecx
  _BYTE *v21; // ebx
  _BYTE *v22; // ecx
  _BYTE *v23; // ebx
  signed int v24; // eax
  unsigned __int8 v25; // al
  unsigned __int8 v26; // dl
  int v27; // esi
  unsigned int v28; // edi
  unsigned __int8 v29; // cl
  unsigned int v30; // edx
  int v31; // ecx
  _DWORD *v32; // ebx
  _BYTE *v33; // ecx
  _BYTE *v34; // ebx
  _BYTE *v35; // ebx
  _BYTE *v36; // ecx
  _BYTE *v37; // ebx
  _BYTE *v38; // ebx
  unsigned __int8 *v39; // edx
  _BYTE *v40; // ecx
  _BYTE *v41; // ebx
  int *v42; // ecx
  _BYTE *v43; // esi
  int *v44; // ecx
  _BYTE *v45; // esi
  unsigned int v46; // [esp+0h] [ebp-48h]
  struct SURFACE *v47; // [esp+4h] [ebp-44h]
  HSEMAPHORE v48; // [esp+10h] [ebp-38h] BYREF
  _BYTE *v49; // [esp+14h] [ebp-34h]
  int v50; // [esp+18h] [ebp-30h]
  _BYTE *v51; // [esp+1Ch] [ebp-2Ch]
  _BYTE *v52; // [esp+20h] [ebp-28h]
  signed int v53; // [esp+24h] [ebp-24h]
  unsigned __int8 *v54; // [esp+28h] [ebp-20h]
  _BYTE *v55; // [esp+2Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]
  _BYTE *v57; // [esp+50h] [ebp+8h]
  int v58; // [esp+54h] [ebp+Ch]
  _BYTE *v59; // [esp+5Ch] [ebp+14h]
  signed int v60; // [esp+64h] [ebp+1Ch]
  signed int v61; // [esp+74h] [ebp+2Ch]
  unsigned int v62; // [esp+78h] [ebp+30h]

  v48 = ghsemEUDC2;
  GreAcquireSemaphore(ghsemEUDC2);
  ms_exc.registration.TryLevel = 0;
  v50 = 4;
  v11 = pvFillOpaqTable(a9, 4, a10, a11, v46, v47);
  v62 = (unsigned int)v11;
  v12 = (_BYTE *)(a2 / 2 + a1);
  v57 = v12;
  v13 = (_BYTE *)(3 * a5 + a4);
  v59 = v13;
  v14 = (a5 + 3) & 0xFFFFFFFC;
  if ( v14 <= (int)(a6 & 0xFFFFFFFC) )
  {
    v58 = v14 - a5;
    v61 = (int)((a6 & 0xFFFFFFFC) - v14) / v50;
    v60 = a6 - (a6 & 0xFFFFFFFC);
    v15 = a8;
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_26;
      v53 = 0;
      v51 = 0;
      v16 = v12;
      v54 = v12;
      v17 = v13;
      v55 = v13;
      if ( v58 == 1 )
      {
        v19 = v62;
      }
      else
      {
        if ( v58 != 2 )
        {
          if ( v58 != 3 )
          {
            v19 = v62;
            goto LABEL_12;
          }
          v18 = &v11[*v12 & 0xF];
          *v13 = *(_BYTE *)v18;
          v55 = v13 + 1;
          v13[1] = *((_BYTE *)v18 + 1);
          v55 = v13 + 2;
          v13[2] = *((_BYTE *)v18 + 2);
          v17 = v13 + 3;
          v55 = v13 + 3;
          v16 = v12 + 1;
          v54 = v12 + 1;
        }
        v19 = v62;
        v20 = (_BYTE *)(v62 + 4 * (*v16 >> 4));
        *v17 = *v20;
        v21 = v17 + 1;
        v55 = v21;
        *v21++ = v20[1];
        v55 = v21;
        *v21 = v20[2];
        v17 = v21 + 1;
        v55 = v17;
      }
      v22 = (_BYTE *)(v19 + 4 * (*v16 & 0xF));
      *v17 = *v22;
      v23 = v17 + 1;
      v55 = v23;
      *v23++ = v22[1];
      v55 = v23;
      *v23 = v22[2];
      v17 = v23 + 1;
      v55 = v17;
      v54 = ++v16;
LABEL_12:
      v24 = 0;
      while ( 1 )
      {
        v53 = v24;
        v51 = v17;
        if ( v24 >= v61 )
          break;
        v25 = *v16;
        v54 = v16 + 1;
        v26 = v16[1];
        ++v54;
        v27 = *(_DWORD *)(v19 + 4 * (v25 >> 4));
        v28 = *(_DWORD *)(v19 + 4 * (v25 & 0xF));
        v29 = v26;
        v30 = *(_DWORD *)(v62 + 4 * (v26 >> 4));
        v31 = *(_DWORD *)(v62 + 4 * (v29 & 0xF));
        *(_DWORD *)v17 = v27 + (v28 << 24);
        v32 = v17 + 4;
        *v32++ = (v28 >> 8) + (v30 << 16);
        v51 = v32;
        *v32 = HIWORD(v30) + (v31 << 8);
        v17 = v32 + 1;
        v24 = v53 + 1;
        v16 = v54;
        v19 = v62;
      }
      v55 = v17;
      v53 = v60;
      if ( v60 )
      {
        v53 = v60 - 1;
        v33 = (_BYTE *)(v19 + 4 * (*v16 >> 4));
        *v17 = *v33;
        v34 = v17 + 1;
        v55 = v34;
        *v34++ = v33[1];
        v55 = v34;
        *v34 = v33[2];
        v35 = v34 + 1;
        v55 = v35;
        if ( v60 != 1 )
        {
          v53 = v60 - 2;
          v36 = (_BYTE *)(v19 + 4 * (*v16 & 0xF));
          *v35 = *v36;
          v37 = v35 + 1;
          v55 = v37;
          *v37++ = v36[1];
          v55 = v37;
          *v37 = v36[2];
          v38 = v37 + 1;
          v55 = v38;
          v39 = v16 + 1;
          v54 = v39;
          if ( v60 != 2 )
          {
            v40 = (_BYTE *)(v19 + 4 * (*v39 >> 4));
            *v38 = *v40;
            v41 = v38 + 1;
            v55 = v41;
            *v41++ = v40[1];
            v55 = v41;
            *v41 = v40[2];
            v55 = v41 + 1;
          }
        }
      }
      v15 = --a8;
      v12 = &v57[a3];
      v57 += a3;
      v13 = &v59[a7];
      v59 += a7;
      v11 = (int *)v62;
    }
  }
  v52 = v13;
  v49 = v12;
  if ( (a5 & 3) != 1 )
  {
    if ( (a5 & 3) != 2 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v42 = &v11[*v12 & 0xF];
  *v13 = *(_BYTE *)v42;
  v43 = v13 + 1;
  v52 = v43;
  *v43++ = *((_BYTE *)v42 + 1);
  v52 = v43;
  *v43 = *((_BYTE *)v42 + 2);
  v13 = v43 + 1;
  v52 = v13;
  if ( a5 + 1 != a6 )
  {
    v49 = ++v12;
    v11 = (int *)v62;
LABEL_25:
    v44 = &v11[(unsigned __int8)*v12 >> 4];
    *v13 = *(_BYTE *)v44;
    v45 = v13 + 1;
    v52 = v45;
    *v45 = *((_BYTE *)v44 + 1);
    v52 = v45 + 1;
    v45[1] = *((_BYTE *)v44 + 2);
  }
LABEL_26:
  ms_exc.registration.TryLevel = -2;
  SEMOBJ::vUnlock((SEMOBJ *)&v48);
}
