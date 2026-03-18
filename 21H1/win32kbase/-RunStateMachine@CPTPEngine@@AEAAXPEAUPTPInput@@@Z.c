/*
 * XREFs of ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C95CC
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1C01C91C0 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C00A649C (PtInRect.c)
 *     ?CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z @ 0x1C01C5F04 (-CancelMouseUpTimer@CPTPEngine@@AEAAXH@Z.c)
 *     ?DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z @ 0x1C01C62C4 (-DoGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAH@Z.c)
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01C64F0 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z @ 0x1C01C71D0 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@PEAH1@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C01C76D4 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x1C01C8140 (-FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C01C829C (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 *     ?HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z @ 0x1C01C85B4 (-HandleButtonSuppressionAndPendingUps@CPTPEngine@@AEAAXPEAUPTPInput@@H@Z.c)
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1C01C87D4 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z @ 0x1C01C883C (-MarkRecentlyTrackedContactsAsNonResting@CPTPEngine@@AEAAXPEAUPTPInput@@PEBUCContactState@@@Z.c)
 *     ?Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z @ 0x1C01C89B8 (-Process2FingerTap@CPTPEngine@@AEAAHPEAUPTPInput@@H@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01C91D8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C952C (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01CA658 (-SendEtwOutput@CBasePTPEngine@@IEAAXW4Action@Etw@Payload@PTPTelemetryOutput@@TParameters@345@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C01CA73C (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1C01CABA0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01CAD7C (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C01CAED8 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C01CB154 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C01CB308 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C01CB9A4 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 */

void __fastcall CPTPEngine::RunStateMachine(struct tagPOINT *this, struct PTPInput *a2)
{
  int v2; // r14d
  unsigned int v3; // r12d
  int v4; // eax
  struct PTPInput *v5; // rsi
  int v6; // edi
  unsigned int v8; // r15d
  LONG x; // eax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  LONG v12; // eax
  int y; // ecx
  struct tagPOINT v14; // rax
  unsigned __int64 v15; // rax
  LONG v16; // r13d
  int v17; // eax
  int v18; // r13d
  LONG v19; // eax
  char *v20; // r13
  __int128 v21; // xmm0
  struct tagPOINT *v22; // r15
  int v23; // r12d
  unsigned int v24; // ecx
  int v25; // r14d
  unsigned int v26; // eax
  BOOL v27; // eax
  int v28; // ecx
  unsigned int v29; // eax
  int v30; // r14d
  LONG v31; // ecx
  char *v32; // r15
  __int64 v33; // r14
  LONG v34; // ecx
  unsigned int v35; // edx
  LONG v36; // eax
  char *v37; // r13
  LONG v38; // eax
  LONG v39; // ecx
  int GestureAndMarkGesturingContactsAsNonResting; // eax
  __int64 v41; // r8
  char v42; // dl
  char v43; // al
  int v44; // r12d
  unsigned int v45; // r15d
  struct tagPOINT v46; // rax
  char v47; // cl
  CPTPEngine *i; // rax
  int v49; // edx
  unsigned int v50; // r15d
  int v51; // r8d
  unsigned int v52; // edx
  struct tagPOINT *v53; // r14
  int v54; // ecx
  struct CContactState *v55; // rdx
  __int64 v56; // r10
  int v57; // edx
  LONG v58; // eax
  unsigned int v59; // r13d
  unsigned int v60; // r14d
  unsigned int v61; // r10d
  LONG *p_y; // r11
  __int64 v63; // r12
  struct tagPOINT *v64; // r9
  __int64 v65; // r15
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // r8
  LONG v68; // eax
  LONG v69; // eax
  LONG v70; // r8d
  BOOL v71; // r14d
  LONG v72; // ecx
  int v73; // edx
  char v74; // al
  char v75; // r15
  struct CContactState *v76; // r13
  LONG v77; // edx
  int v78; // r8d
  int v79; // r14d
  unsigned int v80; // r10d
  char *v81; // r8
  __int64 v82; // r9
  LONG v83; // ecx
  unsigned int v84; // ecx
  int v85; // ecx
  __int64 v86; // rdx
  int v87; // edx
  unsigned int v88; // r8d
  __int64 v89; // rcx
  int v90; // esi
  unsigned int v91; // eax
  unsigned int v92; // [rsp+30h] [rbp-D0h]
  int v93; // [rsp+34h] [rbp-CCh]
  int v94; // [rsp+38h] [rbp-C8h]
  int v95; // [rsp+3Ch] [rbp-C4h]
  __int128 v96; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v97; // [rsp+50h] [rbp-B0h]
  unsigned int v98; // [rsp+64h] [rbp-9Ch]
  int v99; // [rsp+68h] [rbp-98h] BYREF
  int v100; // [rsp+6Ch] [rbp-94h]
  int v101; // [rsp+70h] [rbp-90h]
  int v102; // [rsp+74h] [rbp-8Ch] BYREF
  int v103; // [rsp+78h] [rbp-88h] BYREF
  int v104; // [rsp+7Ch] [rbp-84h] BYREF
  int v105; // [rsp+80h] [rbp-80h]
  int v106; // [rsp+84h] [rbp-7Ch]
  int v107; // [rsp+88h] [rbp-78h]
  int v108; // [rsp+8Ch] [rbp-74h] BYREF
  __int128 v109; // [rsp+90h] [rbp-70h] BYREF
  __int64 v110; // [rsp+A0h] [rbp-60h]
  struct CContactState *v111; // [rsp+B0h] [rbp-50h]
  unsigned int v112; // [rsp+B8h] [rbp-48h]
  int v113; // [rsp+BCh] [rbp-44h]
  int v114; // [rsp+C0h] [rbp-40h]
  unsigned int v115; // [rsp+C8h] [rbp-38h]
  __int64 v116; // [rsp+E0h] [rbp-20h]
  __int128 v117; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v118; // [rsp+100h] [rbp+0h]
  _OWORD v119[2]; // [rsp+110h] [rbp+10h]
  __int64 v120; // [rsp+138h] [rbp+38h]
  unsigned int v121; // [rsp+190h] [rbp+90h]
  int v123; // [rsp+1A0h] [rbp+A0h]
  int v124; // [rsp+1A8h] [rbp+A8h]

  v2 = *((_DWORD *)a2 + 9);
  v3 = 0;
  v4 = *((_DWORD *)a2 + 17) & 0x70;
  v111 = 0LL;
  v5 = a2;
  v105 = 0;
  v6 = 1;
  v121 = 0;
  v102 = 0;
  v8 = 0;
  v103 = 0;
  v104 = 0;
  v99 = 0;
  v108 = 0;
  v94 = 0;
  v92 = 0;
  v100 = v2;
  v106 = 0;
  v124 = 0;
  v93 = 0;
  v95 = 0;
  this[443].x = v4;
  CPTPEngine::HandleButtonSuppressionAndPendingUps((CPTPEngine *)this, a2, v2);
  if ( !(unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    v109 = 0LL;
    v97 = 0LL;
    v110 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 8LL, &v109);
  }
  x = this[479].x;
  if ( (x & 1) == 0 && (x & 2) == 0 && (x & 4) == 0 )
  {
    v10 = 0LL;
    v11 = 0;
    do
    {
      if ( v11 >= 6 )
        break;
      v12 = this[49 * v11 + 145].x;
      if ( (v12 & 1) != 0 && (v12 & 0x80u) == 0 )
        v10 = 1LL;
      ++v11;
    }
    while ( !(_DWORD)v10 );
    if ( !(_DWORD)v10 && *((_DWORD *)v5 + 12) != this[441].x + this[442].x )
    {
      CBasePTPEngine::SendInertiaOutput(this, v10);
      if ( *((_DWORD *)v5 + 10) )
        this[479].x &= 0xFEFFDFFF;
      y = 0;
      if ( this[2].y )
        y = this[51].y;
      v14 = this[470];
      if ( *(_QWORD *)&v14 && *((_QWORD *)v5 + 1) > *(unsigned __int64 *)&v14 && y > 0 )
        CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 1);
      this[470] = *(struct tagPOINT *)v5;
      v15 = *((_QWORD *)v5 + 2);
      if ( v15 > *((_QWORD *)v5 + 1) )
      {
        v109 = v15;
        v110 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
        CBasePTPEngine::SendTelemetryOutput(this, 0LL, &v109);
      }
    }
  }
  v16 = this[443].x;
  v107 = v16 & 0x10;
  v113 = v107 != 0;
  v17 = v16 & 0x20;
  v18 = v16 & 0x40;
  v114 = v17;
  v19 = this[479].x;
  v101 = v18;
  v115 = (v19 & 0x40000u) >> 18;
  v123 = this[443].y;
  this[479].x = v19 & 0xFFFBFFFF;
  if ( v2 )
    goto LABEL_185;
  this[442].x = 0;
  v20 = (char *)v5 + 56;
  v98 = 0;
  if ( *((_DWORD *)v5 + 12) )
  {
    do
    {
      v21 = *(_OWORD *)v20;
      v112 = *((_DWORD *)v20 + 1) % this[2].x;
      v22 = &this[49 * v112 + 145];
      *(_OWORD *)&v22[37].x = v21;
      *(_OWORD *)&v22[39].x = *((_OWORD *)v20 + 1);
      *(_OWORD *)&v22[41].x = *((_OWORD *)v20 + 2);
      *(_OWORD *)&v22[43].x = *((_OWORD *)v20 + 3);
      *(_OWORD *)&v22[45].x = *((_OWORD *)v20 + 4);
      *(_OWORD *)&v22[47].x = *((_OWORD *)v20 + 5);
      v23 = *((_DWORD *)v20 + 3);
      *((_DWORD *)v20 + 3) = v23 & 0xFFFFFF8F;
      v24 = v22->x;
      if ( (v22->x & 1) != 0 && ((v24 & 0x8000000) == 0 || (v23 & 0x60000) == 0) )
      {
        v120 = 0LL;
        v109 = 0LL;
        v110 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v109);
        v24 = v22->x & 0xF7FFFFFE;
        v22->x = v24;
      }
      if ( (v24 & 0x8000000) == 0 )
      {
        v24 |= 0x8000000u;
        v95 = 1;
        v22->x = v24;
        v22[9] = *(struct tagPOINT *)(v20 + 80);
        v22[2] = *(struct tagPOINT *)(v20 + 40);
        v22[18].x = *((_DWORD *)v20 + 1);
      }
      v25 = 0;
      if ( (v24 & 1) == 0 )
      {
        v25 = (*((_DWORD *)v20 + 3) >> 23) & 4;
        if ( !PtInRect(&this[6], *((_QWORD *)v20 + 5))
          && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, v5, 0x40u, 0, 0) )
        {
          v25 |= 2u;
        }
        if ( (this[27].y & 2) != 0
          && !PtInRect(&this[473], *((_QWORD *)v20 + 5))
          && (*(_QWORD *)v5 - *(_QWORD *)&v22[9] >= *(_QWORD *)&this[12]
                                                  * (unsigned __int64)(unsigned int)this[22].y
                                                  / 0x3E8
           || *((_DWORD *)v5 + 12) == 1
           || !(unsigned int)CPTPEngine::FindContactToBreakSuperCurtains(
                               (CPTPEngine *)this,
                               v5,
                               (struct CContactState *)v22)) )
        {
          v25 |= 1u;
        }
        if ( v25 || (v23 & 0x40000) != 0 )
          *((_DWORD *)v20 + 3) = 0;
      }
      v22[36].y = v25;
      if ( *((_DWORD *)v20 + 3) )
      {
        CPTPEngine::UpdateTPStateIndicator(
          (CPTPEngine *)this,
          v5,
          (struct CContactState *)v22,
          (struct PTPEnginePointerNode *)v20,
          &v99);
        if ( (v22->x & 2) != 0 )
        {
          ++v94;
          *(_OWORD *)((char *)v119 + 8) = 0LL;
          v92 = v112;
          *(_QWORD *)&v119[0] = *(_QWORD *)v5;
          v124 = 1;
          v96 = v119[0];
          v97 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)((char *)v119 + 8), *(__m128d *)((char *)v119 + 8));
          CBasePTPEngine::SendTelemetryOutput(this, 3LL, &v96);
          if ( v22[1].y < this[471].y )
          {
            v27 = PtInRect(&this[6], *(_QWORD *)&v22[1]);
            v28 = v93;
            if ( v27 )
              v28 = 1;
            v93 = v28;
          }
        }
        v29 = v121 + 1;
        if ( (*((_DWORD *)v20 + 3) & 0x40000) != 0 )
          v29 = v121;
        v121 = v29;
      }
      else if ( (v23 & 0x2000006) != 0 )
      {
        ++this[442].x;
      }
      else
      {
        v26 = v22->x;
        if ( (v22->x & 1) != 0 )
        {
          v116 = 0LL;
          v117 = 0LL;
          v118 = 0LL;
          CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v117);
          v26 = v22->x & 0xFFFFFFFE;
        }
        v22->x = v26 & 0xF7FFFFFF;
      }
      v20 += 96;
      ++v98;
    }
    while ( v98 < *((_DWORD *)v5 + 12) );
    v3 = 0;
  }
  v30 = 0;
  this[441].x = 0;
  v31 = 0;
  if ( *((_DWORD *)v5 + 12) )
  {
    v32 = (char *)v5 + 68;
    do
    {
      v33 = 49LL * (unsigned int)(*((_DWORD *)v32 - 2) % this[2].x);
      v34 = this[v33 + 145].x;
      LOBYTE(v35) = v34;
      if ( (v34 & 0x8000000) != 0 && *(_QWORD *)&this[v33 + 192] != *(_QWORD *)v5 )
      {
        v116 = 0LL;
        v96 = 0LL;
        v97 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v96);
        v35 = this[v33 + 145].x & 0xF7FFFFFE;
        this[v33 + 145].x = v35;
        LOBYTE(v34) = v35;
      }
      if ( (v35 & 1) != 0 )
      {
        if ( (*(_DWORD *)v32 & 0x40000) == 0 && (v34 & 0x80u) != 0 )
          ++this[441].x;
        if ( v124 )
        {
          this[v33 + 150] = *(struct tagPOINT *)(v32 + 28);
          this[v33 + 160] = *(struct tagPOINT *)v5;
          v36 = *((_DWORD *)v5 + 6);
          this[v33 + 145].x &= ~0x20000u;
          this[v33 + 161].x = v36;
        }
      }
      v32 += 96;
      ++v3;
    }
    while ( v3 < *((_DWORD *)v5 + 12) );
    v31 = this[441].x;
    v30 = 0;
  }
  v37 = (char *)v5 + 56;
  v38 = v121 - v31;
  this[441].y = v121 - v31;
  if ( v121 < 2 )
    goto LABEL_91;
  v39 = this[443].y;
  if ( v39 != 3 && !this[443].x )
  {
    GestureAndMarkGesturingContactsAsNonResting = CPTPEngine::FindGestureAndMarkGesturingContactsAsNonResting(
                                                    (CPTPEngine *)this,
                                                    v5);
    v39 = this[443].y;
    v106 = GestureAndMarkGesturingContactsAsNonResting;
    v38 = this[441].y;
  }
  if ( v39 == 2 )
  {
    v41 = 49LL * (unsigned int)this[439].x;
    if ( !__CFSHR__(this[v41 + 145].x, 8) || (v42 = 1, !v38) )
      v42 = 0;
    if ( !__CFSHR__(this[v41 + 145].x, 8) || (v43 = 1, this[v41 + 148].y < this[471].y) )
      v43 = 0;
    v44 = v124;
    if ( v42 || v93 || v43 && v124 )
    {
      this[443].y = 1;
      if ( v124 )
        CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v5);
    }
  }
  else
  {
LABEL_91:
    v44 = v124;
  }
  if ( (v95 || v44) && this[443].y == 1 )
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v5);
  if ( v99 && *((_DWORD *)v5 + 12) == 1 )
    CBasePTPEngine::SendInertiaOutput(this, 2LL);
  if ( this[476].x && v94 )
  {
    if ( v94 == 1 && (this[53].x & 4) != 0 )
    {
      v45 = v92;
      v46 = this[49 * v92 + 146];
      if ( (int)((*(_QWORD *)&this[448] - v46.x) * (*(_QWORD *)&this[448] - v46.x)
               + (HIDWORD(*(_QWORD *)&this[448]) - v46.y) * (HIDWORD(*(_QWORD *)&this[448]) - v46.y)) <= (unsigned __int64)(unsigned int)(this[24].x * this[24].x) )
        v30 = 1;
    }
    else
    {
      v45 = v92;
    }
    if ( this[477].x && !v30 )
      this[479].x &= ~8u;
    CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, v30 ^ 1);
    if ( v30 )
    {
      this[439].y = this[477].x;
      this[477].x = 0;
      this[49 * v45 + 145].x |= 0x4000u;
    }
  }
  if ( this[443].y == 1 && this[439].y && this[441].y > 1u )
    CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[439].y);
  if ( this[476].x )
  {
    v47 = 0;
    for ( i = (CPTPEngine *)&this[145]; i != (CPTPEngine *)&this[439]; i = (CPTPEngine *)((char *)i + 392) )
    {
      v49 = *(_DWORD *)i;
      if ( (*(_DWORD *)i & 1) != 0 && (v49 & 0x80u) != 0 && (v49 & 4) != 0 )
        v47 = 1;
    }
    if ( this[441].y || v47 )
      CPTPEngine::CancelMouseUpTimer((CPTPEngine *)this, 1);
  }
  if ( this[441].y > 2u )
    this[479].x |= 0x100000u;
  v50 = 0;
  if ( *((_DWORD *)v5 + 12) )
  {
    do
    {
      v51 = *((_DWORD *)v37 + 3);
      v52 = *((_DWORD *)v37 + 1) % this[2].x;
      v53 = &this[49 * v52 + 145];
      if ( v51 )
      {
        if ( (v53->x & 0x20000) != 0 && (this[443].y != 2 || v52 != this[439].x) )
        {
          v105 = 1;
          v111 = (struct CContactState *)&this[49 * v52 + 145];
        }
        v54 = this[443].y;
        if ( v54 == 2 && v52 == this[439].x && (v51 & 0x40000) != 0 )
        {
          this[479].x &= ~0x2000000u;
          v54 = 1;
          this[443].y = 1;
          if ( v121 )
          {
            CPTPEngine::ResetDragThresholds((CPTPEngine *)this, v5);
            v55 = (struct CContactState *)&this[145];
            v56 = 6LL;
            do
            {
              if ( (*(_DWORD *)v55 & 1) != 0 )
              {
                CPTPEngine::SetContactRestingState((CPTPEngine *)this, v55, 1);
                *(_DWORD *)v55 &= ~0x40000000u;
              }
              v55 = (struct CContactState *)((char *)v55 + 392);
              --v56;
            }
            while ( v56 );
            v54 = this[443].y;
          }
        }
        v57 = v54;
        if ( this[439].y )
        {
          if ( v54 == 5 && (*((_DWORD *)v37 + 3) & 0x40000) == 0 && v121 == 1 )
          {
            v58 = v53->x;
            if ( (v53->x & 0x80u) != 0 && (v58 & 4) == 0 && (v58 & 0x2000) == 0 && (v58 & 0x4000) == 0 )
            {
              this[443].y = 1;
              CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[439].y);
              v57 = this[443].y;
            }
          }
        }
        if ( v57 == 2 )
          this[479].x |= 0x2000000u;
      }
      ++v50;
      v37 += 96;
    }
    while ( v50 < *((_DWORD *)v5 + 12) );
    v44 = v124;
  }
  v8 = v121;
  if ( !(unsigned int)CPTPEngine::ProcessTapsFor3orMoreContacts((CPTPEngine *)this, v5, v121) )
  {
    v59 = v121 + this[442].x;
    if ( v59 > 1 && (this[479].x & 0x200000) == 0 )
    {
      if ( v44 )
      {
        v3 = 0;
      }
      else
      {
        v3 = 0;
        if ( !v95 )
          goto LABEL_179;
      }
      v60 = this[2].x;
      if ( !v60 )
      {
LABEL_179:
        v68 = this[479].x;
        if ( (v68 & 0x200000) != 0 && v59 == 1 )
        {
          v68 &= 0xFF9FFFFF;
          this[479].x = v68;
        }
        if ( (v68 & 0x2000) != 0 && (unsigned int)CPTPEngine::Process2FingerTap((CPTPEngine *)this, v5, v113) )
          goto LABEL_248;
        v18 = v101;
        v2 = v100;
LABEL_185:
        if ( (unsigned int)CPTPEngine::DoTPButtonProcessing(this, v5, v2, v8, &v102)
          && (unsigned int)CPTPEngine::DoTPDiscreteButtonProcessing((CPTPEngine *)this, v5, &v103, &v104) )
        {
          if ( v2 )
            goto LABEL_274;
          if ( !v102 && !v103 && !v104 || (v69 = this[443].y, v69 == 3) || v69 == 6 )
          {
            v70 = this[443].y;
            if ( this[439].y && v70 != 1 )
              v3 = 1;
            v71 = !v107 && !v114 && !v18 && !v3 && v105;
            v72 = this[441].y;
            if ( v72 == 2 && v70 != 3 && (this[479].x & 0x2000000) == 0 && v71 && v106 )
            {
              v73 = 1;
            }
            else
            {
              v73 = 0;
              v74 = 0;
              if ( v72 != 2 )
              {
LABEL_213:
                v75 = 0;
                if ( v70 != 3 && (v73 || v74) )
                {
                  v76 = v111;
                  CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, v5, v111);
                  v72 = this[441].y;
                  if ( v72 == 2 )
                    v75 = 1;
                }
                else
                {
                  v76 = v111;
                }
                v77 = this[443].y;
                if ( v77 == 3 || v75 )
                {
                  this[479].x &= ~0x2000000u;
                  v78 = 3;
                }
                else
                {
                  v78 = 1;
                }
                if ( (unsigned int)(v72 - 3) <= 1 && v78 != 3 && v71 || v77 == 6 )
                {
                  CPTPEngine::MarkRecentlyTrackedContactsAsNonResting((CPTPEngine *)this, v5, v76);
                  v78 = 6;
                }
                if ( v78 == 3 || v78 == 6 )
                {
                  CPTPEngine::DoGestureProcessing((CPTPEngine *)this, v5, &v108);
                }
                else
                {
                  if ( this[441].y < 2u )
                  {
                    v79 = v123;
                    v8 = v121;
                    if ( !v107 && !v3 )
                      CPTPEngine::DoTPMouseProcessing((__int64)this, (__int64 *)v5, v121, v123);
                    goto LABEL_234;
                  }
                  this[443].y = 1;
                }
                v8 = v121;
                goto LABEL_233;
              }
            }
            if ( v71 || (v74 = 0, *((_DWORD *)v5 + 10)) )
              v74 = 1;
            goto LABEL_213;
          }
        }
LABEL_248:
        v79 = v123;
        goto LABEL_234;
      }
      v61 = 1;
      p_y = &this[181].y;
      v63 = v60;
      do
      {
        if ( (*(p_y - 73) & 0x8000000) != 0 && (*p_y & 0xFFFFFFFB) == 0 && v61 < v60 )
        {
          v64 = &this[49 * v61 + 154];
          v65 = v60 - v61;
          do
          {
            if ( (v64[-9].x & 0x8000000) != 0 && (v64[27].y & 0xFFFFFFFB) == 0 )
            {
              v66 = *(_QWORD *)(p_y - 55);
              v67 = *(_QWORD *)v64 - v66;
              if ( *(_QWORD *)v64 <= v66 )
                v67 = *(_QWORD *)(p_y - 55) - *(_QWORD *)v64;
              if ( v67 <= *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[22].y / 0x3E8 )
                this[479].x |= 0x200000u;
            }
            v64 += 49;
            --v65;
          }
          while ( v65 );
        }
        p_y += 98;
        ++v61;
        --v63;
      }
      while ( v63 );
      v5 = a2;
      v8 = v121;
    }
    v3 = 0;
    goto LABEL_179;
  }
LABEL_233:
  v79 = v123;
LABEL_234:
  v80 = 0;
  if ( *((_DWORD *)v5 + 12) )
  {
    v81 = (char *)v5 + 68;
    do
    {
      v82 = 49LL * (unsigned int)(*((_DWORD *)v81 - 2) % this[2].x);
      v83 = this[v82 + 145].x;
      if ( (v83 & 1) != 0 && *(_DWORD *)v81 )
      {
        if ( (*(_DWORD *)v81 & 0x40000) != 0 )
        {
          if ( this[443].y == 2 && *((_DWORD *)v81 - 2) % this[2].x == this[439].x )
          {
            this[479].x &= ~0x2000000u;
            v83 = this[v82 + 145].x;
          }
          v84 = v83 & 0xFFFFFFFE;
          this[v82 + 145].x = v84;
          if ( (*(_DWORD *)v81 & 0x2000000) != 0 )
            ++this[442].x;
          else
            this[v82 + 145].x = v84 & 0xF7FFFFFF;
        }
        else
        {
          this[v82 + 155] = *(struct tagPOINT *)(v81 + 68);
          this[v82 + 148] = *(struct tagPOINT *)(v81 + 28);
        }
      }
      v81 += 96;
      ++v80;
    }
    while ( v80 < *((_DWORD *)v5 + 12) );
  }
  v85 = -__CFSHR__(this[479].x, 19);
  if ( __CFSHR__(this[479].x, 19) != v115 )
  {
    LODWORD(v110) = 0;
    v109 = 0LL;
    v86 = 2LL;
    if ( !v85 )
      v86 = 3LL;
    CBasePTPEngine::SendEtwOutput(this, v86, &v109);
  }
  if ( this[443].y != 2 )
    this[479].x &= ~0x800000u;
  v87 = 0;
  v88 = 0;
  do
  {
    if ( v88 >= 6 )
      break;
    if ( (this[49 * v88 + 145].x & 1) != 0 )
      v87 = 1;
    ++v88;
  }
  while ( !v87 );
  if ( !v87 )
  {
    this[479].x &= 0xE78FFFFF;
    this[443].y = 1;
    if ( this[439].y )
      CPTPEngine::SendMouseUpIfPending((CPTPEngine *)this, (unsigned int *)&this[439].y);
    if ( v79 == 2 )
    {
      v89 = 49LL * (unsigned int)this[439].x;
      if ( (this[v89 + 145].x & 0x800) != 0
        && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)&this[v89 + 155] - *(_QWORD *)&this[v89 + 157]))
                   / *(_QWORD *)&this[12]) >= (unsigned int)this[62].x )
      {
        this[475] = this[v89 + 155];
      }
    }
    v96 = *(unsigned __int64 *)v5;
    v97 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
    CBasePTPEngine::SendTelemetryOutput(this, 1LL, &v96);
  }
  if ( v108 )
  {
    this[479].x &= 0xFF9FFFFF;
    this[443].y = 1;
    this[469] = *(struct tagPOINT *)v5;
  }
  this[440].x = v8;
LABEL_274:
  v90 = this[479].x;
  if ( (unsigned int)CPTPEngine::IsTouchpadActive((CPTPEngine *)this) )
  {
    if ( (v90 & 1) != 0 || (v90 & 2) != 0 || (v90 & 4) != 0 || this[476].x || this[443].y != 1 )
      v6 = 0;
    v91 = v90;
    if ( v6 )
    {
      if ( v90 >= 0 )
      {
        v116 = 0LL;
        v96 = 0LL;
        v97 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 10LL, &v96);
        v91 = this[479].x & 0xA78FFFFF | 0x40000000;
      }
    }
    this[479].x = (v6 << 31) | v91 & 0x7FFFFFFF;
  }
  else
  {
    v116 = 0LL;
    v96 = 0LL;
    this[479].x = v90 | 0x80000000;
    v97 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v96);
  }
}
