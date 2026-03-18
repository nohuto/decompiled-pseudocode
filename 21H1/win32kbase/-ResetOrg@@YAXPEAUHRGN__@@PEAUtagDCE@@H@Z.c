/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00854A0
 * Callers:
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     UserSetDCVisRgn @ 0x1C00A7F90 (UserSetDCVisRgn.c)
 * Callees:
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C0017968 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     IsGetLayeredOrRedirectedParentSupported @ 0x1C003115C (IsGetLayeredOrRedirectedParentSupported.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0032DA8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     bDeleteDCInternalEx @ 0x1C006D2D0 (bDeleteDCInternalEx.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0078FF0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C007EF80 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C007F290 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C008034C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0082DC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0083290 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0083F70 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C00840B0 (-GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C008CE0C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00A5A3C (GetMonitorRectForDpi.c)
 *     IntersectRect @ 0x1C00A6D20 (IntersectRect.c)
 *     GetScreenRectForDpi @ 0x1C00A6E1C (GetScreenRectForDpi.c)
 *     GreSetRectRgn @ 0x1C00A97A0 (GreSetRectRgn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // esi
  int v19; // ebx
  LONG v20; // ebx
  LONG v21; // esi
  int *v22; // rbx
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  GdiHandleManager *v28; // rsi
  unsigned int v29; // ebx
  __int64 v30; // r12
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r12
  unsigned __int16 *v34; // rsi
  _QWORD *v35; // rax
  char v36; // al
  unsigned int v37; // ebx
  __int64 v38; // rdx
  unsigned int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // r9
  unsigned int v42; // ebx
  GdiHandleManager *v43; // rsi
  __int64 v44; // rdx
  unsigned int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // r9
  _DWORD *v48; // rdx
  unsigned int v49; // ebx
  __int64 v50; // rdx
  unsigned int v51; // r8d
  __int64 v52; // rcx
  __int64 v53; // r10
  int v54; // eax
  HDC v55; // r12
  int v56; // eax
  unsigned int v57; // edx
  _DWORD *v58; // rbx
  BOOL v59; // r15d
  char v60; // al
  unsigned int v61; // ebx
  GdiHandleManager *v62; // rsi
  __int64 v63; // rdx
  unsigned int v64; // r8d
  __int64 v65; // rcx
  __int64 v66; // r9
  _DWORD *v67; // rdx
  unsigned int v68; // ebx
  __int64 v69; // rdx
  unsigned int v70; // r8d
  __int64 v71; // rcx
  __int64 v72; // r10
  __int64 v73; // r14
  __int64 v74; // r12
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  GdiHandleManager *v78; // rbx
  unsigned int v79; // eax
  __int64 v80; // rbx
  unsigned int v81; // r15d
  unsigned int v82; // edx
  __int64 v83; // rcx
  __int64 v84; // rbx
  unsigned __int16 *v85; // rsi
  _QWORD *v86; // rax
  char v87; // al
  unsigned int v88; // ebx
  __int64 v89; // rdx
  unsigned int v90; // r8d
  __int64 v91; // rcx
  __int64 v92; // r9
  unsigned int v93; // ebx
  GdiHandleManager *v94; // rsi
  __int64 v95; // rdx
  unsigned int v96; // r8d
  __int64 v97; // rcx
  __int64 v98; // r9
  _DWORD *v99; // rdx
  unsigned int v100; // ebx
  __int64 v101; // rdx
  unsigned int v102; // r8d
  __int64 v103; // rcx
  __int64 v104; // r10
  int v105; // esi
  __int64 v106; // rbx
  HDC v107; // r12
  unsigned int v108; // edx
  _DWORD *v109; // rsi
  BOOL v110; // r15d
  char v111; // al
  unsigned int v112; // ebx
  GdiHandleManager *v113; // rsi
  __int64 v114; // rdx
  unsigned int v115; // r8d
  __int64 v116; // rcx
  __int64 v117; // r9
  _DWORD *v118; // rdx
  unsigned int v119; // ebx
  __int64 v120; // rdx
  unsigned int v121; // r8d
  __int64 v122; // rcx
  __int64 v123; // r10
  __m128i *ScreenRectForDpi; // rax
  __m128i v125; // xmm1
  __int64 v126; // rax
  unsigned __int64 v127; // xmm0_8
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 CurrentProcess; // rax
  __int64 v131; // rcx
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v133; // rbx
  unsigned int v134; // eax
  __int64 v135; // r9
  unsigned __int64 v136; // rdx
  unsigned int v137; // r8d
  __int64 v138; // rcx
  __int64 v139; // r10
  __int64 v140; // rdx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v141; // rdx
  unsigned int v142; // ecx
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rax
  GdiHandleManager *v146; // rbx
  unsigned int v147; // eax
  struct OBJECT *EntryObject; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v149; // rdx
  unsigned int v150; // ecx
  __int128 v151; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v152; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v153; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v154; // [rsp+58h] [rbp-A8h] BYREF
  int v155; // [rsp+60h] [rbp-A0h]
  int v156; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 *v157; // [rsp+70h] [rbp-90h] BYREF
  int v158; // [rsp+78h] [rbp-88h]
  int v159; // [rsp+7Ch] [rbp-84h]
  __int64 v160; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v161[2]; // [rsp+90h] [rbp-70h] BYREF
  int *v162[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v163; // [rsp+B0h] [rbp-50h]
  __int64 v164; // [rsp+B8h] [rbp-48h] BYREF
  int v165; // [rsp+C0h] [rbp-40h]
  __int64 v166; // [rsp+D0h] [rbp-30h] BYREF
  int v167; // [rsp+D8h] [rbp-28h]
  char v168[16]; // [rsp+E8h] [rbp-18h] BYREF
  char v169[16]; // [rsp+F8h] [rbp-8h] BYREF
  char v170[88]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v173; // [rsp+178h] [rbp+78h]
  struct _POINTL v175; // [rsp+188h] [rbp+88h] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v5 = a2;
  v151 = 0LL;
  v7 = *(_QWORD *)(v3 + 40);
  if ( (*(_WORD *)(v7 + 42) & 0x3FFF) == 0x29D )
  {
    ScreenRectForDpi = (__m128i *)GetScreenRectForDpi(v168, 0LL);
    v8 = *((_DWORD *)v5 + 16);
    v125 = *ScreenRectForDpi;
    v126 = ScreenRectForDpi->m128i_i64[0];
    v127 = _mm_srli_si128(v125, 8).m128i_u64[0];
    v10 = v127 - v126;
    v11 = HIDWORD(v127) - HIDWORD(v126);
    DWORD2(v151) = v127 - v126;
    HIDWORD(v151) = HIDWORD(v127) - HIDWORD(v126);
  }
  else
  {
    v8 = *((_DWORD *)a2 + 16);
    if ( (v8 & 1) != 0 )
      v9 = *(_OWORD *)(v7 + 88);
    else
      v9 = *(_OWORD *)(v7 + 104);
    v151 = v9;
    v10 = DWORD2(v9);
    v11 = HIDWORD(v9);
  }
  v12 = (struct tagMONITOR *)*((_QWORD *)v5 + 11);
  v13 = v8;
  if ( v12 )
  {
    if ( (v8 & 0x4000) == 0 )
    {
      v129 = *(_QWORD *)GetMonitorRectForDpi(v169, *((_QWORD *)v5 + 11), 0LL, v7);
      LODWORD(v151) = v151 - v129;
      v10 -= v129;
      v13 = v8;
      DWORD2(v151) = v10;
      DWORD1(v151) -= HIDWORD(v129);
      v11 -= HIDWORD(v129);
      HIDWORD(v151) = v11;
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
      GreSetRectRgn(a1, 0);
    goto LABEL_25;
  }
  if ( qword_1C0258538 && (int)qword_1C0258538() >= 0 && qword_1C0258540 )
    v14 = qword_1C0258540(*((_QWORD *)v5 + 2));
  else
    v14 = 0LL;
  if ( v14 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 24LL) & 0x20000000) != 0
      && qword_1C0258548
      && (int)qword_1C0258548() >= 0
      && qword_1C0258550
      && qword_1C0258550(v14) )
    {
      v16 = *(_QWORD *)(v14 + 40);
      v17 = *((_QWORD *)v5 + 11);
      v18 = *(_DWORD *)(v16 + 88);
      v19 = *(_DWORD *)(v16 + 92);
      if ( v17 && *((int *)v5 + 16) < 0 )
      {
        LODWORD(v151) = v18 + v151;
        DWORD1(v151) += v19;
        DWORD2(v151) = v18 + v10;
        HIDWORD(v151) = v19 + v11;
        v153 = *(_OWORD *)GetMonitorRectForDpi(v170, v17, 0LL, v15);
        IntersectRect(&v151, &v151, &v153);
        v11 = HIDWORD(v151);
        v10 = DWORD2(v151);
      }
      v20 = -v19;
      v21 = -v18;
      LODWORD(v151) = v21 + v151;
      DWORD1(v151) += v20;
      DWORD2(v151) = v21 + v10;
      HIDWORD(v151) = v20 + v11;
      if ( a1 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v162, a1, 0);
        v175.y = v20;
        v22 = v162[0];
        v175.x = v21;
        if ( v162[0] )
        {
          RGNOBJ::bOffset(v162, &v175);
          v22 = v162[0];
        }
        if ( !v163 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v162);
        if ( v22 )
          _InterlockedDecrement(v22 + 3);
      }
      goto LABEL_25;
    }
    goto LABEL_183;
  }
  if ( a3 && (int)IsGetLayeredOrRedirectedParentSupported() >= 0 && a1 && (*((_DWORD *)v5 + 16) & 0x4000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v128);
LABEL_25:
  v23 = *((_QWORD *)v5 + 1);
  v24 = 0LL;
  v160 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v160);
  if ( (unsigned __int8)KeIsAttachedProcess(v25) )
  {
    CurrentProcess = PsGetCurrentProcess(v27, v26);
    PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v131);
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v28 = gpHandleManager;
  v29 = (unsigned __int16)v23 | ((unsigned int)v23 >> 8) & 0xFF0000;
  v158 = 1;
  if ( v29 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v23,
                                  1)
           + 13) == ((unsigned __int16)v23 | ((unsigned int)v23 >> 8) & 0xFF0000) >> 16 )
        v29 = (unsigned __int16)v23;
    }
    else
    {
      v29 = (unsigned __int16)v23;
    }
  }
  v30 = *((_QWORD *)v28 + 2);
  v31 = *(_DWORD *)(v30 + 2056);
  if ( v29 >= v31 + ((*(unsigned __int16 *)(v30 + 2) + 0xFFFF) << 16) )
    goto LABEL_230;
  v32 = ((v29 - v31) >> 16) + 1;
  if ( v29 < v31 )
    v32 = 0LL;
  v33 = *(_QWORD *)(v30 + 8 * v32 + 8);
  if ( (_DWORD)v32 )
    v29 += ((1 - (_DWORD)v32) << 16) - v31;
  v34 = 0LL;
  if ( v29 < *(_DWORD *)(v33 + 20) )
  {
    v152 = 16LL * (unsigned __int8)v29;
    v35 = *(_QWORD **)(v33 + 24);
    *(_QWORD *)&v153 = 8 * ((unsigned __int64)v29 >> 8);
    v175 = (struct _POINTL)(v152 + *(_QWORD *)(*v35 + v153));
    KeEnterCriticalRegion();
    ((void (__fastcall *)(_QWORD, _QWORD))ExAcquirePushLockExclusiveEx)(v175, 0LL);
    if ( v29 < *(_DWORD *)(v33 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + v153) + v152 + 8) )
    {
      *(_DWORD *)(24LL * v29 + *(_QWORD *)v33 + 8) |= 1u;
      v34 = (unsigned __int16 *)(24LL * v29 + *(_QWORD *)v33);
    }
    else
    {
      ((void (__fastcall *)(_QWORD, _QWORD))ExReleasePushLockExclusiveEx)(v175, 0LL);
      KeLeaveCriticalRegion();
    }
    v5 = a2;
  }
  v157 = v34;
  if ( !v34 )
  {
LABEL_230:
    KeLeaveCriticalRegion();
    goto LABEL_101;
  }
  _m_prefetchw(v34 + 4);
  v159 = *((_DWORD *)v34 + 2);
  v36 = *((_BYTE *)v34 + 15);
  if ( (v36 & 0x20) != 0 )
    goto LABEL_205;
  if ( (v36 & 0x40) != 0 )
  {
    v133 = gpHandleManager;
    v134 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v34 & 0xFFFFFF);
    v135 = *((_QWORD *)v133 + 2);
    v136 = v134;
    v137 = *(_DWORD *)(v135 + 2056);
    if ( v134 >= v137 + ((*(unsigned __int16 *)(v135 + 2) + 0xFFFF) << 16) )
      goto LABEL_202;
    v138 = ((v134 - v137) >> 16) + 1;
    if ( v134 < v137 )
      v138 = 0LL;
    v139 = *(_QWORD *)(v135 + 8 * v138 + 8);
    if ( (_DWORD)v138 )
      v136 = ((1 - (_DWORD)v138) << 16) - v137 + v134;
    if ( (unsigned int)v136 >= *(_DWORD *)(v139 + 20) )
LABEL_202:
      v140 = 0LL;
    else
      v140 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v139 + 24) + 8 * (v136 >> 8)) + 16LL * (unsigned __int8)v136 + 8);
    if ( *(_WORD *)(v140 + 12) && *(struct _KTHREAD **)(v140 + 16) == KeGetCurrentThread() )
    {
LABEL_206:
      v34 = v157;
      goto LABEL_43;
    }
LABEL_205:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v157);
    if ( !v158 )
      goto LABEL_101;
    goto LABEL_206;
  }
LABEL_43:
  if ( *((_BYTE *)v34 + 14) == 1 && v34[6] == WORD1(v23) )
  {
    v37 = *(_DWORD *)v34 & 0xFFFFFF;
    if ( v37 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v34,
                                    1)
             + 13) == HIWORD(v37) )
          v37 = (unsigned __int16)v37;
      }
      else
      {
        v37 = *v34;
      }
    }
    v38 = *((_QWORD *)gpHandleManager + 2);
    v39 = *(_DWORD *)(v38 + 2056);
    if ( v37 >= v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
      goto LABEL_210;
    v40 = ((v37 - v39) >> 16) + 1;
    if ( v37 < v39 )
      v40 = 0LL;
    v41 = *(_QWORD *)(v38 + 8 * v40 + 8);
    if ( (_DWORD)v40 )
      v37 += ((1 - (_DWORD)v40) << 16) - v39;
    if ( v37 >= *(_DWORD *)(v41 + 20) )
LABEL_210:
      v24 = 0LL;
    else
      v24 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v41 + 24) + 8 * ((unsigned __int64)v37 >> 8))
                      + 16LL * (unsigned __int8)v37
                      + 8);
    ++*(_DWORD *)(v24 + 8);
  }
  v42 = *(_DWORD *)v34 & 0xFFFFFF;
  if ( v42 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v34,
                                  1)
           + 13) == HIWORD(v42) )
        v42 = (unsigned __int16)v42;
    }
    else
    {
      v42 = *v34;
    }
  }
  v43 = gpHandleManager;
  v44 = *((_QWORD *)gpHandleManager + 2);
  v45 = *(_DWORD *)(v44 + 2056);
  if ( v42 >= v45 + ((*(unsigned __int16 *)(v44 + 2) + 0xFFFF) << 16) )
    goto LABEL_214;
  v46 = ((v42 - v45) >> 16) + 1;
  if ( v42 < v45 )
    v46 = 0LL;
  v47 = *(_QWORD *)(v44 + 8 * v46 + 8);
  if ( (_DWORD)v46 )
    v42 += ((1 - (_DWORD)v46) << 16) - v45;
  if ( v42 >= *(_DWORD *)(v47 + 20) )
LABEL_214:
    v48 = 0LL;
  else
    v48 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v47 + 24) + 8 * ((unsigned __int64)v42 >> 8))
                     + 16LL * (unsigned __int8)v42
                     + 8);
  v49 = (unsigned __int16)*v48 | (*v48 >> 8) & 0xFF0000;
  if ( v49 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v48,
                                  1)
           + 13) == HIWORD(v49) )
        v49 = (unsigned __int16)v49;
    }
    else
    {
      v49 = (unsigned __int16)*v48;
    }
  }
  v50 = *((_QWORD *)v43 + 2);
  v51 = *(_DWORD *)(v50 + 2056);
  if ( v49 < v51 + ((*(unsigned __int16 *)(v50 + 2) + 0xFFFF) << 16) )
  {
    v52 = ((v49 - v51) >> 16) + 1;
    if ( v49 < v51 )
      v52 = 0LL;
    v53 = *(_QWORD *)(v50 + 8 * v52 + 8);
    if ( (_DWORD)v52 )
      v49 += ((1 - (_DWORD)v52) << 16) - v51;
    *(_DWORD *)(*(_QWORD *)v53 + 24LL * v49 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v53 + 24) + 8 * ((unsigned __int64)v49 >> 8)) + 16LL * (unsigned __int8)v49,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v24 )
  {
    *(_QWORD *)(v24 + 8LL * (*(_DWORD *)(v24 + 40) & 1) + 1016) = v151;
    DC::vCalcFillOrigin((DC *)v24);
    v54 = *(_DWORD *)(v24 + 520);
    *(_OWORD *)(v24 + 1032) = v151;
    if ( (v54 & 1) != 0 && (v54 & 2) == 0 )
    {
      *(_DWORD *)(v24 + 36) |= 0x10u;
      *(_DWORD *)(v24 + 520) = v54 | 4;
    }
    v55 = *(HDC *)v24;
    v56 = (unsigned __int16)*(_QWORD *)v24;
    v57 = ((unsigned int)*(_QWORD *)v24 >> 8) & 0xFF0000;
    v164 = 0LL;
    v165 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v164, v56 | v57, 0, 0, 1);
    if ( v165 )
    {
      v58 = (_DWORD *)v164;
      v59 = (*(_BYTE *)(v164 + 15) & 8) != 0;
      v60 = *(_BYTE *)(v164 + 14);
      if ( v60 == 5 )
      {
        v141 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v24 + 680);
        v142 = 0;
      }
      else
      {
        if ( v60 != 16 )
        {
LABEL_80:
          --*(_DWORD *)(v24 + 8);
          v61 = *v58 & 0xFFFFFF;
          if ( v61 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v61,
                                          1)
                   + 13) == HIWORD(v61) )
                v61 = (unsigned __int16)v61;
            }
            else
            {
              v61 = (unsigned __int16)v61;
            }
          }
          v62 = gpHandleManager;
          v63 = *((_QWORD *)gpHandleManager + 2);
          v64 = *(_DWORD *)(v63 + 2056);
          if ( v61 >= v64 + ((*(unsigned __int16 *)(v63 + 2) + 0xFFFF) << 16) )
            goto LABEL_226;
          v65 = ((v61 - v64) >> 16) + 1;
          if ( v61 < v64 )
            v65 = 0LL;
          v66 = *(_QWORD *)(v63 + 8 * v65 + 8);
          if ( (_DWORD)v65 )
            v61 += ((1 - (_DWORD)v65) << 16) - v64;
          if ( v61 >= *(_DWORD *)(v66 + 20) )
LABEL_226:
            v67 = 0LL;
          else
            v67 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v66 + 24) + 8 * ((unsigned __int64)v61 >> 8))
                             + 16LL * (unsigned __int8)v61
                             + 8);
          v68 = (unsigned __int16)*v67 | (*v67 >> 8) & 0xFF0000;
          if ( v68 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)*v67,
                                          1)
                   + 13) == HIWORD(v68) )
                v68 = (unsigned __int16)v68;
            }
            else
            {
              v68 = (unsigned __int16)*v67;
            }
          }
          v69 = *((_QWORD *)v62 + 2);
          v70 = *(_DWORD *)(v69 + 2056);
          if ( v68 < v70 + ((*(unsigned __int16 *)(v69 + 2) + 0xFFFF) << 16) )
          {
            v71 = ((v68 - v70) >> 16) + 1;
            if ( v68 < v70 )
              v71 = 0LL;
            v72 = *(_QWORD *)(v69 + 8 * v71 + 8);
            if ( (_DWORD)v71 )
              v68 += ((1 - (_DWORD)v71) << 16) - v70;
            *(_DWORD *)(*(_QWORD *)v72 + 24LL * v68 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v72 + 24) + 8 * ((unsigned __int64)v68 >> 8)) + 16LL * (unsigned __int8)v68,
              0LL);
            KeLeaveCriticalRegion();
          }
          KeLeaveCriticalRegion();
          if ( v59 )
            bDeleteDCInternalEx(v55, 0LL);
          goto LABEL_101;
        }
        v141 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v24 + 136);
        v142 = 2;
      }
      TrackObjectReferenceDecrement(v142, v141);
      goto LABEL_80;
    }
  }
LABEL_101:
  if ( !a3 )
    return;
  v73 = *((_QWORD *)v5 + 1);
  v161[1] = 0LL;
  v74 = 0LL;
  v152 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v152);
  if ( (unsigned __int8)KeIsAttachedProcess(v75) )
  {
    v143 = PsGetCurrentProcess(v77, v76);
    PsGetProcessSessionIdEx(v143);
    v145 = PsGetCurrentThreadProcess(v144);
    PsGetProcessSessionIdEx(v145);
  }
  v78 = gpHandleManager;
  v155 = 1;
  v79 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v73 | ((unsigned int)v73 >> 8) & 0xFF0000);
  v80 = *((_QWORD *)v78 + 2);
  v81 = v79;
  v82 = *(_DWORD *)(v80 + 2056);
  if ( v79 >= v82 + ((*(unsigned __int16 *)(v80 + 2) + 0xFFFF) << 16) )
    goto LABEL_246;
  v83 = ((v79 - v82) >> 16) + 1;
  if ( v79 < v82 )
    v83 = 0LL;
  v84 = *(_QWORD *)(v80 + 8 * v83 + 8);
  if ( (_DWORD)v83 )
    v81 = ((1 - (_DWORD)v83) << 16) - v82 + v79;
  v85 = 0LL;
  if ( v81 < *(_DWORD *)(v84 + 20) )
  {
    *(_QWORD *)&v153 = 16LL * (unsigned __int8)v81;
    v86 = *(_QWORD **)(v84 + 24);
    v175 = (struct _POINTL)(8 * ((unsigned __int64)v81 >> 8));
    v173 = v153 + *(_QWORD *)(*v86 + *(_QWORD *)&v175);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v173, 0LL);
    if ( v81 < *(_DWORD *)(v84 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v84 + 24) + *(_QWORD *)&v175) + v153 + 8) )
    {
      *(_DWORD *)(24LL * v81 + *(_QWORD *)v84 + 8) |= 1u;
      v85 = (unsigned __int16 *)(24LL * v81 + *(_QWORD *)v84);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v173, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v154 = v85;
  if ( !v85 )
  {
LABEL_246:
    KeLeaveCriticalRegion();
    v106 = 0LL;
    goto LABEL_151;
  }
  _m_prefetchw(v85 + 4);
  v156 = *((_DWORD *)v85 + 2);
  v87 = *((_BYTE *)v85 + 15);
  if ( (v87 & 0x20) == 0 )
  {
    if ( (v87 & 0x40) == 0 )
      goto LABEL_116;
    v146 = gpHandleManager;
    v147 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v85 & 0xFFFFFF);
    EntryObject = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v146 + 2), v147);
    if ( *((_WORD *)EntryObject + 6) )
    {
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
        goto LABEL_235;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v154);
  v105 = v155;
  if ( v155 )
  {
LABEL_235:
    v85 = v154;
LABEL_116:
    if ( *((_BYTE *)v85 + 14) == 1 && v85[6] == WORD1(v73) )
    {
      v88 = *(_DWORD *)v85 & 0xFFFFFF;
      if ( v88 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v85,
                                      1)
               + 13) == HIWORD(v88) )
            v88 = (unsigned __int16)v88;
        }
        else
        {
          v88 = *v85;
        }
      }
      v89 = *((_QWORD *)gpHandleManager + 2);
      v90 = *(_DWORD *)(v89 + 2056);
      if ( v88 < v90 + ((*(unsigned __int16 *)(v89 + 2) + 0xFFFF) << 16) )
      {
        v91 = ((v88 - v90) >> 16) + 1;
        if ( v88 < v90 )
          v91 = 0LL;
        v92 = *(_QWORD *)(v89 + 8 * v91 + 8);
        if ( (_DWORD)v91 )
          v88 += ((1 - (_DWORD)v91) << 16) - v90;
        if ( v88 < *(_DWORD *)(v92 + 20) )
          v74 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v92 + 24) + 8 * ((unsigned __int64)v88 >> 8))
                          + 16LL * (unsigned __int8)v88
                          + 8);
      }
      ++*(_DWORD *)(v74 + 8);
    }
    v93 = *(_DWORD *)v85 & 0xFFFFFF;
    if ( v93 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v85,
                                    1)
             + 13) == HIWORD(v93) )
          v93 = (unsigned __int16)v93;
      }
      else
      {
        v93 = *v85;
      }
    }
    v94 = gpHandleManager;
    v95 = *((_QWORD *)gpHandleManager + 2);
    v96 = *(_DWORD *)(v95 + 2056);
    if ( v93 >= v96 + ((*(unsigned __int16 *)(v95 + 2) + 0xFFFF) << 16) )
      goto LABEL_242;
    v97 = ((v93 - v96) >> 16) + 1;
    if ( v93 < v96 )
      v97 = 0LL;
    v98 = *(_QWORD *)(v95 + 8 * v97 + 8);
    if ( (_DWORD)v97 )
      v93 += ((1 - (_DWORD)v97) << 16) - v96;
    if ( v93 >= *(_DWORD *)(v98 + 20) )
LABEL_242:
      v99 = 0LL;
    else
      v99 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v98 + 24) + 8 * ((unsigned __int64)v93 >> 8))
                       + 16LL * (unsigned __int8)v93
                       + 8);
    v100 = (unsigned __int16)*v99 | (*v99 >> 8) & 0xFF0000;
    if ( v100 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v99,
                                    1)
             + 13) == HIWORD(v100) )
          v100 = (unsigned __int16)v100;
      }
      else
      {
        v100 = (unsigned __int16)*v99;
      }
    }
    v101 = *((_QWORD *)v94 + 2);
    v102 = *(_DWORD *)(v101 + 2056);
    if ( v100 < v102 + ((*(unsigned __int16 *)(v101 + 2) + 0xFFFF) << 16) )
    {
      v103 = ((v100 - v102) >> 16) + 1;
      if ( v100 < v102 )
        v103 = 0LL;
      v104 = *(_QWORD *)(v101 + 8 * v103 + 8);
      if ( (_DWORD)v103 )
        v100 += ((1 - (_DWORD)v103) << 16) - v102;
      *(_DWORD *)(*(_QWORD *)v104 + 24LL * v100 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v104 + 24) + 8 * ((unsigned __int64)v100 >> 8)) + 16LL * (unsigned __int8)v100,
        0LL);
      KeLeaveCriticalRegion();
    }
    v105 = 0;
    v155 = 0;
    v154 = 0LL;
    KeLeaveCriticalRegion();
  }
  v106 = v74;
  if ( v105 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v154);
LABEL_151:
  v161[0] = v74;
  GreSelectVisRgnInternal(v161, a1, 1LL);
  if ( !v106 )
    return;
  v107 = *(HDC *)v74;
  v108 = (unsigned __int16)*(_DWORD *)v106 | (*(_DWORD *)v106 >> 8) & 0xFF0000;
  v166 = 0LL;
  v167 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v166, v108, 0, 0, 1);
  if ( !v167 )
    return;
  v109 = (_DWORD *)v166;
  v110 = (*(_BYTE *)(v166 + 15) & 8) != 0;
  v111 = *(_BYTE *)(v166 + 14);
  if ( v111 == 5 )
  {
    v149 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v106 + 680);
    v150 = 0;
LABEL_249:
    TrackObjectReferenceDecrement(v150, v149);
    goto LABEL_155;
  }
  if ( v111 == 16 )
  {
    v149 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v106 + 136);
    v150 = 2;
    goto LABEL_249;
  }
LABEL_155:
  --*(_DWORD *)(v106 + 8);
  v112 = *v109 & 0xFFFFFF;
  if ( v112 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *(unsigned __int16 *)v109,
                                  1)
           + 13) == HIWORD(v112) )
        v112 = (unsigned __int16)v112;
    }
    else
    {
      v112 = *(unsigned __int16 *)v109;
    }
  }
  v113 = gpHandleManager;
  v114 = *((_QWORD *)gpHandleManager + 2);
  v115 = *(_DWORD *)(v114 + 2056);
  if ( v112 >= v115 + ((*(unsigned __int16 *)(v114 + 2) + 0xFFFF) << 16) )
    goto LABEL_253;
  v116 = ((v112 - v115) >> 16) + 1;
  if ( v112 < v115 )
    v116 = 0LL;
  v117 = *(_QWORD *)(v114 + 8 * v116 + 8);
  if ( (_DWORD)v116 )
    v112 += ((1 - (_DWORD)v116) << 16) - v115;
  if ( v112 >= *(_DWORD *)(v117 + 20) )
LABEL_253:
    v118 = 0LL;
  else
    v118 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v117 + 24) + 8 * ((unsigned __int64)v112 >> 8))
                      + 16LL * (unsigned __int8)v112
                      + 8);
  v119 = (unsigned __int16)*v118 | (*v118 >> 8) & 0xFF0000;
  if ( v119 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v118,
                                  1)
           + 13) == HIWORD(v119) )
        v119 = (unsigned __int16)v119;
    }
    else
    {
      v119 = (unsigned __int16)*v118;
    }
  }
  v120 = *((_QWORD *)v113 + 2);
  v121 = *(_DWORD *)(v120 + 2056);
  if ( v119 < v121 + ((*(unsigned __int16 *)(v120 + 2) + 0xFFFF) << 16) )
  {
    v122 = ((v119 - v121) >> 16) + 1;
    if ( v119 < v121 )
      v122 = 0LL;
    v123 = *(_QWORD *)(v120 + 8 * v122 + 8);
    if ( (_DWORD)v122 )
      v119 += ((1 - (_DWORD)v122) << 16) - v121;
    *(_DWORD *)(*(_QWORD *)v123 + 24LL * v119 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v123 + 24) + 8 * ((unsigned __int64)v119 >> 8)) + 16LL * (unsigned __int8)v119,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v110 )
    bDeleteDCInternalEx(v107, 0LL);
}
