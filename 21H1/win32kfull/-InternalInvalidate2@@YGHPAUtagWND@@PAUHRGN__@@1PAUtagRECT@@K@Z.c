/*
 * XREFs of ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50
 * Callers:
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YGHPAUtagWND@@H@Z @ 0x7D624 (-ValidateParents@@YGHPAUtagWND@@H@Z.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?SmartRectInRegion@@YGIPAUHRGN__@@PAUtagRECT@@@Z @ 0x34A8E (-SmartRectInRegion@@YGIPAUHRGN__@@PAUtagRECT@@@Z.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     _PhysicalToLogicalInPlaceRgn@8 @ 0x36FCA (_PhysicalToLogicalInPlaceRgn@8.c)
 *     _PhysicalToLogicalInPlaceRect@8 @ 0x37E2C (_PhysicalToLogicalInPlaceRect@8.c)
 *     _InternalInvalidate3@12 @ 0x37E6A (_InternalInvalidate3@12.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _LogicalToPhysicalInPlaceRgnWorker@12 @ 0xA1A12 (_LogicalToPhysicalInPlaceRgnWorker@12.c)
 *     _GetAppCompatFlags@4 @ 0xA6D98 (_GetAppCompatFlags@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _LogicalToPhysicalInPlaceRect@8 @ 0x15135F (_LogicalToPhysicalInPlaceRect@8.c)
 *     ?PixieHack@@YGXPAUtagWND@@PAUtagRECT@@@Z @ 0x196427 (-PixieHack@@YGXPAUtagWND@@PAUtagRECT@@@Z.c)
 */

BOOL __userpurge InternalInvalidate2@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        HRGN a4,
        unsigned int a5,
        struct tagRECT *a6,
        unsigned int a7)
{
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // edx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  bool v14; // zf
  int v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  int v19; // esi
  int v20; // edx
  int v21; // eax
  unsigned int v22; // edi
  _BYTE *v23; // eax
  HRGN v24; // eax
  int v25; // edi
  HRGN v26; // ecx
  int v27; // esi
  _BYTE *v28; // eax
  int v29; // eax
  unsigned int v30; // eax
  int v31; // edx
  int v32; // edi
  HRGN v33; // ecx
  int v34; // ecx
  int v35; // edx
  int v36; // edi
  int v37; // ebx
  struct tagWND *v38; // eax
  int Prop; // eax
  int v40; // edi
  int EmptyRgnPublic; // esi
  struct tagWND *v42; // edi
  int v43; // eax
  struct tagWND *v44; // [esp+0h] [ebp-64h]
  struct tagRECT *v45; // [esp+4h] [ebp-60h]
  int v46; // [esp+Ch] [ebp-58h]
  int v47; // [esp+10h] [ebp-54h]
  struct tagWND *v48; // [esp+14h] [ebp-50h]
  int v49; // [esp+18h] [ebp-4Ch]
  unsigned int v51; // [esp+24h] [ebp-40h]
  int v52; // [esp+28h] [ebp-3Ch] BYREF
  HRGN v53; // [esp+2Ch] [ebp-38h] BYREF
  struct tagWND *v54; // [esp+30h] [ebp-34h] BYREF
  HRGN v55; // [esp+34h] [ebp-30h]
  unsigned int v56; // [esp+38h] [ebp-2Ch]
  struct HRGN__ v57; // [esp+3Ch] [ebp-28h] BYREF
  int v58; // [esp+40h] [ebp-24h]
  int v59; // [esp+44h] [ebp-20h]
  int v60; // [esp+48h] [ebp-1Ch]
  int v61[4]; // [esp+4Ch] [ebp-18h] BYREF

  v7 = a5;
  v8 = a2;
  v56 = a1;
  v9 = *(_DWORD *)(a2 + 20);
  v55 = a4;
  if ( *(_DWORD *)(v9 + 108) )
    v7 = a5 | 0x8000;
  v61[0] = *(_DWORD *)(v9 + 52);
  v10 = v7 | 0x2000;
  v61[1] = *(_DWORD *)(v9 + 56);
  v61[2] = *(_DWORD *)(v9 + 60);
  v11 = *(_DWORD *)(v9 + 64);
  v52 = v7;
  v51 = v7 | 0x2000;
  v61[3] = v11;
  if ( (v7 & 1) != 0 )
  {
    if ( (((v7 & 0x10000) == 0) & (*(_BYTE *)(v9 + 18) >> 3)) != 0 )
    {
      v54 = *(struct tagWND **)(v9 + 144);
      if ( ((unsigned __int8)v54 & 2) == 0 )
      {
        v12 = *(_DWORD *)(a2 + 56);
        if ( v12 )
        {
          v13 = 0;
          v53 = *(HRGN *)(v8 + 12);
          v10 = v7 | 0x2000;
          if ( v53 )
          {
            v14 = *((_DWORD *)v53 + 1) == 0;
            v53 = (HRGN)*((_DWORD *)v53 + 1);
            v10 = v7 | 0x2000;
            if ( !v14 )
              v13 = *((_DWORD *)v53 + 3);
          }
          if ( v12 == v13 )
            return 1;
        }
        if ( ((unsigned __int8)v54 & 0x20) == 0 )
          return 1;
      }
    }
    *(_DWORD *)(v9 + 144) &= ~2u;
    v16 = *(_DWORD *)(v8 + 20);
    if ( (*(_BYTE *)(v16 + 19) & 0x20) != 0 || (*(_BYTE *)(v16 + 18) & 8) != 0 )
    {
      if ( !ERECTL::bWrapped((ERECTL *)v61) )
      {
LABEL_17:
        if ( v56 <= 1 )
          goto LABEL_20;
        v17 = SmartRectInRegion(v56, v61);
        if ( v17 == 1 )
        {
          if ( (v7 & 0x8000) != 0 )
          {
            SetRectRgnIndirect(_ghrgnInv2, v61);
            v31 = 0;
            v32 = v8;
            v54 = 0;
            do
            {
              v33 = *(HRGN *)(*(_DWORD *)(v32 + 20) + 108);
              v55 = v33;
              if ( v33 )
              {
                v53 = v33;
                if ( v31 )
                {
                  v38 = (struct tagWND *)PhysicalToLogicalInPlaceRgn(v54, &v53);
                  v33 = v53;
                  v54 = v38;
                  v55 = v53;
                }
                else
                {
                  v54 = 0;
                }
                GreCombineRgn(_ghrgnInv2, _ghrgnInv2, v33, 1);
                if ( v54 )
                  GreDeleteObject(v55);
              }
              v31 = v32;
              v54 = (struct tagWND *)v32;
              v32 = *(_DWORD *)(v32 + 56);
            }
            while ( v32 );
            v7 = v52;
            v8 = a2;
            if ( GreCombineRgn(_ghrgnInv2, _ghrgnInv2, v56, 1) == 1 )
              return 1;
          }
          goto LABEL_20;
        }
        if ( v17 )
        {
          v30 = v17 - 2;
          if ( v30 )
          {
            if ( v30 == 1 )
              return 0;
          }
          else if ( (GetAppCompatFlags(*(_DWORD *)(v8 + 8)) & 0x10000) == 0 )
          {
            v56 = 1;
          }
LABEL_20:
          if ( (*(_BYTE *)(*(_DWORD *)(v8 + 20) + 19) & 0x10) != 0 )
          {
            Prop = _GetProp(1);
            v40 = Prop;
            if ( Prop )
            {
              EmptyRgnPublic = *(_DWORD *)(Prop + 28);
              if ( !EmptyRgnPublic )
              {
                EmptyRgnPublic = CreateEmptyRgnPublic();
                if ( !EmptyRgnPublic )
                  EmptyRgnPublic = 1;
              }
              SetRectRgnIndirect(_ghrgnInv2, v61);
              if ( EmptyRgnPublic != 1 )
                GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, _ghrgnInv2, 2);
              *(_DWORD *)(v40 + 28) = EmptyRgnPublic;
              return GreCombineRgn(a3, a3, _ghrgnInv2, 4) != 1;
            }
          }
          goto LABEL_21;
        }
        return 1;
      }
    }
    else
    {
      v14 = *(_DWORD *)(v8 + 56) == 0;
      v57.unused = *(_DWORD *)v55;
      v58 = *((_DWORD *)v55 + 1);
      v59 = *((_DWORD *)v55 + 2);
      v60 = *((_DWORD *)v55 + 3);
      if ( !v14 )
        PhysicalToLogicalInPlaceRect(v8, &v57);
      if ( IntersectRect(v61, v61, &v57.unused) )
        goto LABEL_17;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(v8 + 20) + 13) & 1) == 0 && v56 == 1 )
    {
      v7 &= ~0x2000u;
      v51 = v10 & 0xFFFFDFFF;
      goto LABEL_20;
    }
    return 1;
  }
LABEL_21:
  v18 = *(_DWORD *)(v8 + 20);
  if ( (*(_BYTE *)(v18 + 23) & 2) == 0 )
  {
    InternalInvalidate3((struct tagVWPL **)v8, v7);
    v18 = *(_DWORD *)(v8 + 20);
  }
  if ( (*(_BYTE *)(v18 + 14) & 0x40) != 0 )
    PixieHack(v44, v45);
  v19 = *(_DWORD *)(v8 + 60);
  if ( !v19 )
    goto LABEL_55;
  v20 = *(_DWORD *)(a2 + 20);
  v52 = v20;
  if ( (((v7 & 0x40) == 0) & (unsigned __int8)~(*(_BYTE *)(v20 + 23) >> 5)) == 0
    || (v7 & 0x80u) == 0 && (*(_BYTE *)(v20 + 23) & 2) != 0 )
  {
    goto LABEL_55;
  }
  v57.unused = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v55 = 0;
  if ( (v7 & 1) != 0 )
    v51 |= 0x404u;
  v21 = IntersectRect(&v57, v61, (int *)(v20 + 68));
  v22 = v56;
  if ( !v21 && ((*(_BYTE *)(v52 + 13) & 1) != 0 || v56 != 1) )
  {
LABEL_55:
    v27 = a2;
    if ( (*(_BYTE *)(*(_DWORD *)(a2 + 20) + 23) & 2) != 0 )
      InternalInvalidate3((struct tagVWPL **)a2, v7);
    if ( (v7 & 0x2000) != 0 )
    {
      v28 = *(_BYTE **)(a2 + 20);
      if ( (v28[16] & 0x20) == 0
        && (v28[18] & 8) == 0
        && (v28[23] & 4) != 0
        && ((v7 & 8) != 0
         || (v29 = *(_DWORD *)(a2 + 56)) != 0
         && ((*(_BYTE *)(*(_DWORD *)(v29 + 20) + 23) & 2) != 0 || (GetAppCompatFlags(*(_DWORD *)(a2 + 8)) & 0x4000) != 0)) )
      {
        SetRectRgnIndirect(_ghrgnInv2, v61);
        if ( (v7 & 0x8000) != 0 )
        {
          v34 = 0;
          do
          {
            v35 = *(_DWORD *)(v27 + 20);
            v36 = *(_DWORD *)(v35 + 108);
            if ( v36 )
            {
              v52 = *(_DWORD *)(v35 + 108);
              if ( v34 )
              {
                v43 = LogicalToPhysicalInPlaceRgnWorker(v34, &v52, 0);
                v35 = *(_DWORD *)(v27 + 20);
                v37 = v43;
                v36 = v52;
              }
              else
              {
                v37 = 0;
              }
              GreCombineRgn(_ghrgnInv2, _ghrgnInv2, *(_DWORD *)(v35 + 108), 1);
              if ( v37 )
                GreDeleteObject(v36);
            }
            v34 = v27;
            v27 = *(_DWORD *)(v27 + 56);
          }
          while ( v27 );
        }
        if ( GreCombineRgn(a3, a3, _ghrgnInv2, 4) == 1 )
          return 0;
      }
    }
    return 1;
  }
  while ( 1 )
  {
    v23 = *(_BYTE **)(v19 + 20);
    if ( (v23[23] & 0x10) != 0 )
    {
      if ( (v23[19] & 0x20) != 0 || (v23[18] & 8) != 0 )
      {
        v24 = v55;
        v52 = 1;
        if ( v55 || (v24 = (HRGN)CreateEmptyRgnPublic(), (v55 = v24) != 0) )
        {
          if ( v22 == 1 )
            GreCombineRgn(v24, a3, 0, 5);
          else
            GreCombineRgn(v24, v22, 0, 5);
        }
      }
      else
      {
        v52 = 0;
      }
      v53 = (HRGN)v22;
      v54 = a3;
      v47 = PhysicalToLogicalInPlaceRect(v19, &v57);
      v25 = PhysicalToLogicalInPlaceRgn(v19, &v53);
      v49 = PhysicalToLogicalInPlaceRgn(v19, &v54);
      v48 = v54;
      v46 = InternalInvalidate2(v54, &v57, (HRGN)v51, (struct tagRECT *)v44, (unsigned int)v45);
      if ( v25 )
        GreDeleteObject(v53);
      if ( v49 )
      {
        if ( LogicalToPhysicalInPlaceRgnWorker(v19, &v54, 0) )
        {
          v42 = v54;
          GreCombineRgn(a3, v54, 0, 5);
          GreDeleteObject(v42);
        }
        GreDeleteObject(v48);
      }
      if ( v47 )
        LogicalToPhysicalInPlaceRect(v19, &v57);
      v26 = v55;
      if ( v52 && v55 )
      {
        if ( v56 == 1 )
          GreCombineRgn(a3, v55, 0, 5);
        else
          GreCombineRgn(v56, v55, 0, 5);
        v26 = v55;
      }
      if ( !v46 && !v52 )
        break;
    }
LABEL_32:
    v19 = *(_DWORD *)(v19 + 48);
    if ( !v19 )
    {
      if ( v55 )
        GreDeleteObject(v55);
      goto LABEL_55;
    }
    v22 = v56;
  }
  if ( (v7 & 0x12) != 0 )
  {
    v7 &= 0xFFFFF3D2;
    v51 &= 0xFFFFD3D2;
    goto LABEL_32;
  }
  if ( v26 )
    GreDeleteObject(v26);
  return 0;
}
