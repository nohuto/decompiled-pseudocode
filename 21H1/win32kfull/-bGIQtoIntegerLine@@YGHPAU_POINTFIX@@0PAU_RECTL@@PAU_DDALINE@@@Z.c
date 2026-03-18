/*
 * XREFs of ?bGIQtoIntegerLine@@YGHPAU_POINTFIX@@0PAU_RECTL@@PAU_DDALINE@@@Z @ 0xBE568
 * Callers:
 *     ?vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0xBE39A (-vDrawLine@@YGXPAU_POINTFIX@@0PAEJKPAU_RECTL@@KPAU_W32KCDD_ENG_CALLBACKS@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 */

int __userpurge bGIQtoIntegerLine@<eax>(
        int *a1@<edx>,
        int *a2@<ecx>,
        struct _POINTFIX *a3,
        struct _POINTFIX *a4,
        struct _RECTL *a5,
        struct _DDALINE *a6)
{
  int v6; // ebx
  int v8; // edi
  int v9; // esi
  int v10; // ecx
  FIX v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // esi
  int v18; // eax
  int v19; // edx
  __int64 v20; // rax
  int v21; // edx
  FIX v22; // esi
  struct _POINTFIX *v23; // eax
  int x; // ecx
  FIX v25; // eax
  int v26; // eax
  signed int v27; // ecx
  bool v28; // cc
  signed int v29; // eax
  signed __int64 v30; // rax
  int v31; // ecx
  signed __int64 v32; // rax
  FIX v33; // edi
  __int64 v35; // rax
  signed __int64 v36; // rax
  signed __int64 v37; // rax
  signed int v38; // [esp+Ch] [ebp-40h]
  int v39; // [esp+10h] [ebp-3Ch]
  FIX v40; // [esp+14h] [ebp-38h]
  int v41; // [esp+18h] [ebp-34h]
  int v42; // [esp+1Ch] [ebp-30h]
  int v43; // [esp+20h] [ebp-2Ch]
  FIX v44; // [esp+20h] [ebp-2Ch]
  int y; // [esp+24h] [ebp-28h]
  int v46; // [esp+24h] [ebp-28h]
  int v47; // [esp+28h] [ebp-24h]
  int v48; // [esp+28h] [ebp-24h]
  int v49; // [esp+28h] [ebp-24h]
  int v50; // [esp+2Ch] [ebp-20h]
  signed int v51; // [esp+30h] [ebp-1Ch]
  FIX v52; // [esp+34h] [ebp-18h]
  int v53; // [esp+38h] [ebp-14h]
  int v54; // [esp+3Ch] [ebp-10h]
  int v55; // [esp+3Ch] [ebp-10h]
  int v56; // [esp+3Ch] [ebp-10h]
  int v57; // [esp+40h] [ebp-Ch]
  int v58; // [esp+40h] [ebp-Ch]
  int v59; // [esp+40h] [ebp-Ch]
  unsigned int v60; // [esp+44h] [ebp-8h]
  FIX v61; // [esp+44h] [ebp-8h]

  v6 = *a1;
  v8 = 0;
  v9 = *a2;
  v10 = 0;
  if ( *a1 < v9 )
  {
    v9 = -v9;
    v6 = -v6;
    v10 = 4;
  }
  v11 = v6 - v9;
  if ( v11 >= 0 )
  {
    v12 = a2[1];
    v13 = a1[1];
    v57 = v12;
    if ( v13 < v12 )
    {
      v12 = -v12;
      v13 = -v13;
      v57 = v12;
      v10 |= 2u;
    }
    v14 = v13 - v12;
    v52 = v14;
    if ( v14 >= 0 )
    {
      if ( v14 >= (unsigned int)v11 )
      {
        if ( v14 == v11 )
        {
          v10 |= 8u;
        }
        else
        {
          v52 = v11;
          v12 = v9;
          v9 = v57;
          v11 = v14;
          v10 |= 1u;
        }
      }
      v15 = (unsigned int)(&gaflHardwareRound)[v10] | v10;
      v16 = v12;
      v42 = v9 >> 4;
      v17 = v9 & 0xF;
      v58 = v12 & 0xF;
      v18 = v58 + 8;
      v43 = v16 >> 4;
      v40 = v15;
      if ( (unsigned int)v11 > 0x1FFFFFF )
      {
        v35 = v11 * (__int64)v18 - v17 * (__int64)v52;
        if ( (v15 & 0x8000) != 0 )
          --v35;
        v20 = v35 >> 4;
      }
      else
      {
        v19 = v11 * v18 - v17 * v52;
        if ( (v15 & 0x200) != 0 )
          --v19;
        v20 = v19 >> 4;
      }
      v53 = HIDWORD(v20);
      v60 = v20;
      v21 = v58;
      v47 = ((_BYTE)v58 + (_BYTE)v52) & 0xF;
      v54 = ((_BYTE)v11 + (_BYTE)v17) & 0xF;
      v51 = ((unsigned int)(v11 + v17) >> 4) - 1;
      if ( (((_BYTE)v11 + (_BYTE)v17) & 0xF) == 0 )
      {
LABEL_13:
        if ( (v15 & 0x108) == 0x108 )
        {
          if ( (((_BYTE)v11 + (_BYTE)v17) & 0xF) != 0 && v47 == v54 + 8 )
            --v51;
          if ( v17 && v21 == v17 + 8 )
          {
            HIDWORD(v20) = 0;
LABEL_64:
            v50 = HIDWORD(v20);
LABEL_16:
            v59 = 0;
            if ( v53 < 0 )
            {
              v22 = v52;
            }
            else
            {
              v22 = v52;
              if ( v53 > 0 || (unsigned int)v20 >= v11 - (v52 & (unsigned int)-HIDWORD(v20)) )
                v59 = 1;
            }
            if ( v51 < SHIDWORD(v20) )
              goto LABEL_71;
            if ( !a3 )
            {
              v61 = (v22 & -HIDWORD(v20)) - v11 + v20;
              if ( ((((v22 & (unsigned int)-HIDWORD(v20)) - (unsigned __int64)(unsigned int)v11 + __PAIR64__(v53, v20)) >> 32) & 0x80000000) == 0LL )
                v61 -= v11;
              goto LABEL_39;
            }
            v23 = &a3[2 * (v15 & 3)];
            if ( (v15 & 4) != 0 )
            {
              if ( (v15 & 1) != 0 )
              {
                y = 1 - v23[1].y;
                v48 = 1 - v23->y;
                x = v23->x;
                v25 = v23[1].x;
LABEL_24:
                v26 = v25 - v42;
                v27 = x - v42;
                v46 = y - v43;
                v28 = v48 - v43 <= v59;
                v49 = v48 - v43;
                v56 = v26;
                v38 = v27;
                if ( v28 )
                  goto LABEL_71;
                if ( v26 <= v50 )
                  goto LABEL_71;
                v29 = v51;
                if ( v27 > v51 )
                  goto LABEL_71;
                if ( v51 >= v56 )
                {
                  v29 = v56 - 1;
                  v51 = v56 - 1;
                }
                v39 = ~v60;
                v41 = ~v53;
                v30 = __PAIR64__(v53, v60) + v52 * (__int64)v29;
                if ( v30 >= 0xFFFFFFFFLL )
                  v30 /= (unsigned __int64)(unsigned int)v11;
                else
                  LODWORD(v30) = (unsigned int)v30 / v11;
                if ( v46 > (int)v30 )
                  goto LABEL_71;
                if ( v49 <= (int)v30 )
                {
                  v36 = __PAIR64__(v41, v39) + v11 * (__int64)v49;
                  if ( v36 >= 0xFFFFFFFFLL )
                    v36 /= (unsigned __int64)(unsigned int)v52;
                  else
                    LODWORD(v36) = (unsigned int)v36 / v52;
                  v51 = v36;
                }
                v31 = v50;
                if ( v38 <= v50 )
                {
                  LODWORD(v32) = v59;
                }
                else
                {
                  v31 = v38;
                  v50 = v38;
                  v32 = __PAIR64__(v53, v60) + v52 * (__int64)v38;
                  if ( v32 >= 0xFFFFFFFFLL )
                  {
                    v32 /= (unsigned __int64)(unsigned int)v11;
                    v31 = v38;
                  }
                  else
                  {
                    LODWORD(v32) = (unsigned int)v32 / v11;
                  }
                  v59 = v32;
                  if ( v49 <= (int)v32 )
                    goto LABEL_71;
                }
                if ( v46 <= (int)v32
                  || ((v59 = v46, v37 = __PAIR64__(v41, v39) + v11 * (__int64)v46, v37 >= 0xFFFFFFFFLL)
                    ? (v37 /= (unsigned __int64)(unsigned int)v52)
                    : (LODWORD(v37) = (unsigned int)v37 / v52),
                      v31 = v37 + 1,
                      v50 = v37 + 1,
                      v56 > (int)v37 + 1) )
                {
                  v22 = v52;
                  HIDWORD(v20) = v50;
                  v61 = v52 * v31 - v11 * v59 - v11 + v60;
LABEL_39:
                  LODWORD(v20) = v59 + v43;
                  v33 = HIDWORD(v20) + v42;
                  v44 = v59 + v43;
                  if ( (v40 & 1) != 0 )
                  {
                    LODWORD(v20) = HIDWORD(v20) + v42;
                    v33 = v44;
                    v44 = HIDWORD(v20) + v42;
                  }
                  if ( (v40 & 2) != 0 )
                    v44 = -(int)v20;
                  if ( (v40 & 4) != 0 )
                    v33 = -v33;
                  a4->x = v40;
                  a4[1].x = v44;
                  a4->y = v33;
                  a4[2].x = v11;
                  a4[1].y = v51 - HIDWORD(v20) + 1;
                  a4[3].x = v61;
                  a4[2].y = v22;
                  a4[3].y = 1;
                  return 1;
                }
LABEL_71:
                a4[1].y = 0;
                return 1;
              }
              x = 1 - v23[1].x;
              v55 = 1 - v23->x;
              y = v23->y;
            }
            else
            {
              x = v23->x;
              v55 = v23[1].x;
              y = v23->y;
            }
            v48 = v23[1].y;
            v25 = v55;
            goto LABEL_24;
          }
        }
        v50 = 0;
        if ( v17 )
        {
          if ( !v21 )
          {
            HIDWORD(v20) = (unsigned int)(((__PAIR64__(v17, 0) - (v15 & 0x100)) >> 32) + 8) >= 0x10;
            goto LABEL_64;
          }
          if ( (int)abs32(v21 - 8) <= v17 )
          {
            HIDWORD(v20) = 1;
            goto LABEL_64;
          }
        }
        HIDWORD(v20) = 0;
        goto LABEL_16;
      }
      if ( (((_BYTE)v58 + (_BYTE)v52) & 0xF) != 0 )
      {
        v21 = v58;
        if ( (int)abs32(v47 - 8) > v54 )
          goto LABEL_13;
      }
      else if ( v54 - (unsigned int)((v15 & 0x100) != 0) + 8 < 0x10 )
      {
        goto LABEL_13;
      }
      v51 = (unsigned int)(v11 + v17) >> 4;
      goto LABEL_13;
    }
  }
  return v8;
}
