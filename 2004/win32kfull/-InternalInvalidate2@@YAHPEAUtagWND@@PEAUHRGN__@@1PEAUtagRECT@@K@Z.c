/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0071CC0
 * Callers:
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0071CC0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C00F03A4 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0068010 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C007067C (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0071CC0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00722EC (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C0073934 (PhysicalToLogicalInPlaceRect.c)
 *     InternalInvalidate3 @ 0x1C0073974 (InternalInvalidate3.c)
 *     GetAppCompatFlags @ 0x1C0108250 (GetAppCompatFlags.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C010AF94 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1C01E5ED8 (LogicalToPhysicalInPlaceRect.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0235C68 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall InternalInvalidate2(struct tagWND *a1, _BYTE *a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  struct tagRECT *v5; // r11
  __int64 v6; // r9
  unsigned int v7; // esi
  HRGN v8; // r13
  HRGN v9; // r15
  struct tagWND *v10; // rdi
  int v11; // r12d
  char v12; // r10
  __int64 v13; // rdx
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r13
  __int64 v20; // rbx
  unsigned int v21; // r12d
  __int64 v22; // r14
  _BYTE *v23; // rcx
  HRGN v24; // rdx
  int v25; // ebx
  unsigned int v26; // eax
  HRGN v27; // rcx
  _BYTE *v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  int v31; // eax
  bool v32; // cf
  __int64 v33; // rax
  struct tagWND *v34; // rcx
  __int64 v35; // r8
  HRGN v36; // rbx
  struct tagWND *v37; // rcx
  struct tagWND *v38; // rbx
  __int64 v39; // rax
  HRGN v40; // r14
  int v41; // eax
  int v42; // eax
  int v43; // esi
  int v44; // r12d
  int v45; // eax
  __int64 Prop; // rax
  __int64 v47; // r14
  __int64 EmptyRgnPublic; // rbx
  unsigned int v49; // [rsp+30h] [rbp-51h]
  unsigned int v50; // [rsp+30h] [rbp-51h]
  HRGN v51; // [rsp+38h] [rbp-49h] BYREF
  HRGN v52; // [rsp+40h] [rbp-41h]
  HRGN v53; // [rsp+48h] [rbp-39h] BYREF
  int v54; // [rsp+50h] [rbp-31h]
  int v55; // [rsp+54h] [rbp-2Dh]
  int v56; // [rsp+58h] [rbp-29h]
  HRGN v57; // [rsp+60h] [rbp-21h]
  struct tagRECT v58; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v59; // [rsp+78h] [rbp-9h] BYREF

  v5 = a4;
  v6 = *((_QWORD *)a1 + 5);
  v7 = a5 | 0x8000;
  v52 = a3;
  v8 = a3;
  v9 = (HRGN)a2;
  v10 = a1;
  if ( !*(_QWORD *)(v6 + 168) )
    v7 = a5;
  v11 = v7 | 0x2000;
  v49 = v7 | 0x2000;
  v58 = *(struct tagRECT *)(v6 + 88);
  if ( (v7 & 1) == 0 )
    goto LABEL_18;
  if ( (((v7 & 0x10000) == 0) & (*(_BYTE *)(v6 + 26) >> 3)) != 0
    && (*(_DWORD *)(v6 + 232) & 2) == 0
    && ((unsigned int)IsTopLevelWindow((__int64)a1) || (v12 & 0x20) == 0) )
  {
    return 1LL;
  }
  *(_DWORD *)(v6 + 232) &= ~2u;
  v13 = *((_QWORD *)v10 + 5);
  if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0 || (*(_BYTE *)(v13 + 26) & 8) != 0 )
  {
    if ( !IsRectEmptyInl(&v58) )
      goto LABEL_13;
  }
  else
  {
    v14 = *((_QWORD *)v10 + 13) == 0LL;
    v59 = *v5;
    if ( !v14 )
      PhysicalToLogicalInPlaceRect(v10, &v59);
    if ( (unsigned int)IntersectRect(&v58, &v58.left, &v59.left) )
    {
LABEL_13:
      if ( (unsigned __int64)v9 > 1 )
      {
        v15 = SmartRectInRegion(v9, &v58);
        if ( !v15 )
          return 1LL;
        v16 = v15 - 1;
        if ( v16 )
        {
          v31 = v16 - 1;
          if ( v31 )
          {
            if ( v31 == 1 )
              return 0LL;
          }
          else
          {
            v32 = (GetAppCompatFlags(*((_QWORD *)v10 + 2), a2) & 0x10000) != 0;
            v33 = 1LL;
            if ( v32 )
              v33 = (__int64)v9;
            v9 = (HRGN)v33;
          }
        }
        else if ( (v7 & 0x8000) != 0 )
        {
          SetRectRgnIndirect(ghrgnInv2, &v58);
          v37 = 0LL;
          v38 = v10;
          do
          {
            v39 = *((_QWORD *)v38 + 5);
            v40 = *(HRGN *)(v39 + 168);
            if ( v40 )
            {
              v51 = *(HRGN *)(v39 + 168);
              if ( v37 )
              {
                v45 = PhysicalToLogicalInPlaceRgn(v37, &v51);
                v40 = v51;
                v44 = v45;
              }
              else
              {
                v44 = 0;
              }
              GreCombineRgn(ghrgnInv2, ghrgnInv2, v40, 1LL);
              if ( v44 )
                GreDeleteObject(v40);
            }
            v37 = v38;
            v38 = (struct tagWND *)*((_QWORD *)v38 + 13);
          }
          while ( v38 );
          v41 = GreCombineRgn(ghrgnInv2, ghrgnInv2, v9, 1LL);
          v8 = v52;
          if ( v41 == 1 )
            return 1LL;
          v11 = v7 | 0x2000;
        }
      }
      goto LABEL_17;
    }
    a2 = (_BYTE *)*((_QWORD *)v10 + 5);
  }
  if ( (a2[21] & 1) != 0 || v9 != (HRGN)1 )
    return 1LL;
  v7 &= ~0x2000u;
  v11 &= ~0x2000u;
  v49 = v11;
LABEL_17:
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 27LL) & 0x10) != 0 )
  {
    Prop = GetProp((__int64)v10, (unsigned __int16)atomLayer, 1LL);
    v47 = Prop;
    if ( Prop )
    {
      EmptyRgnPublic = *(_QWORD *)(Prop + 40);
      if ( !EmptyRgnPublic )
      {
        EmptyRgnPublic = CreateEmptyRgnPublic();
        if ( !EmptyRgnPublic )
          EmptyRgnPublic = 1LL;
      }
      SetRectRgnIndirect(ghrgnInv2, &v58);
      if ( EmptyRgnPublic != 1 )
        GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, ghrgnInv2, 2LL);
      *(_QWORD *)(v47 + 40) = EmptyRgnPublic;
      v30 = GreCombineRgn(v8, v8, ghrgnInv2, 4LL);
      goto LABEL_67;
    }
  }
LABEL_18:
  v17 = *((_QWORD *)v10 + 5);
  if ( (*(_BYTE *)(v17 + 31) & 2) == 0 )
  {
    InternalInvalidate3(v10);
    v17 = *((_QWORD *)v10 + 5);
  }
  if ( (*(_BYTE *)(v17 + 22) & 0x40) != 0 )
    PixieHack(v10, &v58);
  v18 = *((_QWORD *)v10 + 14);
  if ( !v18 )
    goto LABEL_23;
  v20 = *((_QWORD *)v10 + 5);
  LOBYTE(a2) = *(_BYTE *)(v20 + 31);
  if ( (((v7 & 0x40) == 0) & (unsigned __int8)~((unsigned __int8)a2 >> 5)) == 0
    || (v7 & 0x80u) == 0 && ((unsigned __int8)a2 & 2) != 0 )
  {
    goto LABEL_23;
  }
  v21 = v11 | 0x404;
  v22 = 0LL;
  v59 = 0LL;
  if ( (v7 & 1) == 0 )
    v21 = v49;
  if ( !(unsigned int)IntersectRect(&v59, &v58.left, (int *)(v20 + 104))
    && ((*(_BYTE *)(v20 + 21) & 1) != 0 || v9 != (HRGN)1) )
  {
LABEL_23:
    if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 2) != 0 )
      InternalInvalidate3(v10);
    if ( (v7 & 0x2000) != 0 )
    {
      v28 = (_BYTE *)*((_QWORD *)v10 + 5);
      if ( (v28[24] & 0x20) == 0
        && (v28[26] & 8) == 0
        && (v28[31] & 4) != 0
        && ((v7 & 8) != 0
         || (v29 = *((_QWORD *)v10 + 13)) != 0
         && ((*(_BYTE *)(*(_QWORD *)(v29 + 40) + 31LL) & 2) != 0
          || (GetAppCompatFlags(*((_QWORD *)v10 + 2), a2) & 0x4000) != 0)) )
      {
        SetRectRgnIndirect(ghrgnInv2, &v58);
        if ( (v7 & 0x8000) != 0 )
        {
          v34 = 0LL;
          do
          {
            v35 = *((_QWORD *)v10 + 5);
            v36 = *(HRGN *)(v35 + 168);
            if ( v36 )
            {
              v51 = *(HRGN *)(v35 + 168);
              if ( v34 )
              {
                v42 = LogicalToPhysicalInPlaceRgnWorker(v34, &v51, 0LL);
                v35 = *((_QWORD *)v10 + 5);
                v43 = v42;
                v36 = v51;
              }
              else
              {
                v43 = 0;
              }
              GreCombineRgn(ghrgnInv2, ghrgnInv2, *(_QWORD *)(v35 + 168), 1LL);
              if ( v43 )
                GreDeleteObject(v36);
            }
            v34 = v10;
            v10 = (struct tagWND *)*((_QWORD *)v10 + 13);
          }
          while ( v10 );
        }
        v30 = GreCombineRgn(v52, v52, ghrgnInv2, 4LL);
LABEL_67:
        if ( v30 == 1 )
          return 0LL;
      }
    }
    return 1LL;
  }
  while ( 1 )
  {
    v23 = *(_BYTE **)(v18 + 40);
    if ( (v23[31] & 0x10) == 0 )
      goto LABEL_34;
    if ( (v23[27] & 0x20) != 0 || (v23[26] & 8) != 0 )
    {
      v50 = 1;
      if ( v22 || (v22 = CreateEmptyRgnPublic()) != 0 )
      {
        v24 = v52;
        if ( v9 != (HRGN)1 )
          v24 = v9;
        GreCombineRgn(v22, v24, 0LL, 5LL);
      }
    }
    else
    {
      v50 = 0;
    }
    v53 = v52;
    v51 = v9;
    v55 = PhysicalToLogicalInPlaceRect(v18, &v59);
    v25 = PhysicalToLogicalInPlaceRgn(v18, &v51);
    v54 = PhysicalToLogicalInPlaceRgn(v18, &v53);
    v57 = v53;
    v56 = InternalInvalidate2((struct tagWND *)v18, v51, v53, &v59, v21);
    if ( v25 )
      GreDeleteObject(v51);
    if ( v54 )
    {
      if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v18, &v53, 0LL) )
      {
        GreCombineRgn(v52, v53, 0LL, 5LL);
        GreDeleteObject(v53);
      }
      GreDeleteObject(v57);
    }
    if ( v55 )
      LogicalToPhysicalInPlaceRect(v18, &v59);
    v26 = v50;
    if ( v50 && v22 )
    {
      v27 = v52;
      if ( v9 != (HRGN)1 )
        v27 = v9;
      GreCombineRgn(v27, v22, 0LL, 5LL);
      v26 = v50;
    }
    if ( v56 || v26 )
      goto LABEL_34;
    if ( (v7 & 0x12) == 0 )
      break;
    v7 &= 0xFFFFF3D2;
    v21 &= 0xFFFFD3D2;
LABEL_34:
    v18 = *(_QWORD *)(v18 + 88);
    if ( !v18 )
    {
      if ( v22 )
        GreDeleteObject(v22);
      goto LABEL_23;
    }
  }
  if ( v22 )
    GreDeleteObject(v22);
  return 0LL;
}
