/*
 * XREFs of ?bRectangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_RECT@@KKPEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C00CC3A0
 * Callers:
 *     EngGradientFill @ 0x1C00CBFB0 (EngGradientFill.c)
 * Callees:
 *     ?MDiv64@@YA_J_J00@Z @ 0x1C00CC7EC (-MDiv64@@YA_J_J00@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CC838 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z @ 0x1C00CC890 (-bCalcGradientRectOffsets@@YAHPEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6AX0PEAU_GRADIENTRECTDATA@@@Z@Z @ 0x1C00CC940 (-bDetermineTriangleFillRoutine@@YAHPEAVSURFACE@@PEAVXEPALOBJ@@PEAP6AX0PEAU_TRIANGLEDATA@@@ZPEAP6.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall bRectangleMesh(
        struct SURFACE *a1,
        struct _XLATEOBJ *a2,
        struct _TRIVERTEX *a3,
        int a4,
        struct _GRADIENT_RECT *a5,
        unsigned int a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9)
{
  unsigned int v11; // r15d
  __int64 i; // rbx
  ULONG UpperLeft; // edx
  ULONG LowerRight; // ecx
  struct _TRIVERTEX *v15; // r8
  struct _TRIVERTEX *v16; // r9
  LONG x; // ecx
  LONG v18; // r10d
  int v19; // r10d
  int v20; // r11d
  void (*v21)(struct SURFACE *, struct _GRADIENTRECTDATA *); // r14
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  LONG y; // eax
  LONG v27; // ecx
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  void (*v31)(struct SURFACE *, struct _GRADIENTRECTDATA *); // [rsp+28h] [rbp-190h] BYREF
  __int64 v32; // [rsp+38h] [rbp-180h] BYREF
  __int64 v33; // [rsp+40h] [rbp-178h]
  __int64 v34; // [rsp+48h] [rbp-170h]
  __int64 v35; // [rsp+50h] [rbp-168h]
  __int64 v36; // [rsp+58h] [rbp-160h]
  struct _TRIVERTEX *v37; // [rsp+60h] [rbp-158h]
  struct _TRIVERTEX *v38; // [rsp+68h] [rbp-150h]
  struct SURFACE *v39; // [rsp+70h] [rbp-148h]
  struct _GRADIENT_RECT *v40; // [rsp+78h] [rbp-140h]
  __int64 v41; // [rsp+80h] [rbp-138h]
  void (*v42)(struct SURFACE *, struct _TRIANGLEDATA *); // [rsp+88h] [rbp-130h] BYREF
  _OWORD v43[12]; // [rsp+90h] [rbp-128h] BYREF
  struct _TRIVERTEX v44; // [rsp+150h] [rbp-68h] BYREF
  struct _TRIVERTEX v45; // [rsp+160h] [rbp-58h] BYREF

  v37 = a3;
  v39 = a1;
  v38 = a3;
  v40 = a5;
  v31 = 0LL;
  v11 = 1;
  memset(v43, 0, 0xB8uLL);
  v32 = *((_QWORD *)a1 + 16);
  if ( v32 || (v41 = *((_QWORD *)a1 + 6), (v32 = *(_QWORD *)(v41 + 1808)) != 0) )
  {
    bDetermineTriangleFillRoutine(a1, (struct XEPALOBJ *)&v32, &v42, &v31);
    *(_QWORD *)&v43[10] = a2;
    *((_QWORD *)&v43[10] + 1) = &v32;
    *(struct _POINTL *)&v43[9] = *a9;
    v43[0] = *a8;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a6 )
        return v11;
      UpperLeft = a5[i].UpperLeft;
      LowerRight = a5[i].LowerRight;
      if ( UpperLeft > a4 - 1 || LowerRight > a4 - 1 )
        return 0;
      v44 = v37[UpperLeft];
      v45 = v37[LowerRight];
      v15 = &v44;
      v16 = &v45;
      if ( !a7 )
        break;
      v16 = &v45;
      if ( v44.y > v45.y )
        v16 = &v44;
      v15 = &v44;
      if ( v44.y > v45.y )
        v15 = &v45;
      x = v15->x;
      v18 = v16->x;
      if ( v15->x > v16->x )
      {
        v16->x = x;
        v15->x = v18;
        x = v18;
LABEL_28:
        v18 = v16->x;
      }
      LODWORD(v43[1]) = x;
      DWORD1(v43[1]) = v15->y;
      DWORD2(v43[1]) = v18;
      HIDWORD(v43[1]) = v16->y;
      DWORD2(v43[9]) = a7;
      v19 = v18 - x;
      v20 = HIDWORD(v43[1]) - DWORD1(v43[1]);
      if ( v19 > 0 && v20 > 0 )
      {
        *(_QWORD *)&v43[3] = (unsigned __int64)v15->Red << 40;
        *((_QWORD *)&v43[3] + 1) = (unsigned __int64)v15->Green << 40;
        *(_QWORD *)&v43[4] = (unsigned __int64)v15->Blue << 40;
        *((_QWORD *)&v43[4] + 1) = (unsigned __int64)v15->Alpha << 40;
        v33 = ((unsigned __int64)v16->Red << 40) - *(_QWORD *)&v43[3];
        v34 = ((unsigned __int64)v16->Green << 40) - *((_QWORD *)&v43[3] + 1);
        v35 = ((unsigned __int64)v16->Blue << 40) - *(_QWORD *)&v43[4];
        v36 = ((unsigned __int64)v16->Alpha << 40) - *((_QWORD *)&v43[4] + 1);
        v21 = v31;
        if ( a7 )
        {
          memset(&v43[7], 0, 32);
          *(_QWORD *)&v43[5] = MDiv64(v33, 1LL, v20);
          *((_QWORD *)&v43[5] + 1) = MDiv64(v34, 1LL, v22);
          *(_QWORD *)&v43[6] = MDiv64(v35, 1LL, v23);
          *((_QWORD *)&v43[6] + 1) = MDiv64(v36, 1LL, v24);
        }
        else
        {
          memset(&v43[5], 0, 32);
          *(_QWORD *)&v43[7] = MDiv64(v33, 1LL, v19);
          *((_QWORD *)&v43[7] + 1) = MDiv64(v34, 1LL, v28);
          *(_QWORD *)&v43[8] = MDiv64(v35, 1LL, v29);
          *((_QWORD *)&v43[8] + 1) = MDiv64(v36, 1LL, v30);
        }
        if ( (unsigned int)bCalcGradientRectOffsets((struct _GRADIENTRECTDATA *)v43) )
        {
          if ( (unsigned int)bUMPDSecurityGateEx()
            && !*(_QWORD *)&v43[10]
            && ((char *)v21 == (char *)vFillGRectDIB4 || (char *)v21 == (char *)vFillGRectDIB8) )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bRectangleMesh:pfnG references NULL grData.pxlo.\n",
                1957);
            return 1LL;
          }
          ((void (__fastcall *)(struct SURFACE *, _OWORD *))v21)(a1, v43);
        }
      }
    }
    if ( v44.x > v45.x )
    {
      v15 = &v45;
      v16 = &v44;
    }
    y = v15->y;
    v27 = v16->y;
    if ( y > v27 )
    {
      v16->y = y;
      v15->y = v27;
    }
    x = v15->x;
    goto LABEL_28;
  }
  return v11;
}
