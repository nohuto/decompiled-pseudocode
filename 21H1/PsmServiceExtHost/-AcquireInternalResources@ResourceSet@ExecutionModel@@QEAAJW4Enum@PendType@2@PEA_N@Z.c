/*
 * XREFs of ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180016B60
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x180014660 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     ?RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z @ 0x180014C2C (-RmpResourceCheckDestroyPartitionForAcquire@@YAKPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N5@Z @ 0x180014C90 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KW4Enum@PendType@2@PEAU_RM_RESOURCE_U.c)
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800150D0 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800167B0 (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180017480 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpPolicyDigestMerge@@YA?AT_RM_POLICY_DIGEST@@T1@0@Z @ 0x1800186D0 (-RmpPolicyDigestMerge@@YA-AT_RM_POLICY_DIGEST@@T1@0@Z.c)
 *     ?HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180022FE8 (-HampHostCanKillForResourcePressure@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180033454 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800352C0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800460A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460C0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180063484 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18006A72C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x180071D9C (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U2@U1@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@443344@Z @ 0x180071F28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U2@U1@U1@U2@U2@@-$_tlgWriteTemplat.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x1800725E0 (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::AcquireInternalResources(_QWORD *a1, int a2, _BYTE *a3)
{
  _QWORD *v3; // r13
  __int64 v4; // r15
  int v5; // r14d
  _DWORD *v6; // rsi
  unsigned int *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // r9
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  char v20; // al
  unsigned int *Heap; // rdi
  __int64 v22; // r10
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // edi
  PVOID v26; // rax
  void **v27; // r14
  PVOID v28; // rax
  unsigned int *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rdi
  void **v32; // rbx
  __int64 v33; // rsi
  unsigned int *v34; // r12
  HANDLE *v35; // r12
  unsigned int v36; // eax
  __int64 v37; // rcx
  unsigned int v38; // r12d
  __int64 v39; // rbx
  _QWORD *v40; // rdi
  int v41; // ebx
  int v42; // r8d
  int v43; // r9d
  char v44; // di
  char v45; // r14
  _QWORD *i; // rbx
  _QWORD *v47; // rax
  _QWORD *v48; // r14
  __int64 v49; // r8
  int v50; // r9d
  _QWORD *v51; // rcx
  int v52; // edi
  __int64 v53; // r11
  unsigned __int16 v54; // bx
  __int64 v55; // r11
  unsigned __int16 v57; // ax
  unsigned int v58; // ebx
  unsigned int v59; // edx
  _QWORD *v60; // rdi
  PVOID ProcessHeap; // rcx
  unsigned int *v63; // rax
  int v64; // r9d
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // r8
  _QWORD *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  int v71; // edx
  __int64 v72; // rcx
  int v73; // r8d
  int v74; // r9d
  __int64 v75; // rcx
  char v76; // r14
  char v77; // di
  bool v78; // zf
  _QWORD *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  char v82; // [rsp+60h] [rbp-A0h] BYREF
  char v83; // [rsp+61h] [rbp-9Fh] BYREF
  char v84; // [rsp+62h] [rbp-9Eh] BYREF
  char v85; // [rsp+63h] [rbp-9Dh] BYREF
  char v86; // [rsp+64h] [rbp-9Ch] BYREF
  char v87; // [rsp+65h] [rbp-9Bh] BYREF
  char v88[2]; // [rsp+66h] [rbp-9Ah] BYREF
  int v89; // [rsp+68h] [rbp-98h]
  PVOID v90[2]; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+80h] [rbp-80h]
  unsigned int v92; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v93; // [rsp+90h] [rbp-70h] BYREF
  void *ProcessHandle; // [rsp+98h] [rbp-68h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-60h] BYREF
  int v96; // [rsp+A8h] [rbp-58h] BYREF
  int v97; // [rsp+ACh] [rbp-54h] BYREF
  int v98; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v99; // [rsp+B8h] [rbp-48h] BYREF
  void *Block[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-30h]
  _QWORD *v102; // [rsp+D8h] [rbp-28h]
  _BYTE *v103; // [rsp+E0h] [rbp-20h]
  PVOID P; // [rsp+E8h] [rbp-18h]
  _DWORD *v105; // [rsp+F0h] [rbp-10h]
  _DWORD *v106; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v107; // [rsp+100h] [rbp+0h]
  __int128 v108; // [rsp+110h] [rbp+10h]
  __int64 v109; // [rsp+120h] [rbp+20h] BYREF
  __int64 v110; // [rsp+128h] [rbp+28h] BYREF
  __int64 v111; // [rsp+130h] [rbp+30h] BYREF
  __int64 v112; // [rsp+138h] [rbp+38h] BYREF
  __int64 v113; // [rsp+140h] [rbp+40h] BYREF
  __int64 v114; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v115; // [rsp+150h] [rbp+50h] BYREF
  __int64 v116; // [rsp+158h] [rbp+58h] BYREF
  __int64 v117; // [rsp+160h] [rbp+60h] BYREF
  _CLIENT_ID ClientId; // [rsp+168h] [rbp+68h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v120[128]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v121; // [rsp+230h] [rbp+130h] BYREF
  __int128 v122; // [rsp+240h] [rbp+140h]
  __int128 v123; // [rsp+250h] [rbp+150h]
  __int128 v124; // [rsp+260h] [rbp+160h]
  __int128 v125; // [rsp+270h] [rbp+170h]
  _BYTE v126[4]; // [rsp+280h] [rbp+180h] BYREF
  __int64 v127; // [rsp+284h] [rbp+184h]
  __int64 v128; // [rsp+298h] [rbp+198h]
  __int64 v129; // [rsp+2A0h] [rbp+1A0h]
  __int64 v130; // [rsp+2B0h] [rbp+1B0h]
  __int64 v131; // [rsp+2C0h] [rbp+1C0h]
  __int64 v132; // [rsp+2C8h] [rbp+1C8h]
  __int64 v133; // [rsp+2D8h] [rbp+1D8h]
  __int64 v134; // [rsp+2E0h] [rbp+1E0h]
  __int64 v135; // [rsp+2E8h] [rbp+1E8h]
  __int64 v136; // [rsp+2F0h] [rbp+1F0h]
  __int64 v137; // [rsp+2F8h] [rbp+1F8h]
  __int64 v138; // [rsp+300h] [rbp+200h]
  __int64 v139; // [rsp+318h] [rbp+218h]
  __int64 v140; // [rsp+320h] [rbp+220h]
  __int64 v141; // [rsp+328h] [rbp+228h]
  __int64 v142; // [rsp+330h] [rbp+230h]
  __int64 v143; // [rsp+338h] [rbp+238h]
  __int64 v144; // [rsp+340h] [rbp+240h]
  __int64 v145; // [rsp+348h] [rbp+248h]
  __int64 v146; // [rsp+350h] [rbp+250h]
  __int64 v147; // [rsp+358h] [rbp+258h]
  __int64 v148; // [rsp+360h] [rbp+260h]
  _OWORD v149[5]; // [rsp+370h] [rbp+270h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v150; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 *v151; // [rsp+3E0h] [rbp+2E0h]
  __int64 v152; // [rsp+3E8h] [rbp+2E8h]
  __int64 *v153; // [rsp+3F0h] [rbp+2F0h]
  __int64 v154; // [rsp+3F8h] [rbp+2F8h]
  __int64 *v155; // [rsp+400h] [rbp+300h]
  __int64 v156; // [rsp+408h] [rbp+308h]
  __int64 *v157; // [rsp+410h] [rbp+310h]
  __int64 v158; // [rsp+418h] [rbp+318h]
  __int64 *v159; // [rsp+420h] [rbp+320h]
  __int64 v160; // [rsp+428h] [rbp+328h]
  __int64 *v161; // [rsp+430h] [rbp+330h]
  __int64 v162; // [rsp+438h] [rbp+338h]

  v3 = (_QWORD *)a1[8];
  v4 = a1[165];
  v5 = a2;
  Block[0] = Block;
  v6 = a1;
  v103 = a3;
  Block[1] = Block;
  v7 = 0LL;
  v8 = a1[3];
  v101 = 0LL;
  v89 = a2;
  v105 = a1;
  v9 = *(_QWORD *)(v8 + 128);
  v10 = a1[164];
  v102 = v3;
  v11 = *(_QWORD *)(v10 + 64);
  memset_0(v120, 0, sizeof(v120));
  memset_0(v126, 0, 0xF0uLL);
  v12 = *(_QWORD *)(v11 + 32);
  v127 = -1LL;
  NtManagePartition(v12, 0LL, 0LL, v126, 240);
  *(_QWORD *)&v123 = 0LL;
  *((_QWORD *)&v121 + 1) = RmpPageSize * v129 - RmpPageSize * v148;
  *(_QWORD *)&v122 = RmpPageSize * v128 - RmpPageSize * v148;
  *((_QWORD *)&v122 + 1) = *((_QWORD *)&v121 + 1) - v122;
  *((_QWORD *)&v123 + 1) = RmpPageSize * v130 - RmpPageSize * v148;
  *(_QWORD *)&v121 = RmpPageSize * v147 - RmpPageSize * v148;
  v125 = (unsigned __int64)(v146 + v145 + v144 + v143 + v142 + v141 + v140 + v139);
  *(_QWORD *)&v124 = RmpPageSize * (v131 + v132 + v138 + v137 + v136 + v135 + v133 + v134);
  *((_QWORD *)&v124 + 1) = *((_QWORD *)&v123 + 1) - v124;
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v9 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v9 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v121,
    v121,
    (struct _RM_RESOURCE_USAGE_LIMITS *)v120);
  v15 = 0LL;
  v16 = v122;
  v149[0] = v121;
  v17 = v123;
  *(_WORD *)(v11 + 188) = 0;
  v78 = (v6[344] & 0x10) == 0;
  v149[2] = v17;
  v149[1] = v16;
  v149[4] = v125;
  v149[3] = v124;
  v99 = 0LL;
  if ( !v78
    || ((v18 = (int)v6[334], (unsigned int)v18 <= 0x28) && (v19 = 0x11000002000LL, _bittest64(&v19, v18))
      ? (v20 = 1)
      : (v20 = 0),
        v20) )
  {
    v20 = 1;
  }
  if ( v20 && (*((_BYTE *)v6 + 1378) & 0x40) == 0 )
    goto LABEL_40;
  v92 = 1;
  v91 = 0LL;
  *(_OWORD *)v90 = 0LL;
  P = 0LL;
  Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
  {
    v24 = -1073741801;
    goto LABEL_24;
  }
  v13 = v4 + 88;
  v22 = v4 + 552;
  while ( 1 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 40LL) + 72LL))(
            v22,
            *(unsigned int *)(v4 + 620),
            v13,
            *(unsigned int *)(v4 + 624),
            *(_QWORD *)(v4 + 32),
            Heap,
            &v92);
    v24 = v23;
    if ( v23 >= 0 )
    {
      v7 = Heap;
      P = Heap;
      v25 = v92;
      goto LABEL_11;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( v23 != -2147483643 )
      break;
    RtlFreeHeap(ProcessHeap, 0, Heap);
    v63 = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v92);
    v13 = v4 + 88;
    Heap = v63;
    v22 = v4 + 552;
    if ( !v63 )
    {
      v25 = v89;
      v24 = -1073741801;
      goto LABEL_11;
    }
  }
  RtlFreeHeap(ProcessHeap, 0, Heap);
  v25 = v89;
LABEL_11:
  if ( v24 < 0 )
  {
    v27 = (void **)v90[0];
    goto LABEL_92;
  }
  if ( !v25 )
  {
    v29 = (unsigned int *)v90[1];
    ProcessHandle = 0LL;
    v27 = (void **)v90[0];
    v31 = (unsigned int)v91;
LABEL_21:
    v24 = 0;
    goto LABEL_22;
  }
  v26 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v25);
  v90[0] = v26;
  v27 = (void **)v26;
  if ( !v26 )
  {
    v24 = -1073741801;
LABEL_92:
    v29 = (unsigned int *)v90[1];
    goto LABEL_93;
  }
  memset_0(v26, 0, 8 * v25);
  v28 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4 * v25);
  v90[1] = v28;
  v29 = (unsigned int *)v28;
  if ( v28 )
  {
    memset_0(v28, 0, 4 * v25);
    ProcessHandle = 0LL;
    v27 = (void **)v90[0];
    v30 = v25;
    v31 = (unsigned int)v91;
    v95 = v30;
    do
    {
      v93 = *v7;
      ClientId.UniqueProcess = (HANDLE)v93;
      ClientId.UniqueThread = 0LL;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, void *))(*(_QWORD *)(*(_QWORD *)(v4 + 48) + 40LL)
                                                                                                 + 80LL))(
               v4 + 552,
               *(unsigned int *)(v4 + 620),
               v4 + 88,
               *(unsigned int *)(v4 + 624),
               *(_QWORD *)(v4 + 32),
               ProcessHandle) )
        {
          v27[v31] = ProcessHandle;
          v29[v31] = v93;
          v31 = (unsigned int)(v31 + 1);
        }
        else
        {
          NtClose(ProcessHandle);
        }
      }
      v7 += 2;
      --v95;
    }
    while ( v95 );
    v7 = (unsigned int *)P;
    LODWORD(v91) = v31;
    goto LABEL_21;
  }
  v27 = (void **)v90[0];
  v24 = -1073741801;
LABEL_93:
  v31 = (unsigned int)v91;
LABEL_22:
  if ( v7 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
LABEL_24:
    v27 = (void **)v90[0];
    v29 = (unsigned int *)v90[1];
    v31 = (unsigned int)v91;
  }
  if ( v24 >= 0 )
  {
    if ( (_DWORD)v31 )
    {
      v32 = v27;
      v33 = (unsigned int)v31;
      v34 = v29;
      do
      {
        RmpActivityHostCommitDebtCallback((struct _RM_ACTIVITY_HOST *)v4, *v32++, *v34++, &v99);
        --v33;
      }
      while ( v33 );
      v6 = v105;
    }
    v24 = 0;
  }
  if ( (_DWORD)v31 )
  {
    v35 = v27;
    do
    {
      NtClose(*v35++);
      --v31;
    }
    while ( v31 );
  }
  if ( v27 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v90[0]);
    v29 = (unsigned int *)v90[1];
  }
  if ( v29 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v90[1]);
  if ( v24 < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 <= 4 )
    {
      v5 = v89;
      v3 = v102;
      goto LABEL_42;
    }
    if ( tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v95 = *(_QWORD *)(v4 + 32);
      v93 = v24;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (unsigned int)&dword_1800B31E0,
        (unsigned int)&unk_18009EF0E,
        v14,
        v64,
        (__int64)&v93,
        (__int64)&v95);
    }
  }
  v15 = v99;
  v5 = v89;
  v3 = v102;
LABEL_40:
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v65 = *((_QWORD *)v6 + 184);
    v66 = *((_QWORD *)v6 + 181);
    v67 = *((_QWORD *)v6 + 219);
    v116 = v3[16];
    v109 = *((_QWORD *)&v122 + 1);
    v161 = &v116;
    v159 = &v117;
    v157 = &v109;
    v155 = &v110;
    v153 = &v111;
    v151 = &v112;
    v117 = v65;
    v110 = v15;
    v111 = v66;
    v112 = v67;
    v162 = 8LL;
    v160 = 8LL;
    v158 = 8LL;
    v156 = 8LL;
    v154 = 8LL;
    v152 = 8LL;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009D219, 0, 0, 8u, &v150);
  }
LABEL_42:
  v36 = RmpResourceCheckDestroyPartitionForAcquire(*((struct _RM_RESOURCE_SET **)v6 + 164), v13, v14);
  v37 = *((_QWORD *)v6 + 164);
  v93 = v36;
  v38 = v36;
  v106 = v6;
  v107 = 0LL;
  v39 = *(_QWORD *)(v37 + 64);
  v108 = 0LL;
  while ( 1 )
  {
    v40 = Block[0];
    if ( Block[0] == Block )
      break;
    v68 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v69 = *(_QWORD *)Block[0];
    *v68 = *(_QWORD *)Block[0];
    *(_QWORD *)(v69 + 8) = v68;
    v70 = v40[2];
    if ( v70 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    operator delete(v40);
  }
  *(_QWORD *)&v107 = Block;
  v101 = 0LL;
  *(_QWORD *)&v108 = v39 + 144;
  *((_QWORD *)&v107 + 1) = v39;
  v41 = ExecutionModel::ResourceSet::EvaluateResourceRequest(
          (__int64)v6,
          v99,
          v5,
          (__int64)v120,
          v149,
          &v106,
          &v83,
          &v82);
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v44 = v82;
    v45 = v83;
    v71 = *(_DWORD *)(v108 + 40);
    v72 = *(_QWORD *)(v107 + 16);
    v84 = BYTE12(v108);
    v85 = BYTE8(v108);
    v96 = v71;
    v97 = v72;
    v86 = v38;
    v87 = v82;
    v88[0] = v83;
    v98 = v41;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v72,
      (unsigned int)&unk_18009D4A6,
      v42,
      v43,
      (__int64)&v98,
      (__int64)v88,
      (__int64)&v87,
      (__int64)&v86,
      (__int64)&v97,
      (__int64)&v96,
      (__int64)&v85,
      (__int64)&v84);
  }
  else
  {
    v44 = v82;
    v45 = v83;
  }
  if ( v41 >= 0 )
  {
    if ( v45 || v44 || v38 )
      LOBYTE(v38) = 1;
    for ( i = (_QWORD *)v3[5]; i != v3 + 5 && *(_DWORD *)(i[2] + 1288LL) < v6[322]; i = (_QWORD *)*i )
      ;
    v47 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v48 = v47;
    if ( !v47 )
    {
      v41 = -2147024882;
      goto LABEL_73;
    }
    v47[2] = v6;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    v51 = (_QWORD *)i[1];
    v48[1] = v51;
    *v48 = i;
    *v51 = v48;
    i[1] = v48;
    ++v3[7];
    v52 = 0;
    if ( (_BYTE)v38 )
    {
      v58 = 1;
    }
    else
    {
      v6[320] = 2;
      v53 = *(_QWORD *)(v4 + 1112);
      v54 = 102;
      if ( v53 != v4 + 1112 )
      {
        v55 = v53 - 1296;
        if ( v55 )
        {
          do
          {
            if ( *(_DWORD *)(v55 + 1280) == 2 || (*(_BYTE *)(v55 + 1332) & 4) != 0 )
            {
              v57 = RmpPolicyDigestCompute(v55);
              v54 = RmpPolicyDigestMerge(v54, v57);
            }
            v49 = *(_QWORD *)(v55 + 1296);
            if ( v49 == *(_QWORD *)(v55 + 1320) + 8 * (3LL * *(int *)(v55 + 1328) + 139) )
              break;
            v55 = v49 - 1296;
          }
          while ( v49 != 1296 );
        }
      }
      *(_WORD *)(v4 + 1160) = v54;
      v58 = 1;
      RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)v4, 1, v49, v50);
      QueryUnbiasedInterruptTime((PULONGLONG)(v4 + 1456));
      v59 = *(_DWORD *)(*(_QWORD *)(v4 + 48) + 508LL);
      if ( ((v59 & 4) != 0 || (*(_BYTE *)(v4 + 1160) & 4) != 0 && (*(_BYTE *)(v4 + 1162) & 4) != 0)
        && ((*(_BYTE *)(v4 + 836) & 1) == 0
         || HampHostCanKillForResourcePressure((struct _RM_HAM_ACTIVITY_HOST *)(v4 + 64), ((v59 >> 2) & 1) == 0))
        && (*(_BYTE *)(v4 + 1162) & 0x30) != 0 )
      {
        SetEvent(*(HANDLE *)(*(_QWORD *)(v4 + 56) + 88LL));
      }
      if ( (*(_BYTE *)(v4 + 836) & 1) != 0 )
      {
        v52 = 1;
      }
      else if ( v103 && RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)v4) )
      {
        if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
        {
          v75 = *(_QWORD *)(v4 + 32);
          v113 = *((_QWORD *)v6 + 219);
          v114 = v75;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1800B31E0,
            (unsigned int)&unk_18009D5FA,
            v73,
            v74,
            (__int64)&v114,
            (__int64)&v113);
        }
        v6[333] |= 4u;
        LOBYTE(v38) = 1;
      }
      v6[320] = 1;
      if ( !(_BYTE)v38 )
      {
        ExecutionModel::ResourceSet::CompleteAcquire((ExecutionModel::ResourceSet *)v6, v52);
LABEL_70:
        if ( v103 )
          *v103 = v38;
        v41 = 0;
        goto LABEL_73;
      }
    }
    RtlQueryUnbiasedInterruptTime(&v115);
    v76 = v83;
    v77 = v82;
    v78 = v93 == 0;
    v6[440] = v115 / 0x2710;
    if ( v76 || v77 )
      v58 = 0;
    ExecutionModel::ResourceSet::CheckUpdatePendStats((ExecutionModel::ResourceSet *)v6, v58, v78);
    if ( v76 || v77 )
      RmpPolicyRevokeResourceSetsForAcquire((struct _RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *)&v106);
    goto LABEL_70;
  }
LABEL_73:
  while ( 1 )
  {
    v60 = Block[0];
    if ( Block[0] == Block )
      break;
    v79 = (_QWORD *)*((_QWORD *)Block[0] + 1);
    v80 = *(_QWORD *)Block[0];
    *v79 = *(_QWORD *)Block[0];
    *(_QWORD *)(v80 + 8) = v79;
    v81 = v60[2];
    if ( v81 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
    operator delete(v60);
  }
  return (unsigned int)v41;
}
