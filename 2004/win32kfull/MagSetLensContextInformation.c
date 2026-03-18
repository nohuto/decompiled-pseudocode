/*
 * XREFs of MagSetLensContextInformation @ 0x1C01CDBF4
 * Callers:
 *     MagSlicerControl @ 0x1C01CE994 (MagSlicerControl.c)
 *     NtUserMagSetContextInformation @ 0x1C01FF980 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpRevokeInputTransfrom @ 0x1C000EE50 (MagpRevokeInputTransfrom.c)
 *     MagpFindThreadContext @ 0x1C008E604 (MagpFindThreadContext.c)
 *     memcmp @ 0x1C01577C0 (memcmp.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CD0E4 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01CD128 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     ChangeComposableCursor @ 0x1C01D49F8 (ChangeComposableCursor.c)
 *     DwmAsyncMagnCreate @ 0x1C027510C (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C02751E4 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0275294 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x1C0275440 (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C0275500 (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x1C02756B0 (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C02758BC (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C02759BC (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0275ACC (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, double *Buf1)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v10; // edi
  _QWORD *ThreadContext; // rax
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 *v15; // rax
  __int64 *v16; // r12
  double v17; // xmm0_8
  __int64 v18; // rsi
  __int64 *v19; // rbx
  int v20; // ebx
  void *v21; // rax
  int v22; // ebx
  void *v23; // rax
  int v24; // ebx
  void *v25; // rax
  double v26; // xmm1_8
  __int64 v27; // rax
  double v28; // xmm2_8
  int v29; // ecx
  __int128 v30; // xmm1
  __int64 *v31; // rax
  __int64 *v32; // rbx
  INT v33; // edx
  INT v34; // ecx
  int *v35; // rdi
  INT v36; // eax
  _DWORD *v37; // rcx
  int v38; // edx
  __int128 v39; // xmm0
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rax
  int v43; // eax
  void *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  void *v49; // rax
  __int64 v50; // rax
  void *v51; // rax
  int v52; // eax
  void *v53; // rax
  int v54; // eax
  unsigned int *v55; // rbx
  int v56; // ecx
  unsigned int v57; // eax
  __int64 v58; // r13
  __int64 *v59; // rax
  __int64 *v60; // rax
  int v61; // edx
  __int64 *v62; // rsi
  __int64 v63; // r15
  __int64 *v64; // rbx
  void *v65; // rax
  int v66; // eax
  void *v67; // rax
  void *v68; // rax
  unsigned int v69; // eax
  void *v70; // rax
  __int64 *v71; // rax
  __int64 *v72; // rsi
  void *v73; // rax
  unsigned int v74; // eax
  void *v75; // rax
  int v76; // ebx
  __int64 *v77; // rax
  __int64 *v78; // rsi
  unsigned int v79; // ebx
  __int64 *v80; // rsi
  __int64 v81; // r11
  __int64 v82; // rdx
  int v83; // ecx
  __int64 v84; // rcx
  void *v85; // rax
  __int64 v86; // rcx
  int v87; // eax
  unsigned int v88; // eax
  unsigned int v89; // ebx
  __int64 *LensContext; // rsi
  __int64 v91; // rdi
  __int64 v92; // r15
  _QWORD *v93; // rcx
  void *v94; // rax
  __int64 v95; // rcx
  int v96; // eax
  unsigned int v97; // eax
  __int64 v99; // [rsp+30h] [rbp-30h]
  __int128 v100; // [rsp+40h] [rbp-20h] BYREF
  __int64 v101; // [rsp+50h] [rbp-10h]

  v6 = 0LL;
  *(_QWORD *)&v100 = 0LL;
  v7 = 0LL;
  v99 = 0LL;
  v8 = a4;
  v10 = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v13 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return (unsigned int)-1073741661;
  if ( a5 > 5 )
  {
    switch ( a5 )
    {
      case 6:
        v89 = *(_DWORD *)Buf1 + *((_DWORD *)Buf1 + 1);
        if ( v89 > 0x19 )
          return v10;
        if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        LensContext = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !LensContext )
          return v10;
        v91 = v89;
        if ( v89 )
        {
          v92 = Win32AllocPool(8LL * v89, 1735226197LL);
          if ( !v92 )
            return (unsigned int)-1073741801;
        }
        else
        {
          v92 = v100;
        }
        *(double *)&v100 = *Buf1;
        *((_QWORD *)&v100 + 1) = v92;
        if ( v89 )
        {
          v93 = (_QWORD *)v92;
          do
          {
            *v93 = *(_QWORD *)((char *)v93 + (_QWORD)Buf1 - v92 + 8);
            ++v93;
            --v91;
          }
          while ( v91 );
        }
        if ( (LensContext[2] & 0x20) == 0 )
        {
          v94 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL));
          v10 = DwmAsyncMagnSetWindowFilterList(v94);
          if ( (v10 & 0x80000000) != 0 )
          {
LABEL_165:
            if ( !v92 )
              return v10;
            Win32FreePool(v92);
            goto LABEL_167;
          }
        }
        v95 = LensContext[29];
        if ( v95 )
        {
          Win32FreePool(v95);
          LensContext[29] = 0LL;
        }
        *((_DWORD *)LensContext + 56) = *(_DWORD *)Buf1;
        *((_DWORD *)LensContext + 57) = *((_DWORD *)Buf1 + 1);
        v96 = *((_DWORD *)LensContext + 4);
        LensContext[29] = v92;
        if ( v89 )
          v97 = v96 | 8;
        else
          v97 = v96 & 0xFFFFFFF7;
        *((_DWORD *)LensContext + 4) = v97;
        v10 = 0;
        break;
      case 7:
        if ( *(_DWORD *)Buf1 > 6u )
          return v10;
        if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v80 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !v80 )
          return v10;
        if ( (_DWORD)v81 )
        {
          v99 = Win32AllocPool(24 * v81, 1735226197LL);
          v7 = v99;
          if ( !v99 )
            return (unsigned int)-1073741801;
        }
        v82 = 0LL;
        v83 = *(_DWORD *)Buf1;
        *(double *)((char *)&v100 + 4) = *(double *)((char *)Buf1 + 4);
        HIDWORD(v100) = *((_DWORD *)Buf1 + 3);
        LODWORD(v100) = v83;
        v101 = v7;
        if ( v83 )
        {
          do
          {
            v84 = 3 * v82;
            v82 = (unsigned int)(v82 + 1);
            *(_OWORD *)(v7 + 8 * v84) = *(_OWORD *)&Buf1[v84 + 2];
            *(double *)(v7 + 8 * v84 + 16) = Buf1[v84 + 4];
          }
          while ( (unsigned int)v82 < *(_DWORD *)Buf1 );
        }
        if ( (v80[2] & 0x20) != 0 )
        {
LABEL_139:
          v86 = v80[32];
          if ( v86 )
          {
            Win32FreePool(v86);
            v80[32] = 0LL;
          }
          *((_DWORD *)v80 + 60) = *(_DWORD *)Buf1;
          *((_DWORD *)v80 + 61) = *((_DWORD *)Buf1 + 1);
          *((_DWORD *)v80 + 62) = *((_DWORD *)Buf1 + 2);
          *((_DWORD *)v80 + 63) = *((_DWORD *)Buf1 + 3);
          v87 = *((_DWORD *)v80 + 4);
          v80[32] = v7;
          if ( *(_DWORD *)Buf1 )
            v88 = v87 | 0x10;
          else
            v88 = v87 & 0xFFFFFFEF;
          *((_DWORD *)v80 + 4) = v88;
          return 0;
        }
        v85 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL));
        v10 = DwmAsyncMagnSetWindowSharedTextures(v85);
        if ( (v10 & 0x80000000) == 0 )
        {
          v7 = v99;
          goto LABEL_139;
        }
        break;
      case 9:
        v76 = *(_DWORD *)Buf1;
        if ( (*(_DWORD *)Buf1 & 0xFFFFFFFE) != 0 )
          return v10;
        if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v77 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v78 = v77;
        if ( !v77 )
          return v10;
        v79 = v76 & 1;
        if ( ((*((_DWORD *)v77 + 4) >> 6) & 1) != v79 )
        {
          ChangeComposableCursor(v79);
          *((_DWORD *)v78 + 4) = v78[2] & 0xFFFFFFBF | (v79 << 6);
        }
        return 0;
      case 10:
        if ( !a3 )
          return v10;
        v71 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v72 = v71;
        if ( !v71 )
          return v10;
        if ( a3 == -1 )
        {
          v73 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL));
          v74 = DwmAsyncMagnSetDesktopSamplingMode(v73);
        }
        else
        {
          if ( (v71[2] & 0x20) != 0 )
          {
            v10 = 0;
            goto LABEL_122;
          }
          v75 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL));
          v74 = DwmAsyncMagnSetSamplingMode(v75);
        }
        v10 = v74;
LABEL_122:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *((_DWORD *)v72 + 66) = *(_DWORD *)Buf1;
        return 0;
      default:
        return v10;
    }
    if ( !v99 )
      return v10;
    Win32FreePool(v99);
    v92 = 0LL;
    goto LABEL_165;
  }
  if ( a5 == 5 )
  {
    if ( !a3 )
      return v10;
    v60 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v62 = v60;
    if ( !v60 )
      return v10;
    if ( a3 == -1 )
    {
      v63 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL);
      v64 = *(__int64 **)(v63 + 232);
      if ( !memcmp(Buf1, &gMagEffectIdentity, (unsigned int)(v61 + 101)) )
      {
        if ( v64 )
        {
          if ( v64 != v62 )
            return v10;
          v65 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v63 + 8));
          v10 = DwmAsyncMagnSetDesktopColorTransform(v65);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 232LL) = 0LL;
          goto LABEL_100;
        }
        goto LABEL_99;
      }
      if ( !v64 )
      {
        v67 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v63 + 8));
        v10 = DwmAsyncMagnSetDesktopColorTransform(v67);
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 232LL) = v62;
        goto LABEL_100;
      }
      if ( v64 != v62 )
        return v10;
      v68 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v63 + 8));
      v69 = DwmAsyncMagnSetDesktopColorTransform(v68);
    }
    else
    {
      if ( (v60[2] & 0x20) != 0 )
      {
LABEL_99:
        v10 = 0;
LABEL_100:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_OWORD *)(v62 + 15) = *(_OWORD *)Buf1;
        *(_OWORD *)(v62 + 17) = *((_OWORD *)Buf1 + 1);
        *(_OWORD *)(v62 + 19) = *((_OWORD *)Buf1 + 2);
        *(_OWORD *)(v62 + 21) = *((_OWORD *)Buf1 + 3);
        *(_OWORD *)(v62 + 23) = *((_OWORD *)Buf1 + 4);
        *(_OWORD *)(v62 + 25) = *((_OWORD *)Buf1 + 5);
        v66 = *((_DWORD *)Buf1 + 24);
        *((_DWORD *)v62 + 4) |= 4u;
        *((_DWORD *)v62 + 54) = v66;
        return 0;
      }
      v70 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL));
      v69 = DwmAsyncMagnSetWindowColorTransform(v70);
    }
    v10 = v69;
    goto LABEL_100;
  }
  if ( !a5 )
  {
    if ( !a3 || MagpFindLensContext((__int64)ThreadContext, a3, 2) )
      return v10;
    v6 = Win32AllocPool(272LL, 1735226197LL);
    if ( v6 )
    {
      if ( a3 != -1 )
      {
        v53 = (void *)ReferenceDwmApiPort(*(unsigned int *)(*(_QWORD *)(a3 + 40) + 288LL));
        v54 = DwmAsyncMagnCreate(v53);
        v10 = v54;
        if ( v54 != -1073741823 && v54 < 0 )
          goto LABEL_167;
        v8 = a4;
      }
      v55 = (unsigned int *)(v6 + 16);
      memset((void *)(v6 + 16), 0, 0x100uLL);
      *(double *)(v6 + 40) = gOneDouble;
      *(double *)(v6 + 48) = gOneDouble;
      if ( a3 == -1 )
      {
        *(_QWORD *)(v6 + 24) = -1LL;
      }
      else
      {
        *(_QWORD *)&v100 = v6 + 24;
        *((_QWORD *)&v100 + 1) = a3;
        HMAssignmentLock(&v100);
      }
      v56 = 0;
      if ( v8 == 1 )
        v56 = 128;
      v57 = *v55;
      *(_DWORD *)(v6 + 264) = 0;
      v58 = v13 + 40;
      *v55 = v57 & 0xFFFFFF7F | v56;
      v59 = *(__int64 **)(v58 + 8);
      if ( *v59 == v58 )
      {
        *(_QWORD *)v6 = v58;
        *(_QWORD *)(v6 + 8) = v59;
        *v59 = v6;
        *(_QWORD *)(v58 + 8) = v6;
        return 0;
      }
LABEL_88:
      __fastfail(3u);
    }
    return (unsigned int)-1073741801;
  }
  if ( a5 != 1 )
  {
    if ( a5 != 2 )
    {
      if ( a5 != 3 )
      {
        if ( a5 == 4 )
        {
          if ( *((_DWORD *)Buf1 + 8) == 3 )
            return (unsigned int)MagpRevokeInputTransfrom();
          else
            return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1);
        }
        return v10;
      }
      if ( !a3 )
        return v10;
      v15 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
      v16 = v15;
      if ( !v15 )
        return v10;
      v17 = *Buf1;
      if ( a3 == -1 )
      {
        if ( v17 != Buf1[1] )
          return v10;
        v18 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL);
        v19 = *(__int64 **)(v18 + 224);
        if ( memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) )
        {
          if ( v19 )
          {
            if ( v16 != v19 )
              return v10;
            v24 = (int)Buf1[3];
            v25 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v18 + 8));
            v10 = DwmAsyncMagnSetDesktopTransform(v25, v24);
          }
          else
          {
            v22 = (int)Buf1[3];
            v23 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v18 + 8));
            v10 = DwmAsyncMagnSetDesktopTransform(v23, v22);
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 224LL) = v16;
          }
          goto LABEL_33;
        }
        if ( v19 )
        {
          if ( v16 != v19 )
            return v10;
          v20 = (int)Buf1[3];
          v21 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v18 + 8));
          v10 = DwmAsyncMagnSetDesktopTransform(v21, v20);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 224LL) = 0LL;
          goto LABEL_33;
        }
      }
      else
      {
        *((double *)v15 + 5) = v17;
        v15[6] = *((_QWORD *)Buf1 + 1);
        v26 = Buf1[2];
        v27 = v15[3];
        *((double *)v16 + 7) = v26;
        v28 = Buf1[3];
        *((double *)v16 + 8) = v28;
        if ( (*(_DWORD *)(*(_QWORD *)(v27 + 40) + 288LL) & 0xF) == 0 )
        {
          v29 = *(unsigned __int16 *)(gpsi + 6998LL);
          if ( (unsigned __int16)v29 > 0x60u )
          {
            *((double *)v16 + 7) = (double)v29 * v26 / 96.0;
            *((double *)v16 + 8) = (double)*(unsigned __int16 *)(gpsi + 6998LL) * v28 / 96.0;
            *((double *)v16 + 5) = *Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
            *((double *)v16 + 6) = Buf1[1] * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
          }
        }
      }
      v10 = 0;
LABEL_33:
      if ( (v10 & 0x80000000) != 0 )
        return v10;
      *(_OWORD *)(v16 + 11) = *(_OWORD *)Buf1;
      v30 = *((_OWORD *)Buf1 + 1);
      *((_DWORD *)v16 + 4) |= 2u;
      *(_OWORD *)(v16 + 13) = v30;
      return 0;
    }
    if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v10;
    v31 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v32 = v31;
    if ( !v31 )
      return v10;
    if ( (*(_DWORD *)(*(_QWORD *)(v31[3] + 40) + 288LL) & 0xF) != 0
      || (v33 = *(unsigned __int16 *)(gpsi + 6998LL), (unsigned __int16)v33 <= 0x60u) )
    {
      v38 = *(_DWORD *)Buf1;
      v35 = (int *)(v31 + 2);
      v37 = v31 + 2;
      if ( (v31[2] & 2) != 0 )
      {
        *((_DWORD *)v31 + 8) = -(int)((double)v38 * *((double *)v31 + 11));
        v36 = (int)((double)*((int *)Buf1 + 1) * *((double *)v31 + 12));
      }
      else
      {
        *((_DWORD *)v31 + 8) = -v38;
        v36 = *((_DWORD *)Buf1 + 1);
      }
    }
    else
    {
      v34 = *(_DWORD *)Buf1;
      v35 = (int *)(v31 + 2);
      if ( (v31[2] & 2) != 0 )
      {
        *((_DWORD *)v31 + 8) = -(int)((double)v34 * *((double *)v31 + 11));
        v36 = (int)((double)*((int *)Buf1 + 1) * *((double *)v31 + 12));
      }
      else
      {
        *((_DWORD *)v31 + 8) = -EngMulDiv(v34, v33, 96);
        v36 = EngMulDiv(*((_DWORD *)Buf1 + 1), *(unsigned __int16 *)(gpsi + 6998LL), 96);
      }
      v37 = v32 + 2;
    }
    *((_DWORD *)v32 + 9) = -v36;
    v39 = *(_OWORD *)Buf1;
    *v35 = *v37 | 1;
    *(_OWORD *)(v32 + 9) = v39;
    return 0;
  }
  MagpRevokeInputTransfrom();
  if ( !a3 )
    return v10;
  v40 = MagpFindLensContext(v13, a3, v8);
  v6 = (__int64)v40;
  if ( !v40 )
    return v10;
  v41 = *v40;
  v42 = (__int64 *)v40[1];
  if ( *(_QWORD *)(v41 + 8) != v6 || *v42 != v6 )
    goto LABEL_88;
  *v42 = v41;
  *(_QWORD *)(v41 + 8) = v42;
  if ( a3 != -1 )
  {
    v43 = *(_DWORD *)(v6 + 16);
    if ( (v43 & 0x40) != 0 )
    {
      ChangeComposableCursor(0LL);
      *(_DWORD *)(v6 + 16) &= ~0x40u;
      v43 = *(_DWORD *)(v6 + 16);
    }
    if ( (v43 & 0x20) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v44 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 8LL));
      v10 = DwmAsyncMagnDestroy(v44);
    }
    HMAssignmentUnlock(v6 + 24);
    v45 = *(_QWORD *)(v6 + 232);
    if ( v45 )
      Win32FreePool(v45);
    v46 = *(_QWORD *)(v6 + 256);
    if ( v46 )
      Win32FreePool(v46);
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_167;
    goto LABEL_72;
  }
  v47 = *(_QWORD *)(v13 + 16);
  v48 = *(_QWORD *)(v47 + 448);
  if ( *(_QWORD *)(v48 + 232) == v6 )
  {
    v49 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v48 + 8));
    v10 = DwmAsyncMagnSetDesktopColorTransform(v49);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 232LL) = 0LL;
    v47 = *(_QWORD *)(v13 + 16);
  }
  else
  {
    v10 = 0;
  }
  v50 = *(_QWORD *)(v47 + 448);
  if ( *(_QWORD *)(v50 + 224) == v6 )
  {
    v51 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v50 + 8));
    v52 = DwmAsyncMagnSetDesktopTransform(v51, 0);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 16) + 448LL) + 224LL) = 0LL;
  }
  else
  {
    v52 = 0;
  }
  if ( (v10 & 0x80000000) == 0 )
  {
    if ( v52 >= 0 )
    {
LABEL_72:
      v10 = 0;
      goto LABEL_167;
    }
    v10 = v52;
  }
LABEL_167:
  if ( v6 )
    Win32FreePool(v6);
  return v10;
}
