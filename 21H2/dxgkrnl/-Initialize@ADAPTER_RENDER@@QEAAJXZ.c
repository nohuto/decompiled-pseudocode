/*
 * XREFs of ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0189BF8
 * Callers:
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C018670C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007514 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0007554 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0007D6C (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0017200 (-GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0021DF8 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ @ 0x1C0021E28 (-CheckMcdmDdiSubmission@DXGADAPTER@@AEAAJXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0021E80 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C010E7F8 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C012A308 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z @ 0x1C018A3C0 (-DdiGetNodeMetadata@DXGADAPTER@@QEAAJIPEAU_DXGK_NODEMETADATA@@@Z.c)
 *     ?InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C018A560 (-InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     ?InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C018AA8C (-InitializeUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z.c)
 *     DpiKsrIsSoftBoot @ 0x1C018AE38 (DpiKsrIsSoftBoot.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C02D2C74 (DpiKsrGetSavedAdapterState.c)
 */

__int64 __fastcall ADAPTER_RENDER::Initialize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  _OWORD *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r13
  unsigned int v7; // r12d
  unsigned int VidSchSibmitDataSize; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rcx
  unsigned __int8 IsDxgmms2; // bl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int i; // r12d
  unsigned __int16 *v24; // r15
  unsigned int v25; // r14d
  bool v26; // of
  SIZE_T v27; // rax
  char *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  SIZE_T v33; // rax
  PVOID v34; // rax
  SIZE_T v35; // rax
  PVOID v36; // rax
  int *v37; // rcx
  unsigned int v38; // esi
  char *v39; // rdx
  char *v40; // r14
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rsi
  __int64 v50; // rbx
  struct DXGGLOBAL *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int SynchronizationObjectInternal; // eax
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // eax
  unsigned int v58; // r14d
  __int64 v59; // rax
  unsigned int v60; // ebx
  SIZE_T v61; // rax
  unsigned __int64 v62; // kr00_8
  unsigned int *v63; // rax
  __int64 v64; // r8
  __int64 v65; // r12
  unsigned int *v66; // rsi
  unsigned int *v67; // rax
  DXGADAPTER *v68; // rcx
  __int64 v69; // rdx
  int v70; // r15d
  __int64 v71; // rcx
  unsigned int *v72; // r15
  __int64 v73; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  DXGADAPTER *v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rcx
  unsigned __int64 v88; // r15
  SIZE_T v89; // rax
  PVOID v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rax
  __int64 v96; // r8
  unsigned int v97; // r14d
  DXGADAPTER *v98; // rcx
  _DWORD *v99; // rbx
  DXGADAPTER *v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  struct _OBJECT_HANDLE_INFORMATION *Flags; // [rsp+20h] [rbp-B9h]
  struct _DXGKARG_QUERYADAPTERINFO v112; // [rsp+50h] [rbp-89h] BYREF
  char *v113; // [rsp+80h] [rbp-59h]
  struct _DXGKARG_QUERYADAPTERINFO v114[3]; // [rsp+90h] [rbp-49h] BYREF
  char v115; // [rsp+140h] [rbp+67h] BYREF
  char v116; // [rsp+141h] [rbp+68h]
  unsigned int v117; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v118; // [rsp+150h] [rbp+77h] BYREF
  __int64 v119; // [rsp+158h] [rbp+7Fh]

  v1 = *((_QWORD *)this + 2);
  v2 = (_OWORD *)((char *)this + 312);
  *(_OWORD *)((char *)this + 472) = *(_OWORD *)(v1 + 1432);
  *(_OWORD *)((char *)this + 488) = *(_OWORD *)(v1 + 1528);
  *(_OWORD *)((char *)this + 504) = *(_OWORD *)(v1 + 1544);
  *(_OWORD *)((char *)this + 552) = *(_OWORD *)(v1 + 1464);
  *((_OWORD *)this + 36) = *(_OWORD *)(v1 + 1488);
  *((_DWORD *)this + 142) = *(_DWORD *)(v1 + 1480);
  *((_DWORD *)this + 143) = *(_DWORD *)(v1 + 1484);
  *((_DWORD *)this + 148) = *(_DWORD *)(v1 + 1504);
  *((_DWORD *)this + 149) = *(_DWORD *)(v1 + 1508);
  *(_OWORD *)((char *)this + 520) = *(_OWORD *)(v1 + 1560);
  *(_OWORD *)((char *)this + 536) = *(_OWORD *)(v1 + 1576);
  LODWORD(v6) = 0;
  if ( (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(v1 + 1400),
              (struct _UNICODE_STRING *)((char *)this + 312)) < 0
    || (int)ADAPTER_RENDER::InitializeUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*((_QWORD *)this + 2) + 1416LL),
              (struct _UNICODE_STRING *)((char *)this + 376)) < 0
    || (int)ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*((_QWORD *)this + 2) + 1656LL),
              (struct _UNICODE_STRING *)((char *)this + 440)) < 0
    || (int)ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
              this,
              (struct _UNICODE_STRING *)(*((_QWORD *)this + 2) + 1672LL),
              (struct _UNICODE_STRING *)((char *)this + 456)) < 0 )
  {
    goto LABEL_140;
  }
  if ( *(_WORD *)v2 )
  {
    if ( **((_WORD **)this + 40) == 35 )
    {
      v84 = *((_QWORD *)this + 2);
      if ( *(_WORD *)(v84 + 1616) )
        *v2 = *(_OWORD *)(v84 + 1616);
    }
  }
  if ( *((_WORD *)this + 188) )
  {
    if ( **((_WORD **)this + 48) == 35 )
    {
      v85 = *((_QWORD *)this + 2);
      if ( *(_WORD *)(v85 + 1632) )
        *(_OWORD *)((char *)this + 376) = *(_OWORD *)(v85 + 1632);
    }
  }
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 152);
  v4 = *((_QWORD *)this + 2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 216) + 64LL);
  v7 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL);
  if ( !*(_BYTE *)(v4 + 209) && !*(_WORD *)v2 )
  {
LABEL_140:
    v110 = WdLogNewEntry5_WdError(v5, v4);
    LODWORD(v42) = -1073741438;
    *(_QWORD *)(v110 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v110 + 32) = -1073741438LL;
    WdLogEvent5_WdError(v110);
    return (unsigned int)v42;
  }
  VidSchSibmitDataSize = ADAPTER_RENDER::GetVidSchSibmitDataSize((DXGADAPTER **)this);
  if ( ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)this + 13,
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         VidSchSibmitDataSize,
         0x4B677844u,
         0) < 0 )
  {
    v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    LODWORD(v42) = -1073741801;
    v86[3] = this;
    v86[4] = -1073741801LL;
    v86[5] = 0LL;
    WdLogEvent5_WdWarning(v86);
    return (unsigned int)v42;
  }
  *((_BYTE *)this + 1201) = 1;
  v116 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v115, v9);
  v12 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( !*((_BYTE *)v12 + 209) )
  {
    IsDxgmms2 = DXGADAPTER::IsDxgmms2(v12);
    v16 = *(_QWORD *)((char *)DXGGLOBAL::GetGlobal(v15, v14) + (IsDxgmms2 != 0 ? 8 : 0) + 216);
    *((_QWORD *)this + 80) = v16;
    Global = DXGGLOBAL::GetGlobal(v16, v17);
    v19 = IsDxgmms2 != 0 ? 8 : 0;
    v20 = *(_QWORD *)((char *)Global + v19 + 232);
    *((_QWORD *)this + 77) = v20;
    if ( !*((_QWORD *)this + 80) || !v20 )
    {
LABEL_111:
      v103 = WdLogNewEntry5_WdError(v19, v20);
      v42 = -1073741438LL;
LABEL_132:
      *(_QWORD *)(v103 + 24) = this;
      *(_QWORD *)(v103 + 32) = v42;
LABEL_133:
      WdLogEvent5_WdError(v103);
      goto LABEL_129;
    }
  }
  if ( (unsigned __int8)DpiKsrIsSoftBoot() )
  {
    v87 = *((_QWORD *)this + 2);
    v117 = 0;
    v118 = 0LL;
    DpiKsrGetSavedAdapterState(*(_QWORD *)(v87 + 216), &v117, &v118);
  }
  v21 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v21 + 2060) & 0x40) != 0 )
  {
    v88 = *(unsigned int *)(v21 + 280);
    v89 = 144 * v88;
    if ( !is_mul_ok(v88, 0x90uLL) )
      v89 = -1LL;
    v90 = operator new[](v89, 0x4B677844u, PagedPool);
    *((_QWORD *)this + 141) = v90;
    if ( !v90 )
    {
      v95 = WdLogNewEntry5_WdLowResource(v92, v91, v93, v94);
      *(_QWORD *)(v95 + 24) = 964LL;
      goto LABEL_127;
    }
    memset(v90, 0, 144 * v88);
    v97 = 0;
    if ( (_DWORD)v88 )
    {
      do
      {
        v98 = (DXGADAPTER *)*((_QWORD *)this + 2);
        *(_QWORD *)&v112.Type = 13LL;
        *(_QWORD *)&v112.InputDataSize = 4LL;
        *(_QWORD *)&v112.Flags.0 = 0LL;
        HIDWORD(v112.hKmdProcessHandle) = 0;
        v99 = (_DWORD *)(*((_QWORD *)this + 141) + 144LL * v97);
        v112.pOutputData = v99;
        v112.OutputDataSize = 24;
        LODWORD(v118) = v97;
        v112.pInputData = &v118;
        if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v98, &v112, v96) < 0 )
          goto LABEL_111;
        if ( (unsigned int)(v99[4] - 2) > 4 )
        {
          v102 = WdLogNewEntry5_WdError(v19, v20);
          *(_QWORD *)(v102 + 24) = 996LL;
          WdLogEvent5_WdError(v102);
          LODWORD(v42) = -1073741438;
          goto LABEL_129;
        }
        if ( v7 < 0x5014 )
          *v99 &= ~0x20u;
        v38 = 0;
        do
        {
          *(_QWORD *)&v114[0].Flags.0 = 0LL;
          HIDWORD(v114[0].hKmdProcessHandle) = 0;
          *(_QWORD *)&v114[0].Type = 14LL;
          *(_QWORD *)&v114[0].InputDataSize = 4LL;
          LOWORD(v117) = v38;
          HIWORD(v117) = v97;
          v114[0].pInputData = &v117;
          v100 = (DXGADAPTER *)*((_QWORD *)this + 2);
          v114[0].pOutputData = &v99[4 * v38 + 6 + v38];
          *(_QWORD *)&v114[0].OutputDataSize = v7 < 0x5012 ? 16 : 20;
          if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v100, v114, v96) < 0 )
            goto LABEL_111;
          v101 = (unsigned int)v99[4 * v38 + 10 + v38];
          if ( (((_DWORD)v101 - 1) & (unsigned int)v101) != 0 )
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdError(v101, v20);
LABEL_124:
            v104[4] = v38;
            v104[3] = this;
            WdLogEvent5_WdError(v104);
            LODWORD(v42) = -1073741811;
            goto LABEL_129;
          }
          ++v38;
          LODWORD(v6) = 0;
        }
        while ( v38 < v99[4] );
      }
      while ( ++v97 < (unsigned int)v88 );
    }
  }
  v22 = *((_QWORD *)this + 2);
  if ( *(int *)(v22 + 2328) < 4864 )
  {
LABEL_50:
    v46 = DXGADAPTER::CheckMcdmDdiSubmission((DXGADAPTER *)v22);
    if ( v46 < 0 )
    {
      LODWORD(v42) = v46;
      goto LABEL_129;
    }
    v49 = *((_QWORD *)this + 2);
    if ( !*(_BYTE *)(v49 + 209) )
    {
      v50 = *((_QWORD *)this + 77);
      v51 = DXGGLOBAL::GetGlobal(v48, v47);
      v52 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *, _QWORD, __int64))(*(_QWORD *)(v50 + 8) + 24LL))(
              this,
              *(_QWORD *)(v49 + 216),
              (__int64)v51 + 96);
      *((_QWORD *)this + 78) = v52;
      if ( !v52 )
        goto LABEL_128;
      v53 = (*(__int64 (__fastcall **)(ADAPTER_RENDER *))(*(_QWORD *)(*((_QWORD *)this + 80) + 8LL) + 24LL))(this);
      *((_QWORD *)this + 81) = v53;
      if ( !v53 )
        goto LABEL_128;
    }
    memset(v114, 0, 0x60uLL);
    HIDWORD(v114[0].pInputData) |= 1u;
    LODWORD(Flags) = 11;
    LODWORD(v114[0].pInputData) = 3;
    SynchronizationObjectInternal = CreateSynchronizationObjectInternal(
                                      0LL,
                                      1,
                                      (__int64)this,
                                      (__int64)v114,
                                      Flags,
                                      0,
                                      (DXGSYNCOBJECT **)this + 96,
                                      0LL,
                                      0LL);
    v42 = SynchronizationObjectInternal;
    if ( SynchronizationObjectInternal < 0 )
    {
      v103 = WdLogNewEntry5_WdError(v55, v47);
      goto LABEL_132;
    }
    v56 = *((_QWORD *)this + 2);
    v57 = *(_DWORD *)(v56 + 2328);
    if ( v57 >= 4864 )
    {
      if ( v57 < 0x2000 )
        v58 = 1;
      else
        v58 = *(_DWORD *)(v56 + 280);
      v117 = 0;
      if ( v58 )
      {
        v59 = 0LL;
        do
        {
          v60 = *(unsigned __int16 *)(360 * v59 + *(_QWORD *)(*((_QWORD *)this + 2) + 2584LL));
          v62 = *(unsigned __int16 *)(360 * v59 + *(_QWORD *)(*((_QWORD *)this + 2) + 2584LL));
          v61 = 4 * v62;
          v6 = v60;
          if ( !is_mul_ok(v62, 4uLL) )
            v61 = -1LL;
          v63 = (unsigned int *)operator new[](v61, 0x4B677844u, (POOL_TYPE)512);
          v65 = 0LL;
          v66 = v63;
          if ( !v63 )
            goto LABEL_128;
          LODWORD(v118) = v117;
          v114[0].pOutputData = v63;
          v114[0].OutputDataSize = 4 * v60;
          v67 = &v117;
          v68 = (DXGADAPTER *)*((_QWORD *)this + 2);
          if ( v58 <= 1 )
            v67 = (unsigned int *)&v118;
          v114[0].pInputData = v67;
          *(_QWORD *)&v114[0].Type = 10LL;
          *(_QWORD *)&v114[0].InputDataSize = 4LL;
          *(_QWORD *)&v114[0].Flags.0 = 0LL;
          HIDWORD(v114[0].hKmdProcessHandle) = 0;
          LODWORD(v119) = DXGADAPTER::DdiQueryAdapterInfo(v68, v114, v64);
          v70 = v119;
          LOBYTE(v71) = 1;
          if ( (int)v119 < 0 )
          {
            LODWORD(v6) = 0;
            LOBYTE(v71) = 0;
          }
          else
          {
            if ( !v60 )
            {
              LODWORD(v6) = 0;
              goto LABEL_75;
            }
            v72 = v66;
            do
            {
              v73 = *v72;
              if ( (unsigned int)(v73 - 1) <= 0x1E || (unsigned int)v73 >= 0x41 )
              {
                v105 = (_QWORD *)WdLogNewEntry5_WdError(v71, v69);
                v105[3] = this;
                v105[4] = v73;
                v105[5] = v65;
                WdLogEvent5_WdError(v105);
                LOBYTE(v71) = 0;
              }
              else if ( !(_DWORD)v73 )
              {
                *((_BYTE *)this + 832) = 1;
              }
              ++v65;
              ++v72;
              --v6;
            }
            while ( v6 );
            v70 = v119;
          }
          if ( !(_BYTE)v71 )
          {
            operator delete[](v66);
            *((_BYTE *)this + 832) = 0;
            v66 = 0LL;
            if ( v70 >= 0 )
            {
              v109 = WdLogNewEntry5_WdError(v107, v106);
              LODWORD(v42) = -1073741438;
              *(_QWORD *)(v109 + 24) = this;
              *(_QWORD *)(v109 + 32) = -1073741438LL;
              WdLogEvent5_WdError(v109);
              goto LABEL_81;
            }
            v108 = WdLogNewEntry5_WdEvent(v107, v106);
            *(_QWORD *)(v108 + 24) = this;
            WdLogEvent5_WdEvent(v108);
          }
LABEL_75:
          *(_QWORD *)(360LL * v117 + *(_QWORD *)(*((_QWORD *)this + 2) + 2584LL) + 40) = v66;
          v59 = v117 + 1;
          v117 = v59;
        }
        while ( (unsigned int)v59 < v58 );
      }
      if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
      {
        *((_QWORD *)this + 112) = -500000LL;
        KeInitializeTimer((PKTIMER)((char *)this + 904));
        KeInitializeDpc((PRKDPC)((char *)this + 968), (PKDEFERRED_ROUTINE)DxgkpCalibrateGpuTimerDpc, this);
      }
      if ( *((_BYTE *)this + 832) != (_BYTE)v6 )
        KeInitializeSpinLock((PKSPIN_LOCK)this + 140);
    }
    LODWORD(v42) = v6;
    goto LABEL_81;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(*((DXGADAPTER **)this + 2)) )
    {
      if ( *(int *)(v22 + 2328) < 8960 )
      {
        *(_DWORD *)(v22 + 2056) &= 0xFFFFF87F;
        v22 = *((_QWORD *)this + 2);
      }
      goto LABEL_50;
    }
    v24 = (unsigned __int16 *)(*(_QWORD *)(v22 + 2584) + 360LL * i);
    v25 = *v24;
    v27 = 74LL * *v24;
    v26 = (*v24 * (unsigned __int128)0x4AuLL) >> 64 != 0;
    LODWORD(v118) = v25;
    if ( v26 )
      v27 = -1LL;
    v28 = (char *)operator new(v27, 0x4B677844u, 1, PagedPool);
    v113 = v28;
    if ( !v28 )
      break;
    *((_QWORD *)v24 + 4) = v28;
    v119 = *((_QWORD *)this + 2);
    v33 = 44LL * v25;
    if ( !is_mul_ok(v25, 0x2CuLL) )
      v33 = -1LL;
    v34 = operator new(v33, 0x4B677844u, 1, PagedPool);
    if ( !v34 )
      break;
    *((_QWORD *)v24 + 15) = v34;
    v35 = 8LL * v25;
    if ( !is_mul_ok(v25, 8uLL) )
      v35 = -1LL;
    v36 = operator new(v35, 0x4B677844u, 1, PagedPool);
    if ( !v36 )
      break;
    *((_QWORD *)v24 + 16) = v36;
    v37 = (int *)*((_QWORD *)this + 2);
    if ( v37[649] >= 2400 )
    {
      v117 = i;
      v112.pInputData = &v117;
      *(_QWORD *)&v112.Type = 26LL;
      v112.pOutputData = v24 + 100;
      *(_QWORD *)&v112.InputDataSize = 4LL;
      *(_QWORD *)&v112.Flags.0 = 0LL;
      HIDWORD(v112.hKmdProcessHandle) = 0;
      v112.OutputDataSize = 28;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo((DXGADAPTER *)v37, &v112, v31) < 0 )
      {
        v78 = WdLogNewEntry5_WdWarning(v76, v75, v77);
        *(_QWORD *)(v78 + 24) = this;
        WdLogEvent5_WdWarning(v78);
      }
      v79 = (DXGADAPTER *)*((_QWORD *)this + 2);
      v112.pOutputData = v24 + 114;
      v112.Type = DXGKQAITYPE_GPUVERSION;
      v112.OutputDataSize = 128;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v79, &v112, v77) < 0 )
      {
        v83 = WdLogNewEntry5_WdWarning(v81, v80, v82);
        *(_QWORD *)(v83 + 24) = this;
        WdLogEvent5_WdWarning(v83);
      }
    }
    v38 = 0;
    if ( v25 )
    {
      v39 = v113;
      v40 = v113 + 68;
      while ( 1 )
      {
        LODWORD(v42) = DXGADAPTER::DdiGetNodeMetadata(
                         *((DXGADAPTER **)this + 2),
                         (i << 16) | v38,
                         (struct _DXGK_NODEMETADATA *)&v39[74 * v38]);
        if ( (int)v42 < 0 )
          break;
        v43 = *((_QWORD *)this + 2);
        if ( *(_DWORD *)(v43 + 1872) >= 0x9000u )
        {
          v45 = *(_DWORD *)v40;
          if ( (*(_DWORD *)v40 & 1) != 0 )
          {
            if ( !v40[4] && !v40[5] )
            {
              v104 = (_QWORD *)WdLogNewEntry5_WdError(v43, 0LL);
              v104[5] = 1151LL;
              goto LABEL_124;
            }
            if ( (**(_DWORD **)(v43 + 2600) & 0x10000) == 0 )
            {
              v104 = (_QWORD *)WdLogNewEntry5_WdError(v43, 0LL);
              v104[5] = 1157LL;
              goto LABEL_124;
            }
            *((_BYTE *)this + 1649) = 1;
            v45 = *(_DWORD *)v40;
          }
          if ( (v45 & 0xFFF8) != 0 )
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdError(v43, 0LL);
            v104[5] = 1167LL;
            goto LABEL_124;
          }
        }
        else
        {
          *(_DWORD *)v40 = 0;
        }
        v44 = v119;
        if ( v40[4] )
        {
          if ( (*(_DWORD *)(v119 + 2060) & 0x40) == 0 )
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdError(v119, 0LL);
            v104[5] = 1176LL;
            goto LABEL_124;
          }
          if ( v38 == v24[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2634LL) )
            *((_BYTE *)v24 + 48) = 1;
        }
        if ( v40[5] )
        {
          if ( (*(_DWORD *)(v44 + 2060) & 0x80u) == 0 )
          {
            v104 = (_QWORD *)WdLogNewEntry5_WdError(v44, 0LL);
            v104[5] = 1189LL;
            goto LABEL_124;
          }
          if ( v38 == v24[1] && !*(_BYTE *)(*((_QWORD *)this + 2) + 2634LL) )
            *((_BYTE *)v24 + 48) = 1;
        }
        v39 = v113;
        ++v38;
        v40 += 74;
        if ( v38 >= (unsigned int)v118 )
        {
          LODWORD(v6) = 0;
          goto LABEL_40;
        }
      }
      v103 = WdLogNewEntry5_WdError(v41, 0LL);
      *(_QWORD *)(v103 + 24) = this;
      goto LABEL_133;
    }
LABEL_40:
    ;
  }
  v95 = WdLogNewEntry5_WdLowResource(v30, v29, v31, v32);
  *(_QWORD *)(v95 + 24) = this;
LABEL_127:
  WdLogEvent5_WdLowResource(v95);
LABEL_128:
  LODWORD(v42) = -1073741801;
LABEL_129:
  LOBYTE(v6) = 0;
LABEL_81:
  if ( v116 != (_BYTE)v6 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v115, v47);
  return (unsigned int)v42;
}
