/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C008C520
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0013EE0 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C008DE30 (_GetDCEx.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C000FF5C (GetMonitorRectForDpi.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0010A5C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     IntersectRect @ 0x1C0012434 (IntersectRect.c)
 *     GetScreenRectForDpi @ 0x1C0012530 (GetScreenRectForDpi.c)
 *     GreSetRectRgn @ 0x1C0014BB0 (GreSetRectRgn.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C00276E8 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     IsGetLayeredOrRedirectedParentSupported @ 0x1C003FCFC (IsGetLayeredOrRedirectedParentSupported.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C007E990 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0085F30 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0086240 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C008A000 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C008A360 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C008B180 (-GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008D624 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C009262C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0093960 (bDeleteDCInternalEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ResetOrg(HRGN a1, struct tagDCE *a2, int a3)
{
  __int64 v3; // rax
  struct tagDCE *v5; // r13
  __int64 v7; // r9
  int v8; // ebx
  __int128 v9; // xmm0
  int v10; // r15d
  int v11; // r14d
  struct tagMONITOR *v12; // rdi
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // esi
  int v18; // ebx
  LONG v19; // ebx
  LONG v20; // esi
  int *v21; // rbx
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  GdiHandleManager *v27; // rsi
  unsigned int v28; // ebx
  __int64 v29; // r12
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r12
  unsigned __int16 *v33; // rsi
  _QWORD *v34; // rax
  char v35; // al
  unsigned int v36; // ebx
  __int64 v37; // rdx
  unsigned int v38; // r8d
  __int64 v39; // rcx
  __int64 v40; // r9
  unsigned int v41; // ebx
  GdiHandleManager *v42; // rsi
  __int64 v43; // rdx
  unsigned int v44; // r8d
  __int64 v45; // rcx
  __int64 v46; // r9
  _DWORD *v47; // rdx
  unsigned int v48; // ebx
  __int64 v49; // rdx
  unsigned int v50; // r8d
  __int64 v51; // rcx
  __int64 v52; // r10
  int v53; // eax
  HDC v54; // r12
  int v55; // eax
  unsigned int v56; // edx
  _DWORD *v57; // rbx
  BOOL v58; // r15d
  char v59; // al
  unsigned int v60; // ebx
  GdiHandleManager *v61; // rsi
  __int64 v62; // rdx
  unsigned int v63; // r8d
  __int64 v64; // rcx
  __int64 v65; // r9
  _DWORD *v66; // rdx
  unsigned int v67; // ebx
  __int64 v68; // rdx
  unsigned int v69; // r8d
  __int64 v70; // rcx
  __int64 v71; // r10
  __int64 v72; // r14
  __int64 v73; // r12
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  GdiHandleManager *v77; // rbx
  unsigned int v78; // eax
  __int64 v79; // rbx
  unsigned int v80; // r15d
  unsigned int v81; // edx
  __int64 v82; // rcx
  __int64 v83; // rbx
  unsigned __int16 *v84; // rsi
  _QWORD *v85; // rax
  char v86; // al
  unsigned int v87; // ebx
  __int64 v88; // rdx
  unsigned int v89; // r8d
  __int64 v90; // rcx
  __int64 v91; // r9
  unsigned int v92; // ebx
  GdiHandleManager *v93; // rsi
  __int64 v94; // rdx
  unsigned int v95; // r8d
  __int64 v96; // rcx
  __int64 v97; // r9
  _DWORD *v98; // rdx
  unsigned int v99; // ebx
  __int64 v100; // rdx
  unsigned int v101; // r8d
  __int64 v102; // rcx
  __int64 v103; // r10
  int v104; // esi
  __int64 v105; // rbx
  HDC v106; // r12
  unsigned int v107; // edx
  _DWORD *v108; // rsi
  BOOL v109; // r15d
  char v110; // al
  unsigned int v111; // ebx
  GdiHandleManager *v112; // rsi
  __int64 v113; // rdx
  unsigned int v114; // r8d
  __int64 v115; // rcx
  __int64 v116; // r9
  _DWORD *v117; // rdx
  unsigned int v118; // ebx
  __int64 v119; // rdx
  unsigned int v120; // r8d
  __int64 v121; // rcx
  __int64 v122; // r10
  __m128i *ScreenRectForDpi; // rax
  __m128i v124; // xmm1
  __int64 v125; // rax
  unsigned __int64 v126; // xmm0_8
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 CurrentProcess; // rax
  __int64 v133; // rcx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v135; // rbx
  unsigned int v136; // eax
  __int64 v137; // r9
  unsigned __int64 v138; // rdx
  unsigned int v139; // r8d
  __int64 v140; // rcx
  __int64 v141; // r10
  __int64 v142; // rdx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  GdiHandleManager *v148; // rbx
  unsigned int v149; // eax
  struct OBJECT *EntryObject; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int128 v153; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v154; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v155; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v156; // [rsp+58h] [rbp-A8h] BYREF
  int v157; // [rsp+60h] [rbp-A0h]
  int v158; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 *v159; // [rsp+70h] [rbp-90h] BYREF
  int v160; // [rsp+78h] [rbp-88h]
  int v161; // [rsp+7Ch] [rbp-84h]
  __int64 v162; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v163[2]; // [rsp+90h] [rbp-70h] BYREF
  int *v164[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v165; // [rsp+B0h] [rbp-50h]
  __int64 v166; // [rsp+B8h] [rbp-48h] BYREF
  int v167; // [rsp+C0h] [rbp-40h]
  __int64 v168; // [rsp+D0h] [rbp-30h] BYREF
  int v169; // [rsp+D8h] [rbp-28h]
  __m128i v170; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v171; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v172[11]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v175; // [rsp+178h] [rbp+78h]
  struct _POINTL v177; // [rsp+188h] [rbp+88h] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v5 = a2;
  v153 = 0LL;
  v7 = *(_QWORD *)(v3 + 40);
  if ( (*(_WORD *)(v7 + 42) & 0x3FFF) == 0x29D )
  {
    ScreenRectForDpi = GetScreenRectForDpi(&v170, 0);
    v8 = *((_DWORD *)v5 + 16);
    v124 = *ScreenRectForDpi;
    v125 = ScreenRectForDpi->m128i_i64[0];
    v126 = _mm_srli_si128(v124, 8).m128i_u64[0];
    v10 = v126 - v125;
    v11 = HIDWORD(v126) - HIDWORD(v125);
    DWORD2(v153) = v126 - v125;
    HIDWORD(v153) = HIDWORD(v126) - HIDWORD(v125);
  }
  else
  {
    v8 = *((_DWORD *)a2 + 16);
    if ( (v8 & 1) != 0 )
      v9 = *(_OWORD *)(v7 + 88);
    else
      v9 = *(_OWORD *)(v7 + 104);
    v153 = v9;
    v10 = DWORD2(v9);
    v11 = HIDWORD(v9);
  }
  v12 = (struct tagMONITOR *)*((_QWORD *)v5 + 11);
  v13 = v8;
  if ( v12 )
  {
    if ( (v8 & 0x4000) == 0 )
    {
      v131 = *GetMonitorRectForDpi(&v171, *((_QWORD *)v5 + 11), 0);
      LODWORD(v153) = v153 - v131;
      v10 -= v131;
      v13 = v8;
      DWORD2(v153) = v10;
      DWORD1(v153) -= HIDWORD(v131);
      v11 -= HIDWORD(v131);
      HIDWORD(v153) = v11;
      if ( a1 )
      {
        SetMonitorRegion(v12, a1, a1);
        v13 = *((_DWORD *)v5 + 16);
      }
    }
  }
  if ( (v13 & 0x4000000) != 0 )
  {
LABEL_183:
    if ( a1 )
      GreSetRectRgn(a1, 0, 0, 0, 0);
    goto LABEL_25;
  }
  if ( qword_1C0252578 && (int)qword_1C0252578() >= 0 && qword_1C0252580 )
    v14 = qword_1C0252580(*((_QWORD *)v5 + 2));
  else
    v14 = 0LL;
  if ( v14 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 24LL) & 0x20000000) != 0
      && qword_1C0252588
      && (int)qword_1C0252588() >= 0
      && qword_1C0252590
      && qword_1C0252590(v14) )
    {
      v15 = *(_QWORD *)(v14 + 40);
      v16 = *((_QWORD *)v5 + 11);
      v17 = *(_DWORD *)(v15 + 88);
      v18 = *(_DWORD *)(v15 + 92);
      if ( v16 && *((int *)v5 + 16) < 0 )
      {
        LODWORD(v153) = v17 + v153;
        DWORD1(v153) += v18;
        DWORD2(v153) = v17 + v10;
        HIDWORD(v153) = v18 + v11;
        v155 = *(_OWORD *)GetMonitorRectForDpi(v172, v16, 0);
        IntersectRect(&v153, (int *)&v153, (int *)&v155);
        v11 = HIDWORD(v153);
        v10 = DWORD2(v153);
      }
      v19 = -v18;
      v20 = -v17;
      LODWORD(v153) = v20 + v153;
      DWORD1(v153) += v19;
      DWORD2(v153) = v20 + v10;
      HIDWORD(v153) = v19 + v11;
      if ( a1 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v164, a1, 0);
        v177.y = v19;
        v21 = v164[0];
        v177.x = v20;
        if ( v164[0] )
        {
          RGNOBJ::bOffset(v164, &v177);
          v21 = v164[0];
        }
        if ( !v165 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v164);
        if ( v21 )
          _InterlockedDecrement(v21 + 3);
      }
      goto LABEL_25;
    }
    goto LABEL_183;
  }
  if ( a3 && (int)IsGetLayeredOrRedirectedParentSupported() >= 0 && a1 && (*((_DWORD *)v5 + 16) & 0x4000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v128, v127, v129, v130);
LABEL_25:
  v22 = *((_QWORD *)v5 + 1);
  v23 = 0LL;
  v162 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v162);
  if ( (unsigned __int8)KeIsAttachedProcess(v24) )
  {
    CurrentProcess = PsGetCurrentProcess(v26, v25);
    PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v133);
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v27 = gpHandleManager;
  v28 = (unsigned __int16)v22 | ((unsigned int)v22 >> 8) & 0xFF0000;
  v160 = 1;
  if ( v28 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v22,
                                  1)
           + 13) == ((unsigned __int16)v22 | ((unsigned int)v22 >> 8) & 0xFF0000) >> 16 )
        v28 = (unsigned __int16)v22;
    }
    else
    {
      v28 = (unsigned __int16)v22;
    }
  }
  v29 = *((_QWORD *)v27 + 2);
  v30 = *(_DWORD *)(v29 + 2056);
  if ( v28 >= v30 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16) )
    goto LABEL_230;
  v31 = ((v28 - v30) >> 16) + 1;
  if ( v28 < v30 )
    v31 = 0LL;
  v32 = *(_QWORD *)(v29 + 8 * v31 + 8);
  if ( (_DWORD)v31 )
    v28 += ((1 - (_DWORD)v31) << 16) - v30;
  v33 = 0LL;
  if ( v28 < *(_DWORD *)(v32 + 20) )
  {
    v154 = 16LL * (unsigned __int8)v28;
    v34 = *(_QWORD **)(v32 + 24);
    *(_QWORD *)&v155 = 8 * ((unsigned __int64)v28 >> 8);
    v177 = (struct _POINTL)(v154 + *(_QWORD *)(*v34 + v155));
    KeEnterCriticalRegion();
    ((void (__fastcall *)(_QWORD, _QWORD))ExAcquirePushLockExclusiveEx)(v177, 0LL);
    if ( v28 < *(_DWORD *)(v32 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v32 + 24) + v155) + v154 + 8) )
    {
      *(_DWORD *)(24LL * v28 + *(_QWORD *)v32 + 8) |= 1u;
      v33 = (unsigned __int16 *)(24LL * v28 + *(_QWORD *)v32);
    }
    else
    {
      ((void (__fastcall *)(_QWORD, _QWORD))ExReleasePushLockExclusiveEx)(v177, 0LL);
      KeLeaveCriticalRegion();
    }
    v5 = a2;
  }
  v159 = v33;
  if ( !v33 )
  {
LABEL_230:
    KeLeaveCriticalRegion();
    goto LABEL_101;
  }
  _m_prefetchw(v33 + 4);
  v161 = *((_DWORD *)v33 + 2);
  v35 = *((_BYTE *)v33 + 15);
  if ( (v35 & 0x20) != 0 )
    goto LABEL_205;
  if ( (v35 & 0x40) != 0 )
  {
    v135 = gpHandleManager;
    v136 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v33 & 0xFFFFFF);
    v137 = *((_QWORD *)v135 + 2);
    v138 = v136;
    v139 = *(_DWORD *)(v137 + 2056);
    if ( v136 >= v139 + ((*(unsigned __int16 *)(v137 + 2) + 0xFFFF) << 16) )
      goto LABEL_202;
    v140 = ((v136 - v139) >> 16) + 1;
    if ( v136 < v139 )
      v140 = 0LL;
    v141 = *(_QWORD *)(v137 + 8 * v140 + 8);
    if ( (_DWORD)v140 )
      v138 = ((1 - (_DWORD)v140) << 16) - v139 + v136;
    if ( (unsigned int)v138 >= *(_DWORD *)(v141 + 20) )
LABEL_202:
      v142 = 0LL;
    else
      v142 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v141 + 24) + 8 * (v138 >> 8)) + 16LL * (unsigned __int8)v138 + 8);
    if ( *(_WORD *)(v142 + 12) && *(struct _KTHREAD **)(v142 + 16) == KeGetCurrentThread() )
    {
LABEL_206:
      v33 = v159;
      goto LABEL_43;
    }
LABEL_205:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v159);
    if ( !v160 )
      goto LABEL_101;
    goto LABEL_206;
  }
LABEL_43:
  if ( *((_BYTE *)v33 + 14) == 1 && v33[6] == WORD1(v22) )
  {
    v36 = *(_DWORD *)v33 & 0xFFFFFF;
    if ( v36 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v33,
                                    1)
             + 13) == HIWORD(v36) )
          v36 = (unsigned __int16)v36;
      }
      else
      {
        v36 = *v33;
      }
    }
    v37 = *((_QWORD *)gpHandleManager + 2);
    v38 = *(_DWORD *)(v37 + 2056);
    if ( v36 >= v38 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
      goto LABEL_210;
    v39 = ((v36 - v38) >> 16) + 1;
    if ( v36 < v38 )
      v39 = 0LL;
    v40 = *(_QWORD *)(v37 + 8 * v39 + 8);
    if ( (_DWORD)v39 )
      v36 += ((1 - (_DWORD)v39) << 16) - v38;
    if ( v36 >= *(_DWORD *)(v40 + 20) )
LABEL_210:
      v23 = 0LL;
    else
      v23 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8 * ((unsigned __int64)v36 >> 8))
                      + 16LL * (unsigned __int8)v36
                      + 8);
    ++*(_DWORD *)(v23 + 8);
  }
  v41 = *(_DWORD *)v33 & 0xFFFFFF;
  if ( v41 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v33,
                                  1)
           + 13) == HIWORD(v41) )
        v41 = (unsigned __int16)v41;
    }
    else
    {
      v41 = *v33;
    }
  }
  v42 = gpHandleManager;
  v43 = *((_QWORD *)gpHandleManager + 2);
  v44 = *(_DWORD *)(v43 + 2056);
  if ( v41 >= v44 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
    goto LABEL_214;
  v45 = ((v41 - v44) >> 16) + 1;
  if ( v41 < v44 )
    v45 = 0LL;
  v46 = *(_QWORD *)(v43 + 8 * v45 + 8);
  if ( (_DWORD)v45 )
    v41 += ((1 - (_DWORD)v45) << 16) - v44;
  if ( v41 >= *(_DWORD *)(v46 + 20) )
LABEL_214:
    v47 = 0LL;
  else
    v47 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v46 + 24) + 8 * ((unsigned __int64)v41 >> 8))
                     + 16LL * (unsigned __int8)v41
                     + 8);
  v48 = (unsigned __int16)*v47 | (*v47 >> 8) & 0xFF0000;
  if ( v48 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v47,
                                  1)
           + 13) == HIWORD(v48) )
        v48 = (unsigned __int16)v48;
    }
    else
    {
      v48 = (unsigned __int16)*v47;
    }
  }
  v49 = *((_QWORD *)v42 + 2);
  v50 = *(_DWORD *)(v49 + 2056);
  if ( v48 < v50 + ((*(unsigned __int16 *)(v49 + 2) + 0xFFFF) << 16) )
  {
    v51 = ((v48 - v50) >> 16) + 1;
    if ( v48 < v50 )
      v51 = 0LL;
    v52 = *(_QWORD *)(v49 + 8 * v51 + 8);
    if ( (_DWORD)v51 )
      v48 += ((1 - (_DWORD)v51) << 16) - v50;
    *(_DWORD *)(*(_QWORD *)v52 + 24LL * v48 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v52 + 24) + 8 * ((unsigned __int64)v48 >> 8)) + 16LL * (unsigned __int8)v48,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v23 )
  {
    *(_QWORD *)(v23 + 8LL * (*(_DWORD *)(v23 + 40) & 1) + 1016) = v153;
    DC::vCalcFillOrigin((DC *)v23);
    v53 = *(_DWORD *)(v23 + 520);
    *(_OWORD *)(v23 + 1032) = v153;
    if ( (v53 & 1) != 0 && (v53 & 2) == 0 )
    {
      *(_DWORD *)(v23 + 36) |= 0x10u;
      *(_DWORD *)(v23 + 520) = v53 | 4;
    }
    v54 = *(HDC *)v23;
    v55 = (unsigned __int16)*(_QWORD *)v23;
    v56 = ((unsigned int)*(_QWORD *)v23 >> 8) & 0xFF0000;
    v166 = 0LL;
    v167 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v166, v55 | v56, 0, 0, 1);
    if ( v167 )
    {
      v57 = (_DWORD *)v166;
      v58 = (*(_BYTE *)(v166 + 15) & 8) != 0;
      v59 = *(_BYTE *)(v166 + 14);
      if ( v59 == 5 )
      {
        v143 = *(_QWORD *)(v23 + 680);
        v144 = 0LL;
      }
      else
      {
        if ( v59 != 16 )
        {
LABEL_80:
          --*(_DWORD *)(v23 + 8);
          v60 = *v57 & 0xFFFFFF;
          if ( v60 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v60,
                                          1)
                   + 13) == HIWORD(v60) )
                v60 = (unsigned __int16)v60;
            }
            else
            {
              v60 = (unsigned __int16)v60;
            }
          }
          v61 = gpHandleManager;
          v62 = *((_QWORD *)gpHandleManager + 2);
          v63 = *(_DWORD *)(v62 + 2056);
          if ( v60 >= v63 + ((*(unsigned __int16 *)(v62 + 2) + 0xFFFF) << 16) )
            goto LABEL_226;
          v64 = ((v60 - v63) >> 16) + 1;
          if ( v60 < v63 )
            v64 = 0LL;
          v65 = *(_QWORD *)(v62 + 8 * v64 + 8);
          if ( (_DWORD)v64 )
            v60 += ((1 - (_DWORD)v64) << 16) - v63;
          if ( v60 >= *(_DWORD *)(v65 + 20) )
LABEL_226:
            v66 = 0LL;
          else
            v66 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v65 + 24) + 8 * ((unsigned __int64)v60 >> 8))
                             + 16LL * (unsigned __int8)v60
                             + 8);
          v67 = (unsigned __int16)*v66 | (*v66 >> 8) & 0xFF0000;
          if ( v67 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)*v66,
                                          1)
                   + 13) == HIWORD(v67) )
                v67 = (unsigned __int16)v67;
            }
            else
            {
              v67 = (unsigned __int16)*v66;
            }
          }
          v68 = *((_QWORD *)v61 + 2);
          v69 = *(_DWORD *)(v68 + 2056);
          if ( v67 < v69 + ((*(unsigned __int16 *)(v68 + 2) + 0xFFFF) << 16) )
          {
            v70 = ((v67 - v69) >> 16) + 1;
            if ( v67 < v69 )
              v70 = 0LL;
            v71 = *(_QWORD *)(v68 + 8 * v70 + 8);
            if ( (_DWORD)v70 )
              v67 += ((1 - (_DWORD)v70) << 16) - v69;
            *(_DWORD *)(*(_QWORD *)v71 + 24LL * v67 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v71 + 24) + 8 * ((unsigned __int64)v67 >> 8)) + 16LL * (unsigned __int8)v67,
              0LL);
            KeLeaveCriticalRegion();
          }
          KeLeaveCriticalRegion();
          if ( v58 )
            bDeleteDCInternalEx(v54);
          goto LABEL_101;
        }
        v143 = *(_QWORD *)(v23 + 136);
        v144 = 2LL;
      }
      TrackObjectReferenceDecrement(v144, v143);
      goto LABEL_80;
    }
  }
LABEL_101:
  if ( !a3 )
    return;
  v72 = *((_QWORD *)v5 + 1);
  v163[1] = 0LL;
  v73 = 0LL;
  v154 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v154);
  if ( (unsigned __int8)KeIsAttachedProcess(v74) )
  {
    v145 = PsGetCurrentProcess(v76, v75);
    PsGetProcessSessionIdEx(v145);
    v147 = PsGetCurrentThreadProcess(v146);
    PsGetProcessSessionIdEx(v147);
  }
  v77 = gpHandleManager;
  v157 = 1;
  v78 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v72 | ((unsigned int)v72 >> 8) & 0xFF0000);
  v79 = *((_QWORD *)v77 + 2);
  v80 = v78;
  v81 = *(_DWORD *)(v79 + 2056);
  if ( v78 >= v81 + ((*(unsigned __int16 *)(v79 + 2) + 0xFFFF) << 16) )
    goto LABEL_246;
  v82 = ((v78 - v81) >> 16) + 1;
  if ( v78 < v81 )
    v82 = 0LL;
  v83 = *(_QWORD *)(v79 + 8 * v82 + 8);
  if ( (_DWORD)v82 )
    v80 = ((1 - (_DWORD)v82) << 16) - v81 + v78;
  v84 = 0LL;
  if ( v80 < *(_DWORD *)(v83 + 20) )
  {
    *(_QWORD *)&v155 = 16LL * (unsigned __int8)v80;
    v85 = *(_QWORD **)(v83 + 24);
    v177 = (struct _POINTL)(8 * ((unsigned __int64)v80 >> 8));
    v175 = v155 + *(_QWORD *)(*v85 + *(_QWORD *)&v177);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v175, 0LL);
    if ( v80 < *(_DWORD *)(v83 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v83 + 24) + *(_QWORD *)&v177) + v155 + 8) )
    {
      *(_DWORD *)(24LL * v80 + *(_QWORD *)v83 + 8) |= 1u;
      v84 = (unsigned __int16 *)(24LL * v80 + *(_QWORD *)v83);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v175, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v156 = v84;
  if ( !v84 )
  {
LABEL_246:
    KeLeaveCriticalRegion();
    v105 = 0LL;
    goto LABEL_151;
  }
  _m_prefetchw(v84 + 4);
  v158 = *((_DWORD *)v84 + 2);
  v86 = *((_BYTE *)v84 + 15);
  if ( (v86 & 0x20) == 0 )
  {
    if ( (v86 & 0x40) == 0 )
      goto LABEL_116;
    v148 = gpHandleManager;
    v149 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v84 & 0xFFFFFF);
    EntryObject = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v148 + 2), v149);
    if ( *((_WORD *)EntryObject + 6) )
    {
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
        goto LABEL_235;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v156);
  v104 = v157;
  if ( v157 )
  {
LABEL_235:
    v84 = v156;
LABEL_116:
    if ( *((_BYTE *)v84 + 14) == 1 && v84[6] == WORD1(v72) )
    {
      v87 = *(_DWORD *)v84 & 0xFFFFFF;
      if ( v87 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v84,
                                      1)
               + 13) == HIWORD(v87) )
            v87 = (unsigned __int16)v87;
        }
        else
        {
          v87 = *v84;
        }
      }
      v88 = *((_QWORD *)gpHandleManager + 2);
      v89 = *(_DWORD *)(v88 + 2056);
      if ( v87 < v89 + ((*(unsigned __int16 *)(v88 + 2) + 0xFFFF) << 16) )
      {
        v90 = ((v87 - v89) >> 16) + 1;
        if ( v87 < v89 )
          v90 = 0LL;
        v91 = *(_QWORD *)(v88 + 8 * v90 + 8);
        if ( (_DWORD)v90 )
          v87 += ((1 - (_DWORD)v90) << 16) - v89;
        if ( v87 < *(_DWORD *)(v91 + 20) )
          v73 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v91 + 24) + 8 * ((unsigned __int64)v87 >> 8))
                          + 16LL * (unsigned __int8)v87
                          + 8);
      }
      ++*(_DWORD *)(v73 + 8);
    }
    v92 = *(_DWORD *)v84 & 0xFFFFFF;
    if ( v92 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v84,
                                    1)
             + 13) == HIWORD(v92) )
          v92 = (unsigned __int16)v92;
      }
      else
      {
        v92 = *v84;
      }
    }
    v93 = gpHandleManager;
    v94 = *((_QWORD *)gpHandleManager + 2);
    v95 = *(_DWORD *)(v94 + 2056);
    if ( v92 >= v95 + ((*(unsigned __int16 *)(v94 + 2) + 0xFFFF) << 16) )
      goto LABEL_242;
    v96 = ((v92 - v95) >> 16) + 1;
    if ( v92 < v95 )
      v96 = 0LL;
    v97 = *(_QWORD *)(v94 + 8 * v96 + 8);
    if ( (_DWORD)v96 )
      v92 += ((1 - (_DWORD)v96) << 16) - v95;
    if ( v92 >= *(_DWORD *)(v97 + 20) )
LABEL_242:
      v98 = 0LL;
    else
      v98 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v97 + 24) + 8 * ((unsigned __int64)v92 >> 8))
                       + 16LL * (unsigned __int8)v92
                       + 8);
    v99 = (unsigned __int16)*v98 | (*v98 >> 8) & 0xFF0000;
    if ( v99 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v98,
                                    1)
             + 13) == HIWORD(v99) )
          v99 = (unsigned __int16)v99;
      }
      else
      {
        v99 = (unsigned __int16)*v98;
      }
    }
    v100 = *((_QWORD *)v93 + 2);
    v101 = *(_DWORD *)(v100 + 2056);
    if ( v99 < v101 + ((*(unsigned __int16 *)(v100 + 2) + 0xFFFF) << 16) )
    {
      v102 = ((v99 - v101) >> 16) + 1;
      if ( v99 < v101 )
        v102 = 0LL;
      v103 = *(_QWORD *)(v100 + 8 * v102 + 8);
      if ( (_DWORD)v102 )
        v99 += ((1 - (_DWORD)v102) << 16) - v101;
      *(_DWORD *)(*(_QWORD *)v103 + 24LL * v99 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v103 + 24) + 8 * ((unsigned __int64)v99 >> 8)) + 16LL * (unsigned __int8)v99,
        0LL);
      KeLeaveCriticalRegion();
    }
    v104 = 0;
    v157 = 0;
    v156 = 0LL;
    KeLeaveCriticalRegion();
  }
  v105 = v73;
  if ( v104 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v156);
LABEL_151:
  v163[0] = v73;
  GreSelectVisRgnInternal(v163, a1, 1LL);
  if ( !v105 )
    return;
  v106 = *(HDC *)v73;
  v107 = (unsigned __int16)*(_DWORD *)v105 | (*(_DWORD *)v105 >> 8) & 0xFF0000;
  v168 = 0LL;
  v169 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v168, v107, 0, 0, 1);
  if ( !v169 )
    return;
  v108 = (_DWORD *)v168;
  v109 = (*(_BYTE *)(v168 + 15) & 8) != 0;
  v110 = *(_BYTE *)(v168 + 14);
  if ( v110 == 5 )
  {
    v151 = *(_QWORD *)(v105 + 680);
    v152 = 0LL;
LABEL_249:
    TrackObjectReferenceDecrement(v152, v151);
    goto LABEL_155;
  }
  if ( v110 == 16 )
  {
    v151 = *(_QWORD *)(v105 + 136);
    v152 = 2LL;
    goto LABEL_249;
  }
LABEL_155:
  --*(_DWORD *)(v105 + 8);
  v111 = *v108 & 0xFFFFFF;
  if ( v111 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *(unsigned __int16 *)v108,
                                  1)
           + 13) == HIWORD(v111) )
        v111 = (unsigned __int16)v111;
    }
    else
    {
      v111 = *(unsigned __int16 *)v108;
    }
  }
  v112 = gpHandleManager;
  v113 = *((_QWORD *)gpHandleManager + 2);
  v114 = *(_DWORD *)(v113 + 2056);
  if ( v111 >= v114 + ((*(unsigned __int16 *)(v113 + 2) + 0xFFFF) << 16) )
    goto LABEL_253;
  v115 = ((v111 - v114) >> 16) + 1;
  if ( v111 < v114 )
    v115 = 0LL;
  v116 = *(_QWORD *)(v113 + 8 * v115 + 8);
  if ( (_DWORD)v115 )
    v111 += ((1 - (_DWORD)v115) << 16) - v114;
  if ( v111 >= *(_DWORD *)(v116 + 20) )
LABEL_253:
    v117 = 0LL;
  else
    v117 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v116 + 24) + 8 * ((unsigned __int64)v111 >> 8))
                      + 16LL * (unsigned __int8)v111
                      + 8);
  v118 = (unsigned __int16)*v117 | (*v117 >> 8) & 0xFF0000;
  if ( v118 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v117,
                                  1)
           + 13) == HIWORD(v118) )
        v118 = (unsigned __int16)v118;
    }
    else
    {
      v118 = (unsigned __int16)*v117;
    }
  }
  v119 = *((_QWORD *)v112 + 2);
  v120 = *(_DWORD *)(v119 + 2056);
  if ( v118 < v120 + ((*(unsigned __int16 *)(v119 + 2) + 0xFFFF) << 16) )
  {
    v121 = ((v118 - v120) >> 16) + 1;
    if ( v118 < v120 )
      v121 = 0LL;
    v122 = *(_QWORD *)(v119 + 8 * v121 + 8);
    if ( (_DWORD)v121 )
      v118 += ((1 - (_DWORD)v121) << 16) - v120;
    *(_DWORD *)(*(_QWORD *)v122 + 24LL * v118 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v122 + 24) + 8 * ((unsigned __int64)v118 >> 8)) + 16LL * (unsigned __int8)v118,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v109 )
    bDeleteDCInternalEx(v106);
}
