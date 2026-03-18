/*
 * XREFs of ?bRectangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_RECT@@KKPAU_RECTL@@PAU_POINTL@@@Z @ 0xBEA98
 * Callers:
 *     _EngGradientFill@40 @ 0xBE83A (_EngGradientFill@40.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?MDiv64@@YG_J_J00@Z @ 0xBEEFC (-MDiv64@@YG_J_J00@Z.c)
 *     ?bCalcGradientRectOffsets@@YGHPAU_GRADIENTRECTDATA@@@Z @ 0xBF2B0 (-bCalcGradientRectOffsets@@YGHPAU_GRADIENTRECTDATA@@@Z.c)
 *     ?bDetermineTriangleFillRoutine@@YGHPAVSURFACE@@PAVXEPALOBJ@@PAP6GX0PAU_TRIANGLEDATA@@@ZPAP6GX0PAU_GRADIENTRECTDATA@@@Z@Z @ 0xBF344 (-bDetermineTriangleFillRoutine@@YGHPAVSURFACE@@PAVXEPALOBJ@@PAP6GX0PAU_TRIANGLEDATA@@@ZPAP6GX0PA.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __userpurge bRectangleMesh@<eax>(
        unsigned int a1@<edx>,
        struct SURFACE *a2@<ecx>,
        struct SURFACE *a3,
        struct _XLATEOBJ *a4,
        struct _TRIVERTEX *a5,
        unsigned int a6,
        struct _GRADIENT_RECT *a7,
        unsigned int a8,
        _QWORD *a9,
        struct _RECTL *a10,
        struct _POINTL *a11)
{
  unsigned int v12; // esi
  unsigned int v13; // ecx
  int *v14; // esi
  int *v15; // ecx
  int *v16; // esi
  int *v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  int v21; // ecx
  int v22; // ebx
  int v23; // edi
  int v24; // esi
  int v25; // ecx
  int v26; // eax
  unsigned __int16 *v27; // edi
  int v28; // eax
  int v29; // eax
  __int64 v31; // rdi
  void (__stdcall **v32)(struct SURFACE *, struct _TRIANGLEDATA *); // [esp+0h] [ebp-144h]
  struct _GRADIENTRECTDATA *v33; // [esp+0h] [ebp-144h]
  void (__stdcall **v34)(struct SURFACE *, struct _GRADIENTRECTDATA *); // [esp+4h] [ebp-140h]
  int v35; // [esp+10h] [ebp-134h]
  int v36; // [esp+18h] [ebp-12Ch] BYREF
  int v37; // [esp+1Ch] [ebp-128h]
  struct SURFACE *v38; // [esp+20h] [ebp-124h]
  _BYTE v39[12]; // [esp+24h] [ebp-120h]
  unsigned int v40; // [esp+30h] [ebp-114h]
  struct SURFACE *v41; // [esp+34h] [ebp-110h]
  unsigned int i; // [esp+38h] [ebp-10Ch]
  int v43; // [esp+3Ch] [ebp-108h] BYREF
  __int64 v44; // [esp+40h] [ebp-104h]
  void (__stdcall *v45)(struct SURFACE *, struct _GRADIENTRECTDATA *); // [esp+48h] [ebp-FCh] BYREF
  unsigned __int16 *v46; // [esp+4Ch] [ebp-F8h]
  unsigned __int16 *v47; // [esp+50h] [ebp-F4h]
  _QWORD v48[22]; // [esp+54h] [ebp-F0h] BYREF
  int v49; // [esp+108h] [ebp-3Ch] BYREF
  int v50; // [esp+10Ch] [ebp-38h]
  int v51; // [esp+110h] [ebp-34h]
  int v52; // [esp+114h] [ebp-30h]
  int v53; // [esp+118h] [ebp-2Ch] BYREF
  int v54; // [esp+11Ch] [ebp-28h]
  int v55; // [esp+120h] [ebp-24h]
  int v56; // [esp+124h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+12Ch] [ebp-18h]

  v44 = __PAIR64__(a8, a1);
  v38 = a2;
  v41 = a3;
  v45 = 0;
  v37 = 1;
  memset(v48, 0, sizeof(v48));
  v43 = *((_DWORD *)a2 + 22);
  if ( v43 || (v43 = *(_DWORD *)(*((_DWORD *)a2 + 7) + 1112)) != 0 )
  {
    bDetermineTriangleFillRoutine((struct SURFACE *)&v36, (struct XEPALOBJ *)&v45, v32, v34);
    HIDWORD(v48[19]) = v44;
    LODWORD(v48[20]) = &v43;
    v48[18] = *a9;
    v48[0] = *(_QWORD *)HIDWORD(v44);
    v48[1] = *(_QWORD *)(HIDWORD(v44) + 8);
    for ( i = 0; ; ++i )
    {
      if ( i >= a6 )
        return v37;
      v12 = *(&a5->x + 2 * i);
      v13 = *(&a5->y + 2 * i);
      if ( v12 > (unsigned int)&a4[-1].pulXlate + 3 || v13 > (unsigned int)&a4[-1].pulXlate + 3 )
        return 0;
      v14 = (int *)((char *)v41 + 16 * v12);
      v49 = *v14++;
      v50 = *v14++;
      v51 = *v14;
      v52 = v14[1];
      v15 = (int *)((char *)v41 + 16 * v13);
      v53 = *v15;
      v54 = v15[1];
      v55 = v15[2];
      v56 = v15[3];
      v16 = &v49;
      v46 = (unsigned __int16 *)&v49;
      v17 = &v53;
      v47 = (unsigned __int16 *)&v53;
      if ( !a7 )
        break;
      if ( v50 > v54 )
      {
        v16 = &v53;
        v46 = (unsigned __int16 *)&v53;
        v17 = &v49;
        v47 = (unsigned __int16 *)&v49;
      }
      v20 = *v16;
      v21 = *v17;
      if ( *v16 > *v17 )
      {
        *v17 = v20;
        *v16 = v21;
        v20 = v21;
LABEL_13:
        v21 = *v17;
      }
      LODWORD(v48[2]) = v20;
      HIDWORD(v48[2]) = v16[1];
      LODWORD(v48[3]) = v21;
      HIDWORD(v48[3]) = v17[1];
      LODWORD(v48[19]) = a7;
      v35 = v21 - v20;
      v36 = HIDWORD(v48[3]) - HIDWORD(v48[2]);
      if ( v21 - v20 > 0 && HIDWORD(v48[3]) - HIDWORD(v48[2]) > 0 )
      {
        v22 = v46[4] << 8;
        LODWORD(v48[6]) = 0;
        HIDWORD(v48[6]) = v22;
        v23 = v46[5] << 8;
        LODWORD(v48[7]) = 0;
        HIDWORD(v48[7]) = v23;
        v24 = v46[6] << 8;
        LODWORD(v48[8]) = 0;
        HIDWORD(v48[8]) = v24;
        v25 = v46[7] << 8;
        LODWORD(v48[9]) = 0;
        HIDWORD(v48[9]) = v25;
        v26 = v47[4] << 8;
        v40 = 0;
        v46 = (unsigned __int16 *)(v26 - v22);
        *(_DWORD *)&v39[8] = (v47[5] << 8) - v23;
        v27 = v47;
        v28 = v47[6] << 8;
        *(_QWORD *)v39 = 0LL;
        v47 = (unsigned __int16 *)(v28 - v24);
        v29 = v27[7] << 8;
        LODWORD(v44) = 0;
        HIDWORD(v44) = v29 - v25;
        if ( a7 )
        {
          memset(&v48[14], 0, 32);
          v31 = v36;
          v48[10] = MDiv64(__SPAIR64__((unsigned int)v46, v40), 1LL, v36);
          v48[11] = MDiv64(*(__int64 *)&v39[4], 1LL, v31);
          v48[12] = MDiv64(__SPAIR64__((unsigned int)v47, *(unsigned int *)v39), 1LL, v31);
          v48[13] = MDiv64(v44, 1LL, v31);
        }
        else
        {
          memset(&v48[10], 0, 32);
          v48[14] = MDiv64(__SPAIR64__((unsigned int)v46, v40), 1LL, v35);
          v48[15] = MDiv64(*(__int64 *)&v39[4], 1LL, v35);
          v48[16] = MDiv64(__SPAIR64__((unsigned int)v47, *(unsigned int *)v39), 1LL, v35);
          v48[17] = MDiv64(v44, 1LL, v35);
        }
        if ( bCalcGradientRectOffsets(v33) )
        {
          if ( bUMPDSecurityGateEx() && !HIDWORD(v48[19]) && (v45 == vFillGRectDIB4 || v45 == vFillGRectDIB8) )
          {
            if ( gfUMPDDebug )
              _DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bRectangleMesh:pfnG references NULL grData.pxlo.\n",
                1957);
            return 1;
          }
          ms_exc.registration.TryLevel = 0;
          v45(v38, (struct _GRADIENTRECTDATA *)v48);
          ms_exc.registration.TryLevel = -2;
        }
      }
    }
    if ( v49 > v53 )
    {
      v16 = &v53;
      v46 = (unsigned __int16 *)&v53;
      v17 = &v49;
      v47 = (unsigned __int16 *)&v49;
    }
    v18 = v16[1];
    v19 = v17[1];
    if ( v18 > v19 )
    {
      v17[1] = v18;
      v16[1] = v19;
    }
    v20 = *v16;
    goto LABEL_13;
  }
  return v37;
}
