/*
 * XREFs of ?GrePatBltLockedDC@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVERECTL@@KPAVSURFACE@@KKKK@Z @ 0x57330
 * Callers:
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 * Callees:
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge GrePatBltLockedDC@<eax>(
        POINTL **a1@<ecx>,
        RECTL *a2,
        struct EXFORMOBJ *a3,
        struct ERECTL *a4,
        unsigned int a5,
        struct SURFACE *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10)
{
  LONG *p_left; // esi
  bool v11; // zf
  int v13; // eax
  int v14; // eax
  int *p_x; // ecx
  int v16; // kr00_4
  int *v17; // edi
  int v18; // ecx
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  POINTL **v23; // edi
  POINTL *v24; // ecx
  struct ERECTL *v25; // ebx
  _DWORD *y; // edx
  BRUSHOBJ *v27; // eax
  int v28; // edi
  int v29; // ebx
  POINTL **v30; // esi
  int v31; // ecx
  POINTL **v32; // esi
  int v33; // ecx
  LONG x; // edx
  LONG v35; // ebx
  LONG v36; // esi
  LONG bottom; // esi
  LONG v38; // edx
  POINTL *v39; // ecx
  LONG right; // eax
  LONG v42; // edx
  DC *v43; // ecx
  struct REGION *v44; // eax
  XCLIPOBJ *v45; // ecx
  LONG v46; // [esp+Ch] [ebp-68h]
  int v47; // [esp+10h] [ebp-64h]
  struct ERECTL *v48; // [esp+14h] [ebp-60h]
  int top; // [esp+2Ch] [ebp-48h] BYREF
  POINTL **v50; // [esp+30h] [ebp-44h]
  __int64 v51; // [esp+34h] [ebp-40h]
  struct ERECTL *v52; // [esp+3Ch] [ebp-38h]
  LONG left; // [esp+40h] [ebp-34h]
  _DWORD v54[2]; // [esp+44h] [ebp-30h] BYREF
  _DWORD v55[2]; // [esp+4Ch] [ebp-28h] BYREF
  RECTL *v56; // [esp+54h] [ebp-20h]
  LONG *v57; // [esp+58h] [ebp-1Ch]
  int *v58; // [esp+5Ch] [ebp-18h]
  struct _RECTL v59; // [esp+60h] [ebp-14h] BYREF

  p_left = &a2->left;
  v11 = (*((_BYTE *)a4 + 76) & 8) == 0;
  v50 = a1;
  v56 = a2;
  v52 = a4;
  v57 = 0;
  if ( (!v11 || *((_DWORD *)a4 + 36)) && (*((_WORD *)a4 + 33) & 0x200) != 0 )
    goto LABEL_64;
  v13 = *((_DWORD *)a4 + 18);
  if ( (v13 & 0x800) != 0 )
  {
    v14 = UserSurfaceAccessCheck(*((_DWORD *)a4 + 113));
    goto LABEL_5;
  }
  if ( (v13 & 0x10000000) != 0 )
  {
    v14 = UserScreenAccessCheck();
LABEL_5:
    if ( v14 )
      goto LABEL_6;
LABEL_64:
    EngSetLastError(5u);
    return 0;
  }
LABEL_6:
  if ( ((*a1)[3].x & 0x10000) != 0 )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  p_x = &(*a1)[((*a1)[3].y & 1) + 131].x;
  left = a2->left;
  v58 = p_x;
  top = *p_x;
  v51 = top;
  if ( (unsigned __int64)(top + (__int64)left + 0x80000000LL) >> 32 )
    return 1;
  v55[0] = a2->right;
  if ( (__PAIR64__(HIDWORD(v51), top) + v55[0] + 0x80000000) >> 32 )
    return 1;
  HIDWORD(v51) = a2->top;
  v16 = p_x[1];
  top = v16 >> 31;
  if ( (unsigned __int64)(v16 + (__int64)SHIDWORD(v51) + 0x80000000LL) >> 32 )
    return 1;
  v54[0] = a2->bottom;
  if ( (__PAIR64__(top, v16) + v54[0] + 0x80000000) >> 32 )
    return 1;
  v17 = v58;
  v18 = left + v51;
  v19 = HIDWORD(v51);
  a2->left = left + v51;
  v20 = v55[0] + *v17;
  a2->right = v20;
  v21 = v17[1] + v19;
  top = v20;
  a2->top = v21;
  v22 = v54[0] + v17[1];
  v23 = v50;
  a2->bottom = v22;
  if ( v18 >= top || v21 >= v22 )
    return 1;
  v24 = *v23;
  v25 = v52;
  if ( left + (int)v51 >= (*v23)[129].x )
  {
    v25 = v52;
    if ( top <= v24[130].x && v21 >= v24[129].y && v22 <= v24[130].y )
      goto LABEL_17;
  }
  v57 = &v24[196].x;
  v44 = DC::prgnRao((DC *)v24) ? DC::prgnRao(v43) : DC::prgnVisSnap(v43);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v57, v44, (struct ERECTL *)a2, 2);
  v45 = (XCLIPOBJ *)v57;
  a2->left = v57[1];
  a2->top = *((_DWORD *)v45 + 2);
  a2->right = *((_DWORD *)v45 + 3);
  a2->bottom = *((_DWORD *)v45 + 4);
  if ( a2->left == a2->right || a2->top == a2->bottom )
    return 1;
  v24 = *v23;
LABEL_17:
  if ( (((unsigned __int8)a3 ^ (unsigned __int8)(16 * (_BYTE)a3)) & 0xF0) != 0 )
  {
    y = (_DWORD *)v24[127].y;
    v27 = (BRUSHOBJ *)&v24[148];
    LODWORD(v51) = v24 + 148;
    v55[0] = y[46];
    if ( (v55[0] & 1) != 0
      || (v24[29].y & 1) != 0
      || (v11 = (v24[157].y & 1) == 0, v54[0] = v24[157].y, v25 = v52, !v11) && (v23 = v50, v24[152].x != a5)
      || (v54[0] & 2) != 0 && (p_left = &v56->left, (struct SURFACE *)v24[152].y != a6) )
    {
      v28 = y[51];
      v29 = y[49];
      v30 = v50;
      v54[0] = y[52];
      v58 = (int *)y[50];
      y[46] = v55[0] & 0xFFFFFFFE;
      v48 = v52;
      (*v30)[29].y &= ~1u;
      v47 = *((_DWORD *)v52 + 22);
      v31 = v51;
      v46 = (*v30)[7].y;
      *(_DWORD *)((*v30)[127].y + 204) = a5;
      *(_DWORD *)((*v50)[127].y + 196) = a6;
      *(_DWORD *)((*v50)[127].y + 208) = a7;
      *(_DWORD *)((*v50)[127].y + 200) = a8;
      v32 = v50;
      EBRUSHOBJ::vInitBrush(v31, *v50, (*v50)[11].y, v46, v47, v48, 1);
      v33 = v54[0];
      *(_DWORD *)((*v50)[127].y + 204) = v28;
      v23 = v32;
      p_left = &v56->left;
      *(_DWORD *)((*v23)[127].y + 196) = v29;
      v25 = v52;
      *(_DWORD *)((*v23)[127].y + 208) = v33;
      *(_DWORD *)((*v23)[127].y + 200) = v58;
      v24 = *v23;
      v27 = (BRUSHOBJ *)v51;
    }
  }
  else
  {
    v27 = 0;
    LODWORD(v51) = 0;
  }
  x = v24[3].x;
  if ( (x & 0xE0) != 0 && (!v27 || ((int)v27[6].pvRbrush & 0x100) == 0) )
  {
    v59.left = *p_left;
    left = v59.left;
    v59.top = p_left[1];
    top = v59.top;
    v35 = p_left[2];
    v36 = p_left[3];
    v59.right = v35;
    v59.bottom = v36;
    HIDWORD(v51) = (v24[3].y & 1) != 0 ? 1056 : 1048;
    v59.left = left - *(LONG *)((char *)&v24->x + HIDWORD(v51));
    left = v59.left;
    v27 = (BRUSHOBJ *)v51;
    v59.right = v35 - *(LONG *)((char *)&v24->x + HIDWORD(v51));
    v54[0] = v59.right;
    v59.top = top - *(LONG *)((char *)&v24->y + HIDWORD(v51));
    bottom = v36 - *(LONG *)((char *)&v24->y + HIDWORD(v51));
    v23 = v50;
    top = v59.top;
    v25 = v52;
    v59.bottom = bottom;
    if ( (x & 0x40) != 0 )
    {
      v38 = v24[139].x;
      if ( v38 == v24[140].x || v24[139].y == v24[140].y )
      {
        v24[139].x = left;
        v24[139].y = v59.top;
        v24[140].x = v59.right;
        v24[140].y = v59.bottom;
      }
      else
      {
        if ( left >= v38 )
        {
          right = v54[0];
          v42 = top;
        }
        else
        {
          v24[139].x = left;
          bottom = v59.bottom;
          right = v59.right;
          v42 = v59.top;
        }
        if ( v42 < v24[139].y )
        {
          v24[139].y = v42;
          bottom = v59.bottom;
          right = v59.right;
        }
        if ( right > v24[140].x )
        {
          v24[140].x = right;
          bottom = v59.bottom;
        }
        if ( bottom > v24[140].y )
          v24[140].y = bottom;
      }
      top = (*v23)[146].y;
      if ( top )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v55);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v55);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v54);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v54);
        if ( v55[0]
          && v54[0]
          && (RGNOBJ::vSet((RGNOBJ *)v54, &v59),
              RGNOBJ::bMerge((RGNOBJ *)v55, (struct RGNOBJ *)&top, (struct RGNOBJ *)v54, 0xEu)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&top, (struct RGNOBJ *)v55);
          v23 = v50;
          (*v50)[146].y = top;
        }
        else
        {
          v23 = v50;
        }
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v54);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v54);
        if ( v54[1] == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v54);
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v55);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v55);
        if ( v55[1] == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v55);
      }
      v27 = (BRUSHOBJ *)v51;
    }
  }
  ++*((_DWORD *)v25 + 14);
  v39 = *v23 + 147;
  if ( (*((_BYTE *)v25 + 72) & 1) != 0 )
    return (*(int (__stdcall **)(int, _DWORD, _DWORD, LONG *, _DWORD, RECTL *, _DWORD, _DWORD, _DWORD, POINTL *, struct EXFORMOBJ *))(*((_DWORD *)v25 + 7) + 1972))(
             (int)v25 + 16,
             0,
             0,
             v57,
             0,
             v56,
             0,
             0,
             v51,
             v39,
             a3);
  else
    return EngBitBlt((SURFOBJ *)((char *)v25 + 16), 0, 0, (CLIPOBJ *)v57, 0, v56, 0, 0, v27, v39, (ROP4)a3);
}
