/*
 * XREFs of ?bSubtract@RGNOBJAPI@@QAEHPAU_RECTL@@0H@Z @ 0x24D40
 * Callers:
 *     _GreSubtractRgnRectList@16 @ 0x24CD0 (_GreSubtractRgnRectList@16.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?bSubtractComplex@RGNOBJ@@QAEHPAU_RECTL@@0H@Z @ 0x98D9E (-bSubtractComplex@RGNOBJ@@QAEHPAU_RECTL@@0H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall RGNOBJAPI::bSubtract(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  struct _RECTL *v5; // edx
  LONG v6; // ecx
  LONG v7; // esi
  LONG v8; // eax
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // ecx
  struct _RECTL *v12; // esi
  _DWORD *v13; // ecx
  LONG v14; // eax
  LONG v15; // eax
  _DWORD *v16; // ecx
  LONG v17; // eax
  LONG v18; // eax
  _DWORD *v19; // ecx
  int v21; // esi
  RGNOBJ *v22; // ecx
  _DWORD *v23; // ecx
  _DWORD *v24; // ecx
  struct _RECTL *v25; // esi
  LONG v26; // eax
  _DWORD *v27; // ecx
  _DWORD *v28; // ecx
  LONG v29; // eax
  _DWORD *v30; // edx
  _DWORD *v31; // ecx
  struct _RECTL *v32; // esi
  LONG v33; // eax
  _DWORD *v34; // ecx
  _DWORD *v35; // ecx
  LONG v36; // eax
  _DWORD *v37; // ecx
  _DWORD *v38; // ecx
  struct _RECTL *v39; // esi
  _DWORD *v40; // ecx
  struct _RECTL *v41; // esi
  _DWORD *v42; // ecx
  _DWORD *v43; // ecx
  int v44; // [esp+Ch] [ebp-48h]
  LONG v45; // [esp+10h] [ebp-44h]
  LONG top; // [esp+18h] [ebp-3Ch]
  LONG left; // [esp+1Ch] [ebp-38h]
  LONG v48; // [esp+20h] [ebp-34h]
  LONG bottom; // [esp+24h] [ebp-30h]
  LONG right; // [esp+28h] [ebp-2Ch]
  int v51; // [esp+2Ch] [ebp-28h] BYREF
  LONG v52; // [esp+30h] [ebp-24h]
  RGNOBJ *v53; // [esp+34h] [ebp-20h]
  struct _RECTL *v54; // [esp+38h] [ebp-1Ch]
  struct _RECTL v55; // [esp+3Ch] [ebp-18h] BYREF

  v54 = a3;
  v53 = this;
  v44 = *(_DWORD *)this;
  if ( ERECTL::bEmpty((ERECTL *)a2) )
  {
    v22 = this;
LABEL_29:
    RGNOBJ::vSet(v22);
    return 1;
  }
  if ( a4 == 1 )
  {
    top = a3->top;
    bottom = a2->bottom;
    if ( top >= bottom )
      goto LABEL_50;
    left = a3->left;
    right = a2->right;
    if ( a3->left >= right
      || (v6 = a3->bottom, v48 = v6, v45 = a2->top, v6 <= v45)
      || (v7 = a3->right, v8 = a2->left, v52 = v7, v7 <= v8) )
    {
LABEL_50:
      RGNOBJ::vSet(this, a2);
    }
    else
    {
      memset(&v55, 0, sizeof(v55));
      if ( left > v8 )
        v9 = (v7 >= right) + 2;
      else
        v9 = v7 >= right;
      if ( top > v45 )
      {
        v10 = 4 * (v6 >= bottom) + 8;
      }
      else if ( v6 >= bottom )
      {
        v10 = 4;
      }
      else
      {
        v10 = 0;
      }
      switch ( v10 + v9 )
      {
        case 0:
          v11 = (_DWORD *)v5[3].bottom;
          v5[3].right = 4;
          v5[3].top = 80;
          v5[4] = *a2;
          v12 = v54;
          *v11 = 0;
          v11[1] = 0x80000000;
          v11[2] = a2->top;
          v11[3] = 0;
          v13 = v11 + 4;
          *v13 = 2;
          v14 = a2->top;
          goto LABEL_14;
        case 1:
          v55 = *a2;
          v55.top = v48;
          goto LABEL_31;
        case 2:
          v42 = (_DWORD *)v5[3].bottom;
          v5[3].right = 4;
          v5[3].top = 88;
          v5[4] = *a2;
          v12 = v54;
          *v42 = 0;
          v42[1] = 0x80000000;
          v42[2] = a2->top;
          v42[3] = 0;
          v13 = v42 + 4;
          *v13 = 4;
          v13[1] = a2->top;
          v13[2] = v12->bottom;
          v13[3] = a2->left;
          v13[4] = v12->left;
          v13[5] = v12->right;
          v13[6] = a2->right;
          v13[7] = 4;
          goto LABEL_16;
        case 3:
          v35 = (_DWORD *)v5[3].bottom;
          v5[3].right = 4;
          v5[3].top = 80;
          v5[4] = *a2;
          v12 = v54;
          *v35 = 0;
          v35[1] = 0x80000000;
          v35[2] = a2->top;
          v35[3] = 0;
          v13 = v35 + 4;
          *v13 = 2;
          v36 = a2->top;
          goto LABEL_45;
        case 4:
          v55 = *a2;
          v55.left = v52;
          goto LABEL_31;
        case 5:
          v22 = v53;
          goto LABEL_29;
        case 6:
          v31 = (_DWORD *)v5[3].bottom;
          v5[3].top = 64;
          v5[3].right = 3;
          v5[4] = *a2;
          v32 = v54;
          *v31 = 0;
          v31[1] = 0x80000000;
          v31[2] = a2->top;
          v31[3] = 0;
          v16 = v31 + 4;
          *v16 = 4;
          v33 = a2->top;
          goto LABEL_40;
        case 7:
          v55 = *a2;
          v55.right = left;
          goto LABEL_31;
        case 8:
          v34 = (_DWORD *)v5[3].bottom;
          v5[3].top = 104;
          v5[3].right = 5;
          v5[4] = *a2;
          v12 = v54;
          *v34 = 0;
          v34[1] = 0x80000000;
          v34[2] = a2->top;
          v34[3] = 0;
          v34 += 4;
          *v34 = 2;
          v34[1] = a2->top;
          v34[2] = v12->top;
          v34[3] = a2->left;
          v34[4] = a2->right;
          v34[5] = 2;
          v13 = &v34[*v34 + 4];
          *v13 = 2;
          v14 = v12->top;
LABEL_14:
          v13[1] = v14;
          v13[2] = v12->bottom;
          v13[3] = v12->right;
          v15 = a2->right;
          goto LABEL_15;
        case 9:
          v23 = (_DWORD *)v5[3].bottom;
          v5[3].top = 96;
          v5[3].right = 5;
          v5[4] = *a2;
          v12 = v54;
          *v23 = 0;
          v23[1] = 0x80000000;
          v23[2] = a2->top;
          v23[3] = 0;
          v23 += 4;
          *v23 = 2;
          v23[1] = a2->top;
          v23[2] = v12->top;
          v23[3] = a2->left;
          v23[4] = a2->right;
          v23[5] = 2;
          v13 = &v23[*v23 + 4];
          *v13 = 0;
          v13[1] = v12->top;
          v13[2] = v12->bottom;
          v13[3] = 0;
          goto LABEL_16;
        case 10:
          v5[3].top = 112;
          v5[3].right = 5;
          v24 = (_DWORD *)v5[3].bottom;
          v5[4] = *a2;
          v24[1] = 0x80000000;
          *v24 = 0;
          v24[2] = a2->top;
          v24[3] = 0;
          v24 += 4;
          v25 = v54;
          *v24 = 2;
          v24[1] = a2->top;
          v24[2] = v25->top;
          v24[3] = a2->left;
          v26 = a2->right;
          v24[5] = 2;
          v24[4] = v26;
          v27 = &v24[*v24 + 4];
          *v27 = 4;
          v27[1] = v25->top;
          v27[2] = v25->bottom;
          v27[3] = a2->left;
          v27[4] = v25->left;
          v27[5] = v25->right;
          v27[6] = a2->right;
          v27[7] = 4;
          v28 = &v27[*v27 + 4];
          *v28 = 2;
          v28[1] = v25->bottom;
          v28[2] = a2->bottom;
          v28[3] = a2->left;
          v29 = a2->right;
          v28[5] = 2;
          v28[4] = v29;
          v30 = &v28[*v28];
          v30[4] = 0;
          v30 += 8;
          *(v30 - 3) = a2->bottom;
          *(v30 - 2) = 0x7FFFFFFF;
          *(v30 - 1) = 0;
          *(_DWORD *)(v44 + 32) = &v30[*(v30 - 4)];
          return 1;
        case 11:
          v37 = (_DWORD *)v5[3].bottom;
          v5[3].top = 104;
          v5[3].right = 5;
          v5[4] = *a2;
          v12 = v54;
          *v37 = 0;
          v37[1] = 0x80000000;
          v37[2] = a2->top;
          v37[3] = 0;
          v37 += 4;
          *v37 = 2;
          v37[1] = a2->top;
          v37[2] = v12->top;
          v37[3] = a2->left;
          v37[4] = a2->right;
          v37[5] = 2;
          v13 = &v37[*v37 + 4];
          *v13 = 2;
          v36 = v12->top;
LABEL_45:
          v13[1] = v36;
          v13[2] = v12->bottom;
          v13[3] = a2->left;
          v15 = v12->left;
LABEL_15:
          v13[4] = v15;
          v13[5] = 2;
LABEL_16:
          v16 = &v13[*v13 + 4];
          *v16 = 2;
          v16[1] = v12->bottom;
          v16[2] = a2->bottom;
          v17 = a2->left;
          goto LABEL_17;
        case 12:
          v38 = (_DWORD *)v5[3].bottom;
          v5[3].right = 4;
          v5[3].top = 80;
          v5[4] = *a2;
          v39 = v54;
          *v38 = 0;
          v38[1] = 0x80000000;
          v38[2] = a2->top;
          v38[3] = 0;
          v38 += 4;
          *v38 = 2;
          v38[1] = a2->top;
          v38[2] = v39->top;
          v38[3] = a2->left;
          v38[4] = a2->right;
          v38[5] = 2;
          v16 = &v38[*v38 + 4];
          *v16 = 2;
          v16[1] = v39->top;
          v16[2] = a2->bottom;
          v17 = v39->right;
LABEL_17:
          v16[3] = v17;
          v18 = a2->right;
          goto LABEL_18;
        case 13:
          v55.left = a2->left;
          v55.top = a2->top;
          v55.right = a2->right;
          v55.bottom = top;
LABEL_31:
          RGNOBJ::vSet(v53, &v55);
          return 1;
        case 14:
          v43 = (_DWORD *)v5[3].bottom;
          v5[3].right = 4;
          v5[3].top = 88;
          v5[4] = *a2;
          v32 = v54;
          *v43 = 0;
          v43[1] = 0x80000000;
          v43[2] = a2->top;
          v43[3] = 0;
          v43 += 4;
          *v43 = 2;
          v43[1] = a2->top;
          v43[2] = v32->top;
          v43[3] = a2->left;
          v43[4] = a2->right;
          v43[5] = 2;
          v16 = &v43[*v43 + 4];
          *v16 = 4;
          v33 = v32->top;
LABEL_40:
          v16[1] = v33;
          v16[2] = a2->bottom;
          v16[3] = a2->left;
          v16[4] = v32->left;
          v16[5] = v32->right;
          v16[6] = a2->right;
          v16[7] = 4;
          goto LABEL_19;
        case 15:
          v5[3].right = 4;
          v40 = (_DWORD *)v5[3].bottom;
          v5[3].top = 80;
          v5[4] = *a2;
          v41 = v54;
          *v40 = 0;
          v40[1] = 0x80000000;
          v40[2] = a2->top;
          v40[3] = 0;
          v40 += 4;
          *v40 = 2;
          v40[1] = a2->top;
          v40[2] = v41->top;
          v40[3] = a2->left;
          v40[4] = a2->right;
          v40[5] = 2;
          v16 = &v40[*v40 + 4];
          *v16 = 2;
          v16[1] = v41->top;
          v16[2] = a2->bottom;
          v16[3] = a2->left;
          v18 = v41->left;
LABEL_18:
          v16[4] = v18;
          v16[5] = 2;
LABEL_19:
          v19 = &v16[*v16 + 4];
          *v19 = 0;
          v19[1] = a2->bottom;
          v19[2] = 0x7FFFFFFF;
          v19[3] = 0;
          v5[2].left = (LONG)&v19[*v19 + 4];
          break;
      }
    }
    return 1;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v51, v5[3].top);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v51);
  if ( v51 && (RGNOBJ::vCopy((RGNOBJ *)&v51, this), RGNOBJ::bSubtractComplex((RGNOBJ *)&v51, a2, a3, a4)) )
    v21 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v51);
  else
    v21 = 0;
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v51);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v51);
  if ( v52 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v51);
  return v21;
}
