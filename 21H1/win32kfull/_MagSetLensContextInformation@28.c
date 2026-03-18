/*
 * XREFs of _MagSetLensContextInformation@28 @ 0x13D036
 * Callers:
 *     _MagSlicerControl@24 @ 0x13DD42 (_MagSlicerControl@24.c)
 *     _NtUserMagSetContextInformation@16 @ 0x1667BD (_NtUserMagSetContextInformation@16.c)
 * Callees:
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     __SetMagnificationInputTransform@4 @ 0xCF572 (__SetMagnificationInputTransform@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __ftol2_sse @ 0xF9210 (__ftol2_sse.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?MagpFindLensContext@@YGPAU_MAG_LENS_CONTEXT@@PAU_MAG_THREAD_CONTEXT@@PAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x13C834 (-MagpFindLensContext@@YGPAU_MAG_LENS_CONTEXT@@PAU_MAG_THREAD_CONTEXT@@PAUtagWND@@W4_MAG_LENS_CON.c)
 *     _ChangeComposableCursor@4 @ 0x143332 (_ChangeComposableCursor@4.c)
 *     _DwmAsyncMagnCreate@16 @ 0x1D1B28 (_DwmAsyncMagnCreate@16.c)
 *     _DwmAsyncMagnDestroy@12 @ 0x1D1BC5 (_DwmAsyncMagnDestroy@12.c)
 *     _DwmAsyncMagnSetDesktopColorTransform@12 @ 0x1D1C57 (_DwmAsyncMagnSetDesktopColorTransform@12.c)
 *     _DwmAsyncMagnSetDesktopSamplingMode@12 @ 0x1D1D7C (_DwmAsyncMagnSetDesktopSamplingMode@12.c)
 *     _DwmAsyncMagnSetDesktopTransform@20 @ 0x1D1E08 (_DwmAsyncMagnSetDesktopTransform@20.c)
 *     _DwmAsyncMagnSetSamplingMode@16 @ 0x1D1EA8 (_DwmAsyncMagnSetSamplingMode@16.c)
 *     _DwmAsyncMagnSetWindowColorTransform@16 @ 0x1D206A (_DwmAsyncMagnSetWindowColorTransform@16.c)
 *     _DwmAsyncMagnSetWindowFilterList@16 @ 0x1D211E (_DwmAsyncMagnSetWindowFilterList@16.c)
 *     _DwmAsyncMagnSetWindowSharedTextures@16 @ 0x1D2220 (_DwmAsyncMagnSetWindowSharedTextures@16.c)
 */

NTSTATUS __fastcall MagSetLensContextInformation(_DWORD *a1, int a2, int a3, int a4, int a5, int *Buf1, int a7)
{
  int *v7; // ebx
  int v8; // edx
  NTSTATUS v9; // edi
  _DWORD *v10; // eax
  int v11; // esi
  _DWORD *v12; // edi
  void *v13; // eax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  _DWORD *v18; // eax
  _DWORD *LensContext; // eax
  int v20; // edx
  _DWORD *v21; // ecx
  int v22; // eax
  void *v23; // eax
  int v24; // ecx
  void *v25; // eax
  void *v26; // eax
  int v27; // eax
  _DWORD *v28; // esi
  INT v29; // eax
  _DWORD *v30; // edi
  double v31; // st7
  INT v32; // eax
  NTSTATUS v33; // eax
  double v34; // st7
  bool v35; // zf
  int v36; // eax
  double *v37; // ecx
  void *v38; // eax
  double *v39; // esi
  double *v40; // ecx
  void *v41; // eax
  void *v42; // eax
  int v43; // eax
  double v44; // st7
  double v45; // st6
  int v46; // eax
  int *v47; // ecx
  _DWORD *v48; // eax
  int v49; // eax
  int v50; // edx
  _DWORD *v51; // ecx
  void *v52; // eax
  _DWORD *v53; // edx
  void *v54; // eax
  void *v55; // eax
  int v56; // eax
  void *v57; // eax
  _DWORD *v58; // esi
  unsigned int v59; // edi
  int v60; // ecx
  unsigned int v61; // edx
  int *v62; // ebx
  int v63; // eax
  void *v64; // eax
  int v65; // eax
  unsigned int v66; // eax
  int v67; // edx
  int v68; // ecx
  int v69; // eax
  unsigned int v70; // ecx
  char *v71; // eax
  _DWORD *v72; // esi
  _DWORD *v73; // edi
  void *v74; // eax
  int v75; // eax
  int v76; // ebx
  _DWORD *v77; // eax
  int v78; // ebx
  _DWORD *v79; // eax
  _DWORD *v80; // ecx
  void *v81; // eax
  int v82; // eax
  void *v83; // eax
  int v85; // [esp-8h] [ebp-D0h]
  int v86; // [esp-8h] [ebp-D0h]
  int v87; // [esp-8h] [ebp-D0h]
  int v88; // [esp-8h] [ebp-D0h]
  int v89; // [esp-8h] [ebp-D0h]
  int v90; // [esp-8h] [ebp-D0h]
  int v91; // [esp-8h] [ebp-D0h]
  int v92; // [esp-8h] [ebp-D0h]
  BOOL v93; // [esp-4h] [ebp-CCh]
  int v94; // [esp-4h] [ebp-CCh]
  int v95; // [esp-4h] [ebp-CCh]
  int v96; // [esp-4h] [ebp-CCh]
  int v97; // [esp-4h] [ebp-CCh]
  int v98; // [esp+8h] [ebp-C0h]
  double *v99; // [esp+Ch] [ebp-BCh]
  _DWORD *v100; // [esp+Ch] [ebp-BCh]
  unsigned int v101; // [esp+10h] [ebp-B8h]
  _DWORD *v102; // [esp+10h] [ebp-B8h]
  _DWORD *v103; // [esp+10h] [ebp-B8h]
  int v104; // [esp+14h] [ebp-B4h]
  int v105; // [esp+18h] [ebp-B0h]
  int v106; // [esp+20h] [ebp-A8h]
  _DWORD *v107; // [esp+28h] [ebp-A0h]
  int v109; // [esp+30h] [ebp-98h]
  int v110; // [esp+34h] [ebp-94h]
  int v111[3]; // [esp+38h] [ebp-90h] BYREF
  int v112[5]; // [esp+44h] [ebp-84h] BYREF
  _DWORD v113[9]; // [esp+58h] [ebp-70h] BYREF
  _DWORD v114[9]; // [esp+7Ch] [ebp-4Ch] BYREF
  struct _KFLOATING_SAVE FloatSave; // [esp+A0h] [ebp-28h] BYREF
  int v116; // [esp+C0h] [ebp-8h]

  v107 = 0;
  v7 = Buf1;
  v8 = 0;
  v110 = 0;
  v9 = -1073741811;
  LOBYTE(v116) = 0;
  v10 = a1;
  v109 = 0;
  while ( 1 )
  {
    v10 = (_DWORD *)*v10;
    v104 = (int)v10;
    if ( v10 == a1 )
      break;
    if ( a2 == v10[2] )
      goto LABEL_5;
  }
  v10 = 0;
  v104 = 0;
LABEL_5:
  if ( !v10 )
    return -1073741661;
  switch ( a5 )
  {
    case 0:
      v11 = a3;
      if ( !a3 )
        goto LABEL_176;
      if ( MagpFindLensContext(v104, a3, 2) )
        return v9;
      v12 = (_DWORD *)Win32AllocPool(240, 1735226197);
      v107 = v12;
      if ( !v12 )
        goto LABEL_11;
      if ( a3 == -1 )
        goto LABEL_16;
      v93 = (*(_BYTE *)(*(_DWORD *)(a3 + 20) + 184) & 0xF) != 0;
      v85 = ***(_DWORD ***)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 4);
      v13 = (void *)ReferenceDwmApiPort();
      v14 = DwmAsyncMagnCreate(v13, v85, v93);
      v9 = v14;
      if ( v14 != -1073741823 && v14 < 0 )
        goto LABEL_174;
      v12 = v107;
      v11 = a3;
LABEL_16:
      memset(v12 + 2, 0, 0xE8u);
      *((double *)v12 + 3) = gOneDouble;
      *((double *)v12 + 4) = gOneDouble;
      if ( v11 == -1 )
        v12[3] = -1;
      else
        HMAssignmentLock(v16, v15);
      v17 = v12[2];
      v12[59] = 0;
      v12[2] = v17 & 0xFFFFFF7F | (v98 != 1 ? 0 : 128);
      v18 = *(_DWORD **)(v104 + 24);
      if ( *v18 != v104 + 20 )
LABEL_48:
        __fastfail(3u);
      *v12 = v104 + 20;
      v12[1] = v18;
      *v18 = v12;
      *(_DWORD *)(v104 + 24) = v12;
      goto LABEL_21;
    case 1:
      v113[8] = 3;
      memset(v113, 0, 32);
      _SetMagnificationInputTransform(v113);
      if ( !a3 )
        goto LABEL_176;
      LensContext = MagpFindLensContext(v104, a3, a4);
      v107 = LensContext;
      if ( !LensContext )
        goto LABEL_176;
      v20 = *LensContext;
      v21 = (_DWORD *)LensContext[1];
      if ( *(_DWORD **)(*LensContext + 4) != LensContext || (_DWORD *)*v21 != LensContext )
        goto LABEL_48;
      *v21 = v20;
      *(_DWORD *)(v20 + 4) = v21;
      if ( a3 == -1 )
      {
        v24 = *(_DWORD *)(v104 + 8);
        if ( *(_DWORD **)(*(_DWORD *)(v24 + 248) + 136) == LensContext )
        {
          v25 = (void *)ReferenceDwmApiPort();
          v9 = DwmAsyncMagnSetDesktopColorTransform(v25, (int)&gMagEffectIdentity);
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 136) = 0;
          v24 = *(_DWORD *)(v104 + 8);
          LensContext = v107;
        }
        else
        {
          v9 = 0;
        }
        if ( *(_DWORD **)(*(_DWORD *)(v24 + 248) + 132) == LensContext )
        {
          v26 = (void *)ReferenceDwmApiPort();
          v27 = DwmAsyncMagnSetDesktopTransform(v26, (int)&gOneDouble, 0, 0);
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 132) = 0;
        }
        else
        {
          v27 = 0;
        }
        if ( v9 >= 0 )
        {
          if ( v27 >= 0 )
          {
LABEL_46:
            v9 = 0;
            goto LABEL_174;
          }
          v9 = v27;
        }
      }
      else
      {
        v22 = LensContext[2];
        if ( (v22 & 0x40) != 0 )
        {
          ChangeComposableCursor(0);
          v107[2] &= ~0x40u;
          v22 = v107[2];
        }
        if ( (v22 & 0x20) != 0 )
        {
          v9 = 0;
        }
        else
        {
          v94 = ***(_DWORD ***)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 4);
          v23 = (void *)ReferenceDwmApiPort();
          v9 = DwmAsyncMagnDestroy(v23, v94);
        }
        HMAssignmentUnlock(v107 + 3);
        if ( v107[53] )
          Win32FreePool(v107[53]);
        if ( v107[58] )
          Win32FreePool(v107[58]);
        if ( v9 >= 0 )
          goto LABEL_46;
      }
LABEL_174:
      if ( v107 )
        Win32FreePool(v107);
      goto LABEL_176;
    case 2:
      if ( !a3 )
        goto LABEL_176;
      if ( a3 == -1 )
        goto LABEL_176;
      v28 = MagpFindLensContext(v104, a3, a4);
      if ( !v28 )
        goto LABEL_176;
      v9 = CSmartFloatingSave::Save(&FloatSave);
      if ( v9 < 0 )
        goto LABEL_176;
      if ( (*(_BYTE *)(*(_DWORD *)(v28[3] + 20) + 184) & 0xF) != 0
        || (v29 = *(unsigned __int16 *)(_gpsi + 6242), (unsigned __int16)v29 <= 0x60u) )
      {
        v30 = v28 + 5;
        if ( (v28[2] & 2) != 0 )
        {
          v28[4] = -(int)((double)*Buf1 * *((double *)v28 + 9));
          v31 = (double)Buf1[1];
          goto LABEL_57;
        }
        v28[4] = -*Buf1;
        v32 = Buf1[1];
      }
      else
      {
        v30 = v28 + 5;
        if ( (v28[2] & 2) != 0 )
        {
          v28[4] = -(int)((double)*Buf1 * *((double *)v28 + 9));
          v31 = (double)Buf1[1];
LABEL_57:
          v32 = (int)(v31 * *((double *)v28 + 10));
          goto LABEL_62;
        }
        v28[4] = -EngMulDiv(*Buf1, v29, 96);
        v32 = EngMulDiv(Buf1[1], *(unsigned __int16 *)(_gpsi + 6242), 96);
      }
LABEL_62:
      *v30 = -v32;
      ((void (__cdecl *)(struct _KFLOATING_SAVE *))KeRestoreFloatingPointState)(&FloatSave);
      LOBYTE(FloatSave.Spare1) = 0;
      v28[14] = *Buf1;
      v28[15] = Buf1[1];
      v28[16] = Buf1[2];
      v28[17] = Buf1[3];
      *(_DWORD *)(v106 + 8) |= 1u;
      goto LABEL_21;
    case 3:
      if ( !a3 )
        goto LABEL_176;
      v99 = (double *)MagpFindLensContext(v104, a3, a4);
      if ( !v99 )
        goto LABEL_176;
      v33 = CSmartFloatingSave::Save(&FloatSave);
      if ( v33 < 0 )
      {
        v9 = v33;
        goto LABEL_176;
      }
      v34 = *(double *)Buf1;
      if ( a3 == -1 )
      {
        if ( *((double *)Buf1 + 1) != v34 )
          goto LABEL_176;
        v35 = memcmp(Buf1, &gMagOutTransformIdentity, 0x20u) == 0;
        v36 = *(_DWORD *)(v104 + 8);
        if ( v35 )
        {
          v37 = *(double **)(*(_DWORD *)(v36 + 248) + 132);
          if ( v37 )
          {
            if ( v99 == v37 )
            {
              v95 = (int)*((double *)Buf1 + 3);
              v86 = (int)*((double *)Buf1 + 2);
              v38 = (void *)ReferenceDwmApiPort();
              v39 = v99;
              v9 = DwmAsyncMagnSetDesktopTransform(v38, (int)Buf1, v86, v95);
              if ( v9 >= 0 )
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 132) = 0;
              goto LABEL_77;
            }
          }
          else
          {
            v9 = 0;
          }
        }
        else
        {
          v40 = *(double **)(*(_DWORD *)(v36 + 248) + 132);
          if ( v40 )
          {
            v39 = v99;
            if ( v99 != v40 )
              goto LABEL_77;
            v97 = (int)*((double *)Buf1 + 3);
            v88 = (int)*((double *)Buf1 + 2);
            v42 = (void *)ReferenceDwmApiPort();
            v9 = DwmAsyncMagnSetDesktopTransform(v42, (int)Buf1, v88, v97);
          }
          else
          {
            v96 = (int)*((double *)Buf1 + 3);
            v87 = (int)*((double *)Buf1 + 2);
            v41 = (void *)ReferenceDwmApiPort();
            v9 = DwmAsyncMagnSetDesktopTransform(v41, (int)Buf1, v87, v96);
            if ( v9 >= 0 )
            {
              v39 = v99;
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 132) = v99;
              goto LABEL_77;
            }
          }
        }
        v39 = v99;
        goto LABEL_77;
      }
      v39 = v99;
      v43 = *((_DWORD *)v99 + 3);
      v99[3] = v34;
      v99[4] = *((double *)Buf1 + 1);
      v44 = *((double *)Buf1 + 2);
      v99[5] = v44;
      v45 = *((double *)Buf1 + 3);
      v99[6] = v45;
      if ( (*(_BYTE *)(*(_DWORD *)(v43 + 20) + 184) & 0xF) == 0 )
      {
        v46 = *(unsigned __int16 *)(_gpsi + 6242);
        if ( (unsigned int)v46 > 0x60 )
        {
          v99[5] = v44 * (double)v46 / 96.0;
          v99[6] = v45 * (double)*(unsigned __int16 *)(_gpsi + 6242) / 96.0;
          v99[3] = *(double *)Buf1 * 96.0 / (double)*(unsigned __int16 *)(_gpsi + 6242);
          v99[4] = 96.0 * *((double *)Buf1 + 1) / (double)*(unsigned __int16 *)(_gpsi + 6242);
        }
      }
      v9 = 0;
LABEL_77:
      ((void (__cdecl *)(struct _KFLOATING_SAVE *))KeRestoreFloatingPointState)(&FloatSave);
      LOBYTE(FloatSave.Spare1) = 0;
      if ( v9 >= 0 )
      {
        qmemcpy(v39 + 9, Buf1, 0x20u);
        *(_DWORD *)(v98 + 8) |= 2u;
LABEL_21:
        v9 = 0;
      }
LABEL_176:
      if ( (_BYTE)v116 )
        KeRestoreFloatingPointState(&FloatSave);
      return v9;
    case 4:
      if ( Buf1[8] == 3 )
      {
        v114[8] = 3;
        memset(v114, 0, 32);
        v47 = v114;
      }
      else
      {
        v47 = Buf1;
      }
      v9 = _SetMagnificationInputTransform(v47) != 0 ? 0 : -1073741823;
      goto LABEL_176;
    case 5:
      if ( !a3 )
        goto LABEL_176;
      v48 = MagpFindLensContext(v104, a3, a4);
      v100 = v48;
      if ( !v48 )
        goto LABEL_176;
      if ( a3 == -1 )
      {
        v35 = memcmp(Buf1, &gMagEffectIdentity, 0x64u) == 0;
        v49 = *(_DWORD *)(v104 + 8);
        if ( v35 )
        {
          v50 = *(_DWORD *)(v49 + 248);
          v48 = v100;
          v51 = *(_DWORD **)(v50 + 136);
          if ( v51 )
          {
            if ( v51 != v100 )
              goto LABEL_176;
            v52 = (void *)ReferenceDwmApiPort();
            v9 = DwmAsyncMagnSetDesktopColorTransform(v52, (int)Buf1);
            if ( v9 < 0 )
              goto LABEL_176;
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 136) = 0;
LABEL_112:
            v48 = v100;
LABEL_102:
            if ( v9 < 0 )
              goto LABEL_176;
            qmemcpy(v48 + 26, Buf1, 0x64u);
            v48[2] |= 4u;
            goto LABEL_21;
          }
LABEL_101:
          v9 = 0;
          goto LABEL_102;
        }
        v53 = *(_DWORD **)(*(_DWORD *)(v49 + 248) + 136);
        if ( !v53 )
        {
          v54 = (void *)ReferenceDwmApiPort();
          v9 = DwmAsyncMagnSetDesktopColorTransform(v54, (int)Buf1);
          if ( v9 < 0 )
            goto LABEL_176;
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 136) = v100;
          goto LABEL_112;
        }
        if ( v53 != v100 )
          goto LABEL_176;
        v55 = (void *)ReferenceDwmApiPort();
        v56 = DwmAsyncMagnSetDesktopColorTransform(v55, (int)Buf1);
      }
      else
      {
        if ( (v48[2] & 0x20) != 0 )
          goto LABEL_101;
        v89 = ***(_DWORD ***)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 4);
        v57 = (void *)ReferenceDwmApiPort();
        v56 = DwmAsyncMagnSetWindowColorTransform(v57, v89, (int)Buf1);
      }
      v9 = v56;
      goto LABEL_112;
    case 6:
      v101 = Buf1[1] + *Buf1;
      if ( v101 > 0x19 )
        goto LABEL_176;
      if ( !a3 )
        goto LABEL_176;
      if ( a3 == -1 )
        goto LABEL_176;
      v58 = MagpFindLensContext(v104, a3, a4);
      if ( !v58 )
        goto LABEL_176;
      v59 = v101;
      if ( v101 )
      {
        v60 = Win32AllocPool(4 * v101, 1735226197);
        v110 = v60;
        if ( !v60 )
          goto LABEL_11;
      }
      else
      {
        v60 = 0;
      }
      v61 = 0;
      v111[0] = *Buf1;
      v111[1] = Buf1[1];
      v111[2] = v60;
      if ( v101 )
      {
        v62 = Buf1 + 2;
        do
        {
          v63 = *v62++;
          *(_DWORD *)(v60 + 4 * v61++) = v63;
        }
        while ( v61 < v101 );
        v7 = Buf1;
      }
      if ( (v58[2] & 0x20) != 0 )
        goto LABEL_128;
      v90 = ***(_DWORD ***)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 4);
      v64 = (void *)ReferenceDwmApiPort();
      v9 = DwmAsyncMagnSetWindowFilterList(v64, v90, (int)v111);
      if ( v9 < 0 )
        goto LABEL_172;
      v59 = v101;
LABEL_128:
      if ( v58[53] )
      {
        Win32FreePool(v58[53]);
        v58[53] = 0;
      }
      v58[51] = *v7;
      v58[52] = v7[1];
      v58[53] = v110;
      v65 = v58[2];
      if ( v59 )
        v66 = v65 | 8;
      else
        v66 = v65 & 0xFFFFFFF7;
      goto LABEL_133;
    case 7:
      v105 = *Buf1;
      if ( (unsigned int)*Buf1 > 6 )
        goto LABEL_176;
      if ( !a3 )
        goto LABEL_176;
      if ( a3 == -1 )
        goto LABEL_176;
      v58 = MagpFindLensContext(v104, a3, a4);
      v102 = v58;
      if ( !v58 )
        goto LABEL_176;
      if ( v105 )
      {
        v67 = Win32AllocPool(16 * v105, 1735226197);
        v109 = v67;
        if ( !v67 )
        {
LABEL_11:
          v9 = -1073741801;
          goto LABEL_176;
        }
      }
      else
      {
        v67 = 0;
      }
      v68 = *Buf1;
      v112[1] = Buf1[1];
      v112[2] = Buf1[2];
      v69 = Buf1[3];
      v112[0] = v68;
      v112[3] = v69;
      v112[4] = v67;
      if ( v68 )
      {
        v70 = 0;
        v71 = (char *)(Buf1 + 4);
        do
        {
          v72 = v71;
          v73 = (_DWORD *)v67;
          ++v70;
          v71 += 16;
          v67 += 16;
          *v73 = *v72++;
          *++v73 = *v72++;
          *++v73 = *v72;
          v73[1] = v72[1];
        }
        while ( v70 < *Buf1 );
        v58 = v102;
      }
      if ( (v58[2] & 0x20) != 0
        || (v91 = ***(_DWORD ***)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 4),
            v74 = (void *)ReferenceDwmApiPort(),
            v9 = DwmAsyncMagnSetWindowSharedTextures(v74, v91, (int)v112),
            v9 >= 0) )
      {
        if ( v58[58] )
        {
          Win32FreePool(v58[58]);
          v58[58] = 0;
        }
        v58[54] = *Buf1;
        v58[55] = Buf1[1];
        v58[56] = Buf1[2];
        v58[57] = Buf1[3];
        v75 = v58[2];
        v58[58] = v109;
        if ( *Buf1 )
          v66 = v75 | 0x10;
        else
          v66 = v75 & 0xFFFFFFEF;
LABEL_133:
        v58[2] = v66;
        goto LABEL_21;
      }
      v8 = v109;
LABEL_170:
      if ( v8 )
      {
        Win32FreePool(v8);
LABEL_172:
        if ( v110 )
        {
          Win32FreePool(v110);
          goto LABEL_174;
        }
      }
      goto LABEL_176;
    case 9:
      v76 = *Buf1;
      if ( (*Buf1 & 0xFFFFFFFE) != 0 )
        goto LABEL_176;
      if ( !a3 )
        goto LABEL_176;
      if ( a3 == -1 )
        goto LABEL_176;
      v77 = MagpFindLensContext(v104, a3, a4);
      v58 = v77;
      if ( !v77 )
        goto LABEL_176;
      v78 = v76 & 1;
      if ( ((v77[2] >> 6) & 1) == v78 )
        goto LABEL_21;
      ChangeComposableCursor(v78);
      v66 = (v78 << 6) | v58[2] & 0xFFFFFFBF;
      goto LABEL_133;
    case 10:
      if ( !a3 )
        goto LABEL_176;
      v79 = MagpFindLensContext(v104, a3, a4);
      v80 = v79;
      v103 = v79;
      if ( !v79 )
        goto LABEL_176;
      if ( a3 == -1 )
      {
        v81 = (void *)ReferenceDwmApiPort();
        v82 = DwmAsyncMagnSetDesktopSamplingMode(v81, (int)Buf1);
      }
      else
      {
        if ( (v79[2] & 0x20) != 0 )
        {
          v9 = 0;
LABEL_167:
          if ( v9 < 0 )
            goto LABEL_176;
          v80[59] = *Buf1;
          goto LABEL_21;
        }
        v92 = ***(_DWORD ***)(*(_DWORD *)(*(_DWORD *)(v104 + 8) + 248) + 4);
        v83 = (void *)ReferenceDwmApiPort();
        v82 = DwmAsyncMagnSetSamplingMode(v83, v92, (int)Buf1);
      }
      v80 = v103;
      v9 = v82;
      goto LABEL_167;
    default:
      goto LABEL_170;
  }
}
