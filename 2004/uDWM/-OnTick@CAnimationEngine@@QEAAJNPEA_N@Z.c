/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180010E98
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004B4A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180010C54 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180010D10 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180010E1C (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18001134C (-OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  bool *v4; // rbx
  char v5; // r14
  int started; // eax
  __int64 v7; // rdx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 **v15; // rcx
  __int64 *v16; // r14
  __int64 v17; // r15
  __int64 v18; // r13
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // r15
  __int64 v23; // r15
  int v24; // eax
  int v25; // eax
  __int64 (__fastcall *v26)(__int64 *, _BYTE *); // rax
  int v27; // eax
  int v28; // eax
  int v30; // eax
  unsigned int v31; // r8d
  int v32; // eax
  __int64 (__fastcall *v33)(__int64 *, _BYTE *); // rax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  float v38; // xmm0_4
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int i; // r15d
  _QWORD *v44; // rax
  __int64 v45; // r12
  int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rax
  float v50; // xmm0_4
  int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  float v54; // xmm0_4
  float v55; // xmm0_4
  __int64 v56; // rax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  float v61; // xmm0_4
  __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  __int64 v65; // rcx
  float v66; // xmm0_4
  float v67; // xmm0_4
  __int64 v68; // rax
  int v69; // eax
  int v70; // eax
  __int64 v71; // rax
  float *v72; // rcx
  double v73; // xmm0_8
  int v74; // eax
  char v75; // [rsp+38h] [rbp-D0h]
  unsigned int v76; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v77; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v78; // [rsp+44h] [rbp-C4h]
  __int64 v79; // [rsp+48h] [rbp-C0h]
  double v80; // [rsp+50h] [rbp-B8h] BYREF
  double v81; // [rsp+58h] [rbp-B0h]
  __int64 v82; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v83; // [rsp+68h] [rbp-A0h]
  __int64 v84; // [rsp+70h] [rbp-98h]
  double v85; // [rsp+78h] [rbp-90h] BYREF
  __int64 v86; // [rsp+80h] [rbp-88h]
  bool *v87; // [rsp+88h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *v88; // [rsp+90h] [rbp-78h] BYREF
  __int64 v89; // [rsp+98h] [rbp-70h]
  __int64 v90; // [rsp+A8h] [rbp-60h]
  __int64 v91; // [rsp+B8h] [rbp-50h]
  __int64 v92; // [rsp+C8h] [rbp-40h]
  int v93; // [rsp+E0h] [rbp-28h]
  __int64 v94; // [rsp+E8h] [rbp-20h]
  __int64 v95; // [rsp+F8h] [rbp-10h]
  __int64 v96; // [rsp+108h] [rbp+0h]
  __int64 v97; // [rsp+118h] [rbp+10h]
  int v98; // [rsp+130h] [rbp+28h]
  __int64 v99; // [rsp+138h] [rbp+30h]
  __int128 v100; // [rsp+140h] [rbp+38h] BYREF
  _QWORD v101[2]; // [rsp+150h] [rbp+48h]
  _BYTE v102[20]; // [rsp+160h] [rbp+58h] BYREF
  float v103; // [rsp+174h] [rbp+6Ch]
  float v104; // [rsp+178h] [rbp+70h]
  float v105; // [rsp+17Ch] [rbp+74h]
  int v106; // [rsp+18Ch] [rbp+84h]
  int v107; // [rsp+190h] [rbp+88h]
  int v108; // [rsp+194h] [rbp+8Ch]
  _BYTE v109[20]; // [rsp+198h] [rbp+90h] BYREF
  float v110; // [rsp+1ACh] [rbp+A4h]
  float v111; // [rsp+1B0h] [rbp+A8h]
  float v112; // [rsp+1B4h] [rbp+ACh]
  int v113; // [rsp+1C4h] [rbp+BCh]
  int v114; // [rsp+1C8h] [rbp+C0h]
  int v115; // [rsp+1CCh] [rbp+C4h]
  _BYTE v116[20]; // [rsp+1D0h] [rbp+C8h] BYREF
  float v117; // [rsp+1E4h] [rbp+DCh]
  float v118; // [rsp+1E8h] [rbp+E0h]
  int v119; // [rsp+1F4h] [rbp+ECh]
  int v120; // [rsp+1F8h] [rbp+F0h]
  _BYTE v121[20]; // [rsp+200h] [rbp+F8h] BYREF
  float v122; // [rsp+214h] [rbp+10Ch]
  float v123; // [rsp+218h] [rbp+110h]
  int v124; // [rsp+224h] [rbp+11Ch]
  int v125; // [rsp+228h] [rbp+120h]
  _BYTE v126[20]; // [rsp+230h] [rbp+128h] BYREF
  float v127; // [rsp+244h] [rbp+13Ch]
  _BYTE v128[20]; // [rsp+250h] [rbp+148h] BYREF
  float v129; // [rsp+264h] [rbp+15Ch]
  float v130; // [rsp+268h] [rbp+160h]
  float v131; // [rsp+26Ch] [rbp+164h]
  _BYTE v132[20]; // [rsp+288h] [rbp+180h] BYREF
  float v133; // [rsp+29Ch] [rbp+194h]
  float v134; // [rsp+2A0h] [rbp+198h]
  _BYTE v135[20]; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v136; // [rsp+2CCh] [rbp+1C4h] BYREF
  double v137; // [rsp+2F0h] [rbp+1E8h] BYREF
  double v138; // [rsp+2F8h] [rbp+1F0h]
  double v139; // [rsp+300h] [rbp+1F8h]
  double v140[4]; // [rsp+308h] [rbp+200h] BYREF

  v4 = a3;
  v87 = a3;
  v88 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  *((double *)this + 13) = a2;
  v75 = 0;
  started = CAnimationEngine::StartAnimations(this);
  v8 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x141u);
    goto LABEL_25;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
         *((_QWORD *)this + 1),
         v7,
         0LL);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x144u);
    goto LABEL_25;
  }
  v10 = 0LL;
  LODWORD(v79) = 0;
  if ( !*((_DWORD *)this + 16) )
    goto LABEL_21;
  while ( 1 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10);
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    if ( *(_BYTE *)(v11 + 48) )
    {
      if ( !*(_BYTE *)(v11 + 49) )
      {
        ++*(_DWORD *)(v11 + 24);
        v12 = 0;
        v78 = 0;
        if ( *(_DWORD *)(v11 + 20) )
          break;
      }
    }
LABEL_19:
    CBaseObject::Release((CBaseObject *)v11);
    v10 = (unsigned int)(v79 + 1);
    LODWORD(v79) = v10;
    if ( (unsigned int)v10 >= *((_DWORD *)this + 16) )
    {
      v4 = v87;
LABEL_21:
      v28 = CAnimationEngine::StopAnimations(this);
      v8 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x210u);
      }
      else if ( v5 && !CAnimationEngine::IsIdle(this) || *((_BYTE *)this + 112) )
      {
        *v4 = 1;
        *((_BYTE *)this + 112) = 0;
      }
      goto LABEL_25;
    }
  }
  while ( 1 )
  {
    v13 = v12;
    v14 = *(_QWORD *)(v11 + 40);
    v83 = v13;
    v15 = *(__int64 ***)(v14 + 8 * v13);
    v16 = *v15;
    v17 = *v15[1];
    v18 = *v15[5];
    v19 = v15[6];
    v99 = *v15[4];
    v20 = *v19;
    v21 = v15[7];
    v84 = v20;
    v86 = *v21;
    CAnimationEngine::CTransitionVisualSet::OnTick((CAnimationEngine::CTransitionVisualSet *)v11);
    if ( *(_DWORD *)(v11 + 24) <= 1u )
    {
      v41 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 8 * v13);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 48LL))(v41, &v82) >= 0 && *(float *)&v82 == 0.0 )
      {
        v101[0] = 0LL;
        v42 = *(_QWORD *)(v11 + 40);
        v100 = 0LL;
        *(_QWORD *)((char *)v101 + 4) = 1065353216LL;
        (*(void (__fastcall **)(_QWORD, __int128 *))(***(_QWORD ***)(v42 + 8 * v13) + 168LL))(
          **(_QWORD **)(v42 + 8 * v13),
          &v100);
      }
    }
    (*(void (__fastcall **)(__int64 *))(*v16 + 120))(v16);
    if ( v17 )
    {
      v30 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v76);
      v8 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x17Du);
        goto LABEL_79;
      }
      v31 = v76;
      if ( v76 == 2 )
      {
        v32 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v17 + 40LL))(v17, &v80);
        v8 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x180u);
          goto LABEL_79;
        }
        v33 = *(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v16 + 144);
        v133 = v80;
        v134 = v81;
        v34 = v33(v16, v132);
        v8 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x186u);
          goto LABEL_79;
        }
      }
      else if ( v76 == 3 )
      {
        for ( i = 0; i < v31; ++i )
        {
          v44 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 8 * v13) + 8LL * (int)i + 8);
          v45 = *v44;
          if ( *v44 )
          {
            v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)v45 + 200LL))(*v44, 0LL, &v77);
            v8 = v46;
            if ( v46 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x194u);
              goto LABEL_79;
            }
            v47 = **(_QWORD **)(*(_QWORD *)(v11 + 40) + 8 * v83);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v47 + 240LL))(v47, v77);
            v48 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v45 + 40LL))(v45, &v137, 3LL);
            v8 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v48, 0x199u);
              goto LABEL_79;
            }
            v49 = *(_QWORD *)(v11 + 40);
            v13 = v83;
            v50 = v137;
            v129 = v50;
            v130 = v138;
            v131 = v139;
            (*(void (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(v49 + 8 * v83) + 240LL))(
              **(_QWORD **)(v49 + 8 * v83),
              v77);
            v51 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v16 + 176))(v16, v128);
            v8 = v51;
            if ( v51 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, 0x1A1u);
              goto LABEL_79;
            }
            v31 = v76;
          }
          else
          {
            v13 = v83;
          }
        }
      }
    }
    if ( v18 )
    {
      v35 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 24LL))(v18, &v76);
      v8 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x1ADu);
        goto LABEL_79;
      }
      if ( v76 == 2 )
      {
        v36 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v18 + 40LL))(v18, &v80, 2LL);
        v8 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x1B0u);
          goto LABEL_79;
        }
        v37 = *(_QWORD *)(v11 + 40);
        v38 = v80;
        v117 = v38;
        v118 = v81;
        v89 = *(_QWORD *)(*(_QWORD *)(v37 + 8 * v13) + 64LL);
        v119 = v89;
        v39 = *v16;
        v90 = *(_QWORD *)(*(_QWORD *)(v37 + 8 * v13) + 64LL);
        v120 = HIDWORD(v90);
        v40 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v39 + 152))(v16, v116);
        v8 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x1B8u);
          goto LABEL_79;
        }
      }
      else if ( v76 == 3 )
      {
        v52 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v18 + 40LL))(v18, &v137, 3LL);
        v8 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v52, 0x1BCu);
          goto LABEL_79;
        }
        v53 = *(_QWORD *)(v11 + 40);
        v54 = v137;
        v103 = v54;
        v55 = v139;
        v104 = v138;
        v105 = v55;
        v91 = *(_QWORD *)(*(_QWORD *)(v53 + 8 * v13) + 64LL);
        v106 = v91;
        v92 = *(_QWORD *)(*(_QWORD *)(v53 + 8 * v13) + 64LL);
        v107 = HIDWORD(v92);
        v93 = *(_DWORD *)(*(_QWORD *)(v53 + 8 * v13) + 72LL);
        v56 = *v16;
        v108 = v93;
        v57 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v56 + 184))(v16, v102);
        v8 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v57, 0x1C6u);
          goto LABEL_79;
        }
      }
    }
    v22 = v99;
    if ( v99 )
    {
      v58 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v99 + 24LL))(v99, &v76);
      v8 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v58, 0x1D0u);
        goto LABEL_79;
      }
      if ( v76 == 2 )
      {
        v59 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v22 + 40LL))(v22, &v80, 2LL);
        v8 = v59;
        if ( v59 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v59, 0x1D3u);
          goto LABEL_79;
        }
        v60 = *(_QWORD *)(v11 + 40);
        v61 = v80;
        v122 = v61;
        v123 = v81;
        v94 = *(_QWORD *)(*(_QWORD *)(v60 + 8 * v13) + 76LL);
        v124 = v94;
        v62 = *v16;
        v95 = *(_QWORD *)(*(_QWORD *)(v60 + 8 * v13) + 76LL);
        v125 = HIDWORD(v95);
        v63 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v62 + 160))(v16, v121);
        v8 = v63;
        if ( v63 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v63, 0x1DBu);
          goto LABEL_79;
        }
      }
      else if ( v76 == 3 )
      {
        v64 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v22 + 40LL))(v22, &v137, 3LL);
        v8 = v64;
        if ( v64 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v64, 0x1DFu);
          goto LABEL_79;
        }
        v65 = *(_QWORD *)(v11 + 40);
        v66 = v137;
        v110 = v66;
        v67 = v139;
        v111 = v138;
        v112 = v67;
        v96 = *(_QWORD *)(*(_QWORD *)(v65 + 8 * v13) + 76LL);
        v113 = v96;
        v97 = *(_QWORD *)(*(_QWORD *)(v65 + 8 * v13) + 76LL);
        v114 = HIDWORD(v97);
        v98 = *(_DWORD *)(*(_QWORD *)(v65 + 8 * v13) + 84LL);
        v68 = *v16;
        v115 = v98;
        v69 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v68 + 192))(v16, v109);
        v8 = v69;
        if ( v69 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v69, 0x1E8u);
          goto LABEL_79;
        }
      }
    }
    v23 = v84;
    if ( !v84 )
      goto LABEL_17;
    v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v84 + 24LL))(v84, &v76);
    v8 = v24;
    if ( v24 < 0 )
      break;
    v25 = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v23 + 40LL))(v23, &v85, v76);
    v8 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x1F6u);
      goto LABEL_79;
    }
    v26 = *(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v16 + 168);
    v127 = v85;
    v27 = v26(v16, v126);
    v8 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x1FBu);
      goto LABEL_79;
    }
LABEL_17:
    if ( v86 )
    {
      v70 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v86 + 40LL))(v86, v140, 4LL);
      v8 = v70;
      if ( v70 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v70, 0x200u);
        goto LABEL_79;
      }
      v71 = 0LL;
      v72 = (float *)&v136;
      do
      {
        v73 = v140[v71++];
        *v72++ = v73;
      }
      while ( v71 < 4 );
      v74 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v16 + 200))(v16, v135);
      v8 = v74;
      if ( v74 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v74, 0x208u);
        goto LABEL_79;
      }
    }
    v5 = (*(__int64 (__fastcall **)(__int64 *))(*v16 + 248))(v16) | v75;
    v12 = v78 + 1;
    v75 = v5;
    v78 = v12;
    if ( v12 >= *(_DWORD *)(v11 + 20) )
      goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x1F2u);
LABEL_79:
  CBaseObject::Release((CBaseObject *)v11);
LABEL_25:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v88);
  return v8;
}
