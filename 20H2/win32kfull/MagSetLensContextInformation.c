/*
 * XREFs of MagSetLensContextInformation @ 0x1C01CCDE4
 * Callers:
 *     MagSlicerControl @ 0x1C01CDB84 (MagSlicerControl.c)
 *     NtUserMagSetContextInformation @ 0x1C01FEB10 (NtUserMagSetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C00D39A4 (MagpFindThreadContext.c)
 *     MagpRevokeInputTransfrom @ 0x1C0128AB0 (MagpRevokeInputTransfrom.c)
 *     memcmp @ 0x1C015A120 (memcmp.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CC2D0 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     ?MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01CC314 (-MagpUpdateInputTransfrom@@YAJPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     ChangeComposableCursor @ 0x1C01D3BE8 (ChangeComposableCursor.c)
 *     DwmAsyncMagnCreate @ 0x1C0273BA4 (DwmAsyncMagnCreate.c)
 *     DwmAsyncMagnDestroy @ 0x1C0273C7C (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0273D2C (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopSamplingMode @ 0x1C0273ED8 (DwmAsyncMagnSetDesktopSamplingMode.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C0273F98 (DwmAsyncMagnSetDesktopTransform.c)
 *     DwmAsyncMagnSetSamplingMode @ 0x1C0274148 (DwmAsyncMagnSetSamplingMode.c)
 *     DwmAsyncMagnSetWindowColorTransform @ 0x1C0274354 (DwmAsyncMagnSetWindowColorTransform.c)
 *     DwmAsyncMagnSetWindowFilterList @ 0x1C0274454 (DwmAsyncMagnSetWindowFilterList.c)
 *     DwmAsyncMagnSetWindowSharedTextures @ 0x1C0274564 (DwmAsyncMagnSetWindowSharedTextures.c)
 */

__int64 __fastcall MagSetLensContextInformation(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5, double *Buf1)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  int v8; // esi
  unsigned int v10; // edi
  _QWORD *ThreadContext; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 *v16; // rax
  __int64 *v17; // r12
  double v18; // xmm0_8
  __int64 v19; // rsi
  __int64 *v20; // rbx
  int v21; // ebx
  void *v22; // rax
  int v23; // ebx
  void *v24; // rax
  int v25; // ebx
  void *v26; // rax
  double v27; // xmm1_8
  __int64 v28; // rax
  double v29; // xmm2_8
  int v30; // ecx
  __int128 v31; // xmm1
  __int64 *v32; // rax
  __int64 *v33; // rbx
  INT v34; // edx
  INT v35; // ecx
  int *v36; // rdi
  INT v37; // eax
  _DWORD *v38; // rcx
  int v39; // edx
  __int128 v40; // xmm0
  __int64 *v41; // rax
  __int64 v42; // rcx
  __int64 *v43; // rax
  int v44; // eax
  void *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  void *v50; // rax
  __int64 v51; // rax
  void *v52; // rax
  int v53; // eax
  void *v54; // rax
  int v55; // eax
  unsigned int *v56; // rbx
  int v57; // ecx
  unsigned int v58; // eax
  __int64 v59; // r13
  __int64 *v60; // rax
  __int64 *v61; // rax
  int v62; // edx
  __int64 *v63; // rsi
  __int64 v64; // r15
  __int64 *v65; // rbx
  void *v66; // rax
  int v67; // eax
  void *v68; // rax
  void *v69; // rax
  unsigned int v70; // eax
  void *v71; // rax
  __int64 *v72; // rax
  __int64 *v73; // rsi
  void *v74; // rax
  unsigned int v75; // eax
  void *v76; // rax
  int v77; // ebx
  __int64 *v78; // rax
  __int64 *v79; // rsi
  unsigned int v80; // ebx
  __int64 *v81; // rsi
  __int64 v82; // r11
  __int64 v83; // rdx
  int v84; // ecx
  __int64 v85; // rcx
  void *v86; // rax
  __int64 v87; // rcx
  int v88; // eax
  unsigned int v89; // eax
  unsigned int v90; // ebx
  __int64 *LensContext; // rsi
  __int64 v92; // rdi
  __int64 v93; // r15
  _QWORD *v94; // rcx
  void *v95; // rax
  __int64 v96; // rcx
  int v97; // eax
  unsigned int v98; // eax
  __int64 v100; // [rsp+30h] [rbp-30h]
  __int128 v101; // [rsp+40h] [rbp-20h] BYREF
  __int64 v102; // [rsp+50h] [rbp-10h]

  v6 = 0LL;
  *(_QWORD *)&v101 = 0LL;
  v7 = 0LL;
  v100 = 0LL;
  v8 = a4;
  v10 = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v14 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return (unsigned int)-1073741661;
  if ( a5 > 5 )
  {
    switch ( a5 )
    {
      case 6:
        v90 = *(_DWORD *)Buf1 + *((_DWORD *)Buf1 + 1);
        if ( v90 > 0x19 )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        LensContext = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !LensContext )
          return v10;
        v92 = v90;
        if ( v90 )
        {
          v93 = Win32AllocPool(8LL * v90, 1735226197LL);
          if ( !v93 )
            return (unsigned int)-1073741801;
        }
        else
        {
          v93 = v101;
        }
        *(double *)&v101 = *Buf1;
        *((_QWORD *)&v101 + 1) = v93;
        if ( v90 )
        {
          v94 = (_QWORD *)v93;
          do
          {
            *v94 = *(_QWORD *)((char *)v94 + (_QWORD)Buf1 - v93 + 8);
            ++v94;
            --v92;
          }
          while ( v92 );
        }
        if ( (LensContext[2] & 0x20) == 0 )
        {
          v95 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL));
          v10 = DwmAsyncMagnSetWindowFilterList(v95);
          if ( (v10 & 0x80000000) != 0 )
          {
LABEL_165:
            if ( !v93 )
              return v10;
            Win32FreePool(v93);
            goto LABEL_167;
          }
        }
        v96 = LensContext[29];
        if ( v96 )
        {
          Win32FreePool(v96);
          LensContext[29] = 0LL;
        }
        *((_DWORD *)LensContext + 56) = *(_DWORD *)Buf1;
        *((_DWORD *)LensContext + 57) = *((_DWORD *)Buf1 + 1);
        v97 = *((_DWORD *)LensContext + 4);
        LensContext[29] = v93;
        if ( v90 )
          v98 = v97 | 8;
        else
          v98 = v97 & 0xFFFFFFF7;
        *((_DWORD *)LensContext + 4) = v98;
        v10 = 0;
        break;
      case 7:
        if ( *(_DWORD *)Buf1 > 6u )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v81 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        if ( !v81 )
          return v10;
        if ( (_DWORD)v82 )
        {
          v100 = Win32AllocPool(24 * v82, 1735226197LL);
          v7 = v100;
          if ( !v100 )
            return (unsigned int)-1073741801;
        }
        v83 = 0LL;
        v84 = *(_DWORD *)Buf1;
        *(double *)((char *)&v101 + 4) = *(double *)((char *)Buf1 + 4);
        HIDWORD(v101) = *((_DWORD *)Buf1 + 3);
        LODWORD(v101) = v84;
        v102 = v7;
        if ( v84 )
        {
          do
          {
            v85 = 3 * v83;
            v83 = (unsigned int)(v83 + 1);
            *(_OWORD *)(v7 + 8 * v85) = *(_OWORD *)&Buf1[v85 + 2];
            *(double *)(v7 + 8 * v85 + 16) = Buf1[v85 + 4];
          }
          while ( (unsigned int)v83 < *(_DWORD *)Buf1 );
        }
        if ( (v81[2] & 0x20) != 0 )
        {
LABEL_139:
          v87 = v81[32];
          if ( v87 )
          {
            Win32FreePool(v87);
            v81[32] = 0LL;
          }
          *((_DWORD *)v81 + 60) = *(_DWORD *)Buf1;
          *((_DWORD *)v81 + 61) = *((_DWORD *)Buf1 + 1);
          *((_DWORD *)v81 + 62) = *((_DWORD *)Buf1 + 2);
          *((_DWORD *)v81 + 63) = *((_DWORD *)Buf1 + 3);
          v88 = *((_DWORD *)v81 + 4);
          v81[32] = v7;
          if ( *(_DWORD *)Buf1 )
            v89 = v88 | 0x10;
          else
            v89 = v88 & 0xFFFFFFEF;
          *((_DWORD *)v81 + 4) = v89;
          return 0;
        }
        v86 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL));
        v10 = DwmAsyncMagnSetWindowSharedTextures(v86);
        if ( (v10 & 0x80000000) == 0 )
        {
          v7 = v100;
          goto LABEL_139;
        }
        break;
      case 9:
        v77 = *(_DWORD *)Buf1;
        if ( (*(_DWORD *)Buf1 & 0xFFFFFFFE) != 0 )
          return v10;
        if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return v10;
        v78 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v79 = v78;
        if ( !v78 )
          return v10;
        v80 = v77 & 1;
        if ( ((*((_DWORD *)v78 + 4) >> 6) & 1) != v80 )
        {
          ChangeComposableCursor(v80);
          *((_DWORD *)v79 + 4) = v79[2] & 0xFFFFFFBF | (v80 << 6);
        }
        return 0;
      case 10:
        if ( !a3 )
          return v10;
        v72 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
        v73 = v72;
        if ( !v72 )
          return v10;
        if ( a3 == -1 )
        {
          v74 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL));
          v75 = DwmAsyncMagnSetDesktopSamplingMode(v74);
        }
        else
        {
          if ( (v72[2] & 0x20) != 0 )
          {
            v10 = 0;
            goto LABEL_122;
          }
          v76 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL));
          v75 = DwmAsyncMagnSetSamplingMode(v76);
        }
        v10 = v75;
LABEL_122:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *((_DWORD *)v73 + 66) = *(_DWORD *)Buf1;
        return 0;
      default:
        return v10;
    }
    if ( !v100 )
      return v10;
    Win32FreePool(v100);
    v93 = 0LL;
    goto LABEL_165;
  }
  if ( a5 == 5 )
  {
    if ( !a3 )
      return v10;
    v61 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v63 = v61;
    if ( !v61 )
      return v10;
    if ( a3 == -1 )
    {
      v64 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL);
      v65 = *(__int64 **)(v64 + 232);
      if ( !memcmp(Buf1, &gMagEffectIdentity, (unsigned int)(v62 + 101)) )
      {
        if ( v65 )
        {
          if ( v65 != v63 )
            return v10;
          v66 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v64 + 8));
          v10 = DwmAsyncMagnSetDesktopColorTransform(v66);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 232LL) = 0LL;
          goto LABEL_100;
        }
        goto LABEL_99;
      }
      if ( !v65 )
      {
        v68 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v64 + 8));
        v10 = DwmAsyncMagnSetDesktopColorTransform(v68);
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 232LL) = v63;
        goto LABEL_100;
      }
      if ( v65 != v63 )
        return v10;
      v69 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v64 + 8));
      v70 = DwmAsyncMagnSetDesktopColorTransform(v69);
    }
    else
    {
      if ( (v61[2] & 0x20) != 0 )
      {
LABEL_99:
        v10 = 0;
LABEL_100:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        *(_OWORD *)(v63 + 15) = *(_OWORD *)Buf1;
        *(_OWORD *)(v63 + 17) = *((_OWORD *)Buf1 + 1);
        *(_OWORD *)(v63 + 19) = *((_OWORD *)Buf1 + 2);
        *(_OWORD *)(v63 + 21) = *((_OWORD *)Buf1 + 3);
        *(_OWORD *)(v63 + 23) = *((_OWORD *)Buf1 + 4);
        *(_OWORD *)(v63 + 25) = *((_OWORD *)Buf1 + 5);
        v67 = *((_DWORD *)Buf1 + 24);
        *((_DWORD *)v63 + 4) |= 4u;
        *((_DWORD *)v63 + 54) = v67;
        return 0;
      }
      v71 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL));
      v70 = DwmAsyncMagnSetWindowColorTransform(v71);
    }
    v10 = v70;
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
        v54 = (void *)ReferenceDwmApiPort(*(unsigned int *)(*(_QWORD *)(a3 + 40) + 288LL));
        v55 = DwmAsyncMagnCreate(v54);
        v10 = v55;
        if ( v55 != -1073741823 && v55 < 0 )
          goto LABEL_167;
        v8 = a4;
      }
      v56 = (unsigned int *)(v6 + 16);
      memset((void *)(v6 + 16), 0, 0x100uLL);
      *(double *)(v6 + 40) = gOneDouble;
      *(double *)(v6 + 48) = gOneDouble;
      if ( a3 == -1 )
      {
        *(_QWORD *)(v6 + 24) = -1LL;
      }
      else
      {
        *(_QWORD *)&v101 = v6 + 24;
        *((_QWORD *)&v101 + 1) = a3;
        HMAssignmentLock(&v101);
      }
      v57 = 0;
      if ( v8 == 1 )
        v57 = 128;
      v58 = *v56;
      *(_DWORD *)(v6 + 264) = 0;
      v59 = v14 + 40;
      *v56 = v58 & 0xFFFFFF7F | v57;
      v60 = *(__int64 **)(v59 + 8);
      if ( *v60 == v59 )
      {
        *(_QWORD *)v6 = v59;
        *(_QWORD *)(v6 + 8) = v60;
        *v60 = v6;
        *(_QWORD *)(v59 + 8) = v6;
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
            return (unsigned int)MagpUpdateInputTransfrom((struct _MAGN_INPUT_TRANSFORM *)Buf1, v12, v13);
        }
        return v10;
      }
      if ( !a3 )
        return v10;
      v16 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
      v17 = v16;
      if ( !v16 )
        return v10;
      v18 = *Buf1;
      if ( a3 == -1 )
      {
        if ( v18 != Buf1[1] )
          return v10;
        v19 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL);
        v20 = *(__int64 **)(v19 + 224);
        if ( memcmp(Buf1, &gMagOutTransformIdentity, 0x20uLL) )
        {
          if ( v20 )
          {
            if ( v17 != v20 )
              return v10;
            v25 = (int)Buf1[3];
            v26 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v19 + 8));
            v10 = DwmAsyncMagnSetDesktopTransform(v26, v25);
          }
          else
          {
            v23 = (int)Buf1[3];
            v24 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v19 + 8));
            v10 = DwmAsyncMagnSetDesktopTransform(v24, v23);
            if ( (v10 & 0x80000000) != 0 )
              return v10;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 224LL) = v17;
          }
          goto LABEL_33;
        }
        if ( v20 )
        {
          if ( v17 != v20 )
            return v10;
          v21 = (int)Buf1[3];
          v22 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v19 + 8));
          v10 = DwmAsyncMagnSetDesktopTransform(v22, v21);
          if ( (v10 & 0x80000000) != 0 )
            return v10;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 224LL) = 0LL;
          goto LABEL_33;
        }
      }
      else
      {
        *((double *)v16 + 5) = v18;
        v16[6] = *((_QWORD *)Buf1 + 1);
        v27 = Buf1[2];
        v28 = v16[3];
        *((double *)v17 + 7) = v27;
        v29 = Buf1[3];
        *((double *)v17 + 8) = v29;
        if ( (*(_DWORD *)(*(_QWORD *)(v28 + 40) + 288LL) & 0xF) == 0 )
        {
          v30 = *(unsigned __int16 *)(gpsi + 6998LL);
          if ( (unsigned __int16)v30 > 0x60u )
          {
            *((double *)v17 + 7) = (double)v30 * v27 / 96.0;
            *((double *)v17 + 8) = (double)*(unsigned __int16 *)(gpsi + 6998LL) * v29 / 96.0;
            *((double *)v17 + 5) = *Buf1 * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
            *((double *)v17 + 6) = Buf1[1] * 96.0 / (double)*(unsigned __int16 *)(gpsi + 6998LL);
          }
        }
      }
      v10 = 0;
LABEL_33:
      if ( (v10 & 0x80000000) != 0 )
        return v10;
      *(_OWORD *)(v17 + 11) = *(_OWORD *)Buf1;
      v31 = *((_OWORD *)Buf1 + 1);
      *((_DWORD *)v17 + 4) |= 2u;
      *(_OWORD *)(v17 + 13) = v31;
      return 0;
    }
    if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      return v10;
    v32 = MagpFindLensContext((__int64)ThreadContext, a3, v8);
    v33 = v32;
    if ( !v32 )
      return v10;
    if ( (*(_DWORD *)(*(_QWORD *)(v32[3] + 40) + 288LL) & 0xF) != 0
      || (v34 = *(unsigned __int16 *)(gpsi + 6998LL), (unsigned __int16)v34 <= 0x60u) )
    {
      v39 = *(_DWORD *)Buf1;
      v36 = (int *)(v32 + 2);
      v38 = v32 + 2;
      if ( (v32[2] & 2) != 0 )
      {
        *((_DWORD *)v32 + 8) = -(int)((double)v39 * *((double *)v32 + 11));
        v37 = (int)((double)*((int *)Buf1 + 1) * *((double *)v32 + 12));
      }
      else
      {
        *((_DWORD *)v32 + 8) = -v39;
        v37 = *((_DWORD *)Buf1 + 1);
      }
    }
    else
    {
      v35 = *(_DWORD *)Buf1;
      v36 = (int *)(v32 + 2);
      if ( (v32[2] & 2) != 0 )
      {
        *((_DWORD *)v32 + 8) = -(int)((double)v35 * *((double *)v32 + 11));
        v37 = (int)((double)*((int *)Buf1 + 1) * *((double *)v32 + 12));
      }
      else
      {
        *((_DWORD *)v32 + 8) = -EngMulDiv(v35, v34, 96);
        v37 = EngMulDiv(*((_DWORD *)Buf1 + 1), *(unsigned __int16 *)(gpsi + 6998LL), 96);
      }
      v38 = v33 + 2;
    }
    *((_DWORD *)v33 + 9) = -v37;
    v40 = *(_OWORD *)Buf1;
    *v36 = *v38 | 1;
    *(_OWORD *)(v33 + 9) = v40;
    return 0;
  }
  MagpRevokeInputTransfrom();
  if ( !a3 )
    return v10;
  v41 = MagpFindLensContext(v14, a3, v8);
  v6 = (__int64)v41;
  if ( !v41 )
    return v10;
  v42 = *v41;
  v43 = (__int64 *)v41[1];
  if ( *(_QWORD *)(v42 + 8) != v6 || *v43 != v6 )
    goto LABEL_88;
  *v43 = v42;
  *(_QWORD *)(v42 + 8) = v43;
  if ( a3 != -1 )
  {
    v44 = *(_DWORD *)(v6 + 16);
    if ( (v44 & 0x40) != 0 )
    {
      ChangeComposableCursor(0LL);
      *(_DWORD *)(v6 + 16) &= ~0x40u;
      v44 = *(_DWORD *)(v6 + 16);
    }
    if ( (v44 & 0x20) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v45 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 8LL));
      v10 = DwmAsyncMagnDestroy(v45);
    }
    HMAssignmentUnlock(v6 + 24);
    v46 = *(_QWORD *)(v6 + 232);
    if ( v46 )
      Win32FreePool(v46);
    v47 = *(_QWORD *)(v6 + 256);
    if ( v47 )
      Win32FreePool(v47);
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_167;
    goto LABEL_72;
  }
  v48 = *(_QWORD *)(v14 + 16);
  v49 = *(_QWORD *)(v48 + 456);
  if ( *(_QWORD *)(v49 + 232) == v6 )
  {
    v50 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v49 + 8));
    v10 = DwmAsyncMagnSetDesktopColorTransform(v50);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 232LL) = 0LL;
    v48 = *(_QWORD *)(v14 + 16);
  }
  else
  {
    v10 = 0;
  }
  v51 = *(_QWORD *)(v48 + 456);
  if ( *(_QWORD *)(v51 + 224) == v6 )
  {
    v52 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v51 + 8));
    v53 = DwmAsyncMagnSetDesktopTransform(v52, 0);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 456LL) + 224LL) = 0LL;
  }
  else
  {
    v53 = 0;
  }
  if ( (v10 & 0x80000000) == 0 )
  {
    if ( v53 >= 0 )
    {
LABEL_72:
      v10 = 0;
      goto LABEL_167;
    }
    v10 = v53;
  }
LABEL_167:
  if ( v6 )
    Win32FreePool(v6);
  return v10;
}
