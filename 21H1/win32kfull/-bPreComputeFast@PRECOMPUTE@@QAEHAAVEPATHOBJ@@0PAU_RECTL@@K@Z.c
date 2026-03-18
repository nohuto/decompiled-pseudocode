/*
 * XREFs of ?bPreComputeFast@PRECOMPUTE@@QAEHAAVEPATHOBJ@@0PAU_RECTL@@K@Z @ 0x23A136
 * Callers:
 *     ?vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1E584E (-vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEA.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QAEHAAVEPATHOBJ@@PAU_RECTL@@K@Z @ 0x238A23 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QAEHAAVEPATHOBJ@@PAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QAEHAAVEPATHOBJ@@PAU_RECTL@@K@Z @ 0x238AEE (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QAEHAAVEPATHOBJ@@PAU_RECTL@@K@Z.c)
 */

BOOL __thiscall PRECOMPUTE::bPreComputeFast(
        PRECOMPUTE *this,
        struct EPATHOBJ *a2,
        struct EPATHOBJ *a3,
        struct _RECTL *a4,
        char a5)
{
  struct EPATHOBJ *v5; // edx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int *v9; // eax
  PATHOBJ *v10; // esi
  _DWORD *v11; // esi
  size_t v12; // edi
  int v13; // eax
  int v14; // eax
  LONG v15; // edx
  int v16; // eax
  PRECOMPUTE *v17; // ecx
  struct _RECTL *v18; // edi
  size_t v19; // eax
  unsigned int v20; // eax
  size_t v21; // eax
  int v22; // eax
  int v23; // eax
  ULONG *v25; // [esp+0h] [ebp-508h]
  _DWORD v26[10]; // [esp+10h] [ebp-4F8h] BYREF
  LONG left; // [esp+38h] [ebp-4D0h]
  LONG top; // [esp+3Ch] [ebp-4CCh]
  PRECOMPUTE *right; // [esp+40h] [ebp-4C8h]
  LONG bottom; // [esp+44h] [ebp-4C4h]
  _DWORD v31[10]; // [esp+48h] [ebp-4C0h] BYREF
  int v32; // [esp+70h] [ebp-498h]
  struct _RECTL *v33; // [esp+74h] [ebp-494h]
  struct EPATHOBJ *v34; // [esp+78h] [ebp-490h]
  struct EPATHOBJ *v35; // [esp+7Ch] [ebp-48Ch]
  struct _RECTL *v36; // [esp+80h] [ebp-488h]
  unsigned int v37; // [esp+84h] [ebp-484h]
  size_t Size; // [esp+88h] [ebp-480h]
  PATHOBJ *v39; // [esp+8Ch] [ebp-47Ch]
  int v40; // [esp+90h] [ebp-478h] BYREF
  int v41; // [esp+94h] [ebp-474h]
  int v42; // [esp+98h] [ebp-470h]
  int v43; // [esp+9Ch] [ebp-46Ch]
  char v44; // [esp+A0h] [ebp-468h] BYREF
  struct _RECTL v45; // [esp+3C0h] [ebp-148h] BYREF

  v5 = a2;
  v35 = a3;
  v6 = 0;
  v33 = a4;
  memset(v31, 0, sizeof(v31));
  v34 = a2;
  memset(v26, 0, sizeof(v26));
  v7 = *((_DWORD *)a2 + 1);
  if ( v7 > 0x14 )
  {
    Size = 0;
    if ( ULongLongToULong(40LL * v7, v25) < 0 )
      return 0;
    v39 = (PATHOBJ *)PALLOCMEM2(Size, 1734632775, 0);
    if ( !v39 )
      return 0;
    v5 = v34;
    v32 = 1;
  }
  else
  {
    v32 = 0;
    v39 = (PATHOBJ *)&v44;
  }
  v37 = 0;
  left = 0;
  v36 = &v45;
  top = 0;
  right = 0;
  bottom = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( v33 )
  {
    v41 = 16 * v33->top;
    v8 = 16 * v33->bottom;
    left = v33->left;
    v43 = v8;
    v9 = &v40;
    top = v33->top;
    right = (PRECOMPUTE *)v33->right;
    bottom = v33->bottom;
  }
  else
  {
    v9 = 0;
  }
  v10 = v39;
  if ( !bConstructGET(v5, v26, v39, v9) )
  {
LABEL_47:
    v6 = 1;
    goto LABEL_51;
  }
  v11 = v31;
  v31[3] = 0;
  v12 = 0x80000000;
  v31[0] = v31;
  v31[2] = 0x7FFFFFFF;
LABEL_11:
  Size = v12;
  if ( v11 != v31 )
  {
    vAdvanceAETEdges(v31);
    v11 = (_DWORD *)v31[0];
    if ( (_DWORD *)v31[0] != v31 )
    {
      if ( *(_DWORD **)v31[0] != v31 )
      {
        vXSortAETEdges(v31);
        v11 = (_DWORD *)v31[0];
      }
      v13 = v26[0];
      goto LABEL_18;
    }
  }
  v13 = v26[0];
  if ( (_DWORD *)v26[0] != v26 )
  {
    v12 = *(_DWORD *)(v26[0] + 12);
    Size = v12;
LABEL_18:
    if ( *(_DWORD *)(v13 + 12) == v12 )
    {
      vMoveNewEdges(v26, v31, v12);
      v11 = (_DWORD *)v31[0];
    }
    v14 = a5 & 2;
    v34 = (struct EPATHOBJ *)v14;
    while ( 1 )
    {
      v15 = v11[2];
      if ( v14 )
      {
        v16 = v11[9];
        do
        {
          v11 = (_DWORD *)*v11;
          v16 += v11[9];
        }
        while ( v16 );
      }
      else
      {
        v11 = (_DWORD *)*v11;
      }
      v17 = (PRECOMPUTE *)v11[2];
      if ( v15 < (int)v17 )
        break;
LABEL_42:
      v11 = (_DWORD *)*v11;
      v14 = (int)v34;
      if ( v11 == v31 )
      {
        v11 = (_DWORD *)v31[0];
        v12 = Size + 1;
        goto LABEL_11;
      }
    }
    if ( v33 )
    {
      if ( v15 < left )
        v15 = left;
      v18 = v36;
      v36->left = v15;
      if ( (int)v17 > (int)right )
        v17 = right;
      v19 = Size;
      v18->top = Size;
      v18->bottom = v19 + 1;
      v20 = v37;
      v18->right = (LONG)v17;
      if ( v15 >= (int)v17 )
      {
LABEL_36:
        if ( v20 == 20 )
        {
          if ( v34 )
            v22 = PRECOMPUTE::bAddPreComputedFastStrokeRects(v17, (size_t)v35, &v45, 0x14u);
          else
            v22 = PRECOMPUTE::bAddPreComputedFastFillRects(v17, (size_t)v35, &v45, 0x14u);
          if ( !v22 )
            goto LABEL_49;
          v37 = 0;
          v36 = &v45;
        }
        goto LABEL_42;
      }
    }
    else
    {
      v18 = v36;
      v21 = Size;
      v36->top = Size;
      v18->bottom = v21 + 1;
      v20 = v37;
      v18->left = v15;
      v18->right = (LONG)v17;
    }
    ++v20;
    v36 = v18 + 1;
    v37 = v20;
    goto LABEL_36;
  }
  if ( v37 )
  {
    if ( (a5 & 2) != 0 )
    {
      v23 = PRECOMPUTE::bAddPreComputedFastStrokeRects((PRECOMPUTE *)v26, (size_t)v35, &v45, v37);
      v10 = v39;
      if ( v23 )
        goto LABEL_51;
      goto LABEL_47;
    }
    if ( !PRECOMPUTE::bAddPreComputedFastFillRects((PRECOMPUTE *)v26, (size_t)v35, &v45, v37) )
LABEL_49:
      v6 = 1;
  }
  v10 = v39;
LABEL_51:
  if ( v32 )
    Win32FreePool(v10);
  return !v6;
}
