/*
 * XREFs of InitCpcStatesInternal @ 0x1C002D198
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C0022A80 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C002FB60 (RegisterKernelCpc.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001860 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001BD4 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     ClearEnumerationContext @ 0x1C0002C4C (ClearEnumerationContext.c)
 *     ReadGenAddrHiddenEx @ 0x1C0002E18 (ReadGenAddrHiddenEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0002E48 (ReadGenAddrMaybeHiddenEx.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C000321C (WriteGenAddrMaybeHiddenEx.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C000353C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     CpcRegisterIsSupported @ 0x1C0003DF4 (CpcRegisterIsSupported.c)
 *     CpcRegisterIsSupportedEx @ 0x1C0003E0C (CpcRegisterIsSupportedEx.c)
 *     DisplayKernelPerfStates @ 0x1C000840C (DisplayKernelPerfStates.c)
 *     WPP_RECORDER_SF_ii @ 0x1C000B82C (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C000B954 (WPP_RECORDER_SF_iii.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 *     GetRegistryDwordValue @ 0x1C001FFC0 (GetRegistryDwordValue.c)
 *     CpcConnectNativeInterrupt @ 0x1C0021714 (CpcConnectNativeInterrupt.c)
 *     ExecutePccCommand @ 0x1C0023FEC (ExecutePccCommand.c)
 *     StartPccCommand @ 0x1C002438C (StartPccCommand.c)
 *     ProcLibCapChange @ 0x1C0028C54 (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x1C002A078 (GetPerfDomain.c)
 *     GetPackageAffinity @ 0x1C002CF7C (GetPackageAffinity.c)
 *     InitCommonPerfStateContext @ 0x1C002D158 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 *a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  int v2; // r12d
  __int64 *v3; // r14
  int v4; // r13d
  _QWORD *v5; // rsi
  char v6; // di
  int started; // edi
  SIZE_T v8; // rbx
  char *PoolWithTag; // rax
  char *v10; // r15
  void *v11; // rax
  int v12; // eax
  int v13; // r11d
  int v14; // r11d
  int v15; // eax
  __int64 (__fastcall *v16)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // r11
  int v17; // r14d
  char *v18; // rdi
  char v19; // r15
  _BYTE *v20; // rbx
  __int64 v21; // rdx
  char v22; // al
  __int64 v23; // r9
  int v24; // ecx
  char v25; // al
  int v26; // edx
  unsigned __int8 v27; // r10
  int v28; // r11d
  int v29; // esi
  int v30; // ecx
  bool v31; // zf
  unsigned __int8 v32; // cl
  char v33; // al
  __int64 v34; // xmm0_8
  unsigned int v35; // r8d
  __int64 v36; // rax
  _BYTE *v37; // rdx
  int v38; // r8d
  int v39; // r11d
  __int64 *v40; // rdx
  char v41; // r9d^3
  char v42; // r10
  int v43; // r10d
  unsigned int *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  char v47; // r10
  __int64 *v48; // r13
  char *v49; // r14
  __int64 v50; // r12
  _QWORD *v51; // rbx
  struct _GROUP_AFFINITY *v52; // rdx
  __int64 *v53; // r14
  __int64 v54; // r15
  __int64 v55; // rbx
  _QWORD *v56; // r11
  int v57; // r11d
  char *v58; // rbx
  __int64 v59; // rdi
  PVOID v60; // r14
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  _BYTE *v62; // rcx
  int v63; // r11d
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int16 v65; // r9
  unsigned int v66; // r8d
  __int64 v67; // rbx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  int v79; // eax
  unsigned __int64 v80; // r8
  unsigned __int64 v81; // rax
  int v82; // r10d
  unsigned __int16 v83; // r9
  char *v84; // rbx
  int v85; // edi
  unsigned int v86; // r14d
  unsigned int v87; // r12d
  _QWORD *v88; // rax
  unsigned __int64 v89; // rdx
  char v90; // r10
  int v91; // r12d
  int v92; // r9d
  char *v93; // rax
  char *v94; // r8
  char v95; // r11
  void *v96; // rax
  __int64 (__fastcall *v97)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  unsigned int v98; // ecx
  bool v99; // al
  int v100; // ecx
  int v101; // eax
  int v102; // eax
  int v103; // ecx
  __int64 v104; // rax
  char v105; // al
  unsigned __int64 v106; // rcx
  __int64 v107; // rax
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rtt
  __int64 v110; // rax
  _QWORD *v111; // r12
  __int64 v112; // r11
  __int64 v113; // rsi
  __int64 v114; // r10
  unsigned int v115; // edi
  _DWORD *v116; // r14
  _BYTE *v117; // rdi
  struct _GROUP_AFFINITY *v118; // rdx
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rax
  __int64 v122; // r10
  __int64 v123; // r11
  unsigned __int8 v124; // cl
  unsigned __int8 v125; // cl
  int v127; // [rsp+20h] [rbp-E0h]
  char v128; // [rsp+40h] [rbp-C0h]
  char v129; // [rsp+41h] [rbp-BFh]
  char v130; // [rsp+42h] [rbp-BEh]
  char v131; // [rsp+43h] [rbp-BDh]
  PVOID DeferredContext; // [rsp+48h] [rbp-B8h] BYREF
  char v133; // [rsp+50h] [rbp-B0h]
  char v134; // [rsp+51h] [rbp-AFh]
  char v135; // [rsp+52h] [rbp-AEh] BYREF
  char v136; // [rsp+53h] [rbp-ADh]
  char IsSupported; // [rsp+54h] [rbp-ACh]
  bool v138; // [rsp+55h] [rbp-ABh]
  bool v139; // [rsp+56h] [rbp-AAh]
  char v140; // [rsp+57h] [rbp-A9h]
  int v141; // [rsp+58h] [rbp-A8h]
  int v142; // [rsp+5Ch] [rbp-A4h]
  int v143; // [rsp+60h] [rbp-A0h]
  int v144; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v145; // [rsp+68h] [rbp-98h]
  unsigned int v146; // [rsp+6Ch] [rbp-94h]
  __int64 v147; // [rsp+70h] [rbp-90h]
  _OWORD v148[2]; // [rsp+78h] [rbp-88h] BYREF
  int v149; // [rsp+98h] [rbp-68h]
  int v150; // [rsp+9Ch] [rbp-64h]
  int v151; // [rsp+A0h] [rbp-60h] BYREF
  int PerfDomain; // [rsp+A4h] [rbp-5Ch]
  int v153; // [rsp+A8h] [rbp-58h] BYREF
  int v154; // [rsp+ACh] [rbp-54h]
  unsigned __int64 v155; // [rsp+B0h] [rbp-50h]
  _QWORD v156[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v157; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v158)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall *v159)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v160; // [rsp+E0h] [rbp-20h]
  char *v161; // [rsp+E8h] [rbp-18h]
  __int64 v162; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v163; // [rsp+F8h] [rbp-8h] BYREF
  __int64 (__fastcall *v164)(_QWORD *, _QWORD); // [rsp+100h] [rbp+0h]
  struct _GROUP_AFFINITY Affinity; // [rsp+108h] [rbp+8h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v167[176]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v168[176]; // [rsp+1E0h] [rbp+E0h] BYREF

  v164 = a2;
  v3 = a1;
  v147 = (__int64)a1;
  LOBYTE(v4) = 0;
  DeferredContext = 0LL;
  Affinity = 0LL;
  memset(v167, 0, 0xA8uLL);
  v135 = 0;
  v158 = 0LL;
  v162 = 0LL;
  v159 = 0LL;
  memset(v168, 0, 0xA8uLL);
  v163 = 0LL;
  v151 = 0;
  memset(v148, 0, sizeof(v148));
  v153 = 0;
  v5 = 0LL;
  v160 = 0LL;
  v6 = 0;
  PreviousAffinity = 0LL;
  v128 = 0;
  ClearEnumerationContext(v148);
  LODWORD(v155) = 0;
  v144 = 0;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
    (__int64)L"~MHz",
    &v144);
  if ( !v144 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x21u,
        (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
    v3[34] &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v141) = v3[41] != 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00133F8,
    0LL);
  PerfDomain = GetPerfDomain((__int64)v3, (__int64)v148, &v153);
  v8 = (unsigned int)(368 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x72637250u);
  v161 = PoolWithTag;
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_6:
    started = -1073741670;
    goto LABEL_303;
  }
  v11 = memset(PoolWithTag, 0, v8);
  v146 = 0;
  LOBYTE(v11) = 0;
  v136 = 0;
  v143 = (int)v11;
  LOBYTE(v2) = 0;
  v131 = 0;
  v133 = 0;
  LOBYTE(v149) = 0;
  IsSupported = 0;
  LOBYTE(v150) = 0;
  v140 = 0;
  v129 = 0;
  v139 = 0;
  v138 = 0;
  v157 = 0LL;
  v130 = 1;
  v135 = 1;
  v134 = 1;
  v142 = 1;
  v145 = v2;
  v151 = 1000;
  KeInitializeAffinityEx(v167);
  ResetEnumerationContext((__int64 *)v148);
  v12 = EnumerateNextDevice((__int64 *)v148, &DeferredContext);
  v13 = 0;
  while ( !v12 )
  {
    if ( *((_DWORD *)DeferredContext + 20) == v13 )
      KeAddProcessorAffinityEx(v167, *((unsigned int *)DeferredContext + 14));
    v12 = EnumerateNextDevice((__int64 *)v148, &DeferredContext);
  }
  LOBYTE(v8) = v13;
  v154 = v8;
  ResetEnumerationContext((__int64 *)v148);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
  {
    if ( *((_DWORD *)DeferredContext + 20) == v14 )
    {
      v157 = *((_QWORD *)DeferredContext + 72);
      if ( (int)GetPackageAffinity((__int64)DeferredContext, (__int64)v168) >= 0 )
      {
        LODWORD(v8) = (unsigned __int8)v8;
        if ( (unsigned int)KeIsEqualAffinityEx(v168, v167) )
          LODWORD(v8) = 1;
        v154 = v8;
      }
      break;
    }
  }
  ResetEnumerationContext((__int64 *)v148);
  v15 = EnumerateNextDevice((__int64 *)v148, &DeferredContext);
  if ( v15 )
  {
    v47 = v143;
    goto LABEL_83;
  }
  v17 = v142;
  v18 = v10 + 92;
  v19 = 1;
  do
  {
    v20 = (_BYTE *)*((_QWORD *)DeferredContext + 72);
    if ( v20[272] == 10 || v20[296] == 10 )
      v131 = 1;
    if ( v20[344] == 10 || v20[152] == 10 || v20[176] == 10 || v20[128] == 10 || v20[200] == 10 || v20[416] == 10 )
      v133 = 1;
    v2 = (unsigned __int8)v2;
    if ( v20[104] == 10 )
      v2 = 1;
    v4 = (unsigned __int8)v4;
    if ( v20[8] == 10 )
      v4 = 1;
    if ( v20[392] == 10 || v20[368] == 10 || v20[224] == 10 )
      v136 = 1;
    *(_QWORD *)(v18 + 20) = v20;
    IsSupported = CpcRegisterIsSupportedEx((__int64)(v20 + 344));
    *v18 = IsSupported;
    v18[1] = CpcRegisterIsSupportedEx((__int64)(v20 + 128));
    v18[2] = CpcRegisterIsSupportedEx((__int64)(v20 + 152));
    v18[3] = CpcRegisterIsSupportedEx((__int64)(v20 + 176));
    v18[6] = CpcRegisterIsSupportedEx((__int64)(v20 + 200));
    v18[7] = CpcRegisterIsSupportedEx((__int64)(v20 + 104));
    v140 = CpcRegisterIsSupportedEx(v21);
    v22 = CpcRegisterIsSupportedEx((__int64)(v20 + 416));
    v24 = (unsigned __int8)v149;
    if ( v22 )
      v24 = 1;
    v18[4] = v22;
    v149 = v24;
    v25 = CpcRegisterIsSupportedEx(v23);
    LOBYTE(v30) = v150;
    v18[5] = v25;
    v29 = v28;
    v30 = (unsigned __int8)v30;
    if ( v25 )
      v30 = v26;
    v31 = v20[272] == 127;
    v150 = v30;
    v32 = v28;
    if ( !v31 )
      v32 = v27;
    if ( v20[296] != 127 )
      v29 = v32;
    v141 = v29;
    if ( !qword_1C00135A0 || (v33 = qword_1C00135A0(v20), LOBYTE(v28) = 0, !v33) )
      v134 = v28;
    memset(v156, 0, 12);
    v34 = 0LL;
    v35 = 0;
    while ( 1 )
    {
      if ( v35 )
      {
        switch ( v35 )
        {
          case 1u:
            v36 = 152LL;
            break;
          case 2u:
            v36 = 176LL;
            break;
          case 3u:
            v36 = 416LL;
            break;
          default:
            v36 = 200LL;
            break;
        }
      }
      else
      {
        v36 = 128LL;
      }
      if ( !CpcRegisterIsSupported((__int64)&v20[v36]) )
        goto LABEL_67;
      v129 = 1;
      if ( *v37 == 10 )
      {
        v19 = 0;
        goto LABEL_71;
      }
      if ( CpcRegisterIsSupported((__int64)v156) )
        break;
      v34 = *v40;
      v39 = *((_DWORD *)v40 + 2);
      v156[0] = *v40;
      LODWORD(v156[1]) = v39;
LABEL_67:
      v35 = v38 + 1;
      if ( v35 >= 5 )
        goto LABEL_68;
    }
    if ( LOBYTE(v156[0]) == v42
      && *(_QWORD *)((char *)v156 + 4) == *(__int64 *)((char *)v40 + 4)
      && v41 == *((_BYTE *)v40 + 3) )
    {
      goto LABEL_67;
    }
    v19 = 0;
LABEL_68:
    if ( v129 && v19 )
    {
      *(_QWORD *)(v18 + 28) = v34;
      *((_DWORD *)v18 + 9) = v39;
    }
LABEL_71:
    if ( qword_1C00135B8 )
    {
      v17 = (unsigned __int8)v17;
      if ( (int)qword_1C00135B8(v18 - 92, &v158, &v162, &v163, &v159, &v135, &v151) < 0 )
        v17 = 0;
    }
    LOBYTE(v43) = v143;
    v44 = (unsigned int *)&Cpc2RegisterTable;
    v45 = 19LL;
    do
    {
      v46 = *v44;
      v44 += 6;
      v43 = (unsigned __int8)v43;
      if ( v20[v46] == 10 )
        v43 = 1;
      --v45;
    }
    while ( v45 );
    v143 = v43;
    v18 += 368;
    v15 = EnumerateNextDevice((__int64 *)v148, &DeferredContext);
  }
  while ( !v15 );
  v5 = v160;
  v130 = v19;
  v6 = (char)v160;
  v10 = v161;
  v142 = v17;
  v3 = (__int64 *)v147;
  v146 = v4;
  v145 = v2;
LABEL_83:
  if ( v158 == v16 || v159 == v16 )
  {
    LOBYTE(v15) = (_BYTE)v16;
    v142 = v15;
  }
  if ( !v47 )
  {
LABEL_106:
    ResetEnumerationContext((__int64 *)v148);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
    {
      v53 = (__int64 *)(v10 + 112);
      v54 = v157;
      do
      {
        v55 = *v53;
        if ( *((_DWORD *)DeferredContext + 20) == 2
          && *(_BYTE *)(v55 + 32) == 10
          && !ReadGenAddrHiddenEx(*((unsigned int *)DeferredContext + 21), (_BYTE *)(v55 + 32)) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              1u,
              0x22u,
              (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
          if ( !CpcHiddenProcessorMitigationReported )
          {
            ProcLibTraceHiddenProcessorDegradedOperation();
            CpcHiddenProcessorMitigationReported = 1;
          }
          *(_QWORD *)(v55 + 32) = *(_QWORD *)(v54 + 32);
          *(_DWORD *)(v55 + 40) = *(_DWORD *)(v54 + 40);
          if ( *(_BYTE *)(v55 + 8) == 10 )
          {
            *(_QWORD *)(v55 + 8) = *(_QWORD *)(v54 + 8);
            *(_DWORD *)(v55 + 16) = *(_DWORD *)(v54 + 16);
          }
          if ( *(_BYTE *)(v55 + 56) == 10 )
          {
            *(_QWORD *)(v55 + 56) = *(_QWORD *)(v54 + 56);
            *(_DWORD *)(v55 + 64) = *(_DWORD *)(v54 + 64);
          }
          if ( *(_BYTE *)(v55 + 80) == 10 )
          {
            *(_QWORD *)(v55 + 80) = *(_QWORD *)(v54 + 80);
            *(_DWORD *)(v55 + 88) = *(_DWORD *)(v54 + 88);
          }
          if ( *(_BYTE *)(v55 + 440) == 10 )
          {
            *(_QWORD *)(v55 + 440) = *(_QWORD *)(v54 + 440);
            *(_DWORD *)(v55 + 448) = *(_DWORD *)(v54 + 448);
          }
          if ( *(_BYTE *)(v55 + 104) == 10 )
          {
            *(_QWORD *)(v55 + 104) = *(_QWORD *)(v54 + 104);
            *(_DWORD *)(v55 + 112) = *(_DWORD *)(v54 + 112);
          }
        }
        v53 += 46;
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) );
      v10 = v161;
      v5 = v56;
    }
    ResetEnumerationContext((__int64 *)v148);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
    {
      v58 = v10 + 100;
      while ( 1 )
      {
        v59 = *(_QWORD *)(v58 + 12);
        v60 = DeferredContext;
        if ( (*(_BYTE *)(v59 + 8) == 127
           || *(_BYTE *)(v59 + 32) == 127
           || *(_BYTE *)(v59 + 56) == 127
           || *(_BYTE *)(v59 + 80) == 127
           || *(_BYTE *)(v59 + 440) == 127
           || *(_BYTE *)(v59 + 368) == 127)
          && *((_DWORD *)DeferredContext + 20) == v57 )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          p_PreviousAffinity = &PreviousAffinity;
          if ( v128 )
            p_PreviousAffinity = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
          v128 = 1;
        }
        *v58 = v131;
        v58[1] = v145;
        v58[2] = v146;
        v58[3] = v133;
        if ( !CpcRegisterIsSupportedEx(v59 + 488) || *v62 == 126 && *(_DWORD *)(v59 + 492) == v63 )
        {
          LODWORD(GenAddrMaybeHidden) = v144;
        }
        else
        {
          GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx((__int64)v60, v62);
          v155 = GenAddrMaybeHidden;
          if ( !(_DWORD)GenAddrMaybeHidden )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_147;
            v65 = 35;
            goto LABEL_145;
          }
        }
        *((_DWORD *)v58 - 9) = GenAddrMaybeHidden;
        *(_QWORD *)(v58 - 92) = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 8));
        v68 = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 32));
        *(_QWORD *)(v58 - 84) = v68;
        if ( !v68 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_147;
          v65 = 36;
LABEL_145:
          v66 = 1;
          goto LABEL_146;
        }
        v69 = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 56));
        v70 = *(_QWORD *)(v58 - 84);
        *(_QWORD *)(v58 - 76) = v69;
        if ( v69 > v70 )
          *(_QWORD *)(v58 - 76) = v70;
        *(_QWORD *)(v58 - 68) = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 80));
        *(_QWORD *)(v58 - 60) = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 440));
        if ( CpcRegisterIsSupportedEx(v59 + 368) )
        {
          v138 = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 368)) != 0;
          v139 = *(_BYTE *)(v59 + 368) != 126;
        }
        if ( v58 - 100 != v10 )
        {
          v74 = *(_QWORD *)(v58 - 92);
          v75 = *((_QWORD *)v10 + 1);
          if ( v74 != v75 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_147;
            v83 = 37;
            goto LABEL_183;
          }
          v74 = *(_QWORD *)(v58 - 84);
          v75 = *((_QWORD *)v10 + 2);
          if ( v74 != v75 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_147;
            v83 = 38;
            goto LABEL_183;
          }
          v74 = *(_QWORD *)(v58 - 68);
          v75 = *((_QWORD *)v10 + 4);
          if ( v74 != v75 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_147;
            v83 = 39;
LABEL_183:
            WPP_RECORDER_SF_ii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              v83,
              (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids,
              v74,
              v75);
            goto LABEL_147;
          }
          v76 = *(_QWORD *)(v58 - 76);
          v77 = *((_QWORD *)v10 + 3);
          if ( v76 != v77 )
          {
            if ( !v134 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_ii(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0x28u,
                  (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids,
                  v76,
                  *((_QWORD *)v10 + 3));
              goto LABEL_147;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v71, v72, v73, v127);
              v77 = *((_QWORD *)v10 + 3);
            }
            *(_QWORD *)(v58 - 76) = v77;
          }
        }
        v78 = *(_QWORD *)(v58 - 84);
        v79 = 100LL * *(_QWORD *)(v58 - 92) / v78;
        *((_DWORD *)v58 - 8) = v79;
        *((_DWORD *)v58 - 7) = v79;
        v80 = 100LL * *(_QWORD *)(v58 - 76) / v78;
        v81 = 100LL * *(_QWORD *)(v58 - 68) / v78;
        if ( !(_DWORD)v81 )
          LODWORD(v81) = 1;
        *((_DWORD *)v58 - 5) = v81;
        if ( !(_DWORD)v80 )
          LODWORD(v80) = 1;
        *((_DWORD *)v58 - 6) = v80;
        v58 += 368;
        if ( (unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
          goto LABEL_187;
      }
    }
    v82 = 1;
LABEL_187:
    if ( *((_QWORD *)v10 + 1) < *((_QWORD *)v10 + 2) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_147;
      v65 = 42;
      goto LABEL_190;
    }
    v84 = v10 + 32;
    if ( *((_QWORD *)v10 + 3) < *((_QWORD *)v10 + 4) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_147;
      v65 = 43;
LABEL_190:
      v66 = v82;
LABEL_146:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v66,
        v65,
        (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
LABEL_147:
      started = -1073741811;
      goto LABEL_303;
    }
    v85 = v82 + ((_BYTE)v141 != 0);
    v86 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
    v146 = v86 + 24 * v85;
    v145 = v146 + 8 * PerfDomain * v85;
    v87 = v145;
    v88 = ExAllocatePoolWithTag(NonPagedPoolNx, v145, 0x72637250u);
    v160 = v88;
    v5 = v88;
    if ( !v88 )
      goto LABEL_6;
    memset(v88, 0, v87);
    v89 = v147;
    if ( *(_BYTE *)(v147 + 1122) )
      v5[48] = PepParkPreference;
    if ( (*(_QWORD *)(v89 + 272) & 0x10000000000LL) != 0 )
    {
      v5[49] = PepParkMask;
      v5[50] = PepPerfCheckComplete;
      v5[9] = *(_QWORD *)(v89 + 1104);
    }
    v90 = v142;
    v91 = PerfDomain;
    v92 = v153;
    v5[52] = v5 + 54;
    v93 = (char *)v5 + v146;
    v94 = (char *)v5 + v86;
    *(_DWORD *)v5 = 62;
    *((_DWORD *)v5 + 4) = v91;
    *((_DWORD *)v5 + 9) = v85;
    v5[51] = v94;
    v5[53] = v93;
    *((_WORD *)v5 + 2) = v92;
    if ( v90 )
    {
      v5[42] = v158;
      v5[43] = v162;
      if ( (_BYTE)v154 && v163 )
      {
        v95 = v129;
        if ( v92 == 254 )
        {
          v5[44] = v163;
          v5[10] = v10;
        }
      }
      else
      {
        v95 = v129;
      }
LABEL_213:
      v97 = v159;
      if ( v90 )
      {
LABEL_215:
        v5[41] = v97;
        if ( (_BYTE)v143 )
        {
          if ( v131 )
            v5[45] = CpcReadFeedback;
          if ( v133 )
          {
            v5[46] = CpcAcquirePerformance;
            v5[47] = CpcCommitPerformance;
          }
          if ( v136 )
          {
            v5[38] = AcquirePccSubspace;
            v5[39] = ExecutePccWrite;
          }
          v98 = *(_DWORD *)(*(_QWORD *)(v89 + 248) + 84LL);
          if ( v98 )
          {
            v89 = v147;
            *((_DWORD *)v5 + 10) = 0x989680 / (v98 >> 1);
          }
        }
        if ( IsSupported || (*(_QWORD *)(v89 + 272) & 0x4000000000LL) != 0 )
          v5[40] = CpcReinitializeHandler;
        *((_BYTE *)v5 + 6) = 0;
        v99 = v95 || v90;
        v100 = v155;
        *((_BYTE *)v5 + 7) = v99;
        *((_BYTE *)v5 + 8) = v134;
        *((_BYTE *)v5 + 52) = v138;
        v101 = v144;
        if ( v100 )
          v101 = v100;
        *((_DWORD *)v5 + 5) = v101;
        *((_DWORD *)v5 + 6) = *((_DWORD *)v10 + 17);
        v102 = *((_DWORD *)v10 + 19);
        *((_DWORD *)v5 + 7) = v102;
        v103 = *((_DWORD *)v10 + 20);
        if ( !v102 )
          v102 = 1;
        *((_DWORD *)v5 + 7) = v102;
        if ( !v103 )
          v103 = 1;
        *((_DWORD *)v5 + 8) = v103;
        v5[7] = *(_QWORD *)v84;
        v5[8] = *((_QWORD *)v10 + 2);
        v104 = *(_QWORD *)(v89 + 336);
        if ( v104 )
          v5[32] = v104;
        v5[34] = *(_QWORD *)(v89 + 344);
        if ( (_BYTE)v149 )
          *((_BYTE *)v5 + 9) = 1;
        if ( (_BYTE)v150 )
        {
          if ( v90 )
            *((_BYTE *)v5 + 10) = 1;
          else
            v5[36] = CpcSetAutonomousActivityWindow;
        }
        if ( v139 )
          v5[37] = CpcSetAutonomousMode;
        if ( v140 )
          v5[33] = CpcSetTimeWindow;
        if ( (*(_DWORD *)(v89 + 272) & 0x400000) != 0 && v90 && (v92 == 254 || v91 == 1) )
        {
          *((_BYTE *)v5 + 11) = 1;
          if ( (*(_QWORD *)(v89 + 272) & 0x400000000LL) == 0 || (v105 = 0, v135) )
            v105 = 1;
          *((_BYTE *)v5 + 12) = v105;
          *((_DWORD *)v5 + 12) = v151;
        }
        v106 = *((_QWORD *)v10 + 2);
        v107 = *((_QWORD *)v10 + 5);
        if ( v106 == v107 )
        {
          LODWORD(v108) = 100;
        }
        else
        {
          v109 = 100 * v107;
          v108 = 100 * v107 / v106;
          v89 = v109 % v106;
        }
        *((_DWORD *)v94 + 2) = v108;
        *(_QWORD *)v94 = PerfReadWrappingCounter;
        *((_DWORD *)v94 + 3) = 1;
        v94[17] = 1;
        v94[16] = v131 == 0;
        if ( (_BYTE)v141 )
        {
          v110 = v5[51];
          *(_QWORD *)(v110 + 32) = 100LL;
          *(_QWORD *)(v110 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v110 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v5, v89, (int)v94);
        v111 = (_QWORD *)v5[53];
        v155 = v5[52];
        ResetEnumerationContext((__int64 *)v148);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
        {
          v113 = v147;
          do
          {
            v114 = *((_QWORD *)v84 + 10);
            v115 = 100;
            v116 = DeferredContext;
            v157 = v114;
            if ( v84[67] )
            {
              v117 = (_BYTE *)(v114 + 104);
              if ( *(_BYTE *)(v114 + 104) == 127 && !*((_DWORD *)DeferredContext + 20) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v118 = &PreviousAffinity;
                if ( v128 )
                  v118 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v118);
                v128 = 1;
              }
              v119 = ReadGenAddrMaybeHiddenEx((__int64)v116, v117);
              v120 = *((_QWORD *)v84 - 2);
              if ( v119 > v120 )
              {
                v119 = *((_QWORD *)v84 - 2);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    3u,
                    1u,
                    0x2Cu,
                    (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
                  v119 = *((_QWORD *)v84 - 2);
                }
                v120 = v119;
              }
              if ( v119 < *(_QWORD *)v84 )
              {
                v119 = *(_QWORD *)v84;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    3u,
                    1u,
                    0x2Du,
                    (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
                  v119 = *(_QWORD *)v84;
                  v120 = *((_QWORD *)v84 - 2);
                }
              }
              v115 = *((_DWORD *)v84 + 12);
              *((_QWORD *)v84 + 3) = v119;
              v121 = 100 * v119 / v120;
              if ( (unsigned int)v121 > v115 )
                v115 = v121;
              *((_DWORD *)v84 + 13) = v115;
              if ( v115 != v116[181] )
                ProcLibCapChange(v113, v116[112], v116[124], v115);
              v112 = v155;
            }
            else
            {
              *((_QWORD *)v84 + 3) = *((_QWORD *)v84 - 2);
            }
            InitCommonPerfStateContext(v116, (_QWORD *)v84 - 4, v112, v115, v115 < 0x64 ? 2 : 0);
            *v111 = v84 + 128;
            *((_QWORD *)v84 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v84 + 23) = v122;
            v124 = *(_BYTE *)(v122 + 297);
            if ( v124 < 0x40u )
              *((_QWORD *)v84 + 20) = (1LL << v124) - 1;
            v125 = *(_BYTE *)(v122 + 273);
            if ( v125 < 0x40u )
              *((_QWORD *)v84 + 21) = (1LL << v125) - 1;
            ++v111;
            if ( (_BYTE)v141 )
            {
              *v111++ = v84 + 192;
              *((_QWORD *)v84 + 30) = *((_QWORD *)v116 + 41);
            }
            v155 = v123 + 32;
            v84 += 368;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) );
          v5 = v160;
          v10 = v161;
        }
        if ( v128 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        started = v164(v5, v145);
        if ( started >= 0 )
        {
          ResetEnumerationContext((__int64 *)v148);
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v10;
            v10 += 368;
          }
          if ( (*(_QWORD *)(v147 + 272) & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext((__int64 *)v148);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
            {
              if ( !*((_DWORD *)DeferredContext + 20) )
                CpcConnectNativeInterrupt((struct _DEVICE_OBJECT **)DeferredContext);
            }
          }
          v10 = 0LL;
          started = 0;
        }
        goto LABEL_303;
      }
LABEL_214:
      v97 = PerfSelectionCpc;
      goto LABEL_215;
    }
    v95 = v129;
    if ( v129 )
    {
      if ( v130 )
      {
        v5[42] = PerfControlCpcSingleRegister;
        v96 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        v5[42] = PerfControlCpc;
        v96 = (void *)qword_1C0013570;
        if ( !qword_1C0013570 || !CpcHiddenProcessorMitigationReported )
        {
          v5[43] = PerfControlCpcHidden;
          goto LABEL_213;
        }
      }
    }
    else
    {
      v96 = AcpiCStateIdleCancel;
      v5[42] = AcpiCStateIdleCancel;
    }
    v5[43] = v96;
    goto LABEL_214;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0013940,
    0LL);
  ResetEnumerationContext((__int64 *)v148);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
  {
    v48 = (__int64 *)v147;
    v49 = v10 + 112;
    while ( 1 )
    {
      if ( *(v49 - 20) )
      {
        v50 = *(_QWORD *)v49;
        v51 = DeferredContext;
        if ( *(_BYTE *)(*(_QWORD *)v49 + 344LL) == 127 && !*((_DWORD *)DeferredContext + 20) )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          v52 = &PreviousAffinity;
          if ( v6 )
            v52 = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, v52);
          v6 = 1;
          v128 = 1;
        }
        if ( (*(_BYTE *)(v51[31] + 144LL) & 1) == 0 )
        {
          started = StartPccCommand(v48[31]);
          if ( started < 0 )
          {
            v3 = v48;
            goto LABEL_149;
          }
          v6 = v128;
        }
        WriteGenAddrMaybeHiddenEx((__int64)v51, (_BYTE *)(v50 + 344), 1LL);
      }
      v49 += 368;
      if ( (unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
      {
        v3 = v48;
        break;
      }
    }
  }
  ResetEnumerationContext((__int64 *)v148);
  if ( (unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
  {
LABEL_105:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0013940);
    goto LABEL_106;
  }
  while ( 1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 31) + 144LL) & 1) != 0 )
    {
      started = ExecutePccCommand(v3[31]);
      if ( started < 0 )
        break;
    }
    if ( (unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
      goto LABEL_105;
  }
LABEL_149:
  ResetEnumerationContext((__int64 *)v148);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v148, &DeferredContext) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 31) + 144LL) & 1) != 0 )
    {
      v67 = v3[31];
      (*(void (__fastcall **)(_QWORD))(v67 + 136))(*(_QWORD *)(v67 + 72));
      *(_DWORD *)(v67 + 144) &= ~1u;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0013940);
LABEL_303:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00133F8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x72637250u);
  return (unsigned int)started;
}
