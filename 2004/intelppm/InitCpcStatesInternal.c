/*
 * XREFs of InitCpcStatesInternal @ 0x1C0033C90
 * Callers:
 *     RegisterHvCpcCounters @ 0x1C002FE70 (RegisterHvCpcCounters.c)
 *     RegisterKernelCpc @ 0x1C0035B70 (RegisterKernelCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     DisplayKernelPerfStates @ 0x1C0003A54 (DisplayKernelPerfStates.c)
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C000812C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ClearEnumerationContext @ 0x1C000867C (ClearEnumerationContext.c)
 *     ReadGenAddrHiddenEx @ 0x1C0008800 (ReadGenAddrHiddenEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0008830 (ReadGenAddrMaybeHiddenEx.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1C0008BC0 (WriteGenAddrMaybeHiddenEx.c)
 *     CpcRegisterIsSupported @ 0x1C0009014 (CpcRegisterIsSupported.c)
 *     CpcRegisterIsSupportedEx @ 0x1C000902C (CpcRegisterIsSupportedEx.c)
 *     WPP_RECORDER_SF_ii @ 0x1C000E9D0 (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x1C000EAF8 (WPP_RECORDER_SF_iii.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0020924 (GetRegistryDwordValueNoDefault.c)
 *     ProcLibCapChange @ 0x1C0023D98 (ProcLibCapChange.c)
 *     InitCommonPerfStateContext @ 0x1C0025004 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0025284 (GetPerfDomain.c)
 *     CpcConnectNativeInterrupt @ 0x1C002D5B0 (CpcConnectNativeInterrupt.c)
 *     StartPccCommand @ 0x1C003161C (StartPccCommand.c)
 *     GetPackageAffinity @ 0x1C0033ABC (GetPackageAffinity.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  int v2; // r12d
  _QWORD *v3; // r14
  int v4; // r13d
  _QWORD *v5; // rsi
  char v6; // di
  int RegistryDwordValueNoDefault; // eax
  int v8; // ecx
  int started; // edi
  SIZE_T v10; // rbx
  char *PoolWithTag; // rax
  char *v12; // r15
  void *v13; // rax
  int v14; // r11d
  int v15; // eax
  char *v16; // rdi
  char v17; // r15
  int v18; // r14d
  _BYTE *v19; // rbx
  bool v20; // zf
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
  unsigned __int8 v31; // cl
  unsigned int v32; // r8d
  __int64 v33; // xmm0_8
  __int64 v34; // rax
  _BYTE *v35; // rdx
  int v36; // r8d
  int v37; // r11d
  __int64 *v38; // rdx
  char v39; // r9d^3
  char v40; // r10
  int v41; // r11d
  unsigned int *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  char v45; // r11
  __int64 v46; // r13
  char *v47; // r14
  __int64 v48; // r12
  _QWORD *v49; // rbx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v51; // rbx
  int v52; // eax
  __int64 *v53; // r14
  __int64 v54; // r15
  __int64 v55; // rbx
  _QWORD *v56; // r11
  int v57; // r11d
  char *v58; // rbx
  __int64 v59; // rdi
  PVOID v60; // r14
  struct _GROUP_AFFINITY *v61; // rdx
  _BYTE *v62; // rcx
  int v63; // r11d
  unsigned __int64 v64; // rax
  unsigned __int16 v65; // r9
  __int64 v66; // rbx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rax
  unsigned __int64 v77; // rcx
  int v78; // eax
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // rax
  unsigned __int16 v81; // r9
  char *v82; // rbx
  int v83; // edi
  unsigned int v84; // r14d
  unsigned int v85; // r12d
  _QWORD *v86; // rax
  __int64 v87; // rdx
  char v88; // r10
  int v89; // r12d
  int v90; // r9d
  char *v91; // rax
  char *v92; // r8
  char v93; // r11
  void *v94; // rax
  __int64 (__fastcall *v95)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // rax
  unsigned int v96; // ecx
  bool v97; // al
  int v98; // ecx
  int v99; // eax
  int v100; // eax
  int v101; // ecx
  __int64 v102; // rax
  char v103; // al
  unsigned __int64 v104; // rcx
  __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rtt
  __int64 v108; // rax
  _QWORD *v109; // r12
  __int64 v110; // rsi
  unsigned __int64 v111; // r10
  unsigned int v112; // edi
  _DWORD *v113; // r14
  _BYTE *v114; // rdi
  struct _GROUP_AFFINITY *v115; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v117; // rcx
  unsigned __int64 v118; // rax
  __int64 v119; // r10
  char v120; // r11
  unsigned __int8 v121; // cl
  unsigned __int8 v122; // cl
  int v124; // [rsp+20h] [rbp-E0h]
  char v125; // [rsp+40h] [rbp-C0h]
  char v126; // [rsp+41h] [rbp-BFh]
  char v127; // [rsp+42h] [rbp-BEh]
  char v128; // [rsp+43h] [rbp-BDh]
  PVOID DeferredContext; // [rsp+48h] [rbp-B8h] BYREF
  char v130; // [rsp+50h] [rbp-B0h]
  char v131; // [rsp+51h] [rbp-AFh]
  char v132; // [rsp+52h] [rbp-AEh] BYREF
  char v133; // [rsp+53h] [rbp-ADh]
  char IsSupported; // [rsp+54h] [rbp-ACh]
  bool v135; // [rsp+55h] [rbp-ABh]
  bool v136; // [rsp+56h] [rbp-AAh]
  char v137; // [rsp+57h] [rbp-A9h]
  int v138; // [rsp+58h] [rbp-A8h]
  int v139; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v140; // [rsp+60h] [rbp-A0h]
  int v141; // [rsp+64h] [rbp-9Ch]
  int v142; // [rsp+68h] [rbp-98h]
  unsigned int v143; // [rsp+6Ch] [rbp-94h]
  __int64 v144; // [rsp+70h] [rbp-90h]
  _OWORD v145[2]; // [rsp+78h] [rbp-88h] BYREF
  int v146; // [rsp+98h] [rbp-68h]
  int v147; // [rsp+9Ch] [rbp-64h]
  int v148; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v149; // [rsp+A8h] [rbp-58h]
  int PerfDomain; // [rsp+B0h] [rbp-50h]
  int v151; // [rsp+B4h] [rbp-4Ch] BYREF
  BOOL v152; // [rsp+B8h] [rbp-48h]
  _QWORD v153[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v154; // [rsp+D0h] [rbp-30h] BYREF
  __int64 (__fastcall *v155)(__int64, unsigned int, unsigned int, unsigned int, int, int, int, _DWORD *, __int64); // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v156; // [rsp+E0h] [rbp-20h]
  char *v157; // [rsp+E8h] [rbp-18h]
  __int64 v158; // [rsp+F0h] [rbp-10h]
  __int64 v159; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v160; // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v161)(_QWORD *, _QWORD); // [rsp+108h] [rbp+8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+110h] [rbp+10h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v164[176]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v165[176]; // [rsp+1E0h] [rbp+E0h] BYREF

  v161 = a2;
  v3 = (_QWORD *)a1;
  v144 = a1;
  LOBYTE(v4) = 0;
  DeferredContext = 0LL;
  Affinity = 0LL;
  memset(v164, 0, 0xA8uLL);
  v132 = 0;
  v154 = 0LL;
  v159 = 0LL;
  v155 = 0LL;
  memset(v165, 0, 0xA8uLL);
  v160 = 0LL;
  v148 = 0;
  memset(v145, 0, sizeof(v145));
  v151 = 0;
  v5 = 0LL;
  v6 = 0;
  v125 = 0;
  PreviousAffinity = 0LL;
  ClearEnumerationContext(v145);
  LODWORD(v149) = 0;
  v139 = 0;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                  (__int64)L"~MHz",
                                  (__int64)&v139);
  v8 = v139;
  if ( RegistryDwordValueNoDefault < 0 )
    v8 = 0;
  v139 = v8;
  if ( !v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x21u,
        (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids);
    v3[34] &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v138) = v3[41] != 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001C418,
    0LL);
  PerfDomain = GetPerfDomain((__int64)v3, (__int64)v145, &v151);
  v10 = (unsigned int)(368 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
  v157 = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_8:
    started = -1073741670;
    goto LABEL_297;
  }
  v13 = memset(PoolWithTag, 0, v10);
  v143 = 0;
  LOBYTE(v13) = 0;
  v133 = 0;
  v142 = (int)v13;
  LOBYTE(v2) = 0;
  v128 = 0;
  v140 = v2;
  v127 = 1;
  v132 = 1;
  v131 = 1;
  v141 = 1;
  v130 = 0;
  LOBYTE(v146) = 0;
  IsSupported = 0;
  LOBYTE(v147) = 0;
  v137 = 0;
  v126 = 0;
  v136 = 0;
  v148 = 1000;
  v135 = 0;
  v158 = 0LL;
  KeInitializeAffinityEx(v164);
  ResetEnumerationContext((__int64 *)v145);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
  {
    if ( !*((_DWORD *)DeferredContext + 20) )
      KeAddProcessorAffinityEx(v164, *((unsigned int *)DeferredContext + 14));
  }
  v152 = 0;
  ResetEnumerationContext((__int64 *)v145);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
  {
    if ( *((_DWORD *)DeferredContext + 20) == v14 )
    {
      v158 = *((_QWORD *)DeferredContext + 72);
      if ( (int)GetPackageAffinity((__int64)DeferredContext, (__int64)v165) >= 0 )
        v152 = KeIsEqualAffinityEx(v165, v164) != 0;
      break;
    }
  }
  ResetEnumerationContext((__int64 *)v145);
  v15 = EnumerateNextDevice((__int64 *)v145, &DeferredContext);
  if ( v15 )
  {
    v45 = v142;
    goto LABEL_82;
  }
  v16 = v12 + 92;
  v17 = 1;
  v18 = v141;
  do
  {
    v19 = (_BYTE *)*((_QWORD *)DeferredContext + 72);
    if ( v19[272] == 10 || v19[296] == 10 )
      v128 = 1;
    if ( v19[344] == 10 || v19[152] == 10 || v19[176] == 10 || v19[128] == 10 || v19[200] == 10 || v19[416] == 10 )
      v130 = 1;
    v2 = (unsigned __int8)v2;
    if ( v19[104] == 10 )
      v2 = 1;
    v4 = (unsigned __int8)v4;
    v20 = v19[8] == 10;
    v140 = v2;
    if ( v20 )
      v4 = 1;
    if ( v19[392] == 10 || v19[368] == 10 || v19[224] == 10 )
      v133 = 1;
    *(_QWORD *)(v16 + 20) = v19;
    IsSupported = CpcRegisterIsSupportedEx((__int64)(v19 + 344));
    *v16 = IsSupported;
    v16[1] = CpcRegisterIsSupportedEx((__int64)(v19 + 128));
    v16[2] = CpcRegisterIsSupportedEx((__int64)(v19 + 152));
    v16[3] = CpcRegisterIsSupportedEx((__int64)(v19 + 176));
    v16[6] = CpcRegisterIsSupportedEx((__int64)(v19 + 200));
    v16[7] = CpcRegisterIsSupportedEx((__int64)(v19 + 104));
    v137 = CpcRegisterIsSupportedEx(v21);
    v22 = CpcRegisterIsSupportedEx((__int64)(v19 + 416));
    v24 = (unsigned __int8)v146;
    if ( v22 )
      v24 = 1;
    v16[4] = v22;
    v146 = v24;
    v25 = CpcRegisterIsSupportedEx(v23);
    LOBYTE(v30) = v147;
    v16[5] = v25;
    v29 = v28;
    v30 = (unsigned __int8)v30;
    if ( v25 )
      v30 = v26;
    v20 = v19[272] == 127;
    v147 = v30;
    v31 = v28;
    if ( !v20 )
      v31 = v27;
    if ( v19[296] != 127 )
      v29 = v31;
    v138 = v29;
    v5 = 0LL;
    if ( !qword_1C001C5C0 || !(unsigned __int8)qword_1C001C5C0(v19) )
      v131 = 0;
    v32 = 0;
    memset(v153, 0, 12);
    v33 = 0LL;
    while ( 1 )
    {
      if ( v32 )
      {
        switch ( v32 )
        {
          case 1u:
            v34 = 152LL;
            break;
          case 2u:
            v34 = 176LL;
            break;
          case 3u:
            v34 = 416LL;
            break;
          default:
            v34 = 200LL;
            break;
        }
      }
      else
      {
        v34 = 128LL;
      }
      if ( !CpcRegisterIsSupported((__int64)&v19[v34]) )
        goto LABEL_66;
      v126 = 1;
      if ( *v35 == 10 )
      {
        v17 = 0;
        goto LABEL_70;
      }
      if ( CpcRegisterIsSupported((__int64)v153) )
        break;
      v33 = *v38;
      v37 = *((_DWORD *)v38 + 2);
      v153[0] = *v38;
      LODWORD(v153[1]) = v37;
LABEL_66:
      v32 = v36 + 1;
      if ( v32 >= 5 )
        goto LABEL_67;
    }
    if ( LOBYTE(v153[0]) == v40
      && *(_QWORD *)((char *)v153 + 4) == *(__int64 *)((char *)v38 + 4)
      && v39 == *((_BYTE *)v38 + 3) )
    {
      goto LABEL_66;
    }
    v17 = 0;
LABEL_67:
    if ( v126 && v17 )
    {
      *(_QWORD *)(v16 + 28) = v33;
      *((_DWORD *)v16 + 9) = v37;
    }
LABEL_70:
    if ( qword_1C001C5D0 )
    {
      v18 = (unsigned __int8)v18;
      if ( (int)qword_1C001C5D0(v16 - 92, &v154, &v159, &v160, &v155, &v132, &v148) < 0 )
        v18 = 0;
    }
    LOBYTE(v41) = v142;
    v42 = (unsigned int *)&Cpc2RegisterTable;
    v43 = 19LL;
    do
    {
      v44 = *v42;
      v42 += 6;
      v41 = (unsigned __int8)v41;
      if ( v19[v44] == 10 )
        v41 = 1;
      --v43;
    }
    while ( v43 );
    v142 = v41;
    v16 += 368;
    v15 = EnumerateNextDevice((__int64 *)v145, &DeferredContext);
    LOBYTE(v2) = v140;
  }
  while ( !v15 );
  v127 = v17;
  v6 = 0;
  v12 = v157;
  v141 = v18;
  v3 = (_QWORD *)v144;
  v143 = v4;
LABEL_82:
  if ( !v154 || !v155 )
  {
    LOBYTE(v15) = 0;
    v141 = v15;
  }
  if ( v45 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001C958,
      0LL);
    ResetEnumerationContext((__int64 *)v145);
    if ( (unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
      goto LABEL_100;
    v46 = v144;
    v47 = v12 + 112;
    do
    {
      if ( *(v47 - 20) )
      {
        v48 = *(_QWORD *)v47;
        v49 = DeferredContext;
        if ( *(_BYTE *)(*(_QWORD *)v47 + 344LL) == 127 && !*((_DWORD *)DeferredContext + 20) )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          p_PreviousAffinity = &PreviousAffinity;
          if ( v6 )
            p_PreviousAffinity = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
          v6 = 1;
          v125 = 1;
        }
        if ( (*(_BYTE *)(v49[31] + 144LL) & 1) == 0 )
        {
          started = StartPccCommand(*(_QWORD *)(v46 + 248));
          if ( started < 0 )
          {
            v3 = (_QWORD *)v46;
            goto LABEL_147;
          }
          v6 = v125;
        }
        WriteGenAddrMaybeHiddenEx((__int64)v49, (_BYTE *)(v48 + 344), 1LL);
      }
      v47 += 368;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) );
    v3 = (_QWORD *)v46;
LABEL_100:
    ResetEnumerationContext((__int64 *)v145);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 31) + 144LL) & 1) != 0 )
        {
          v51 = v3[31];
          v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v51 + 120))(*(_QWORD *)(v51 + 72), 0LL);
          *(_DWORD *)(v51 + 144) &= ~1u;
          started = v52;
          if ( v52 < 0 )
            break;
        }
        if ( (unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
          goto LABEL_104;
      }
LABEL_147:
      ResetEnumerationContext((__int64 *)v145);
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)DeferredContext + 31) + 144LL) & 1) != 0 )
        {
          v66 = v3[31];
          (*(void (__fastcall **)(_QWORD))(v66 + 136))(*(_QWORD *)(v66 + 72));
          *(_DWORD *)(v66 + 144) &= ~1u;
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001C958);
      goto LABEL_297;
    }
LABEL_104:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001C958);
  }
  ResetEnumerationContext((__int64 *)v145);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
  {
    v53 = (__int64 *)(v12 + 112);
    v54 = v158;
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
            (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids);
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
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) );
    v12 = v157;
    v5 = v56;
  }
  ResetEnumerationContext((__int64 *)v145);
  if ( (unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
  {
LABEL_184:
    if ( *((_QWORD *)v12 + 1) < *((_QWORD *)v12 + 2) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_145;
      v65 = 42;
      goto LABEL_144;
    }
    v82 = v12 + 32;
    if ( *((_QWORD *)v12 + 3) < *((_QWORD *)v12 + 4) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_145;
      v65 = 43;
LABEL_144:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v65,
        (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids);
      goto LABEL_145;
    }
    v83 = ((_BYTE)v138 != 0) + 1;
    v84 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
    v143 = v84 + 24 * v83;
    v140 = v143 + 8 * PerfDomain * v83;
    v85 = v140;
    v86 = ExAllocatePoolWithTag(NonPagedPoolNx, v140, 0x72637250u);
    v156 = v86;
    v5 = v86;
    if ( !v86 )
      goto LABEL_8;
    memset(v86, 0, v85);
    v87 = v144;
    if ( *(_BYTE *)(v144 + 1122) )
      v5[48] = PepParkPreference;
    if ( (*(_QWORD *)(v87 + 272) & 0x10000000000LL) != 0 )
    {
      v5[49] = PepParkMask;
      v5[50] = PepPerfCheckComplete;
      v5[9] = *(_QWORD *)(v87 + 1104);
    }
    v88 = v141;
    v89 = PerfDomain;
    v90 = v151;
    v5[52] = v5 + 54;
    v91 = (char *)v5 + v143;
    v92 = (char *)v5 + v84;
    *(_DWORD *)v5 = 62;
    *((_DWORD *)v5 + 4) = v89;
    *((_DWORD *)v5 + 9) = v83;
    v5[51] = v92;
    v5[53] = v91;
    *((_WORD *)v5 + 2) = v90;
    if ( v88 )
    {
      v5[42] = v154;
      v5[43] = v159;
      if ( v152 && v160 )
      {
        v93 = v126;
        if ( v90 == 254 )
        {
          v5[44] = v160;
          v5[10] = v12;
        }
      }
      else
      {
        v93 = v126;
      }
LABEL_209:
      v95 = v155;
      if ( v88 )
      {
LABEL_211:
        v5[41] = v95;
        if ( (_BYTE)v142 )
        {
          if ( v128 )
            v5[45] = CpcReadFeedback;
          if ( v130 )
          {
            v5[46] = CpcAcquirePerformance;
            v5[47] = CpcCommitPerformance;
          }
          if ( v133 )
          {
            v5[38] = AcquirePccSubspace;
            v5[39] = ExecutePccWrite;
          }
          v96 = *(_DWORD *)(*(_QWORD *)(v87 + 248) + 84LL);
          if ( v96 )
          {
            v87 = v144;
            *((_DWORD *)v5 + 10) = 0x989680 / (v96 >> 1);
          }
        }
        if ( IsSupported || (*(_QWORD *)(v87 + 272) & 0x4000000000LL) != 0 )
          v5[40] = CpcReinitializeHandler;
        *((_BYTE *)v5 + 6) = 0;
        v97 = v93 || v88;
        v98 = v149;
        *((_BYTE *)v5 + 7) = v97;
        *((_BYTE *)v5 + 8) = v131;
        *((_BYTE *)v5 + 52) = v135;
        v99 = v139;
        if ( v98 )
          v99 = v98;
        *((_DWORD *)v5 + 5) = v99;
        *((_DWORD *)v5 + 6) = *((_DWORD *)v12 + 17);
        v100 = *((_DWORD *)v12 + 19);
        *((_DWORD *)v5 + 7) = v100;
        v101 = *((_DWORD *)v12 + 20);
        if ( !v100 )
          v100 = 1;
        *((_DWORD *)v5 + 7) = v100;
        if ( !v101 )
          v101 = 1;
        *((_DWORD *)v5 + 8) = v101;
        v5[7] = *(_QWORD *)v82;
        v5[8] = *((_QWORD *)v12 + 2);
        v102 = *(_QWORD *)(v87 + 336);
        if ( v102 )
          v5[32] = v102;
        v5[34] = *(_QWORD *)(v87 + 344);
        if ( (_BYTE)v146 )
          *((_BYTE *)v5 + 9) = 1;
        if ( (_BYTE)v147 )
        {
          if ( v88 )
            *((_BYTE *)v5 + 10) = 1;
          else
            v5[36] = CpcSetAutonomousActivityWindow;
        }
        if ( v136 )
          v5[37] = CpcSetAutonomousMode;
        if ( v137 )
          v5[33] = CpcSetTimeWindow;
        if ( (*(_DWORD *)(v87 + 272) & 0x400000) != 0 && v88 && (v90 == 254 || v89 == 1) )
        {
          *((_BYTE *)v5 + 11) = 1;
          if ( (*(_QWORD *)(v87 + 272) & 0x400000000LL) == 0 || (v103 = 0, v132) )
            v103 = 1;
          *((_BYTE *)v5 + 12) = v103;
          *((_DWORD *)v5 + 12) = v148;
        }
        v104 = *((_QWORD *)v12 + 2);
        v105 = *((_QWORD *)v12 + 5);
        if ( v104 == v105 )
        {
          LODWORD(v106) = 100;
        }
        else
        {
          v107 = 100 * v105;
          v106 = 100 * v105 / v104;
          v87 = v107 % v104;
        }
        *((_DWORD *)v92 + 2) = v106;
        *(_QWORD *)v92 = PerfReadWrappingCounter;
        *((_DWORD *)v92 + 3) = 1;
        v92[17] = 1;
        v92[16] = v128 == 0;
        if ( (_BYTE)v138 )
        {
          v108 = v5[51];
          *(_QWORD *)(v108 + 32) = 100LL;
          *(_QWORD *)(v108 + 24) = PerfReadWrappingCounter;
          *(_WORD *)(v108 + 40) = 257;
        }
        DisplayKernelPerfStates((__int64)v5, v87, (int)v92);
        v109 = (_QWORD *)v5[53];
        v149 = v5[52];
        ResetEnumerationContext((__int64 *)v145);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
        {
          v110 = v149;
          do
          {
            v111 = *((_QWORD *)v82 + 10);
            v112 = 100;
            v113 = DeferredContext;
            v149 = v111;
            if ( v82[67] )
            {
              v114 = (_BYTE *)(v111 + 104);
              if ( *(_BYTE *)(v111 + 104) == 127 && !*((_DWORD *)DeferredContext + 20) )
              {
                KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                v115 = &PreviousAffinity;
                if ( v125 )
                  v115 = 0LL;
                KeSetSystemGroupAffinityThread(&Affinity, v115);
                v125 = 1;
              }
              GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx((__int64)v113, v114);
              v117 = *((_QWORD *)v82 - 2);
              if ( GenAddrMaybeHidden > v117 )
              {
                GenAddrMaybeHidden = *((_QWORD *)v82 - 2);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    3u,
                    1u,
                    0x2Cu,
                    (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids);
                  GenAddrMaybeHidden = *((_QWORD *)v82 - 2);
                }
                v117 = GenAddrMaybeHidden;
              }
              if ( GenAddrMaybeHidden < *(_QWORD *)v82 )
              {
                GenAddrMaybeHidden = *(_QWORD *)v82;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    3u,
                    1u,
                    0x2Du,
                    (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids);
                  GenAddrMaybeHidden = *(_QWORD *)v82;
                  v117 = *((_QWORD *)v82 - 2);
                }
              }
              v112 = *((_DWORD *)v82 + 12);
              *((_QWORD *)v82 + 3) = GenAddrMaybeHidden;
              v118 = 100 * GenAddrMaybeHidden / v117;
              if ( (unsigned int)v118 > v112 )
                v112 = v118;
              *((_DWORD *)v82 + 13) = v112;
              if ( v112 != v113[181] )
                ProcLibCapChange(v144, v113[112], v113[124], v112);
            }
            InitCommonPerfStateContext(v113, (_QWORD *)v82 - 4, v110, v112, v112 < 0x64 ? 2 : 0);
            *v109 = v82 + 128;
            *((_QWORD *)v82 + 22) = GetCpcDifferentialFeedback;
            *((_QWORD *)v82 + 23) = v119;
            v121 = *(_BYTE *)(v119 + 297);
            if ( v121 < 0x40u )
              *((_QWORD *)v82 + 20) = (1LL << v121) - 1;
            v122 = *(_BYTE *)(v119 + 273);
            if ( v122 < 0x40u )
              *((_QWORD *)v82 + 21) = (1LL << v122) - 1;
            ++v109;
            if ( (_BYTE)v138 != v120 )
            {
              *v109++ = v82 + 192;
              *((_QWORD *)v82 + 30) = *((_QWORD *)v113 + 41);
            }
            v110 += 32LL;
            v82 += 368;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) );
          v5 = v156;
          v12 = v157;
        }
        if ( v125 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        started = v161(v5, v140);
        if ( started >= 0 )
        {
          ResetEnumerationContext((__int64 *)v145);
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
          {
            *((_QWORD *)DeferredContext + 30) = v12;
            v12 += 368;
          }
          if ( (*(_QWORD *)(v144 + 272) & 0x4000000000LL) != 0 )
          {
            ResetEnumerationContext((__int64 *)v145);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
            {
              if ( !*((_DWORD *)DeferredContext + 20) )
                CpcConnectNativeInterrupt((struct _DEVICE_OBJECT **)DeferredContext);
            }
          }
          v12 = 0LL;
          started = 0;
        }
        goto LABEL_297;
      }
LABEL_210:
      v95 = PerfSelectionCpc;
      goto LABEL_211;
    }
    v93 = v126;
    if ( v126 )
    {
      if ( v127 )
      {
        v5[42] = PerfControlCpcSingleRegister;
        v94 = PerfControlCpcSingleRegisterHidden;
      }
      else
      {
        v5[42] = PerfControlCpc;
        v94 = (void *)qword_1C001C590;
        if ( !qword_1C001C590 || !CpcHiddenProcessorMitigationReported )
        {
          v5[43] = PerfControlCpcHidden;
          goto LABEL_209;
        }
      }
    }
    else
    {
      v94 = AcpiCStateIdleCancel;
      v5[42] = AcpiCStateIdleCancel;
    }
    v5[43] = v94;
    goto LABEL_210;
  }
  v58 = v12 + 100;
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
      v61 = &PreviousAffinity;
      if ( v125 )
        v61 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v61);
      v125 = 1;
    }
    *v58 = v128;
    v58[1] = v140;
    v58[2] = v143;
    v58[3] = v130;
    if ( !CpcRegisterIsSupportedEx(v59 + 488) || *v62 == 126 && *(_DWORD *)(v59 + 492) == v63 )
    {
      LODWORD(v64) = v139;
    }
    else
    {
      v64 = ReadGenAddrMaybeHiddenEx((__int64)v60, v62);
      v149 = v64;
      if ( !(_DWORD)v64 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_145;
        v65 = 35;
        goto LABEL_144;
      }
    }
    *((_DWORD *)v58 - 9) = v64;
    *(_QWORD *)(v58 - 92) = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 8));
    v67 = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 32));
    *(_QWORD *)(v58 - 84) = v67;
    if ( !v67 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_145;
      v65 = 36;
      goto LABEL_144;
    }
    v68 = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 56));
    v69 = *(_QWORD *)(v58 - 84);
    *(_QWORD *)(v58 - 76) = v68;
    if ( v68 > v69 )
      *(_QWORD *)(v58 - 76) = v69;
    *(_QWORD *)(v58 - 68) = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 80));
    *(_QWORD *)(v58 - 60) = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 440));
    if ( CpcRegisterIsSupportedEx(v59 + 368) )
    {
      v135 = ReadGenAddrMaybeHiddenEx((__int64)v60, (_BYTE *)(v59 + 368)) != 0;
      v136 = *(_BYTE *)(v59 + 368) != 126;
    }
    if ( v58 - 100 == v12 )
      goto LABEL_167;
    v73 = *(_QWORD *)(v58 - 92);
    v74 = *((_QWORD *)v12 + 1);
    if ( v73 != v74 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_145;
      v81 = 37;
      goto LABEL_181;
    }
    v73 = *(_QWORD *)(v58 - 84);
    v74 = *((_QWORD *)v12 + 2);
    if ( v73 != v74 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_145;
      v81 = 38;
      goto LABEL_181;
    }
    v73 = *(_QWORD *)(v58 - 68);
    v74 = *((_QWORD *)v12 + 4);
    if ( v73 != v74 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_145;
      v81 = 39;
LABEL_181:
      WPP_RECORDER_SF_ii(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v81,
        (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids,
        v73,
        v74);
      goto LABEL_145;
    }
    v75 = *(_QWORD *)(v58 - 76);
    v76 = *((_QWORD *)v12 + 3);
    if ( v75 != v76 )
      break;
LABEL_167:
    v77 = *(_QWORD *)(v58 - 84);
    v78 = 100LL * *(_QWORD *)(v58 - 92) / v77;
    *((_DWORD *)v58 - 8) = v78;
    *((_DWORD *)v58 - 7) = v78;
    v79 = 100LL * *(_QWORD *)(v58 - 76) / v77;
    v80 = 100LL * *(_QWORD *)(v58 - 68) / v77;
    if ( !(_DWORD)v80 )
      LODWORD(v80) = 1;
    *((_DWORD *)v58 - 5) = v80;
    if ( !(_DWORD)v79 )
      LODWORD(v79) = 1;
    *((_DWORD *)v58 - 6) = v79;
    v58 += 368;
    if ( (unsigned int)EnumerateNextDevice((__int64 *)v145, &DeferredContext) )
      goto LABEL_184;
  }
  if ( v131 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v70, v71, v72, v124);
      v76 = *((_QWORD *)v12 + 3);
    }
    *(_QWORD *)(v58 - 76) = v76;
    goto LABEL_167;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x28u,
      (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids,
      v75,
      *((_QWORD *)v12 + 3));
LABEL_145:
  started = -1073741811;
LABEL_297:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001C418);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x72637250u);
  return (unsigned int)started;
}
