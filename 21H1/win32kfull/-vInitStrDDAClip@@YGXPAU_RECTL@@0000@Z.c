/*
 * XREFs of ?vInitStrDDAClip@@YGXPAU_RECTL@@0000@Z @ 0x93A92
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     STR_DIV @ 0x93FC8 (STR_DIV.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __userpurge vInitStrDDAClip(
        LONG *a1@<edx>,
        int *a2@<ecx>,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _RECTL *a7)
{
  struct _RECTL *v8; // edx
  LONG v9; // eax
  LONG top; // edi
  LONG v11; // esi
  LONG v12; // edi
  LONG left; // eax
  int *p_left; // eax
  LONG v15; // edi
  int v16; // ecx
  int *v17; // esi
  LONG v18; // eax
  LONG v19; // edx
  LONG v20; // eax
  bool v21; // cc
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // edi
  LONG v25; // ecx
  LONG v26; // eax
  LONG v27; // edx
  LONG *v28; // esi
  int v29; // eax
  int *v30; // esi
  LONG v31; // eax
  LONG v32; // eax
  struct _POINTL v33; // [esp+18h] [ebp-84h] BYREF
  LONG v34; // [esp+20h] [ebp-7Ch]
  int v35; // [esp+24h] [ebp-78h]
  int v36; // [esp+28h] [ebp-74h]
  int v37; // [esp+2Ch] [ebp-70h]
  LONG v38; // [esp+30h] [ebp-6Ch]
  LONG v39; // [esp+34h] [ebp-68h]
  LONG v40; // [esp+38h] [ebp-64h]
  struct _RECTL *v41; // [esp+3Ch] [ebp-60h]
  int v42; // [esp+40h] [ebp-5Ch]
  int v43; // [esp+44h] [ebp-58h]
  LONG *v44; // [esp+48h] [ebp-54h]
  int *v45; // [esp+4Ch] [ebp-50h]
  LONG v46; // [esp+50h] [ebp-4Ch]
  _DWORD v47[2]; // [esp+54h] [ebp-48h] BYREF
  int v48; // [esp+5Ch] [ebp-40h]
  int v49; // [esp+60h] [ebp-3Ch]
  int v50; // [esp+64h] [ebp-38h] BYREF
  int v51; // [esp+68h] [ebp-34h]
  int v52; // [esp+6Ch] [ebp-30h]
  int v53; // [esp+70h] [ebp-2Ch]
  LONG v54; // [esp+74h] [ebp-28h] BYREF
  LONG v55; // [esp+78h] [ebp-24h]
  LONG right; // [esp+7Ch] [ebp-20h]
  LONG bottom; // [esp+80h] [ebp-1Ch]
  struct _RECTL v58; // [esp+84h] [ebp-18h] BYREF

  v41 = a4;
  v50 = 0;
  v8 = a3;
  v44 = a1;
  v45 = a2;
  v51 = 0;
  v42 = (int)a3;
  v52 = 0;
  v53 = 0;
  v47[0] = 0;
  v47[1] = 0;
  v48 = 0;
  v49 = 0;
  memset(&v58, 0, sizeof(v58));
  v54 = 0;
  v55 = 0;
  right = 0;
  bottom = 0;
  v9 = *a1;
  top = a3->top;
  v11 = a1[1];
  v40 = v9;
  v46 = top;
  v12 = v9;
  v33.x = v9;
  left = a3->left;
  v33.y = v11;
  v43 = left;
  if ( v12 || v11 )
  {
    v50 = *a2 - v12;
    v51 = a2[1] - v11;
    v52 = a2[2] - v12;
    v53 = a2[3] - v11;
    v45 = &v50;
    v48 = v44[2] - v12;
    v49 = v44[3] - v11;
    v44 = v47;
    left = v43;
  }
  if ( left || v46 )
  {
    v8 = &v58;
    v42 = (int)&v58;
    v58 = *a3;
    v58.left -= left;
    v58.right -= left;
    v58.top -= v46;
    v58.bottom -= v46;
    v54 = v41->left;
    v55 = v41->top;
    right = v41->right;
    bottom = v41->bottom;
    v54 -= left;
    right -= left;
    p_left = &v54;
    v55 -= v46;
    bottom -= v46;
    v41 = (struct _RECTL *)&v54;
  }
  else
  {
    p_left = &v41->left;
  }
  ERECTL::operator*=(p_left, &v8->left);
  v38 = 0;
  v37 = 0;
  v34 = 0;
  v38 = v44[2];
  v35 = 0;
  v36 = 0;
  STR_DIV(v38);
  v15 = 0;
  v16 = (v38 - 1) >> 1;
  if ( v16 >= v38 )
  {
    v15 = v34 + 1;
    v16 -= v38;
  }
  v17 = v45;
  v18 = 0;
  a5->left = -1;
  v19 = 0;
  a5->right = -1;
  v39 = 0;
  v46 = 0;
  if ( v17[2] > 0 )
  {
    while ( 1 )
    {
      v40 = v18;
      v46 += v15 - v39;
      v16 += v35;
      v39 = v15;
      v15 += v34;
      if ( v16 >= v38 )
      {
        ++v15;
        v16 -= v38;
      }
      v20 = a5->left;
      if ( a5->left == -1 )
      {
        v43 = v41->left;
        v20 = -1;
        if ( v43 >= v40 && v43 <= v46 )
        {
          a5->left = v19;
          v20 = v19;
        }
      }
      v21 = v41->right < v40;
      v43 = v41->right;
      v17 = v45;
      if ( !v21 )
      {
        v17 = v45;
        if ( v43 <= v46 )
          a5->right = v19;
      }
      if ( ++v19 >= v17[2] )
        break;
      v18 = v46;
    }
    if ( v20 != -1 )
      goto LABEL_19;
  }
  a5->left = 0;
  if ( a5->right == -1 )
  {
    v23 = 0;
  }
  else
  {
LABEL_19:
    v22 = a5->right;
    if ( v22 == -1 )
      v22 = v19;
    v23 = v22 + 1;
  }
  a5->right = v23;
  v24 = v44[3];
  STR_DIV(v24);
  v25 = ((v24 - 1) >> 1) + v35;
  v46 = v34;
  if ( v25 >= v24 )
  {
    v26 = v34 + 1;
    v25 -= v24;
    v46 = v34 + 1;
  }
  else
  {
    v26 = v34;
  }
  a5->top = -1;
  v27 = 0;
  a5->bottom = -1;
  v40 = 0;
  v44 = 0;
  if ( v17[3] > 0 )
  {
    v43 = -1;
    do
    {
      v28 = v44;
      v44 = (LONG *)((char *)v44 + v26 - v40);
      v25 += v35;
      v40 = v46;
      v29 = v34 + v46;
      v39 = (LONG)v28;
      v46 += v34;
      if ( v25 >= v24 )
      {
        v25 -= v24;
        v46 = v29 + 1;
      }
      v42 = v43;
      v30 = v45;
      if ( v43 == -1 )
      {
        v42 = -1;
        v21 = v41->top < v39;
        v38 = v41->top;
        v30 = v45;
        if ( !v21 )
        {
          v42 = -1;
          if ( v38 <= (int)v44 )
          {
            v43 = v27;
            a5->top = v27;
            v42 = v27;
          }
        }
      }
      v21 = v41->bottom < v39;
      v38 = v41->bottom;
      v26 = v46;
      if ( !v21 )
      {
        v30 = v45;
        if ( v38 <= (int)v44 )
          a5->bottom = v27;
      }
      ++v27;
    }
    while ( v27 < v30[3] );
    if ( v42 != -1 )
      goto LABEL_34;
  }
  a5->top = 0;
  if ( a5->bottom == -1 )
  {
    v32 = 0;
  }
  else
  {
LABEL_34:
    v31 = a5->bottom;
    if ( v31 == -1 )
      v31 = v27;
    v32 = v31 + 1;
  }
  a5->bottom = v32;
  ERECTL::bOffsetAdd((ERECTL *)a5, &v33, 0);
}
