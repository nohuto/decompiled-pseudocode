/*
 * XREFs of ?pxrlStrRead04@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C010A890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // r11d
  _DWORD *v9; // r10
  int v10; // ebx
  __int64 v12; // rsi
  unsigned __int8 *v13; // r9
  int v14; // ebp
  struct _XLATEOBJ *v15; // rdi
  unsigned int *v16; // r13
  int v17; // r12d
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r14
  ULONG v21; // eax
  ULONG *v22; // rdi
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // rdi
  unsigned __int8 *v26; // rax
  int v27; // eax
  __int64 v29; // r14
  unsigned int v30; // eax
  unsigned int *v31; // rdi
  __int64 v32; // rcx
  char v33; // dl
  __int64 v34; // rdi
  unsigned __int8 *v35; // rax
  int v36; // eax
  int v37; // r8d
  int v38; // ebp
  unsigned __int8 *v39; // rdi
  int v40; // r12d
  int v41; // eax
  _DWORD *v42; // r13
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // r14
  __int64 v46; // r12
  __int64 v47; // rcx
  __int64 v48; // rax
  _DWORD *v49; // rdi
  __int64 v50; // rax
  char v51; // al
  int v52; // r12d
  int v53; // ecx
  int v54; // edx
  unsigned __int8 *v55; // rax
  int v56; // ecx
  unsigned __int8 *v57; // rax
  unsigned __int8 *v58; // [rsp+0h] [rbp-48h]
  __int64 v59; // [rsp+8h] [rbp-40h]
  int v60; // [rsp+58h] [rbp+10h]
  __int64 v61; // [rsp+60h] [rbp+18h]
  __int64 v62; // [rsp+68h] [rbp+20h]
  int v63; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = *(_DWORD *)a1;
  v12 = a6 & 7;
  v13 = &a3[4 * ((__int64)a6 >> 3)];
  if ( a4 )
  {
    v37 = 0;
    v38 = a8 & 0x1F;
    v39 = &a4[4 * ((__int64)a8 >> 5)];
    v40 = *(_DWORD *)v39;
    v63 = *(_DWORD *)v39;
    v58 = v39;
    if ( v8 < a7 )
    {
      v41 = *(_DWORD *)v13;
      v42 = (_DWORD *)((char *)a1 + 32);
      v61 = 0LL;
      v60 = *(_DWORD *)v13;
      v43 = v12;
      v62 = v12;
      v44 = a8 & 0x1F;
      while ( 1 )
      {
        v45 = (v41 & (unsigned int)dword_1C02EE418[v43]) >> dword_1C02EE438[v62];
        if ( a5 )
          LODWORD(v45) = a5->pulXlate[v45];
        if ( (v40 & dword_1C02EEFD0[v44]) != 0 )
        {
          v46 = (unsigned int)*v42;
          if ( (_DWORD)v46 )
          {
            v47 = (unsigned int)v46;
            v48 = v61 + 2;
            v37 += v46;
            v61 += v46;
            v49 = &v9[v48];
            while ( v47 )
            {
              *v49++ = v45;
              --v47;
            }
            v39 = v58;
          }
        }
        else
        {
          if ( v37 > 0 )
          {
            *v9 = v10;
            v10 += v37;
            v9[1] = v37;
            v50 = v37;
            v37 = 0;
            v9 += v50 + 2;
            v61 = 0LL;
          }
          v10 += *v42;
        }
        v51 = v12 + 1;
        ++v8;
        v59 = v44 + 1;
        ++v42;
        v52 = v38 + 1;
        if ( v8 >= a7 )
          break;
        v53 = v51 & 8;
        if ( (v51 & 8) != 0 )
          v60 = *((_DWORD *)v13 + 1);
        v43 = 0LL;
        if ( (v51 & 8) == 0 )
          v43 = v62 + 1;
        v54 = 0;
        v62 = v43;
        if ( (v51 & 8) == 0 )
          v54 = v12 + 1;
        v55 = v13 + 4;
        if ( !v53 )
          v55 = v13;
        v13 = v55;
        v56 = v52 & 0x20;
        if ( (v52 & 0x20) != 0 )
          v63 = *((_DWORD *)v39 + 1);
        v57 = v39 + 4;
        LODWORD(v12) = v54;
        if ( (v52 & 0x20) == 0 )
          v57 = v39;
        v38 = 0;
        v58 = v57;
        v39 = v57;
        v41 = v60;
        if ( (v52 & 0x20) == 0 )
          v38 = v52;
        v40 = v63;
        v44 = 0LL;
        if ( !v56 )
          v44 = v59;
      }
      if ( v37 > 0 )
      {
        *v9 = v10;
        v9[1] = v37;
        v9 += v37 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v10;
    v14 = 0;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v10;
    if ( a6 < a7 )
    {
      v15 = a5;
      v16 = (unsigned int *)((char *)a1 + 32);
      v17 = *(_DWORD *)v13;
      v18 = 0LL;
      v19 = a6 & 7;
      if ( a5 )
      {
        while ( 1 )
        {
          v20 = *v16++;
          if ( (_DWORD)v20 )
          {
            v21 = v15->pulXlate[(unsigned __int64)(v17 & (unsigned int)dword_1C02EE418[v19]) >> LOBYTE(dword_1C02EE438[v19])];
            v22 = &v9[v18 + 2];
            v23 = (unsigned int)v20;
            v14 += v20;
            while ( v23 )
            {
              *v22++ = v21;
              --v23;
            }
            v18 += v20;
          }
          ++v8;
          v24 = v12 + 1;
          v25 = v19 + 1;
          if ( v8 >= a7 )
            break;
          if ( (v24 & 8) != 0 )
            v17 = *((_DWORD *)v13 + 1);
          v26 = v13 + 4;
          if ( (v24 & 8) == 0 )
            v26 = v13;
          v13 = v26;
          v27 = 0;
          if ( (v24 & 8) == 0 )
            v27 = v12 + 1;
          v19 = 0LL;
          LODWORD(v12) = v27;
          if ( (v24 & 8) == 0 )
            v19 = v25;
          v15 = a5;
        }
      }
      else
      {
        while ( 1 )
        {
          v29 = *v16++;
          v30 = (v17 & (unsigned int)dword_1C02EE418[v19]) >> dword_1C02EE438[v19];
          if ( (_DWORD)v29 )
          {
            v31 = &v9[v18 + 2];
            v32 = (unsigned int)v29;
            v14 += v29;
            while ( v32 )
            {
              *v31++ = v30;
              --v32;
            }
            v18 += v29;
          }
          ++v8;
          v33 = v12 + 1;
          v34 = v19 + 1;
          if ( v8 >= a7 )
            break;
          if ( (v33 & 8) != 0 )
            v17 = *((_DWORD *)v13 + 1);
          v35 = v13 + 4;
          if ( (v33 & 8) == 0 )
            v35 = v13;
          v13 = v35;
          v36 = 0;
          if ( (v33 & 8) == 0 )
            v36 = v12 + 1;
          v19 = 0LL;
          LODWORD(v12) = v36;
          if ( (v33 & 8) == 0 )
            v19 = v34;
        }
      }
    }
    return (struct _XRUNLEN *)&v9[v14 + 2];
  }
}
