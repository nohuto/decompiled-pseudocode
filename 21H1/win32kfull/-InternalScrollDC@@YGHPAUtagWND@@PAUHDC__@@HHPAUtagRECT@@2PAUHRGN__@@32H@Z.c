/*
 * XREFs of ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68
 * Callers:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     __ScrollDC@28 @ 0x3267A (__ScrollDC@28.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _GreTransformPoints@20 @ 0x8DA90 (_GreTransformPoints@20.c)
 *     _UnionRect@12 @ 0x982E2 (_UnionRect@12.c)
 *     _SubtractRect@12 @ 0x9A66A (_SubtractRect@12.c)
 *     _GetDCOrgOnScreen@8 @ 0xC3520 (_GetDCOrgOnScreen@8.c)
 *     ?GetTrueClipRgn@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0xC3732 (-GetTrueClipRgn@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

int __userpurge InternalScrollDC@<eax>(
        HDC a1@<edx>,
        struct tagWND *a2,
        HDC a3,
        struct tagWND *a4,
        int *a5,
        struct tagRECT *a6,
        struct tagRECT *a7,
        HRGN a8,
        HRGN a9,
        struct tagRECT *a10,
        int a11)
{
  struct tagRECT *v11; // ebx
  int ClipBox; // ecx
  struct tagWND *v14; // eax
  struct tagWND *v15; // edi
  HDC v16; // esi
  HRGN v17; // edi
  _DWORD *v18; // edi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // edi
  char *v25; // edx
  char *v26; // ecx
  char *v27; // ebx
  HDC v28; // esi
  int v29; // ebx
  int v30; // edi
  int v31; // edi
  struct tagRECT *v32; // eax
  struct tagRECT *v33; // edi
  struct tagRECT *v34; // eax
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  char **p_Buf1; // esi
  HRGN v39; // esi
  int v40; // edi
  int *v41; // esi
  HDC v42; // [esp+0h] [ebp-D0h]
  HRGN v43; // [esp+4h] [ebp-CCh]
  int v44; // [esp+10h] [ebp-C0h] BYREF
  int v45; // [esp+14h] [ebp-BCh]
  struct tagWND *v46; // [esp+18h] [ebp-B8h]
  HDC v47; // [esp+1Ch] [ebp-B4h]
  HDC v48; // [esp+20h] [ebp-B0h]
  struct tagWND *v49; // [esp+24h] [ebp-ACh]
  int v50; // [esp+28h] [ebp-A8h] BYREF
  int v51; // [esp+2Ch] [ebp-A4h]
  int v52; // [esp+30h] [ebp-A0h]
  int v53; // [esp+34h] [ebp-9Ch]
  struct tagRECT *v54; // [esp+38h] [ebp-98h]
  HRGN v55; // [esp+3Ch] [ebp-94h]
  int v56; // [esp+40h] [ebp-90h]
  HDC v57; // [esp+44h] [ebp-8Ch]
  struct tagRECT *v58; // [esp+48h] [ebp-88h]
  int v59; // [esp+4Ch] [ebp-84h]
  int v60; // [esp+50h] [ebp-80h]
  int EmptyRgn; // [esp+54h] [ebp-7Ch]
  int v62; // [esp+58h] [ebp-78h]
  int v63; // [esp+5Ch] [ebp-74h] BYREF
  int v64; // [esp+60h] [ebp-70h]
  int v65; // [esp+64h] [ebp-6Ch]
  int v66; // [esp+68h] [ebp-68h]
  _DWORD Buf2[2]; // [esp+6Ch] [ebp-64h] BYREF
  int v68; // [esp+74h] [ebp-5Ch] BYREF
  int *v69; // [esp+78h] [ebp-58h]
  char *v70; // [esp+7Ch] [ebp-54h] BYREF
  int v71; // [esp+80h] [ebp-50h]
  int v72; // [esp+84h] [ebp-4Ch]
  int v73; // [esp+88h] [ebp-48h]
  _DWORD v74[2]; // [esp+8Ch] [ebp-44h] BYREF
  int v75; // [esp+94h] [ebp-3Ch]
  int v76; // [esp+98h] [ebp-38h]
  char *v77; // [esp+9Ch] [ebp-34h] BYREF
  char *v78; // [esp+A0h] [ebp-30h]
  char *v79; // [esp+A4h] [ebp-2Ch]
  char *v80; // [esp+A8h] [ebp-28h]
  char *v81; // [esp+ACh] [ebp-24h] BYREF
  char *v82; // [esp+B0h] [ebp-20h]
  char *v83; // [esp+B4h] [ebp-1Ch]
  char *v84; // [esp+B8h] [ebp-18h]
  int Buf1; // [esp+BCh] [ebp-14h] BYREF
  int v86; // [esp+C0h] [ebp-10h]
  int v87; // [esp+C4h] [ebp-Ch]
  int *v88; // [esp+C8h] [ebp-8h]

  v49 = a4;
  v69 = a5;
  v54 = a6;
  v55 = a8;
  v11 = a7;
  v74[0] = 0;
  v57 = a1;
  v74[1] = 0;
  v75 = 0;
  v76 = 0;
  Buf1 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v51 = 0;
  EmptyRgn = 0;
  v59 = 0;
  v58 = 0;
  v53 = 0;
  v52 = 0;
  v62 = 0;
  v60 = 0;
  if ( !GreLockVisRgnSharedOrExclusive(*(_DWORD *)(_gpDispInfo + 20), a1) )
    return 0;
  ClipBox = GreGetClipBox(a1, v74, 1);
  v56 = ClipBox;
  if ( !ClipBox )
    goto LABEL_101;
  v14 = v49;
  if ( !v49 )
    v14 = (struct tagWND *)v74;
  Buf1 = *(_DWORD *)v14;
  v86 = *((_DWORD *)v14 + 1);
  v87 = *((_DWORD *)v14 + 2);
  v88 = (int *)*((_DWORD *)v14 + 3);
  if ( v69 )
  {
    v63 = *v69;
    v64 = v69[1];
    v65 = v69[2];
    v66 = v69[3];
  }
  v15 = a2;
  v16 = v57;
  v49 = a2;
  v48 = a3;
  if ( a9 )
  {
    GreTransformPoints(v74, 2, 1);
    GreTransformPoints(&Buf1, 2, 1);
    if ( (GreGetLayout(v57) & 1) != 0 )
    {
      v35 = v74[0];
      v74[0] = v75;
      v75 = v35;
      v36 = Buf1;
      Buf1 = v87;
      v87 = v36;
      v51 = 1;
    }
    if ( v69 )
    {
      GreTransformPoints(&v63, 2, 1);
      if ( v51 )
      {
        v37 = v63;
        v63 = v65;
        v65 = v37;
      }
    }
    v45 = 0;
    v44 = 0;
    v47 = a3;
    v46 = a2;
    GreTransformPoints(&v44, 2, 1);
    v15 = (struct tagWND *)((char *)v46 - v44);
    ClipBox = v56;
    a2 = (struct tagWND *)((char *)v46 - v44);
    a3 = (HDC)((char *)v47 - v45);
  }
  if ( ClipBox == 1 )
    goto LABEL_20;
  if ( ClipBox == 3 )
  {
    EmptyRgn = CreateEmptyRgn();
    if ( !GetTrueClipRgn(v42, v43) )
      goto LABEL_101;
    ClipBox = v56;
    v60 = 1;
  }
  v81 = (char *)v15 + Buf1;
  v83 = (char *)v15 + v87;
  v82 = (char *)a3 + v86;
  v84 = (char *)v88 + (_DWORD)a3;
  if ( !v69 )
  {
LABEL_83:
    if ( ClipBox != 2 )
    {
LABEL_53:
      if ( v60 || (EmptyRgn = CreateEmptyRgn(), GetTrueClipRgn(v42, v43)) )
      {
        v53 = CreateEmptyRgn();
        SetRectRgnIndirect(v53, &Buf1);
        if ( GreCombineRgn(v53, v53, EmptyRgn, 1) )
        {
          v52 = CreateEmptyRgn();
          SetRectRgnIndirect(v52, &v81);
          if ( GreCombineRgn(v52, v52, EmptyRgn, 1) )
          {
            v60 = 1;
            if ( v54 == (struct tagRECT *)1 )
              goto LABEL_113;
            v62 = CreateEmptyRgn();
            if ( GreCombineRgn(v62, v53, 0, 5) )
            {
              v30 = v62;
              GreOffsetRgn(v62, a2, a3);
              v31 = GreCombineRgn(v30, v30, v52, 1);
              v60 = v31;
              if ( (unsigned int)v54 > 1 )
              {
                v32 = (struct tagRECT *)CreateEmptyRgn();
                v58 = v32;
                if ( !v31 )
                  goto LABEL_101;
                if ( v31 != 1 )
                {
                  v50 = 0;
                  v51 = 0;
                  GetDCOrgOnScreen(v16, &v50);
                  v33 = v58;
                  GreCombineRgn(v58, v54, 0, 5);
                  GreOffsetRgn(v33, -v50, -v51);
                  v31 = GreCombineRgn(v62, v62, v33, 4);
                  v32 = v58;
                  v60 = v31;
                }
                if ( !v31 )
                  goto LABEL_101;
                if ( v31 != 1 )
                {
                  GreOffsetRgn(v32, a2, a3);
                  v31 = GreCombineRgn(v62, v62, v58, 4);
                  v60 = v31;
                }
              }
              if ( v31 )
              {
LABEL_113:
                if ( a7 )
                  goto LABEL_67;
                if ( !v55 )
                  goto LABEL_89;
                v34 = v58;
                if ( !v58 )
                {
                  v34 = (struct tagRECT *)CreateEmptyRgn();
                  v58 = v34;
                }
                v11 = v34;
                if ( v34 )
                {
LABEL_67:
                  v24 = GreCombineRgn(v11, v52, v53, 2);
                  if ( !v24 )
                    goto LABEL_101;
                  if ( v60 != 1 )
                    v24 = GreCombineRgn(v11, v11, v62, 4);
                  if ( v55 && !GreGetRgnBox(v11, v55) )
                    goto LABEL_101;
                }
                else
                {
LABEL_89:
                  v24 = v56;
                }
                if ( v60 != 1 )
                {
                  v68 = 0;
                  v69 = 0;
                  GreGetDCOrg(v16, &v68);
                  v29 = v62;
                  GreOffsetRgn(v62, v68, v69);
                  GreSelectVisRgnShared(v16, v29, 4);
                  if ( a9 )
                    GreTransformPoints(&v81, 2, 0);
                  NtGdiBitBltInternal(
                    v16,
                    v82,
                    v83 - v81,
                    v84 - v82,
                    v16,
                    v81 - (char *)v49,
                    v82 - (char *)v48,
                    13369376,
                    0,
                    0);
                  GreSelectVisRgnShared(v16, v29, 4);
                  goto LABEL_49;
                }
                goto LABEL_48;
              }
            }
          }
        }
      }
LABEL_101:
      GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
      GreDeleteObject(EmptyRgn);
      GreDeleteObject(v59);
      GreDeleteObject(v58);
      GreDeleteObject(v53);
      GreDeleteObject(v52);
      GreDeleteObject(v62);
      return 0;
    }
LABEL_31:
    if ( (unsigned int)v54 <= 1 )
    {
      Buf2[0] = Buf1;
      Buf2[1] = v86;
      v68 = v87;
      v69 = v88;
      IntersectRect(v74);
      v22 = IntersectRect(v74);
      v51 = v22;
      if ( v54 != (struct tagRECT *)1 )
      {
        v78 = (char *)a3 + v86;
        v77 = (char *)a2 + Buf1;
        v80 = (char *)v88 + (_DWORD)a3;
        v79 = (char *)a2 + v87;
        IntersectRect(&v81);
        v22 = v51;
      }
      if ( v22 )
      {
        if ( IntersectRect(&v81) )
        {
          if ( a2 && a3 )
          {
LABEL_92:
            v39 = v55;
            if ( a7 || v55 && (v58 = (struct tagRECT *)CreateEmptyRgn(), (v11 = v58) != 0) )
            {
              v40 = v59;
              if ( !v59 )
              {
                v40 = CreateEmptyRgn();
                v59 = v40;
              }
              SetRectRgnIndirect(v40, &Buf1);
              SetRectRgnIndirect(v11, &v81);
              if ( !GreCombineRgn(v11, v11, v40, 2) )
                goto LABEL_101;
              SetRectRgnIndirect(v59, &v77);
              v24 = GreCombineRgn(v11, v11, v59, 4);
              if ( !v24 || v39 && !GreGetRgnBox(v11, v39) )
                goto LABEL_101;
            }
            else
            {
              v24 = v56;
            }
            goto LABEL_43;
          }
          UnionRect(&v81);
          SubtractRect(&v77);
LABEL_38:
          v23 = v55;
          if ( v55 )
          {
            *(_DWORD *)v55 = v70;
            v23[1] = v71;
            v23[2] = v72;
            v23[3] = v73;
          }
          if ( a7 && !SetRectRgnIndirect(a7, &v70) )
            goto LABEL_101;
          v24 = 2;
          if ( (int)v70 >= v72 || v71 >= v73 )
            v24 = 1;
LABEL_43:
          v25 = v77;
          v26 = v79;
          if ( (int)v77 >= (int)v79 )
          {
            v29 = v62;
LABEL_49:
            if ( a9 && v55 )
              GreTransformPoints(v55, 2, 0);
            GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
            GreDeleteObject(EmptyRgn);
            GreDeleteObject(v59);
            GreDeleteObject(v58);
            GreDeleteObject(v53);
            GreDeleteObject(v52);
            GreDeleteObject(v29);
            return v24;
          }
          v27 = v78;
          if ( (int)v78 < (int)v80 )
          {
            v28 = v57;
            if ( a9 )
            {
              GreTransformPoints(&v77, 2, 0);
              v26 = v79;
              v27 = v78;
              v25 = v77;
            }
            NtGdiBitBltInternal(
              v28,
              v27,
              v26 - v25,
              v80 - v27,
              v28,
              v25 - (char *)v49,
              v27 - (char *)v48,
              13369376,
              0,
              0);
          }
LABEL_48:
          v29 = v62;
          goto LABEL_49;
        }
        if ( memcmp(&Buf1, Buf2, 0x10u) )
          goto LABEL_92;
        p_Buf1 = (char **)&Buf1;
      }
      else
      {
        p_Buf1 = &v81;
      }
      v70 = *p_Buf1;
      v41 = (int *)(p_Buf1 + 1);
      v71 = *v41++;
      v72 = *v41;
      v73 = v41[1];
      goto LABEL_38;
    }
    goto LABEL_53;
  }
  if ( ClipBox == 2 && (unsigned int)v54 <= 1 )
  {
    if ( !IntersectRect(&v63) )
      goto LABEL_20;
    goto LABEL_31;
  }
  if ( !v60 )
  {
    EmptyRgn = CreateEmptyRgn();
    if ( !GetTrueClipRgn(v42, v43) )
      goto LABEL_101;
    v60 = 1;
  }
  v59 = CreateEmptyRgn();
  SetRectRgnIndirect(v59, &v63);
  v20 = GreCombineRgn(EmptyRgn, v59, EmptyRgn, 1);
  ClipBox = v20;
  v56 = v20;
  if ( !v20 )
    goto LABEL_101;
  v21 = v20 - 1;
  if ( v21 )
  {
    if ( v21 == 1 )
    {
      if ( !GreGetRgnBox(EmptyRgn, v74) )
        goto LABEL_101;
      goto LABEL_31;
    }
    goto LABEL_83;
  }
LABEL_20:
  if ( a7 && !SetEmptyRgn(a7) )
    goto LABEL_101;
  v17 = v55;
  if ( v55 )
  {
    *(_DWORD *)v55 = 0;
    v18 = v17 + 1;
    *v18++ = 0;
    *v18 = 0;
    v18[1] = 0;
  }
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  GreDeleteObject(EmptyRgn);
  GreDeleteObject(v59);
  GreDeleteObject(0);
  GreDeleteObject(0);
  GreDeleteObject(0);
  GreDeleteObject(0);
  return 1;
}
