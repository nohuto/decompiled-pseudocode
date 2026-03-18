/*
 * XREFs of ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00462B0
 * Callers:
 *     UserSetDCVisRgn @ 0x1C001F800 (UserSetDCVisRgn.c)
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C001CDA0 (GreSetRectRgn.c)
 *     GetScreenRectForDpi @ 0x1C002F254 (GetScreenRectForDpi.c)
 *     IntersectRect @ 0x1C002F724 (IntersectRect.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C00399B0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     bDeleteDCInternalEx @ 0x1C003A1C0 (bDeleteDCInternalEx.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0040510 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0040820 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00445F0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0044950 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z @ 0x1C00456F0 (-GetEntryObject@GdiHandleEntryDirectory@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C00475B4 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004C72C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C005E1C8 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     IsGetLayeredOrRedirectedParentSupported @ 0x1C00A22DC (IsGetLayeredOrRedirectedParentSupported.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C00A2BEC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00A2D08 (GetMonitorRectForDpi.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v24; // rdx
  __int64 v25; // rcx
  GdiHandleManager *v26; // rsi
  unsigned int v27; // ebx
  __int64 v28; // r12
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // r12
  unsigned __int16 *v32; // rsi
  _QWORD *v33; // rax
  char v34; // al
  unsigned int v35; // ebx
  __int64 v36; // rdx
  unsigned int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // r9
  unsigned int v40; // ebx
  GdiHandleManager *v41; // rsi
  __int64 v42; // rdx
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // r9
  _DWORD *v46; // rdx
  unsigned int v47; // ebx
  __int64 v48; // rdx
  unsigned int v49; // r8d
  __int64 v50; // rcx
  __int64 v51; // r10
  int v52; // eax
  HDC v53; // r12
  int v54; // eax
  unsigned int v55; // edx
  _DWORD *v56; // rbx
  BOOL v57; // r15d
  char v58; // al
  unsigned int v59; // ebx
  GdiHandleManager *v60; // rsi
  __int64 v61; // rdx
  unsigned int v62; // r8d
  __int64 v63; // rcx
  __int64 v64; // r9
  _DWORD *v65; // rdx
  unsigned int v66; // ebx
  __int64 v67; // rdx
  unsigned int v68; // r8d
  __int64 v69; // rcx
  __int64 v70; // r10
  __int64 v71; // r14
  __int64 v72; // r12
  __int64 v73; // rdx
  __int64 v74; // rcx
  GdiHandleManager *v75; // rbx
  unsigned int v76; // eax
  __int64 v77; // rbx
  unsigned int v78; // r15d
  unsigned int v79; // edx
  __int64 v80; // rcx
  __int64 v81; // rbx
  unsigned __int16 *v82; // rsi
  _QWORD *v83; // rax
  char v84; // al
  unsigned int v85; // ebx
  __int64 v86; // rdx
  unsigned int v87; // r8d
  __int64 v88; // rcx
  __int64 v89; // r9
  unsigned int v90; // ebx
  GdiHandleManager *v91; // rsi
  __int64 v92; // rdx
  unsigned int v93; // r8d
  __int64 v94; // rcx
  __int64 v95; // r9
  _DWORD *v96; // rdx
  unsigned int v97; // ebx
  __int64 v98; // rdx
  unsigned int v99; // r8d
  __int64 v100; // rcx
  __int64 v101; // r10
  int v102; // esi
  __int64 v103; // rbx
  HDC v104; // r12
  unsigned int v105; // edx
  _DWORD *v106; // rsi
  BOOL v107; // r15d
  char v108; // al
  unsigned int v109; // ebx
  GdiHandleManager *v110; // rsi
  __int64 v111; // rdx
  unsigned int v112; // r8d
  __int64 v113; // rcx
  __int64 v114; // r9
  _DWORD *v115; // rdx
  unsigned int v116; // ebx
  __int64 v117; // rdx
  unsigned int v118; // r8d
  __int64 v119; // rcx
  __int64 v120; // r10
  __m128i *ScreenRectForDpi; // rax
  __m128i v122; // xmm1
  __int64 v123; // rax
  unsigned __int64 v124; // xmm0_8
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 CurrentProcess; // rax
  __int64 CurrentThreadProcess; // rax
  GdiHandleManager *v132; // rbx
  unsigned int v133; // eax
  __int64 v134; // r9
  unsigned __int64 v135; // rdx
  unsigned int v136; // r8d
  __int64 v137; // rcx
  __int64 v138; // r10
  __int64 v139; // rdx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rax
  GdiHandleManager *v144; // rbx
  unsigned int v145; // eax
  struct OBJECT *EntryObject; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int128 v149; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v150; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v151; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v152; // [rsp+58h] [rbp-A8h] BYREF
  int v153; // [rsp+60h] [rbp-A0h]
  int v154; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 *v155; // [rsp+70h] [rbp-90h] BYREF
  int v156; // [rsp+78h] [rbp-88h]
  int v157; // [rsp+7Ch] [rbp-84h]
  __int64 v158; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v159[2]; // [rsp+90h] [rbp-70h] BYREF
  int *v160[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v161; // [rsp+B0h] [rbp-50h]
  __int64 v162; // [rsp+B8h] [rbp-48h] BYREF
  int v163; // [rsp+C0h] [rbp-40h]
  __int64 v164; // [rsp+D0h] [rbp-30h] BYREF
  int v165; // [rsp+D8h] [rbp-28h]
  __m128i v166; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v167[16]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v168[88]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v171; // [rsp+178h] [rbp+78h]
  struct _POINTL v173; // [rsp+188h] [rbp+88h] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v5 = a2;
  v149 = 0LL;
  v7 = *(_QWORD *)(v3 + 40);
  if ( (*(_WORD *)(v7 + 42) & 0x2FFF) == 0x29D )
  {
    ScreenRectForDpi = GetScreenRectForDpi(&v166, 0);
    v8 = *((_DWORD *)v5 + 16);
    v122 = *ScreenRectForDpi;
    v123 = ScreenRectForDpi->m128i_i64[0];
    v124 = _mm_srli_si128(v122, 8).m128i_u64[0];
    v10 = v124 - v123;
    v11 = HIDWORD(v124) - HIDWORD(v123);
    DWORD2(v149) = v124 - v123;
    HIDWORD(v149) = HIDWORD(v124) - HIDWORD(v123);
  }
  else
  {
    v8 = *((_DWORD *)a2 + 16);
    if ( (v8 & 1) != 0 )
      v9 = *(_OWORD *)(v7 + 88);
    else
      v9 = *(_OWORD *)(v7 + 104);
    v149 = v9;
    v10 = DWORD2(v9);
    v11 = HIDWORD(v9);
  }
  v12 = (struct tagMONITOR *)*((_QWORD *)v5 + 11);
  v13 = v8;
  if ( v12 )
  {
    if ( (v8 & 0x4000) == 0 )
    {
      v129 = *(_QWORD *)GetMonitorRectForDpi(v167, *((_QWORD *)v5 + 11), 0LL);
      LODWORD(v149) = v149 - v129;
      v10 -= v129;
      v13 = v8;
      DWORD2(v149) = v10;
      DWORD1(v149) -= HIDWORD(v129);
      v11 -= HIDWORD(v129);
      HIDWORD(v149) = v11;
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
  if ( qword_1C0250578 && (int)qword_1C0250578() >= 0 && qword_1C0250580 )
    v14 = qword_1C0250580(*((_QWORD *)v5 + 2));
  else
    v14 = 0LL;
  if ( v14 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 24LL) & 0x20000000) != 0
      && qword_1C0250588
      && (int)qword_1C0250588() >= 0
      && qword_1C0250590
      && qword_1C0250590(v14) )
    {
      v15 = *(_QWORD *)(v14 + 40);
      v16 = *((_QWORD *)v5 + 11);
      v17 = *(_DWORD *)(v15 + 88);
      v18 = *(_DWORD *)(v15 + 92);
      if ( v16 && *((int *)v5 + 16) < 0 )
      {
        LODWORD(v149) = v17 + v149;
        DWORD1(v149) += v18;
        DWORD2(v149) = v17 + v10;
        HIDWORD(v149) = v18 + v11;
        v151 = *(_OWORD *)GetMonitorRectForDpi(v168, v16, 0LL);
        IntersectRect(&v149, (int *)&v149, (int *)&v151);
        v11 = HIDWORD(v149);
        v10 = DWORD2(v149);
      }
      v19 = -v18;
      v20 = -v17;
      LODWORD(v149) = v20 + v149;
      DWORD1(v149) += v19;
      DWORD2(v149) = v20 + v10;
      HIDWORD(v149) = v19 + v11;
      if ( a1 )
      {
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v160, a1, 0);
        v173.y = v19;
        v21 = v160[0];
        v173.x = v20;
        if ( v160[0] )
        {
          RGNOBJ::bOffset(v160, &v173);
          v21 = v160[0];
        }
        if ( !v161 )
          RGNOBJ::UpdateUserRgn((RGNOBJ *)v160);
        if ( v21 )
          _InterlockedDecrement(v21 + 3);
      }
      goto LABEL_25;
    }
    goto LABEL_183;
  }
  if ( a3 && (int)IsGetLayeredOrRedirectedParentSupported() >= 0 && a1 && (*((_DWORD *)v5 + 16) & 0x4000) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v126, v125, v127, v128);
LABEL_25:
  v22 = *((_QWORD *)v5 + 1);
  v23 = 0LL;
  v158 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v158);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    CurrentProcess = PsGetCurrentProcess(v25, v24);
    PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  v26 = gpHandleManager;
  v27 = (unsigned __int16)v22 | ((unsigned int)v22 >> 8) & 0xFF0000;
  v156 = 1;
  if ( v27 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v22,
                                  1)
           + 13) == ((unsigned __int16)v22 | ((unsigned int)v22 >> 8) & 0xFF0000) >> 16 )
        v27 = (unsigned __int16)v22;
    }
    else
    {
      v27 = (unsigned __int16)v22;
    }
  }
  v28 = *((_QWORD *)v26 + 2);
  v29 = *(_DWORD *)(v28 + 2056);
  if ( v27 >= v29 + ((*(unsigned __int16 *)(v28 + 2) + 0xFFFF) << 16) )
    goto LABEL_230;
  v30 = ((v27 - v29) >> 16) + 1;
  if ( v27 < v29 )
    v30 = 0LL;
  v31 = *(_QWORD *)(v28 + 8 * v30 + 8);
  if ( (_DWORD)v30 )
    v27 += ((1 - (_DWORD)v30) << 16) - v29;
  v32 = 0LL;
  if ( v27 < *(_DWORD *)(v31 + 20) )
  {
    v150 = 16LL * (unsigned __int8)v27;
    v33 = *(_QWORD **)(v31 + 24);
    *(_QWORD *)&v151 = 8 * ((unsigned __int64)v27 >> 8);
    v173 = (struct _POINTL)(v150 + *(_QWORD *)(*v33 + v151));
    KeEnterCriticalRegion();
    ((void (__fastcall *)(_QWORD, _QWORD))ExAcquirePushLockExclusiveEx)(v173, 0LL);
    if ( v27 < *(_DWORD *)(v31 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v31 + 24) + v151) + v150 + 8) )
    {
      *(_DWORD *)(24LL * v27 + *(_QWORD *)v31 + 8) |= 1u;
      v32 = (unsigned __int16 *)(24LL * v27 + *(_QWORD *)v31);
    }
    else
    {
      ((void (__fastcall *)(_QWORD, _QWORD))ExReleasePushLockExclusiveEx)(v173, 0LL);
      KeLeaveCriticalRegion();
    }
    v5 = a2;
  }
  v155 = v32;
  if ( !v32 )
  {
LABEL_230:
    KeLeaveCriticalRegion();
    goto LABEL_101;
  }
  _m_prefetchw(v32 + 4);
  v157 = *((_DWORD *)v32 + 2);
  v34 = *((_BYTE *)v32 + 15);
  if ( (v34 & 0x20) != 0 )
    goto LABEL_205;
  if ( (v34 & 0x40) != 0 )
  {
    v132 = gpHandleManager;
    v133 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v32 & 0xFFFFFF);
    v134 = *((_QWORD *)v132 + 2);
    v135 = v133;
    v136 = *(_DWORD *)(v134 + 2056);
    if ( v133 >= v136 + ((*(unsigned __int16 *)(v134 + 2) + 0xFFFF) << 16) )
      goto LABEL_202;
    v137 = ((v133 - v136) >> 16) + 1;
    if ( v133 < v136 )
      v137 = 0LL;
    v138 = *(_QWORD *)(v134 + 8 * v137 + 8);
    if ( (_DWORD)v137 )
      v135 = ((1 - (_DWORD)v137) << 16) - v136 + v133;
    if ( (unsigned int)v135 >= *(_DWORD *)(v138 + 20) )
LABEL_202:
      v139 = 0LL;
    else
      v139 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v138 + 24) + 8 * (v135 >> 8)) + 16LL * (unsigned __int8)v135 + 8);
    if ( *(_WORD *)(v139 + 12) && *(struct _KTHREAD **)(v139 + 16) == KeGetCurrentThread() )
    {
LABEL_206:
      v32 = v155;
      goto LABEL_43;
    }
LABEL_205:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v155);
    if ( !v156 )
      goto LABEL_101;
    goto LABEL_206;
  }
LABEL_43:
  if ( *((_BYTE *)v32 + 14) == 1 && v32[6] == WORD1(v22) )
  {
    v35 = *(_DWORD *)v32 & 0xFFFFFF;
    if ( v35 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v32,
                                    1)
             + 13) == HIWORD(v35) )
          v35 = (unsigned __int16)v35;
      }
      else
      {
        v35 = *v32;
      }
    }
    v36 = *((_QWORD *)gpHandleManager + 2);
    v37 = *(_DWORD *)(v36 + 2056);
    if ( v35 >= v37 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
      goto LABEL_210;
    v38 = ((v35 - v37) >> 16) + 1;
    if ( v35 < v37 )
      v38 = 0LL;
    v39 = *(_QWORD *)(v36 + 8 * v38 + 8);
    if ( (_DWORD)v38 )
      v35 += ((1 - (_DWORD)v38) << 16) - v37;
    if ( v35 >= *(_DWORD *)(v39 + 20) )
LABEL_210:
      v23 = 0LL;
    else
      v23 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v35 >> 8))
                      + 16LL * (unsigned __int8)v35
                      + 8);
    ++*(_DWORD *)(v23 + 8);
  }
  v40 = *(_DWORD *)v32 & 0xFFFFFF;
  if ( v40 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *v32,
                                  1)
           + 13) == HIWORD(v40) )
        v40 = (unsigned __int16)v40;
    }
    else
    {
      v40 = *v32;
    }
  }
  v41 = gpHandleManager;
  v42 = *((_QWORD *)gpHandleManager + 2);
  v43 = *(_DWORD *)(v42 + 2056);
  if ( v40 >= v43 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
    goto LABEL_214;
  v44 = ((v40 - v43) >> 16) + 1;
  if ( v40 < v43 )
    v44 = 0LL;
  v45 = *(_QWORD *)(v42 + 8 * v44 + 8);
  if ( (_DWORD)v44 )
    v40 += ((1 - (_DWORD)v44) << 16) - v43;
  if ( v40 >= *(_DWORD *)(v45 + 20) )
LABEL_214:
    v46 = 0LL;
  else
    v46 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * ((unsigned __int64)v40 >> 8))
                     + 16LL * (unsigned __int8)v40
                     + 8);
  v47 = (unsigned __int16)*v46 | (*v46 >> 8) & 0xFF0000;
  if ( v47 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v46,
                                  1)
           + 13) == HIWORD(v47) )
        v47 = (unsigned __int16)v47;
    }
    else
    {
      v47 = (unsigned __int16)*v46;
    }
  }
  v48 = *((_QWORD *)v41 + 2);
  v49 = *(_DWORD *)(v48 + 2056);
  if ( v47 < v49 + ((*(unsigned __int16 *)(v48 + 2) + 0xFFFF) << 16) )
  {
    v50 = ((v47 - v49) >> 16) + 1;
    if ( v47 < v49 )
      v50 = 0LL;
    v51 = *(_QWORD *)(v48 + 8 * v50 + 8);
    if ( (_DWORD)v50 )
      v47 += ((1 - (_DWORD)v50) << 16) - v49;
    *(_DWORD *)(*(_QWORD *)v51 + 24LL * v47 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v51 + 24) + 8 * ((unsigned __int64)v47 >> 8)) + 16LL * (unsigned __int8)v47,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v23 )
  {
    *(_QWORD *)(v23 + 8LL * (*(_DWORD *)(v23 + 40) & 1) + 1016) = v149;
    DC::vCalcFillOrigin((DC *)v23);
    v52 = *(_DWORD *)(v23 + 520);
    *(_OWORD *)(v23 + 1032) = v149;
    if ( (v52 & 1) != 0 && (v52 & 2) == 0 )
    {
      *(_DWORD *)(v23 + 36) |= 0x10u;
      *(_DWORD *)(v23 + 520) = v52 | 4;
    }
    v53 = *(HDC *)v23;
    v54 = (unsigned __int16)*(_QWORD *)v23;
    v55 = ((unsigned int)*(_QWORD *)v23 >> 8) & 0xFF0000;
    v162 = 0LL;
    v163 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v162, v54 | v55, 0, 0, 1);
    if ( v163 )
    {
      v56 = (_DWORD *)v162;
      v57 = (*(_BYTE *)(v162 + 15) & 8) != 0;
      v58 = *(_BYTE *)(v162 + 14);
      if ( v58 == 5 )
      {
        v140 = *(_QWORD *)(v23 + 680);
        v141 = 0LL;
      }
      else
      {
        if ( v58 != 16 )
        {
LABEL_80:
          --*(_DWORD *)(v23 + 8);
          v59 = *v56 & 0xFFFFFF;
          if ( v59 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)v59,
                                          1)
                   + 13) == HIWORD(v59) )
                v59 = (unsigned __int16)v59;
            }
            else
            {
              v59 = (unsigned __int16)v59;
            }
          }
          v60 = gpHandleManager;
          v61 = *((_QWORD *)gpHandleManager + 2);
          v62 = *(_DWORD *)(v61 + 2056);
          if ( v59 >= v62 + ((*(unsigned __int16 *)(v61 + 2) + 0xFFFF) << 16) )
            goto LABEL_226;
          v63 = ((v59 - v62) >> 16) + 1;
          if ( v59 < v62 )
            v63 = 0LL;
          v64 = *(_QWORD *)(v61 + 8 * v63 + 8);
          if ( (_DWORD)v63 )
            v59 += ((1 - (_DWORD)v63) << 16) - v62;
          if ( v59 >= *(_DWORD *)(v64 + 20) )
LABEL_226:
            v65 = 0LL;
          else
            v65 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v64 + 24) + 8 * ((unsigned __int64)v59 >> 8))
                             + 16LL * (unsigned __int8)v59
                             + 8);
          v66 = (unsigned __int16)*v65 | (*v65 >> 8) & 0xFF0000;
          if ( v66 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)*v65,
                                          1)
                   + 13) == HIWORD(v66) )
                v66 = (unsigned __int16)v66;
            }
            else
            {
              v66 = (unsigned __int16)*v65;
            }
          }
          v67 = *((_QWORD *)v60 + 2);
          v68 = *(_DWORD *)(v67 + 2056);
          if ( v66 < v68 + ((*(unsigned __int16 *)(v67 + 2) + 0xFFFF) << 16) )
          {
            v69 = ((v66 - v68) >> 16) + 1;
            if ( v66 < v68 )
              v69 = 0LL;
            v70 = *(_QWORD *)(v67 + 8 * v69 + 8);
            if ( (_DWORD)v69 )
              v66 += ((1 - (_DWORD)v69) << 16) - v68;
            *(_DWORD *)(*(_QWORD *)v70 + 24LL * v66 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v70 + 24) + 8 * ((unsigned __int64)v66 >> 8)) + 16LL * (unsigned __int8)v66,
              0LL);
            KeLeaveCriticalRegion();
          }
          KeLeaveCriticalRegion();
          if ( v57 )
            bDeleteDCInternalEx(v53, 0LL);
          goto LABEL_101;
        }
        v140 = *(_QWORD *)(v23 + 136);
        v141 = 2LL;
      }
      TrackObjectReferenceDecrement(v141, v140);
      goto LABEL_80;
    }
  }
LABEL_101:
  if ( !a3 )
    return;
  v71 = *((_QWORD *)v5 + 1);
  v159[1] = 0LL;
  v72 = 0LL;
  v150 = 0LL;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v150);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    v142 = PsGetCurrentProcess(v74, v73);
    PsGetProcessSessionIdEx(v142);
    v143 = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(v143);
  }
  v75 = gpHandleManager;
  v153 = 1;
  v76 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v71 | ((unsigned int)v71 >> 8) & 0xFF0000);
  v77 = *((_QWORD *)v75 + 2);
  v78 = v76;
  v79 = *(_DWORD *)(v77 + 2056);
  if ( v76 >= v79 + ((*(unsigned __int16 *)(v77 + 2) + 0xFFFF) << 16) )
    goto LABEL_246;
  v80 = ((v76 - v79) >> 16) + 1;
  if ( v76 < v79 )
    v80 = 0LL;
  v81 = *(_QWORD *)(v77 + 8 * v80 + 8);
  if ( (_DWORD)v80 )
    v78 = ((1 - (_DWORD)v80) << 16) - v79 + v76;
  v82 = 0LL;
  if ( v78 < *(_DWORD *)(v81 + 20) )
  {
    *(_QWORD *)&v151 = 16LL * (unsigned __int8)v78;
    v83 = *(_QWORD **)(v81 + 24);
    v173 = (struct _POINTL)(8 * ((unsigned __int64)v78 >> 8));
    v171 = v151 + *(_QWORD *)(*v83 + *(_QWORD *)&v173);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v171, 0LL);
    if ( v78 < *(_DWORD *)(v81 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v81 + 24) + *(_QWORD *)&v173) + v151 + 8) )
    {
      *(_DWORD *)(24LL * v78 + *(_QWORD *)v81 + 8) |= 1u;
      v82 = (unsigned __int16 *)(24LL * v78 + *(_QWORD *)v81);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v171, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  v152 = v82;
  if ( !v82 )
  {
LABEL_246:
    KeLeaveCriticalRegion();
    v103 = 0LL;
    goto LABEL_151;
  }
  _m_prefetchw(v82 + 4);
  v154 = *((_DWORD *)v82 + 2);
  v84 = *((_BYTE *)v82 + 15);
  if ( (v84 & 0x20) == 0 )
  {
    if ( (v84 & 0x40) == 0 )
      goto LABEL_116;
    v144 = gpHandleManager;
    v145 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v82 & 0xFFFFFF);
    EntryObject = GdiHandleEntryDirectory::GetEntryObject(*((GdiHandleEntryDirectory **)v144 + 2), v145);
    if ( *((_WORD *)EntryObject + 6) )
    {
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
        goto LABEL_235;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v152);
  v102 = v153;
  if ( v153 )
  {
LABEL_235:
    v82 = v152;
LABEL_116:
    if ( *((_BYTE *)v82 + 14) == 1 && v82[6] == WORD1(v71) )
    {
      v85 = *(_DWORD *)v82 & 0xFFFFFF;
      if ( v85 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      *v82,
                                      1)
               + 13) == HIWORD(v85) )
            v85 = (unsigned __int16)v85;
        }
        else
        {
          v85 = *v82;
        }
      }
      v86 = *((_QWORD *)gpHandleManager + 2);
      v87 = *(_DWORD *)(v86 + 2056);
      if ( v85 < v87 + ((*(unsigned __int16 *)(v86 + 2) + 0xFFFF) << 16) )
      {
        v88 = ((v85 - v87) >> 16) + 1;
        if ( v85 < v87 )
          v88 = 0LL;
        v89 = *(_QWORD *)(v86 + 8 * v88 + 8);
        if ( (_DWORD)v88 )
          v85 += ((1 - (_DWORD)v88) << 16) - v87;
        if ( v85 < *(_DWORD *)(v89 + 20) )
          v72 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v89 + 24) + 8 * ((unsigned __int64)v85 >> 8))
                          + 16LL * (unsigned __int8)v85
                          + 8);
      }
      ++*(_DWORD *)(v72 + 8);
    }
    v90 = *(_DWORD *)v82 & 0xFFFFFF;
    if ( v90 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    *v82,
                                    1)
             + 13) == HIWORD(v90) )
          v90 = (unsigned __int16)v90;
      }
      else
      {
        v90 = *v82;
      }
    }
    v91 = gpHandleManager;
    v92 = *((_QWORD *)gpHandleManager + 2);
    v93 = *(_DWORD *)(v92 + 2056);
    if ( v90 >= v93 + ((*(unsigned __int16 *)(v92 + 2) + 0xFFFF) << 16) )
      goto LABEL_242;
    v94 = ((v90 - v93) >> 16) + 1;
    if ( v90 < v93 )
      v94 = 0LL;
    v95 = *(_QWORD *)(v92 + 8 * v94 + 8);
    if ( (_DWORD)v94 )
      v90 += ((1 - (_DWORD)v94) << 16) - v93;
    if ( v90 >= *(_DWORD *)(v95 + 20) )
LABEL_242:
      v96 = 0LL;
    else
      v96 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v95 + 24) + 8 * ((unsigned __int64)v90 >> 8))
                       + 16LL * (unsigned __int8)v90
                       + 8);
    v97 = (unsigned __int16)*v96 | (*v96 >> 8) & 0xFF0000;
    if ( v97 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)*v96,
                                    1)
             + 13) == HIWORD(v97) )
          v97 = (unsigned __int16)v97;
      }
      else
      {
        v97 = (unsigned __int16)*v96;
      }
    }
    v98 = *((_QWORD *)v91 + 2);
    v99 = *(_DWORD *)(v98 + 2056);
    if ( v97 < v99 + ((*(unsigned __int16 *)(v98 + 2) + 0xFFFF) << 16) )
    {
      v100 = ((v97 - v99) >> 16) + 1;
      if ( v97 < v99 )
        v100 = 0LL;
      v101 = *(_QWORD *)(v98 + 8 * v100 + 8);
      if ( (_DWORD)v100 )
        v97 += ((1 - (_DWORD)v100) << 16) - v99;
      *(_DWORD *)(*(_QWORD *)v101 + 24LL * v97 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v101 + 24) + 8 * ((unsigned __int64)v97 >> 8)) + 16LL * (unsigned __int8)v97,
        0LL);
      KeLeaveCriticalRegion();
    }
    v102 = 0;
    v153 = 0;
    v152 = 0LL;
    KeLeaveCriticalRegion();
  }
  v103 = v72;
  if ( v102 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v152);
LABEL_151:
  v159[0] = v72;
  GreSelectVisRgnInternal(v159, a1, 1LL);
  if ( !v103 )
    return;
  v104 = *(HDC *)v72;
  v105 = (unsigned __int16)*(_DWORD *)v103 | (*(_DWORD *)v103 >> 8) & 0xFF0000;
  v164 = 0LL;
  v165 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v164, v105, 0, 0, 1);
  if ( !v165 )
    return;
  v106 = (_DWORD *)v164;
  v107 = (*(_BYTE *)(v164 + 15) & 8) != 0;
  v108 = *(_BYTE *)(v164 + 14);
  if ( v108 == 5 )
  {
    v147 = *(_QWORD *)(v103 + 680);
    v148 = 0LL;
LABEL_249:
    TrackObjectReferenceDecrement(v148, v147);
    goto LABEL_155;
  }
  if ( v108 == 16 )
  {
    v147 = *(_QWORD *)(v103 + 136);
    v148 = 2LL;
    goto LABEL_249;
  }
LABEL_155:
  --*(_DWORD *)(v103 + 8);
  v109 = *v106 & 0xFFFFFF;
  if ( v109 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  *(unsigned __int16 *)v106,
                                  1)
           + 13) == HIWORD(v109) )
        v109 = (unsigned __int16)v109;
    }
    else
    {
      v109 = *(unsigned __int16 *)v106;
    }
  }
  v110 = gpHandleManager;
  v111 = *((_QWORD *)gpHandleManager + 2);
  v112 = *(_DWORD *)(v111 + 2056);
  if ( v109 >= v112 + ((*(unsigned __int16 *)(v111 + 2) + 0xFFFF) << 16) )
    goto LABEL_253;
  v113 = ((v109 - v112) >> 16) + 1;
  if ( v109 < v112 )
    v113 = 0LL;
  v114 = *(_QWORD *)(v111 + 8 * v113 + 8);
  if ( (_DWORD)v113 )
    v109 += ((1 - (_DWORD)v113) << 16) - v112;
  if ( v109 >= *(_DWORD *)(v114 + 20) )
LABEL_253:
    v115 = 0LL;
  else
    v115 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v114 + 24) + 8 * ((unsigned __int64)v109 >> 8))
                      + 16LL * (unsigned __int8)v109
                      + 8);
  v116 = (unsigned __int16)*v115 | (*v115 >> 8) & 0xFF0000;
  if ( v116 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v115,
                                  1)
           + 13) == HIWORD(v116) )
        v116 = (unsigned __int16)v116;
    }
    else
    {
      v116 = (unsigned __int16)*v115;
    }
  }
  v117 = *((_QWORD *)v110 + 2);
  v118 = *(_DWORD *)(v117 + 2056);
  if ( v116 < v118 + ((*(unsigned __int16 *)(v117 + 2) + 0xFFFF) << 16) )
  {
    v119 = ((v116 - v118) >> 16) + 1;
    if ( v116 < v118 )
      v119 = 0LL;
    v120 = *(_QWORD *)(v117 + 8 * v119 + 8);
    if ( (_DWORD)v119 )
      v116 += ((1 - (_DWORD)v119) << 16) - v118;
    *(_DWORD *)(*(_QWORD *)v120 + 24LL * v116 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v120 + 24) + 8 * ((unsigned __int64)v116 >> 8)) + 16LL * (unsigned __int8)v116,
      0LL);
    KeLeaveCriticalRegion();
  }
  KeLeaveCriticalRegion();
  if ( v107 )
    bDeleteDCInternalEx(v104, 0LL);
}
