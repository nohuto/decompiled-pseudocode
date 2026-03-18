/*
 * XREFs of ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01C0570
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C364C (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C01BFBB0 (-ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOIN.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C01C2024 (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 *     ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1C01C272C (-IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z.c)
 *     ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C35AC (-ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C01C47BC (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C01C4A3C (-SendLeftDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z @ 0x1C01C4B30 (-SendMouseDownAtPoint@CPTPEngine@@AEAAXIUtagPOINT@@HK@Z.c)
 *     ?SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z @ 0x1C01C4BD0 (-SendMouseOutput@CBasePTPEngine@@IEAAXW4Action@Mouse@Payload@PTPEngineOutput@@UtagPOINT@@@Z.c)
 *     ?SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z @ 0x1C01C4C74 (-SendRightDownFromPhysical@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUtagPOINT@@W4tagPTP_ACTION@@@Z.c)
 *     ?SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z @ 0x1C01C4D6C (-SendShellOutput@CBasePTPEngine@@IEAAXW4Action@Shell@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C01C4DFC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C01C4F58 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C01C51D4 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z @ 0x1C01C5388 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KHH@Z.c)
 */

__int64 __fastcall CPTPEngine::DoTPButtonProcessing(
        struct tagPOINT *this,
        struct PTPInput *a2,
        int a3,
        unsigned int a4,
        int *a5)
{
  LONG x; // esi
  int v6; // r14d
  int v7; // r13d
  int v9; // r15d
  unsigned int v11; // ecx
  struct tagPOINT v12; // r12
  BOOL v13; // edx
  unsigned int v14; // esi
  LONG y; // eax
  unsigned int v16; // eax
  LONG v17; // eax
  LONG v19; // r9d
  LONG v20; // r9d
  int v21; // esi
  int v22; // r14d
  unsigned int v23; // r12d
  char *v24; // r11
  struct tagPOINT *v25; // r9
  unsigned __int64 v26; // r8
  unsigned __int8 v27; // r10
  __int64 v28; // rcx
  LONG v29; // eax
  unsigned int v30; // r9d
  struct tagPOINT v31; // r14
  unsigned int v32; // eax
  unsigned int v33; // eax
  LONG v34; // r12d
  struct CContactState *v35; // rdx
  __int64 v36; // r10
  __int64 v37; // r11
  LONG v38; // eax
  unsigned int v39; // ecx
  bool v40; // zf
  unsigned int v41; // ecx
  int v42; // r14d
  BOOL v43; // eax
  struct CContactState *v44; // r14
  BOOL v45; // eax
  LONG v46; // r9d
  unsigned int v47; // r9d
  int v48; // ecx
  int v49; // r8d
  LONG v50; // eax
  __int64 v51; // r9
  LONG v52; // eax
  struct tagPOINTER_INFO *v53; // r13
  int v54; // esi
  struct tagPOINT *v55; // r14
  LONG v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // r12d
  __int64 v59; // r11
  struct tagPOINT v60; // rcx
  signed int v61; // edi
  struct tagPOINTER_INFO *v62; // r9
  int v63; // eax
  __int64 v64; // rdx
  struct tagPOINT *v65; // r15
  LONG v66; // r10d
  signed int v67; // r9d
  struct tagPOINTER_INFO *v68; // rax
  bool v69; // cc
  signed int v70; // edx
  struct PTPInput *v71; // rdi
  unsigned int v72; // r12d
  int v73; // r15d
  LONG v74; // eax
  LONG v75; // eax
  LONG v76; // eax
  LONG v77; // ecx
  LONG v78; // r8d
  int v79; // r15d
  int v80; // esi
  struct tagPOINT v81; // rax
  struct tagPOINT v82; // [rsp+38h] [rbp-71h]
  struct tagPOINT v83; // [rsp+38h] [rbp-71h]
  __int128 v84; // [rsp+48h] [rbp-61h] BYREF
  __int64 v85; // [rsp+58h] [rbp-51h]
  __int128 v86; // [rsp+68h] [rbp-41h] BYREF
  __int64 v87; // [rsp+78h] [rbp-31h]
  struct tagPOINTER_INFO *v88; // [rsp+88h] [rbp-21h]
  int v89; // [rsp+90h] [rbp-19h]
  struct tagPOINT *v90; // [rsp+98h] [rbp-11h] BYREF
  struct CContactState *v91[2]; // [rsp+A0h] [rbp-9h]
  __int64 v92; // [rsp+B0h] [rbp+7h]
  struct tagPOINT v93; // [rsp+108h] [rbp+5Fh] BYREF
  struct PTPInput *v94; // [rsp+110h] [rbp+67h]
  int v95; // [rsp+118h] [rbp+6Fh]
  unsigned int v96; // [rsp+120h] [rbp+77h]

  v96 = a4;
  v95 = a3;
  v94 = a2;
  x = this[443].x;
  v6 = 0;
  v93.x = 0;
  v7 = 0;
  v9 = x & 0x10;
  v11 = this[479].x;
  v12 = *(struct tagPOINT *)a2;
  v13 = v9 != 0;
  v90 = 0LL;
  v14 = x & 0xFFFFFFEF;
  v89 = v9;
  v82 = v12;
  *a5 = 0;
  if ( (v11 & 1) != v13 )
  {
    y = this[443].y;
    if ( (y == 3 || y == 6) && v9 )
    {
      v16 = v11 | 0x200;
    }
    else
    {
      v16 = v11;
      if ( !v9 && (v11 & 0x200) != 0 )
      {
        v6 = 1;
        v16 = v11 & 0xFFFFFDFF;
      }
    }
    v7 = 1;
    this[479].x = v13 | v16 & 0xFFFFFFFE;
    if ( v9 )
    {
      CPTPEngine::TPAAPSetCurtainState((CPTPEngine *)this, 0);
      a3 = v95;
      this[456] = v12;
      this[455].x = *((_DWORD *)a2 + 6);
    }
    *a5 = 1;
  }
  v17 = this[443].y;
  if ( v17 == 3 || v17 == 6 || v6 )
    return 1LL;
  if ( a3 && v7 && v9 && !v14 )
  {
    this[479].x |= 0x10000u;
    return 1LL;
  }
  v19 = this[479].x;
  if ( (v19 & 0x10000) != 0 )
  {
    if ( v9 )
    {
      if ( a3 )
      {
        if ( !v14
          && *(_QWORD *)a2 - *(_QWORD *)&this[456] < *(_QWORD *)&this[12]
                                                   * (unsigned __int64)(unsigned int)this[17].y
                                                   / 0x3E8 )
        {
          return 1LL;
        }
        v93.x = 1;
      }
      v7 = 1;
      this[479].x = v19 & 0xFFFEFFFF;
    }
    else
    {
      this[479].x = v19 & 0xFFFEFFFF;
      if ( !*((_DWORD *)a2 + 10) && (unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0) )
      {
        *(_OWORD *)v91 = 0LL;
        LODWORD(v91[0]) = 25;
        v92 = 0LL;
        v84 = *(_OWORD *)v91;
        v85 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v84);
        CPTPEngine::SendMouseDownAtPoint((CPTPEngine *)this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0, this[50].x);
      }
    }
  }
  v20 = this[479].x;
  v21 = 0;
  v88 = (struct PTPInput *)((char *)a2 + 56);
  *(_OWORD *)v91 = 0LL;
  v22 = -__CFSHR__(v20, 15);
  v23 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    goto LABEL_52;
  v24 = (char *)a2 + 68;
  do
  {
    v25 = &this[49 * (unsigned int)(*((_DWORD *)v24 - 2) % this[2].x) + 145];
    if ( (v25->x & 1) == 0 || (*(_DWORD *)v24 & 0x40000) != 0 )
      goto LABEL_50;
    v26 = (unsigned __int64)v25[8];
    v27 = 0;
    if ( v22 )
    {
      if ( v26 > *(_QWORD *)&this[456] )
      {
        this[479].x &= ~0x4000u;
        goto LABEL_46;
      }
      if ( (v25->y & 1) != 0 )
      {
        if ( (int)((HIDWORD(*(_QWORD *)&v25[1]) - HIDWORD(*(_QWORD *)(v24 + 28)))
                 * (HIDWORD(*(_QWORD *)&v25[1]) - HIDWORD(*(_QWORD *)(v24 + 28)))
                 + (*(_QWORD *)&v25[1] - *(_QWORD *)(v24 + 28)) * (*(_QWORD *)&v25[1] - *(_QWORD *)(v24 + 28))) > (unsigned __int64)(unsigned int)(this[18].x * this[18].x) )
        {
          this[479].x &= ~0x4000u;
          if ( this[442].y == 2 )
          {
            v7 = 1;
            v93.x = 1;
          }
          goto LABEL_46;
        }
LABEL_44:
        v27 = 1;
      }
    }
    else
    {
      if ( *(_QWORD *)a2 - v26 < *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[17].y / 0x3E8
        && *(_QWORD *)&v25[12] <= v26 )
      {
        goto LABEL_44;
      }
      v27 = 0;
    }
LABEL_46:
    v25->y = v27 | v25->y & 0xFFFFFFFE;
    if ( v27 )
    {
      ++v21;
      v28 = 2LL;
      if ( (unsigned __int64)v21 < 2 )
        v28 = v21;
      v91[v28 - 1] = (struct CContactState *)v25;
    }
LABEL_50:
    ++v23;
    v24 += 96;
  }
  while ( v23 < *((_DWORD *)a2 + 12) );
  v20 = this[479].x;
  v9 = v89;
LABEL_52:
  if ( (v20 & 0x4000) == 0 )
    goto LABEL_64;
  if ( !v9 )
  {
    v29 = this[442].y;
    v30 = v20 & 0xFFFFBFFF;
    this[479].x = v30;
    switch ( v29 )
    {
      case 2:
        v31 = v82;
        if ( (v30 & 0x8000) != 0 )
        {
          if ( (v30 & 0x10) == 0 )
          {
            v32 = this[50].x;
            this[475] = v82;
            CPTPEngine::SendMouseDownAtPoint((CPTPEngine *)this, 8u, *(struct tagPOINT *)((char *)a2 + 28), 0, v32);
            v84 = 0LL;
            LODWORD(v84) = 17;
            goto LABEL_58;
          }
        }
        else if ( (v30 & 8) == 0 )
        {
          v33 = this[50].x;
          this[475] = v82;
          CPTPEngine::SendMouseDownAtPoint((CPTPEngine *)this, 2u, *(struct tagPOINT *)((char *)a2 + 28), 0, v33);
          v84 = 0LL;
          LODWORD(v84) = 20;
LABEL_58:
          v85 = 0LL;
          v86 = v84;
          v87 = 0LL;
          CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v86);
        }
LABEL_65:
        v34 = v93.x;
        goto LABEL_66;
      case 3:
        CBasePTPEngine::SendShellOutput(this, 0LL);
        v84 = 0LL;
        LODWORD(v84) = 23;
        goto LABEL_63;
      case 4:
        CBasePTPEngine::SendShellOutput(this, 1LL);
        v84 = 0LL;
        LODWORD(v84) = 24;
LABEL_63:
        v85 = 0LL;
        v86 = v84;
        v87 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v86);
        break;
    }
LABEL_64:
    v31 = v82;
    goto LABEL_65;
  }
  if ( *(_QWORD *)a2 - *(_QWORD *)&this[456] < *(_QWORD *)&this[12] * (unsigned __int64)(unsigned int)this[17].y / 0x3E8 )
    return 1LL;
  v31 = v82;
  v40 = this[442].y == 2;
  this[479].x = v20 & 0xFFFFBFFF;
  if ( !v40 )
    goto LABEL_65;
  v7 = 1;
  v34 = 1;
LABEL_66:
  if ( !v7 )
    goto LABEL_110;
  if ( !v34 )
  {
    CPTPEngine::ResetDragThresholds((CPTPEngine *)this, a2);
    v35 = (struct CContactState *)&this[145];
    v36 = 6LL;
    v37 = 1LL;
    do
    {
      if ( ((unsigned __int8)*(_DWORD *)v35 & (unsigned __int8)v37) != 0 )
        CPTPEngine::SetContactRestingState((CPTPEngine *)this, v35, v37);
      v35 = (struct CContactState *)((char *)v35 + 392);
      v36 -= v37;
    }
    while ( v36 );
  }
  if ( !v9 )
  {
    v38 = this[479].x;
    if ( (v38 & 0x10) != 0 && (v38 & 0x100) != 0 && (v38 & 0x40) == 0 )
    {
      this[475] = v31;
      CBasePTPEngine::SendMouseOutput(this, 4LL, *(_QWORD *)((char *)a2 + 28));
      v39 = this[479].x & 0xFFFFFFEF;
    }
    else
    {
      v39 = this[479].x;
      if ( (v38 & 8) != 0 && (v38 & 0x80u) != 0 && (v38 & 0x20) == 0 )
      {
        this[475] = v31;
        CBasePTPEngine::SendMouseOutput(this, 2LL, *(_QWORD *)((char *)a2 + 28));
        v39 = this[479].x & 0xFFFFFFF7;
      }
    }
    v41 = v39 & 0xFFFFFE7F;
    this[479].x = v41;
    this[454].y = *((_DWORD *)a2 + 6);
    if ( (this[27].y & 8) != 0 )
      this[479].x = v41 | 0x4000000;
    v42 = v95;
    if ( (unsigned int)(this[443].y - 4) <= 1 )
      this[443].y = 1;
    goto LABEL_111;
  }
  if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
    CBasePTPEngine::SendInertiaOutput(this, 3LL);
  v43 = !v96 && !(unsigned int)CPTPEngine::TPAAPShouldAllowNow((CPTPEngine *)this, a2, 0x40u, 0, 0);
  if ( *((_DWORD *)a2 + 10) || v43 )
  {
    this[479].x |= 0x200u;
    goto LABEL_110;
  }
  v44 = v91[0];
  v45 = !v95 && v21 <= 1 && (unsigned int)CPTPEngine::IsRCZClick((CPTPEngine *)this, a2, v91[0], &v90);
  if ( v21 >= 2 && !v34 )
  {
    v46 = this[479].x;
    this[442].y = v21;
    v47 = v46 & 0xFFFF3FFF | 0x4000;
    this[479].x = v47;
    if ( v21 == 2 )
    {
      v48 = *((_QWORD *)v44 + 1) - *((_QWORD *)v91[1] + 1);
      v49 = HIDWORD(*((_QWORD *)v44 + 1)) - HIDWORD(*((_QWORD *)v91[1] + 1));
      this[479].x = v47 | ((unsigned int)this[37].x >= (unsigned __int64)(v49 * v49 + v48 * v48) ? 0x8000 : 0);
    }
    goto LABEL_110;
  }
  if ( v45 )
  {
    CPTPEngine::SendRightDownFromPhysical(this, a2, v90, v34 != 0 ? 22 : 16);
LABEL_110:
    v42 = v95;
    goto LABEL_111;
  }
  v42 = v95;
  if ( v21 <= 2 )
  {
    v51 = 18LL;
    if ( v95 )
    {
      v51 = 25LL;
    }
    else if ( v34 )
    {
      v51 = 19LL;
      if ( v21 == 2 )
        v51 = 21LL;
    }
    CPTPEngine::SendLeftDownFromPhysical(this, a2, v90, v51);
  }
LABEL_111:
  if ( v96 <= 2 )
  {
    if ( v9 )
    {
      v52 = this[479].x;
      if ( (v52 & 8) == 0 && (v52 & 0x10) == 0 )
        return 0LL;
    }
LABEL_116:
    if ( !v42 )
    {
      if ( v7 && !v34 )
      {
        if ( this[443].y == 2 && !v9 )
          this[479].x |= 0x800000u;
        *a5 = 1;
        return 1LL;
      }
      v53 = 0LL;
      v54 = 0;
      v55 = 0LL;
      v93.x = 0;
      v93.y = 0;
      LODWORD(a5) = 0;
      if ( v9 || (v56 = this[479].x, (v56 & 2) != 0) || (v56 & 4) != 0 || this[439].y )
      {
        v57 = *((_DWORD *)a2 + 12);
        if ( v57 )
        {
          v58 = this[2].x;
          v59 = v57;
          v60 = v93;
          v61 = (int)a5;
          v62 = v88;
          do
          {
            v63 = *((_DWORD *)v62 + 3);
            v64 = 49LL * (*((_DWORD *)v62 + 1) % v58);
            v65 = &this[v64 + 145];
            if ( (v63 & 0x40000) == 0 && v63 )
            {
              v66 = v65->x;
              if ( (v65->x & 4) != 0 )
              {
                v83.y = HIDWORD(*((_QWORD *)v62 + 5)) - this[v64 + 148].y;
                v83.x = *((_QWORD *)v62 + 5) - this[v64 + 148].x;
                v67 = abs32(v83.y) + abs32(v83.x);
                v68 = v88;
                v69 = v67 < v61;
                v70 = v67;
                v62 = v88;
                if ( v69 )
                {
                  v65 = v55;
                  v70 = v61;
                }
                else
                {
                  v60 = v83;
                }
                v93 = v60;
                if ( v69 )
                  v68 = v53;
                v55 = v65;
                v53 = v68;
                v61 = v70;
                if ( (v66 & 0x4000) == 0 )
                  v54 = 1;
              }
              else if ( (v66 & 0x2000) != 0 )
              {
                v54 = 1;
              }
            }
            v62 = (struct tagPOINTER_INFO *)((char *)v62 + 96);
            v88 = v62;
            --v59;
          }
          while ( v59 );
          v71 = v94;
          if ( v55 )
          {
            v72 = v96;
            v73 = 0;
            if ( this[443].y != 5 )
            {
              if ( v96 == 2 || (v74 = this[479].x, (v74 & 2) != 0) || (v74 & 4) != 0 )
              {
                this[443].y = 5;
                if ( this[439].y && !v54 )
                  v55[17].x = 0;
                v84 = 0LL;
                LODWORD(v84) = 8;
                v85 = 0LL;
                v73 = 1;
                v86 = v84;
                v87 = 0LL;
                CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v86);
              }
            }
            if ( this[443].y != 4 && v72 == 1 )
            {
              v75 = this[479].x;
              if ( (v75 & 2) == 0 && (v75 & 4) == 0 )
              {
                this[443].y = 4;
                v55[17].x = 0;
                v84 = 0LL;
                LODWORD(v84) = 7;
                v85 = 0LL;
                v73 = 1;
                v86 = v84;
                v87 = 0LL;
                CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v86);
              }
            }
            if ( v73 )
            {
              this[479].x &= ~0x20000000u;
              this[451] = 0LL;
              this[452] = 0LL;
            }
            if ( v72 == 1 && (v76 = this[479].x, (v76 & 2) == 0) && (v76 & 4) == 0 || this[439].y && !v54 )
              this[479].x ^= (this[479].x ^ ((unsigned int)CPTPEngine::ApplyElasticDragModeDeltas(
                                                             (CPTPEngine *)this,
                                                             (struct CContactState *)v55,
                                                             v53,
                                                             &v93) << 18)) & 0x40000;
            v77 = this[18].y;
            v78 = this[451].y + v93.y;
            v93.x += this[451].x;
            v93.y = v78;
            LODWORD(a5) = 100 * v93.x / v77;
            v79 = (_DWORD)a5 - this[452].x;
            HIDWORD(a5) = 100 * v78 / v77;
            v80 = HIDWORD(a5) - this[452].y;
            v81 = v93;
            this[452] = (struct tagPOINT)a5;
            a5 = (int *)__PAIR64__(v80, v79);
            this[451] = v81;
            if ( !(unsigned int)CPTPEngine::FilterMoveForStableContact(
                                  (CPTPEngine *)this,
                                  v71,
                                  (struct tagPOINT)__PAIR64__(v80, v79),
                                  (struct CContactState *)v55)
              && (v79 || v80) )
            {
              this[479].x |= 0x20000000u;
              CBasePTPEngine::SendMouseOutput(this, 0LL, a5);
            }
          }
        }
      }
    }
    return 1LL;
  }
  if ( !v9 )
  {
    v50 = this[479].x;
    if ( (v50 & 2) == 0 && (v50 & 4) == 0 && !this[439].y )
      goto LABEL_116;
  }
  return 0LL;
}
