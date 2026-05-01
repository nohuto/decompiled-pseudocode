/*
 * XREFs of ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BC40
 * Callers:
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x1800034FC (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006B44 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180006BB8 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800180F0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180019B80 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x18001F090 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001F240 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18001FD90 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020E20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180029A78 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180081604 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180081820 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180002808 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180004DD4 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005E6C (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006008 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180006028 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006054 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006460 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800065A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x1800080D0 (-HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180008B88 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000969C (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800096F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E0D0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E158 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x18001E010 (RmpActivityImportanceMergeVectors.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800222BC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180023910 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180023C00 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180025F70 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029888 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18002B0EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18002DF84 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180047BFC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x18007EDD4 (-HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z.c)
 */

void __fastcall HampHostUpdateActivityState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rax
  int v3; // r13d
  _QWORD *v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // r14d
  int v8; // edi
  unsigned int v9; // r10d
  unsigned __int8 v10; // r12
  BOOL v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r8
  char v14; // r11
  int v15; // edx
  __int16 v16; // dx
  unsigned __int16 v17; // cx
  unsigned int v18; // r9d
  signed int v19; // eax
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // cl
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int8 v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  struct _HAM_DEPENDENCY_GROUP *v28; // rcx
  int v29; // edx
  __int64 v30; // rax
  int v31; // r10d
  __int64 v32; // r8
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  __int64 v37; // rax
  int v38; // r8d
  unsigned __int64 v39; // rdx
  int v40; // r9d
  char v41; // r13
  int v42; // r8d
  unsigned int v43; // ebx
  unsigned __int16 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rax
  BOOL v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rdi
  bool v50; // zf
  int v51; // ecx
  char v52; // r14
  __int64 v53; // rdx
  unsigned int v54; // eax
  unsigned __int64 v55; // rdx
  int v56; // eax
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // r8
  char v59; // cl
  __int64 v60; // rdx
  __int64 v61; // rcx
  int v62; // r14d
  __int64 v63; // rax
  int v64; // r13d
  struct _HAM_PACKAGE *v65; // rdi
  __int64 *v66; // rdi
  int v67; // r8d
  int v68; // r9d
  int v69; // ecx
  char v70; // di
  __int16 v71; // cx
  __int64 v72; // rcx
  struct _HOST_ACTIVITY_MANAGER *v73; // rbx
  unsigned int v74; // edi
  int v75; // ebx
  int v76; // r12d
  unsigned int v77; // edi
  __int64 v78; // r14
  DWORD v79; // r13d
  _QWORD *Value; // r14
  _QWORD *v81; // rax
  unsigned __int64 v82; // rcx
  int v83; // edx
  unsigned __int64 v84; // r8
  struct _HAM_ACTIVITY *NextActivity; // rcx
  BOOL IsSuspendWaiter; // eax
  unsigned int v87; // ebx
  __int64 v88; // rax
  __int64 v89; // rbx
  BOOL v90; // ecx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  int v94; // r14d
  __int64 v95; // rbx
  DWORD v96; // esi
  _QWORD *v97; // rdi
  unsigned int v98; // edx
  _QWORD *v99; // rax
  __int64 v100; // [rsp+40h] [rbp-79h]
  char v101; // [rsp+50h] [rbp-69h]
  _FILETIME v102; // [rsp+58h] [rbp-61h] BYREF
  int v103; // [rsp+60h] [rbp-59h] BYREF
  int v104; // [rsp+64h] [rbp-55h] BYREF
  int v105; // [rsp+68h] [rbp-51h] BYREF
  int v106; // [rsp+6Ch] [rbp-4Dh] BYREF
  int v107; // [rsp+70h] [rbp-49h] BYREF
  char v108[4]; // [rsp+74h] [rbp-45h] BYREF
  _FILETIME SystemTimeAsFileTime; // [rsp+78h] [rbp-41h] BYREF
  __int64 v110; // [rsp+80h] [rbp-39h] BYREF
  __int64 v111; // [rsp+88h] [rbp-31h] BYREF
  __int64 v112; // [rsp+90h] [rbp-29h] BYREF
  unsigned __int64 v113; // [rsp+98h] [rbp-21h]
  __int64 v114; // [rsp+A0h] [rbp-19h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+A8h] [rbp-11h] BYREF
  struct _RTL_BITMAP v116; // [rsp+B8h] [rbp-1h] BYREF
  int v117; // [rsp+120h] [rbp+67h] BYREF
  int v118; // [rsp+128h] [rbp+6Fh] BYREF
  int v119; // [rsp+130h] [rbp+77h]
  __int64 v120; // [rsp+138h] [rbp+7Fh] BYREF

  if ( (*((_QWORD *)a1 + 81) & 0x10000000000LL) != 0 )
  {
    v117 = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v103, (union _RM_OPTIMIZATION_STATE *)&v104);
    if ( (v103 & 0x80u) == 0 || (v104 & 0x80u) != 0 )
    {
      if ( (v103 & 0x100) == 0 || (v104 & 0x100) != 0 )
      {
        v2 = *((_QWORD *)a1 + 81);
        if ( (v2 & 0x800000000LL) != 0 )
        {
          v117 = 0;
        }
        else if ( (v2 & 0x40000000000LL) == 0 || (v117 = 0, (v2 & 0x30000) == 0) )
        {
          v117 = 1;
        }
      }
      else
      {
        v117 = 0;
      }
    }
    else
    {
      v117 = 0;
    }
  }
  v3 = 0;
  v4 = (_QWORD *)((char *)a1 + 600);
  v5 = *((_QWORD *)a1 + 75);
  v6 = 0;
  v118 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 2;
  v10 = 6;
  v11 = v5 != (_QWORD)a1 + 600;
  v12 = v5 - 96;
  v13 = 0LL;
  if ( v11 )
    v13 = v12;
  if ( v13 )
  {
    while ( (*(_BYTE *)(v13 + 544) & 0x28) != 0 )
    {
LABEL_55:
      v22 = *(_QWORD *)(v13 + 96);
      v23 = *(_QWORD *)(v13 + 80);
      v13 = 0LL;
      if ( v22 != v23 + 600 )
        v13 = v22 - 96;
      if ( !v13 )
      {
        v6 = v118;
        v4 = (_QWORD *)((char *)a1 + 600);
        goto LABEL_59;
      }
    }
    v14 = *(_BYTE *)(v13 + 548);
    if ( v14 == 3 )
    {
      v3 = 1;
    }
    else if ( v14 != 2 )
    {
LABEL_46:
      if ( (v14 == 3 || v14 == 2 && *(_BYTE *)(v13 + 549) >= 3u) && (*(_DWORD *)(v13 + 112) & 0x100000) != 0 )
        v7 = 1;
      v20 = *(_BYTE *)(v13 + 549);
      if ( v20 != 6 )
      {
        v21 = v10;
        if ( v10 <= v20 )
          v21 = *(_BYTE *)(v13 + 549);
        v10 = v21;
      }
      goto LABEL_55;
    }
    if ( *(_QWORD *)(v13 + 64) )
    {
      v15 = *(_DWORD *)(v13 + 112) >> 13;
      if ( *(_DWORD *)(*(_QWORD *)(v13 + 80) + 560LL) == 2 )
        LOBYTE(v15) = *(_DWORD *)(v13 + 112) >> 10;
      if ( (v15 & 1) != 0 )
      {
        v16 = *(_WORD *)(v13 + 424);
        v118 = 1;
        v17 = v16 & 0xE;
        if ( (v16 & 0xC0) != 0xC0 )
          v9 = v17 >= 8u && (v16 & 0x30u) >= 0x20;
        v18 = *(_DWORD *)(v13 + 480) & 3;
        v19 = v18;
        if ( v18 <= v9 )
          v19 = v9;
        if ( v8 > v19 )
        {
          v9 = 2;
        }
        else if ( (v16 & 0xC0) == 0xC0 )
        {
          v9 = 2;
          v8 = *(_DWORD *)(v13 + 480) & 3;
          if ( v8 != 3 )
            v8 = 2;
        }
        else if ( v17 < 8u || (v16 & 0x30u) < 0x20 )
        {
          v8 = *(_DWORD *)(v13 + 480) & 3;
          if ( !v18 )
            v8 = 0;
          v9 = 2;
        }
        else
        {
          v8 = *(_DWORD *)(v13 + 480) & 3;
          v9 = 2;
          if ( v18 <= 1 )
            v8 = 1;
        }
      }
    }
    goto LABEL_46;
  }
LABEL_59:
  v24 = v10;
  v25 = *((_QWORD *)a1 + 81) ^ (*((_QWORD *)a1 + 81) ^ ((__int64)v8 << 32)) & 0x300000000LL;
  v26 = (v25 ^ ((unsigned __int64)v6 << 36)) & 0x1000000000LL ^ v25;
  v27 = v26 ^ (v26 ^ ((unsigned __int64)v7 << 39)) & 0x8000000000LL;
  v28 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 86);
  if ( v3 )
    v24 = 6;
  *((_QWORD *)a1 + 81) = v27 ^ ((unsigned int)v27 ^ (v24 << 26)) & 0x1C000000;
  if ( v28 && (v24 == 0) != (((v27 >> 26) & 7) == 0) )
  {
    v29 = 1;
    if ( v24 )
      v29 = -1;
    HampDepGroupAddRemoveResourceWaiter(v28, v29);
  }
  v30 = *((_QWORD *)a1 + 81);
  v31 = 1024;
  if ( (v30 & 0x4000000000LL) == 0 && ((v30 & 0x30000) == 0 || (v30 & 0x8000000000LL) != 0) )
  {
    v32 = 0LL;
    if ( (_QWORD *)*v4 != v4 )
      v32 = *v4 - 96LL;
    if ( v32 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v32 + 544) & 0x28) == 0 )
        {
          v33 = *(_BYTE *)(v32 + 548);
          if ( (v33 == 3 || v33 == 2 && *(_BYTE *)(v32 + 549) >= 3u) && (*(_DWORD *)(v32 + 112) & 0x400) != 0 )
            break;
        }
        v34 = *(_QWORD *)(v32 + 96);
        v35 = *(_QWORD *)(v32 + 80);
        v32 = 0LL;
        if ( v34 != v35 + 600 )
          v32 = v34 - 96;
        if ( !v32 )
          goto LABEL_90;
      }
      FirstActivity = HampHostGetFirstActivity(a1);
      if ( FirstActivity )
      {
        do
        {
          if ( (unsigned __int8)(*((_BYTE *)FirstActivity + 548) - 2) <= 1u
            && (*((_DWORD *)FirstActivity + 30) & 0x100) != 0
            && (*((_DWORD *)FirstActivity + 136) & 0xC0u) < 0xC0 )
          {
            v37 = *((_QWORD *)a1 + 81);
            v38 = 5;
            if ( (v37 & 0x30000) == 0 )
              v38 = 2;
            HampActRequestStopEx((__int64)FirstActivity, 3u, v38, 0, (unsigned __int16)v37, 0x80u, 0LL);
          }
          FirstActivity = HampHostGetNextActivity(FirstActivity);
        }
        while ( FirstActivity );
        v31 = 1024;
      }
    }
  }
LABEL_90:
  v39 = *((_QWORD *)a1 + 81);
  v40 = (_DWORD)a1 + 600;
  *((_QWORD *)a1 + 82) &= ~4uLL;
  v113 = v39 >> 37;
  v41 = 0;
  v42 = 0;
  LODWORD(v120) = 1;
  v43 = 1;
  v44 = 1;
  v114 = (v39 >> 44) & 1;
  v101 = 0;
  v119 = 0;
  v45 = v39 & 0x3FFFE09FFFFFFFFFLL;
  *((_QWORD *)a1 + 81) = v45;
  v46 = *((_QWORD *)a1 + 75);
  v47 = v46 != (_QWORD)a1 + 600;
  v48 = v46 - 96;
  v49 = 0LL;
  v50 = !v47;
  v51 = 0;
  if ( !v50 )
    v49 = v48;
  if ( v49 )
  {
    do
    {
      if ( (*(_BYTE *)(v49 + 544) & 0x28) == 0 )
      {
        v52 = *(_BYTE *)(v49 + 548);
        if ( v52 == 3 || v52 == 2 && *(_BYTE *)(v49 + 549) )
        {
          v53 = *(unsigned int *)(v49 + 424);
          if ( v52 == 2 )
          {
            if ( !*(_QWORD *)(v49 + 512) && ((v53 & 0x40) != 0 || ((unsigned __int8)v53 & 0xEu) >= 8) )
              *((_QWORD *)a1 + 81) |= 0x100000000000uLL;
            if ( (v31 & *(_DWORD *)(v49 + 112)) == 0 )
              v42 = 1;
            v119 = v42;
          }
          v54 = RmpActivityImportanceMergeVectors(v43, v53);
          v55 = *((_QWORD *)a1 + 81);
          v43 = v54;
          v56 = *(_DWORD *)(v49 + 112);
          if ( (v56 & 0x2000) != 0 )
            v55 = *((_QWORD *)a1 + 81) | 0x80000000000LL;
          v57 = ((unsigned __int64)*(unsigned int *)(v49 + 112) >> 23) & 3;
          if ( v57 <= v55 >> 62 )
            v57 = v55 >> 62;
          v58 = v55 & 0x3FFFFFFFFFFFFFFFLL | (v57 << 62);
          *((_QWORD *)a1 + 81) = v58;
          if ( v58 >= 0x4000000000000000LL )
            *((_QWORD *)a1 + 82) |= 3uLL;
          v59 = *(_BYTE *)(v49 + 548);
          if ( v59 == 3 || v59 == 2 && *(_BYTE *)(v49 + 549) >= 3u )
          {
            v31 = 1024;
            if ( (v56 & 0x400) != 0 )
            {
              v58 |= 0x4000000000uLL;
              *((_QWORD *)a1 + 81) = v58;
              v59 = *(_BYTE *)(v49 + 548);
            }
            if ( v59 == 3 || v59 == 2 && *(_BYTE *)(v49 + 549) >= 5u )
            {
              if ( (v56 & 0x400) != 0 )
              {
                v58 |= 0x10000000000uLL;
                *((_QWORD *)a1 + 81) = v58;
              }
              if ( v52 == 3 )
              {
                if ( (v56 & 0x800) != 0 )
                {
                  v58 |= 0x20000000000uLL;
                  *((_QWORD *)a1 + 81) = v58;
                }
                if ( (v56 & 0x1000) != 0 )
                {
                  v58 |= 0x40000000000uLL;
                  *((_QWORD *)a1 + 81) = v58;
                }
                if ( (*(_BYTE *)(v49 + 120) & 8) != 0 )
                  *((_QWORD *)a1 + 82) |= 4uLL;
                if ( (v56 & 0x10000) != 0 )
                  v41 = 1;
                *((_QWORD *)a1 + 81) = v58 | 0x2000000000LL;
              }
            }
          }
          else
          {
            v31 = 1024;
          }
          v42 = v119;
        }
      }
      v60 = *(_QWORD *)(v49 + 96);
      v61 = *(_QWORD *)(v49 + 80);
      v49 = 0LL;
      v50 = v60 == v61 + 600;
      v51 = 0;
      if ( !v50 )
        v49 = v60 - 96;
    }
    while ( v49 );
    v45 = *((_QWORD *)a1 + 81);
    LODWORD(v120) = v43;
    v44 = v43;
    v101 = v41;
  }
  if ( (v45 & 0x10000000000LL) != 0 )
  {
    v62 = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v105, (union _RM_OPTIMIZATION_STATE *)&v106);
    v51 = v105;
    if ( (v105 & 0x80u) == 0 || (v106 & 0x80u) != 0 )
    {
      if ( (v105 & 0x100) == 0 || (v106 & 0x100) != 0 )
      {
        v63 = *((_QWORD *)a1 + 81);
        v51 = 0;
        if ( (v63 & 0x800000000LL) != 0 )
        {
          v62 = 0;
        }
        else
        {
          v51 = 0;
          v62 = (v63 & 0x40000000000LL) == 0 || (v63 & 0x30000) == 0;
        }
      }
      else
      {
        v62 = 0;
      }
    }
    else
    {
      v62 = 0;
    }
  }
  v64 = v117;
  if ( v117 != v62 )
  {
    if ( !v62 )
    {
      if ( v117 )
      {
        HampPdcSignalWorker(
          (struct _HOST_ACTIVITY_MANAGER **)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97)
                                                                                             + 88LL)
                                                                                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                    + 120)
                                                        + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                           + 168),
          0);
        if ( HampHostIsQuiesceSerialized(a1) )
        {
          if ( HampHostIsResumed(a1) )
          {
            v65 = *(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 97) + 88LL);
            HampPkgAcquireLockExclusive(v65);
            HampPkgReleaseLockExclusive(v65);
            RtlWakeAllConditionVariable((char *)v65 + 320);
          }
        }
      }
    }
    v66 = (__int64 *)*((_QWORD *)a1 + 86);
    if ( v66 )
    {
      HampDepGroupAcquireLockExclusive(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 86));
      if ( !v64 || v62 )
        ++*((_DWORD *)v66 + 22);
      else
        --*((_DWORD *)v66 + 22);
      v69 = *((_DWORD *)v66 + 22);
      if ( (unsigned int)dword_1800B3218 > 5 )
      {
        v111 = *((_QWORD *)a1 - 4);
        v112 = *v66;
        LOBYTE(v118) = v62;
        v107 = v69;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v69,
          (unsigned int)&unk_1800A0B42,
          v67,
          v68,
          (__int64)&v112,
          (__int64)&v107,
          (__int64)&v111,
          (__int64)&v118);
      }
      HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v66);
    }
    else if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v110 = *((_QWORD *)a1 - 4);
      LOBYTE(v117) = v62;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v51,
        (unsigned int)&unk_1800A13B5,
        v42,
        v40,
        (__int64)&v110,
        (__int64)&v117);
    }
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v70 = v120;
  v71 = *((_WORD *)a1 + 332) & 0xE;
  v102 = SystemTimeAsFileTime;
  if ( v71 == 8 )
  {
    if ( (v120 & 0xE) == 8 )
      goto LABEL_174;
    *((_FILETIME *)a1 + 129) = v102;
    goto LABEL_173;
  }
  if ( (v120 & 0xE) == 8 )
  {
    *((_FILETIME *)a1 + 128) = v102;
LABEL_173:
    v72 = *((_QWORD *)a1 + 97);
    *((_QWORD *)a1 + 81) |= 0x2000000000000000uLL;
    HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(v72 + 88));
  }
LABEL_174:
  *((_DWORD *)a1 + 166) = v43;
  if ( (v44 & 0x400) == 0 )
    *((_QWORD *)a1 + 81) &= ~0x8000000000000uLL;
  if ( (v70 & 0x40) != 0 && *((_QWORD *)a1 + 122) && *((_QWORD *)a1 + 123) )
  {
    v73 = (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL)
                                                                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                   + 120)
                                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          - 168);
    HampManagerAcquireLockExclusive(v73);
    HampManagerTriggerInswapTurn(v73, 1);
    HampManagerReleaseLockExclusive(v73);
  }
  v74 = v44;
  v75 = v44 >> 6;
  v76 = v44 >> 4;
  v77 = v74 >> 1;
  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    v78 = *((_QWORD *)a1 + 97);
    v79 = HampLockTrackerId;
    v120 = v78;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v79) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *Value |= 0x20uLL;
      ++Value[6];
      v78 = v120;
    }
    RtlAcquireSRWLockExclusive(v78 + 576);
    *(_DWORD *)(v78 + 584) = GetCurrentThreadId();
    LODWORD(v120) = v77 & 7 | *(_DWORD *)(v78 + 616) & 0xFFFFFCE0 | (8 * (v76 & 3 | (32 * (v101 & 1 | (2 * (v75 & 1))))));
    if ( *(_DWORD *)(v78 + 616) != (_DWORD)v120 )
      HampAppCommitStateSummary((struct _HAM_APPLICATION *)v78, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v120);
    if ( HampLockTrackerId != -1 )
    {
      v81 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v81 & 0x20) == 0 )
        __int2c();
      v50 = v81[6]-- == 1LL;
      if ( v50 )
        *v81 &= ~0x20uLL;
    }
    *(_DWORD *)(v78 + 584) = 0;
    RtlReleaseSRWLockExclusive(v78 + 576);
  }
  v82 = *((_QWORD *)a1 + 81);
  if ( (((unsigned __int8)v113 ^ (unsigned __int8)(v82 >> 37)) & 1) != 0 )
  {
    RtlWakeAllConditionVariable((char *)a1 + 16);
    v82 = *((_QWORD *)a1 + 81);
  }
  if ( (v82 & 0x100000000000LL) != 0 && !(_DWORD)v114 && (v82 & 0x30000) != 0 )
    HampHostIssueStopRequests((__int64)a1, 2u, 5, 0, 5, 0, 2, 0LL, v100, 0LL);
  RtlWakeAllConditionVariable((char *)a1 + 680);
  HampHostCheckQueueStateWorker(a1, v119 != 0);
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)v108, (union _RM_OPTIMIZATION_STATE *)&v102);
  v84 = *((_QWORD *)a1 + 81);
  if ( ((v84 >> 16) & 3) != 0 )
  {
    if ( ((*((_QWORD *)a1 + 81) >> 16) & 3LL) != 1 )
    {
      if ( ((*((_QWORD *)a1 + 81) >> 16) & 3LL) == 2 )
      {
        if ( ((v84 >> 52) & 1) != 0 )
          goto LABEL_218;
      }
      else if ( ((*((_QWORD *)a1 + 81) >> 16) & 3LL) != 3 )
      {
        goto LABEL_218;
      }
LABEL_214:
      if ( (v84 & 0x800000000LL) == 0 )
      {
        IsSuspendWaiter = HampHostIsSuspendWaiter(a1, v83);
        *((_QWORD *)a1 + 81) |= 0x800000000uLL;
        v87 = IsSuspendWaiter;
        if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
          __fastfail(0xEu);
        TpPostWork(*((_QWORD *)a1 + 78));
        HampHostCheckUpdateSuspendWaitState(a1, v87);
      }
      goto LABEL_218;
    }
    if ( v108[0] >= 0 || SLOBYTE(v102.dwLowDateTime) < 0 || (v84 & 0x40000000000LL) != 0 )
      goto LABEL_218;
    NextActivity = HampHostGetFirstActivity(a1);
    if ( !NextActivity )
      goto LABEL_214;
    while ( (*((_BYTE *)NextActivity + 544) & 0x28) != 0
         || !HampActIsStartedOrReachedPendState((__int64)NextActivity, 5u)
         || (*((_DWORD *)NextActivity + 28) & 0x2000) == 0 )
    {
      NextActivity = HampHostGetNextActivity(NextActivity);
      if ( !NextActivity )
        goto LABEL_214;
    }
  }
LABEL_218:
  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    v88 = *((_QWORD *)a1 + 75);
    v89 = 0LL;
    v90 = v88 != (_QWORD)a1 + 600;
    v91 = v88 - 96;
    if ( v90 )
      v89 = v91;
    if ( v89 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v89 + 548) == 3 && (*(_BYTE *)(v89 + 544) & 0x28) == 0 )
        {
          RtlInitializeBitMap(&BitMapHeader, (PULONG)(v89 + 496), 0x2Fu);
          if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x18u) )
            break;
        }
        v92 = *(_QWORD *)(v89 + 96);
        v93 = *(_QWORD *)(v89 + 80);
        v89 = 0LL;
        if ( v92 != v93 + 600 )
          v89 = v92 - 96;
        if ( !v89 )
          goto LABEL_228;
      }
      v94 = 1;
    }
    else
    {
LABEL_228:
      if ( (*((_QWORD *)a1 + 81) & 0x800000000000000LL) == 0
        || (RtlInitializeBitMap(
              &v116,
              (PULONG)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                              + 120)
                                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                     + 528),
              0x2Fu),
            v94 = 1,
            !_bittest64((const signed __int64 *)v116.Buffer, 0x18u)) )
      {
        v94 = 0;
      }
    }
    v95 = *((_QWORD *)a1 + 97);
    v96 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v97 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v96) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *v97 |= 0x20uLL;
      ++v97[6];
    }
    RtlAcquireSRWLockExclusive(v95 + 576);
    *(_DWORD *)(v95 + 584) = GetCurrentThreadId();
    v98 = *(_DWORD *)(v95 + 608) & 0xFFFBFFFF | (v94 << 18);
    *(_DWORD *)(v95 + 608) = v98;
    if ( v94 != ((v98 >> 17) & 1) && (v98 & 0x80000) == 0 )
    {
      *(_DWORD *)(v95 + 608) = v98 | 0x80000;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v95 + 24)) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*(_QWORD *)(v95 + 560));
    }
    if ( HampLockTrackerId != -1 )
    {
      v99 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v99 & 0x20) == 0 )
        __int2c();
      v50 = v99[6]-- == 1LL;
      if ( v50 )
        *v99 &= ~0x20uLL;
    }
    *(_DWORD *)(v95 + 584) = 0;
    RtlReleaseSRWLockExclusive(v95 + 576);
  }
}
