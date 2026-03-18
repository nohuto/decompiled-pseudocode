/*
 * XREFs of AsyncEvalObject @ 0x1C00114E0
 * Callers:
 *     SyncEvalObject @ 0x1C000B990 (SyncEvalObject.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     DebugRunMethod @ 0x1C00676F0 (DebugRunMethod.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 *     GetObjectPathNoLock @ 0x1C0010780 (GetObjectPathNoLock.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     ReadField @ 0x1C0016430 (ReadField.c)
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     PushFrame @ 0x1C0018660 (PushFrame.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     PushPost @ 0x1C002A7B8 (PushPost.c)
 *     OSQueueWorkItem @ 0x1C002B8D0 (OSQueueWorkItem.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C00662A8 (AMLIReadNamespaceOverrideObject.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     FreeContext @ 0x1C00694F8 (FreeContext.c)
 */

__int64 __fastcall AsyncEvalObject(
        __int64 a1,
        _SLIST_ENTRY *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rdi
  KIRQL CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r8
  __int64 v12; // r10
  __int64 v13; // rdx
  PSLIST_ENTRY v14; // r15
  KIRQL v15; // al
  int v16; // edx
  char *v17; // rax
  size_t v18; // rbx
  _SLIST_ENTRY *Pool2; // rax
  KIRQL v20; // al
  struct _SLIST_ENTRY **v21; // rdx
  struct _SLIST_ENTRY *v22; // rax
  __int16 v23; // ax
  char v24; // al
  char v25; // al
  __int64 v26; // rsi
  _BYTE *v27; // r12
  KIRQL v28; // r14
  __int64 v29; // rcx
  __int64 v30; // rdi
  _BYTE *ObjectPathNoLock; // rax
  _BYTE *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  _BYTE *v37; // rdx
  char v38; // al
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  _BYTE *v42; // rax
  int v43; // r8d
  _BYTE *v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  const char *v47; // r9
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rdx
  _BYTE *v52; // rax
  int v53; // r8d
  _BYTE *v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rsi
  char v58; // al
  int v59; // edi
  __int64 i; // rax
  unsigned __int16 *v61; // r13
  char *v62; // rdi
  __int64 v63; // rcx
  _BYTE *v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // r8
  char *v68; // rax
  __int16 v69; // dx
  _SLIST_ENTRY *Next; // rcx
  __int64 v71; // r12
  __int64 v72; // rax
  _SLIST_ENTRY *v73; // rsi
  __int16 v74; // dx
  __int64 v75; // r14
  unsigned int v76; // r13d
  __int64 v77; // rbx
  struct _SLIST_ENTRY *v78; // rdi
  PSLIST_ENTRY v79; // rcx
  __int64 v80; // rax
  unsigned int Field; // r14d
  __int16 v82; // ax
  __int64 v83; // rax
  __int64 v84; // r8
  struct _KTHREAD *v85; // r11
  __int64 v86; // r9
  __int64 v87; // r10
  __int64 v88; // rbx
  __int64 v89; // rdx
  __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rdx
  bool v94; // zf
  int v95; // eax
  _SLIST_ENTRY *v96; // rbx
  unsigned int v97; // esi
  KIRQL v98; // al
  _SLIST_ENTRY *v99; // rdx
  __int64 v100; // rdi
  unsigned int v101; // eax
  void *v102; // rax
  char v103; // al
  _BYTE *v104; // rax
  __int64 v105; // r9
  __int64 v106; // r9
  _BYTE *v107; // rax
  unsigned __int16 v108; // si
  ULONG TimeIncrement; // eax
  __int64 v110; // r8
  unsigned __int64 v111; // rdx
  unsigned __int16 v112; // ax
  unsigned __int16 v113; // ax
  int v114; // r8d
  unsigned int v115; // edx
  int v116; // ecx
  void *ObjectPath; // rdi
  __int64 v118; // rax
  unsigned __int64 v119; // [rsp+30h] [rbp-B1h] BYREF
  __int16 v120; // [rsp+38h] [rbp-A9h] BYREF
  __int16 v121; // [rsp+3Ch] [rbp-A5h] BYREF
  __int16 v122; // [rsp+40h] [rbp-A1h] BYREF
  unsigned int v123; // [rsp+44h] [rbp-9Dh]
  __int64 v124; // [rsp+48h] [rbp-99h]
  __int64 v125; // [rsp+50h] [rbp-91h] BYREF
  __int64 v126; // [rsp+58h] [rbp-89h] BYREF
  __int64 v127; // [rsp+60h] [rbp-81h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-79h] BYREF
  _SLIST_ENTRY *v129; // [rsp+78h] [rbp-69h]
  int v130; // [rsp+80h] [rbp-61h]
  int v131; // [rsp+84h] [rbp-5Dh]
  unsigned __int64 *v132; // [rsp+88h] [rbp-59h]
  __int64 v133; // [rsp+90h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v134; // [rsp+A0h] [rbp-41h] BYREF
  _SLIST_ENTRY *v135; // [rsp+B0h] [rbp-31h]
  int v136; // [rsp+B8h] [rbp-29h]
  int v137; // [rsp+BCh] [rbp-25h]
  __int16 *v138; // [rsp+C0h] [rbp-21h]
  __int64 v139; // [rsp+C8h] [rbp-19h]
  __int64 *v140; // [rsp+D0h] [rbp-11h]
  __int64 v141; // [rsp+D8h] [rbp-9h]

  v127 = a4;
  v7 = 0LL;
  v123 = a3;
  v124 = a1;
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  v12 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
  {
    v13 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u) % (unsigned int)qword_1C0081A98);
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0081AA0 + v13) = 1095981390;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 24) = 0LL;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 32) = 0LL;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 40) = v12;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 48) = CurrentIrql;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 56) = a1;
    *(_QWORD *)((char *)qword_1C0081AA0 + v13 + 64) = 0LL;
  }
  ++dword_1C00821D4;
  v14 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
  if ( !v14 )
  {
    ++dword_1C00821D8;
    v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C00821F0)(
                          (unsigned int)dword_1C00821E4,
                          (unsigned int)dword_1C00821EC,
                          (unsigned int)dword_1C00821E8);
    if ( !v14 )
      return (unsigned int)-1073741670;
  }
  memset(v14, 0, 0x238uLL);
  v15 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  v16 = gdwcCTObjs + 1;
  gdwcCTObjs = v16;
  if ( v16 > 0 && v16 > (unsigned int)gdwcCTObjsMax )
    gdwcCTObjsMax = v16;
  KeReleaseSpinLock(&gdwGContextSpinLock, v15);
  HIDWORD(v14->Next) = 0;
  memset(&v14[1], 0, 0x130uLL);
  *(struct _SLIST_ENTRY *)((char *)&v14[20] + 8) = 0LL;
  *(struct _SLIST_ENTRY *)((char *)&v14[21] + 8) = 0LL;
  *(struct _SLIST_ENTRY *)((char *)&v14[22] + 8) = 0LL;
  *(struct _SLIST_ENTRY *)((char *)&v14[23] + 8) = 0LL;
  *(struct _SLIST_ENTRY *)((char *)&v14[24] + 8) = 0LL;
  *(struct _SLIST_ENTRY *)((char *)&v14[25] + 8) = 0LL;
  *(struct _SLIST_ENTRY *)((char *)&v14[26] + 8) = 0LL;
  *(struct _SLIST_ENTRY *)((char *)&v14[27] + 8) = 0LL;
  *(struct _SLIST_ENTRY *)((char *)&v14[28] + 8) = 0LL;
  *((_QWORD *)&v14[29].Next + 1) = 0LL;
  v17 = (char *)v14 + (unsigned int)gdwCtxtBlkSize;
  LODWORD(v14->Next) = 1415074883;
  *((_QWORD *)&v14->Next + 1) = v17;
  v14[20].Next = v14 + 30;
  KeInitializeDpc((PRKDPC)&v14[16], TimeoutCallback, v14);
  KeInitializeTimer((PKTIMER)&v14[12]);
  v18 = (unsigned int)(*((_DWORD *)&v14->Next + 2) - (_DWORD)v14 - 480);
  memset(&v14[30], 0, v18);
  LODWORD(v14[30].Next) = 1346454856;
  *((_QWORD *)&v14[30].Next + 1) = (char *)v14 + v18 + 480;
  v14[32].Next = (PSLIST_ENTRY)((char *)v14 + 536);
  v14[33].Next = (PSLIST_ENTRY)((char *)v14 + 520);
  *((_QWORD *)&v14[32].Next + 1) = (char *)v14 + 520;
  v14[25].Next = (PSLIST_ENTRY)((char *)v14 + 392);
  *((_QWORD *)&v14[24].Next + 1) = (char *)v14 + 392;
  *((_QWORD *)&v14[3].Next + 1) = v14 + 3;
  v14[3].Next = v14 + 3;
  *((_QWORD *)&v14[23].Next + 1) = RestartCtxtPassive;
  *((_QWORD *)&v14[2].Next + 1) = v14 + 2;
  v14[2].Next = v14 + 2;
  v14[24].Next = v14;
  *((_QWORD *)&v14[22].Next + 1) = 0LL;
  v14[31].Next = v14 + 30;
  Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(64LL, 168LL, 1684827489LL);
  v14[29].Next = Pool2;
  if ( Pool2 )
  {
    Pool2->Next = v14;
    LODWORD(v14[29].Next[1].Next) = AmliWatchdogAction;
    *((_QWORD *)&v14[28].Next + 1) = MEMORY[0xFFFFF78000000008];
    *((_BYTE *)&v14[29].Next + 8) = 0;
  }
  v20 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v21 = (struct _SLIST_ENTRY **)off_1C007E390[0];
  byte_1C0082248 = v20;
  v22 = v14 + 1;
  if ( *(_UNKNOWN ***)off_1C007E390[0] != &glistCtxtHead )
    goto LABEL_203;
  v22->Next = (_SLIST_ENTRY *)&glistCtxtHead;
  *((_QWORD *)&v14[1].Next + 1) = v21;
  *v21 = v22;
  off_1C007E390[0] = &v14[1];
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0082248);
  v23 = *(_WORD *)(a1 + 64);
  if ( (v23 & 0x400) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 136);
  }
  else if ( (v23 & 0x200) != 0 )
  {
    v7 = a1;
  }
  v24 = gdwfAMLI;
  *((_QWORD *)&v14[4].Next + 1) = a1;
  if ( (v24 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  v25 = gdwfAMLI;
  v14[5].Next = (_SLIST_ENTRY *)a1;
  if ( (v25 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  if ( v7 )
  {
    v103 = gdwfAMLI;
    *((_QWORD *)&v14[26].Next + 1) = v7;
    if ( (v103 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 112));
    v124 = v7;
  }
  *((_QWORD *)&v14[10].Next + 1) = a5;
  v14[11].Next = a2;
  v26 = *((_QWORD *)&v14[4].Next + 1);
  *((_QWORD *)&v14[11].Next + 1) = a6;
  v27 = 0LL;
  v28 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  if ( v26 )
  {
    v29 = *(_QWORD *)(v26 + 16);
    v30 = -1LL;
    if ( v29 )
    {
      ObjectPathNoLock = GetObjectPathNoLock(v29);
      v32 = ObjectPathNoLock;
      if ( !ObjectPathNoLock )
        goto LABEL_72;
      v33 = -1LL;
      do
        ++v33;
      while ( ObjectPathNoLock[v33] );
      v27 = (_BYTE *)ExAllocatePool2(64LL, v33 + 9, 1381258079LL);
      if ( v27 )
      {
        v34 = -1LL;
        do
          ++v34;
        while ( v32[v34] );
        v35 = v34 + 1;
        if ( (unsigned __int64)(v35 - 1) > 0x7FFFFFFE )
        {
          if ( v35 )
            *v27 = 0;
        }
        else
        {
          v36 = 2147483646 - v35;
          v37 = v27;
          while ( v36 + v35 )
          {
            v38 = v37[v32 - v27];
            if ( !v38 )
            {
              if ( v35 )
                break;
LABEL_167:
              --v37;
              break;
            }
            *v37++ = v38;
            if ( !--v35 )
              goto LABEL_167;
          }
          *v37 = 0;
        }
        if ( *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) )
        {
          v39 = -1LL;
          do
            ++v39;
          while ( v32[v39] );
          v40 = v39 + 9;
          if ( (unsigned __int64)(v40 - 1) <= 0x7FFFFFFE )
          {
            v41 = v40;
            v42 = v27;
            v43 = 0;
            while ( *v42 )
            {
              ++v42;
              if ( !--v41 )
              {
                v43 = -1073741811;
                v105 = 0LL;
                goto LABEL_44;
              }
            }
            v105 = v40 - v41;
LABEL_44:
            if ( v43 >= 0 )
            {
              v44 = &v27[v105];
              v45 = v40 - v105;
              if ( v40 == v105 )
              {
LABEL_170:
                --v44;
              }
              else
              {
                v46 = 2147483646LL;
                v47 = (const char *)("." - v44);
                while ( v46 )
                {
                  v48 = v44[(_QWORD)v47];
                  if ( !v48 )
                  {
                    if ( !v45 )
                      goto LABEL_170;
                    break;
                  }
                  *v44 = v48;
                  --v46;
                  ++v44;
                  if ( !--v45 )
                    goto LABEL_170;
                }
              }
              *v44 = 0;
            }
          }
        }
        v49 = -1LL;
        do
          ++v49;
        while ( v32[v49] );
        v50 = v49 + 9;
        if ( (unsigned __int64)(v50 - 1) <= 0x7FFFFFFE )
        {
          v51 = v50;
          v52 = v27;
          v53 = 0;
          while ( *v52 )
          {
            ++v52;
            if ( !--v51 )
            {
              v53 = -1073741811;
              v106 = 0LL;
              goto LABEL_59;
            }
          }
          v106 = v50 - v51;
LABEL_59:
          if ( v53 >= 0 )
          {
            v54 = &v27[v106];
            v55 = v50 - v106;
            if ( v50 == v106 )
            {
LABEL_171:
              --v54;
            }
            else
            {
              v56 = 4LL;
              v57 = v26 - (_QWORD)v54;
              while ( v56 )
              {
                v58 = v54[v57 + 40];
                if ( !v58 )
                {
                  if ( !v55 )
                    goto LABEL_171;
                  break;
                }
                *v54 = v58;
                --v56;
                ++v54;
                if ( !--v55 )
                  goto LABEL_171;
              }
            }
            *v54 = 0;
          }
        }
      }
      ExFreePoolWithTag(v32, 0x5254535Fu);
      if ( !v27 )
      {
LABEL_72:
        ExReleaseSpinLockShared(&ACPINamespaceLock, v28);
        v61 = (unsigned __int16 *)(&v14[27].Next + 1);
        RtlInitUnicodeString((PUNICODE_STRING)(&v14[27].Next + 1), 0LL);
        v62 = (char *)(&v14[27].Next + 1);
        if ( !v27 )
          goto LABEL_86;
        goto LABEL_73;
      }
    }
    else
    {
      v104 = (_BYTE *)ExAllocatePool2(64LL, 8LL, 1381258079LL);
      v27 = v104;
      if ( !v104 )
        goto LABEL_72;
      *v104 = 92;
    }
    do
      ++v30;
    while ( v27[v30] );
    v59 = v30 - 1;
    for ( i = v59; i >= 0; v27[i--] = 0 )
    {
      if ( v27[i] != 95 )
        break;
    }
    goto LABEL_72;
  }
  v107 = (_BYTE *)ExAllocatePool2(64LL, 1LL, 1381258079LL);
  v27 = v107;
  if ( !v107 )
    goto LABEL_72;
  *v107 = 0;
  ExReleaseSpinLockShared(&ACPINamespaceLock, v28);
  v61 = (unsigned __int16 *)(&v14[27].Next + 1);
  RtlInitUnicodeString((PUNICODE_STRING)(&v14[27].Next + 1), 0LL);
  v62 = (char *)(&v14[27].Next + 1);
LABEL_73:
  if ( *v27 )
  {
    v63 = 512LL;
    v64 = v27;
    while ( *v64 )
    {
      ++v64;
      if ( !--v63 )
      {
        v108 = 512;
        goto LABEL_79;
      }
    }
    v108 = 512 - v63;
LABEL_79:
    v65 = v108;
    v66 = ExAllocatePool2(64LL, 2LL * v108 + 2, 1399874369LL);
    *((_QWORD *)v62 + 1) = v66;
    if ( v66 )
    {
      *(_WORD *)v62 = 2 * v108;
      *((_WORD *)v62 + 1) = 2 * v108 + 2;
      if ( v108 )
      {
        v67 = 0LL;
        v68 = v27;
        do
        {
          v69 = *v68;
          v67 += 2LL;
          ++v68;
          *(_WORD *)(v67 + *((_QWORD *)v62 + 1) - 2) = v69;
          --v65;
        }
        while ( v65 );
        v66 = *((_QWORD *)v61 + 1);
      }
      *(_WORD *)(v66 + 2LL * v108) = 0;
    }
  }
  ExFreePoolWithTag(v27, 0);
LABEL_86:
  Next = v14[29].Next;
  v71 = v124;
  if ( Next )
  {
    v72 = *(_QWORD *)(v124 + 16);
    v73 = v14[29].Next;
    if ( v72 )
    {
      v74 = *(_WORD *)(v72 + 66);
      if ( v74 == 6 || v74 == 13 || v74 == 12 )
      {
        *((_QWORD *)&Next->Next + 1) = *(_QWORD *)(v72 + 104);
        v73 = v14[29].Next;
      }
    }
    if ( AmliWatchdogEnabled )
    {
      v75 = (unsigned int)AmliWatchdogTimeout;
      if ( AmliWatchdogTimeout )
      {
        *((_BYTE *)&v73[5].Next + 8) = 1;
        KeInitializeDpc((PRKDPC)(&v73[1].Next + 1), AmliWatchdog, v73);
        KeInitializeTimer((PKTIMER)(&v73[6].Next + 1));
        v73[6].Next = (_SLIST_ENTRY *)MEMORY[0xFFFFF78000000008];
        KeSetTimer((PKTIMER)(&v73[6].Next + 1), (LARGE_INTEGER)(-10000000 * v75), (PKDPC)(&v73[1].Next + 1));
      }
    }
  }
  if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD) )
  {
    TimeIncrement = KeQueryTimeIncrement();
    v110 = *((_QWORD *)&v14[4].Next + 1);
    v119 = *(_QWORD *)(v110 + 144);
    v111 = MEMORY[0xFFFFF78000000008] / (unsigned __int64)TimeIncrement / 0x11E1A300;
    if ( *(_QWORD *)(v110 + 152) == v111 )
    {
      ++v119;
      *(_DWORD *)(v110 + 148) = HIDWORD(v119);
      *(_DWORD *)(*((_QWORD *)&v14[4].Next + 1) + 144LL) = v119;
    }
    else
    {
      v119 = 1LL;
      *(_DWORD *)(v110 + 148) = 0;
      *(_DWORD *)(*((_QWORD *)&v14[4].Next + 1) + 144LL) = v119;
      *(_QWORD *)(*((_QWORD *)&v14[4].Next + 1) + 152LL) = v111;
    }
    if ( v119 >= 0x3C )
    {
      v112 = *v61;
      v130 = *v61;
      v120 = v112 >> 1;
      UserData.Ptr = (unsigned __int64)&v120;
      v129 = v14[28].Next;
      v132 = &v119;
      *(_QWORD *)&UserData.Size = 2LL;
      v131 = 0;
      v133 = 8LL;
      EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_FREQUENT_AML_METHOD, 0LL, 3u, &UserData);
    }
  }
  v126 = 0LL;
  if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    v113 = *v61;
    v136 = *v61;
    v76 = 0;
    v121 = v113 >> 1;
    v134.Ptr = (unsigned __int64)&v121;
    v135 = v14[28].Next;
    v138 = &v122;
    v140 = &v126;
    *(_QWORD *)&v134.Size = 2LL;
    v137 = 0;
    v122 = 1;
    v139 = 2LL;
    v141 = 8LL;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &v134);
  }
  else
  {
    v76 = 0;
  }
  if ( a7 )
    LODWORD(v14[4].Next) |= 0x100u;
  v77 = v71 + 64;
  v78 = v14 + 8;
  if ( (*(_WORD *)(v71 + 64) & 0x180) != 0 )
  {
    Field = PushPost((_DWORD)v14, (unsigned int)ProcessEvalObj, v71, 0, (__int64)&v14[8]);
    if ( !Field )
    {
      Field = AMLIReadNamespaceOverrideObject(v14, v71, &v14[8]);
      if ( Field != 32772 )
        goto LABEL_114;
    }
    goto LABEL_202;
  }
  v79 = v14 + 30;
  if ( *(_WORD *)(v71 + 66) == 8 )
  {
    v91 = HeapAlloc(v79, 1297237576LL, 400LL);
    v92 = v91;
    if ( v91 )
    {
      *(_QWORD *)(v91 + 8) = v14[26].Next;
      v14[26].Next = (_SLIST_ENTRY *)v91;
      *(_DWORD *)v91 = 1280065859;
      *(_QWORD *)(v91 + 24) = ParseCall;
      v93 = *(_QWORD *)(v71 + 96);
      *(_QWORD *)(v91 + 48) = v71;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v71 + 112));
      if ( (*(_BYTE *)(v93 + 193) & 8) != 0 )
        *(_DWORD *)(v91 + 16) |= 0x10000u;
      if ( *(_WORD *)(v71 + 66) == 8 && _bittest16((const signed __int16 *)v77, 9u) )
        *(_DWORD *)(v91 + 16) |= 0x80000u;
      v94 = (*(_BYTE *)(v93 + 193) & 7) == 0;
      v95 = *(_BYTE *)(v93 + 193) & 7;
      *(_DWORD *)(v92 + 60) = v95;
      if ( !v94 )
      {
        v102 = (void *)HeapAlloc(v14[20].Next, 1413563464LL, (unsigned int)(40 * v95));
        *(_QWORD *)(v92 + 64) = v102;
        if ( !v102 )
        {
          Field = -1073741670;
          LogError(3221225626LL);
          AcpiDiagTraceAmlError(v14, 3221225626LL);
          PrintDebugMessage(152, 0, 0, 0, 0LL);
          *(_QWORD *)(v92 + 392) = v78;
          goto LABEL_202;
        }
        memset(v102, 0, 40LL * *(unsigned int *)(v92 + 60));
      }
      *(_QWORD *)(v92 + 392) = v78;
      v96 = v14[26].Next;
      v97 = v123;
      if ( v123 == *((_DWORD *)&v96[3].Next + 3) )
      {
        if ( (gDebugger & 0xD0) != 0 )
        {
          ObjectPath = (void *)GetObjectPath(v71);
          ConPrintf("\nAMLI: %p: %s(");
          if ( ObjectPath )
            ExFreePoolWithTag(ObjectPath, 0);
        }
        *((_DWORD *)&v96[3].Next + 2) = 0;
        if ( v97 )
        {
          v100 = v127;
          do
          {
            Field = DupObjData(v14[20].Next, (char *)v96[4].Next + 40 * v76, v100 + 40LL * v76);
            if ( Field )
              goto LABEL_202;
            if ( (gDebugger & 0xD0) != 0 )
            {
              PrintObject(v100 + 40LL * *((unsigned int *)&v96[3].Next + 2));
              if ( *((_DWORD *)&v96[3].Next + 2) + 1 < v97 )
                ConPrintf(",");
            }
            v101 = *((_DWORD *)&v96[3].Next + 2) + 1;
            *((_DWORD *)&v96[3].Next + 2) = v101;
            v76 = v101;
          }
          while ( v101 < v97 );
        }
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf(")\n");
        LODWORD(v96[1].Next) = (__int64)v96[1].Next & 0xFFFF0000 | 2;
        goto LABEL_114;
      }
      Field = -1072431093;
      LogError(3222536203LL);
      AcpiDiagTraceAmlError(v14, 3222536203LL);
      v114 = *((_DWORD *)&v96[3].Next + 3);
      v115 = v97;
      v116 = 12;
LABEL_201:
      PrintDebugMessage(v116, v115, v114, 0, 0LL);
      goto LABEL_202;
    }
LABEL_200:
    Field = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(v14, 3222536194LL);
    v114 = 0;
    v116 = 153;
    v115 = 0;
    goto LABEL_201;
  }
  v80 = HeapAlloc(v79, 1297237576LL, 56LL);
  if ( !v80 )
    goto LABEL_200;
  Field = 0;
  *(_QWORD *)(v80 + 8) = v14[26].Next;
  v14[26].Next = (_SLIST_ENTRY *)v80;
  *(_QWORD *)(v80 + 24) = ProcessEvalObj;
  *(_DWORD *)v80 = 1414745936;
  *(_QWORD *)(v80 + 32) = v71;
  *(_QWORD *)(v80 + 40) = 0LL;
  *(_QWORD *)(v80 + 48) = v78;
  v125 = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v82 = *(_WORD *)(v77 + 2);
      if ( v82 != 128 )
        break;
      v77 = *(_QWORD *)(v77 + 16) + 64LL;
    }
    if ( v82 != 129 )
      break;
    v77 = *(_QWORD *)(v77 + 16);
  }
  if ( v82 == 5 )
  {
    Field = PushFrame((_DWORD)v14, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v125);
    if ( Field )
      goto LABEL_113;
    v118 = v125;
    *(_QWORD *)(v125 + 32) = v77;
    *(_DWORD *)(v118 + 16) = 0x10000;
    *(_QWORD *)(v118 + 40) = v78;
  }
  else
  {
    if ( v82 == 14 )
    {
      Field = ReadField(v14, v77, *(_QWORD *)(v77 + 32) + 12LL, &v14[8]);
      goto LABEL_113;
    }
    if ( v78 != (struct _SLIST_ENTRY *)v77 )
    {
      *v78 = *(struct _SLIST_ENTRY *)v77;
      v14[9] = *(PSLIST_ENTRY)(v77 + 16);
      v14[10].Next = *(_SLIST_ENTRY **)(v77 + 32);
      if ( (*(_BYTE *)v77 & 1) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v77 + 8) + 8LL));
      }
      else if ( *(_QWORD *)(v77 + 32) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v77 + 8));
        LOWORD(v78->Next) |= 1u;
        *((_QWORD *)&v14[8].Next + 1) = v77;
      }
    }
    if ( (gDebugger & 0xD0) == 0 )
    {
LABEL_113:
      if ( Field != 32772 )
        goto LABEL_114;
LABEL_202:
      FreeContext(v14);
      return Field;
    }
    ConPrintf("=");
    PrintObject(&v14[8]);
  }
LABEL_114:
  v83 = *((_QWORD *)&v14[6].Next + 1);
  if ( v83 )
    v84 = *(_QWORD *)(v83 + 32);
  else
    v84 = *((_QWORD *)&v14[4].Next + 1);
  v85 = KeGetCurrentThread();
  v86 = *((_QWORD *)&v14[7].Next + 1);
  v87 = *((_QWORD *)&v14[25].Next + 1);
  v88 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
  {
    v89 = 72LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u) % (unsigned int)qword_1C0081A98);
    *(_QWORD *)((char *)qword_1C0081AA0 + v89 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0081AA0 + v89) = 1380275028;
    *(_QWORD *)((char *)qword_1C0081AA0 + v89 + 16) = v85;
    *(_QWORD *)((char *)qword_1C0081AA0 + v89 + 24) = v87;
    *(_QWORD *)((char *)qword_1C0081AA0 + v89 + 32) = v14;
    *(_QWORD *)((char *)qword_1C0081AA0 + v89 + 40) = v88;
    *(_QWORD *)((char *)qword_1C0081AA0 + v89 + 48) = v14;
    *(_QWORD *)((char *)qword_1C0081AA0 + v89 + 56) = v84;
    *(_QWORD *)((char *)qword_1C0081AA0 + v89 + 64) = v86;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !v14[27].Next )
      v14[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
    LODWORD(v14[4].Next) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, NewIrql);
    if ( (gdwfAMLI & 4) != 0 )
    {
      if ( !(unsigned __int8)ExTryQueueWorkItem(&v14[22].Next + 1, 1LL) )
        OSQueueWorkItem(&v14[22].Next + 1);
      return 32772;
    }
    v98 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
    v99 = (_SLIST_ENTRY *)qword_1C0080A48;
    if ( *(__int64 **)qword_1C0080A48 == &ACPIWorkQueue )
    {
      *((_QWORD *)&v14[22].Next + 1) = &ACPIWorkQueue;
      v14[23].Next = v99;
      v99->Next = (PSLIST_ENTRY)((char *)v14 + 360);
      qword_1C0080A48 = (__int64)(&v14[22].Next + 1);
      KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v98);
      KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
      return 32772;
    }
LABEL_203:
    __fastfail(3u);
  }
  NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( !v14[27].Next )
    v14[27].Next = (_SLIST_ENTRY *)++gAmliMethodCounter;
  Field = InsertReadyQueue(v14, 0);
  KeReleaseSpinLock(&SpinLock, NewIrql);
  return Field;
}
