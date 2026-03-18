/*
 * XREFs of RunContext @ 0x1C0004A10
 * Callers:
 *     InsertReadyQueue @ 0x1C00043E0 (InsertReadyQueue.c)
 *     DispatchCtxtQueue @ 0x1C0028700 (DispatchCtxtQueue.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0003010 (FreeObjData.c)
 *     FreeData @ 0x1C0003328 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     DupObjData @ 0x1C000A040 (DupObjData.c)
 *     NewObjData @ 0x1C000A628 (NewObjData.c)
 *     _tlgKeywordOn @ 0x1C000F790 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C000F7C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RestartContext @ 0x1C0023B90 (RestartContext.c)
 *     LogSchedEvent @ 0x1C0029F60 (LogSchedEvent.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     ReleaseASLMutex @ 0x1C002F0CC (ReleaseASLMutex.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     AcpiQueueRecordBlackboxInformation @ 0x1C0062A68 (AcpiQueueRecordBlackboxInformation.c)
 *     AmliWatchdogTimeoutAction @ 0x1C0062ED4 (AmliWatchdogTimeoutAction.c)
 *     AMLIDebugger @ 0x1C0065AF0 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 *     InvokePauseCallbacks @ 0x1C0068090 (InvokePauseCallbacks.c)
 */

__int64 __fastcall RunContext(PSLIST_ENTRY ListEntry)
{
  char v1; // r12
  _SLIST_ENTRY *v2; // rsi
  _SLIST_ENTRY *v4; // rax
  unsigned int Next; // ecx
  __int64 v6; // rax
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v9; // r11
  __int64 v10; // r14
  __int64 v11; // r10
  unsigned __int32 v12; // ecx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  _SLIST_ENTRY *v15; // rdi
  _SLIST_ENTRY *v16; // rdx
  unsigned int v17; // eax
  _SLIST_ENTRY *v18; // r14
  __int64 v19; // rax
  int v20; // eax
  PSLIST_ENTRY v21; // r14
  _SLIST_ENTRY *v22; // rdx
  _SLIST_ENTRY *v23; // rax
  _SLIST_ENTRY **v24; // rcx
  _SLIST_ENTRY *v25; // rdx
  PSLIST_ENTRY *v26; // rcx
  PSLIST_ENTRY v27; // rax
  _SLIST_ENTRY *v28; // r8
  _SLIST_ENTRY **v29; // rdx
  KIRQL v30; // al
  __int64 v31; // rdx
  _SLIST_ENTRY *v32; // rsi
  KIRQL v33; // r14
  _SLIST_ENTRY *v34; // r12
  _SLIST_ENTRY *v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  _SLIST_ENTRY *v38; // rcx
  __int64 v39; // rsi
  struct _KTHREAD *v40; // r8
  __int64 v41; // r9
  unsigned __int32 v42; // r15d
  unsigned int v43; // r15d
  __int64 v44; // rdx
  _QWORD *v46; // rax
  __int64 (__fastcall *v47)(); // r10
  __int64 v48; // r11
  _SLIST_ENTRY *v49; // r12
  __int64 v50; // r14
  struct _KTHREAD *v51; // r13
  __int64 v52; // r9
  unsigned __int32 v53; // ecx
  unsigned int v54; // ecx
  __int64 v55; // rdx
  _SLIST_ENTRY *v56; // rcx
  __int64 v57; // r14
  _SLIST_ENTRY *v58; // rax
  int v59; // ecx
  _SLIST_ENTRY *v60; // r12
  int v61; // r13d
  _SLIST_ENTRY *v62; // rcx
  _DWORD *v63; // r14
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  __int64 v67; // rcx
  _SLIST_ENTRY *v68; // rcx
  _SLIST_ENTRY *v69; // rcx
  _SLIST_ENTRY *v70; // rax
  int v71; // ecx
  unsigned __int64 v72; // rdx
  int v73; // r8d
  int v74; // r9d
  char v75; // [rsp+30h] [rbp-99h]
  __int16 v76; // [rsp+34h] [rbp-95h] BYREF
  __int16 v77; // [rsp+38h] [rbp-91h] BYREF
  int v78; // [rsp+3Ch] [rbp-8Dh] BYREF
  __int64 v79; // [rsp+40h] [rbp-89h]
  _SLIST_ENTRY *v80; // [rsp+48h] [rbp-81h]
  unsigned __int64 v81; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-69h] BYREF
  _SLIST_ENTRY *v83; // [rsp+70h] [rbp-59h]
  int v84; // [rsp+78h] [rbp-51h]
  int v85; // [rsp+7Ch] [rbp-4Dh]
  __int16 *v86; // [rsp+80h] [rbp-49h]
  __int64 v87; // [rsp+88h] [rbp-41h]
  unsigned __int64 *v88; // [rsp+90h] [rbp-39h]
  __int64 v89; // [rsp+98h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD *v91; // [rsp+C0h] [rbp-9h]
  __int64 v92; // [rsp+C8h] [rbp-1h]
  _SLIST_ENTRY *v93; // [rsp+D0h] [rbp+7h]
  _DWORD v94[2]; // [rsp+D8h] [rbp+Fh] BYREF
  int *v95; // [rsp+E0h] [rbp+17h]
  __int64 v96; // [rsp+E8h] [rbp+1Fh]

  v1 = 0;
  v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
  if ( v2->Next == v2 )
  {
    v4 = (_SLIST_ENTRY *)qword_1C00817E8;
    if ( *(__int64 **)qword_1C00817E8 != &RunningContextListHead )
      goto LABEL_158;
    v2->Next = (_SLIST_ENTRY *)&RunningContextListHead;
    ListEntry[25].Next = v4;
    v4->Next = v2;
    qword_1C00817E8 = (__int64)(&ListEntry[24].Next + 1);
    v75 = 0;
  }
  else
  {
    v75 = 1;
  }
  Next = (unsigned int)ListEntry[4].Next;
  *((_QWORD *)&ListEntry[25].Next + 1) = KeGetCurrentThread();
  if ( (Next & 0x200) != 0 )
  {
    gReadyQueue |= 0x200u;
    Next = (unsigned int)ListEntry[4].Next;
  }
  v6 = *((_QWORD *)&ListEntry[6].Next + 1);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 32);
  else
    v7 = *((_QWORD *)&ListEntry[4].Next + 1);
  CurrentThread = KeGetCurrentThread();
  v9 = *((_QWORD *)&ListEntry[25].Next + 1);
  v10 = (unsigned int)gReadyQueue;
  v11 = Next;
  if ( (gDebugger & 0x8000) != 0 && qword_1C00828E0 )
  {
    v12 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00828D8 + 1, 1u);
    if ( (_DWORD)qword_1C00828D8 == 204 )
      v13 = v12 % 0xCC;
    else
      v13 = v12 % (unsigned int)qword_1C00828D8;
    v14 = 72LL * v13;
    *(_QWORD *)((char *)qword_1C00828E0 + v14 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C00828E0 + v14) = 1381322307;
    *(_QWORD *)((char *)qword_1C00828E0 + v14 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C00828E0 + v14 + 24) = v9;
    *(_QWORD *)((char *)qword_1C00828E0 + v14 + 32) = ListEntry;
    *(_QWORD *)((char *)qword_1C00828E0 + v14 + 40) = v10;
    *(_QWORD *)((char *)qword_1C00828E0 + v14 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C00828E0 + v14 + 56) = v7;
    *(_QWORD *)((char *)qword_1C00828E0 + v14 + 64) = v11;
    Next = (unsigned int)ListEntry[4].Next;
  }
  do
  {
    v15 = 0LL;
    LODWORD(ListEntry[4].Next) = Next & 0xFFFFFFE7 | 0x10;
    KeReleaseSpinLock(&SpinLock, byte_1C00827B0);
    do
    {
      v16 = ListEntry[26].Next;
      if ( !v16 )
        break;
      if ( (gDebugger & 0x1000) != 0 )
      {
        ConPrintf("\nProcess AML Debugger Request.\n");
        _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
        AMLIDebugger();
        v16 = ListEntry[26].Next;
      }
      v17 = (*((__int64 (__fastcall **)(PSLIST_ENTRY, _SLIST_ENTRY *, _QWORD))&v16[1].Next + 1))(
              ListEntry,
              v16,
              (unsigned int)v15);
      v15 = (_SLIST_ENTRY *)v17;
      if ( v17 == 32772 )
        break;
    }
    while ( v17 != 0x8000 );
    byte_1C00827B0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    Next = (unsigned int)ListEntry[4].Next;
    if ( (Next & 0x80u) == 0 || (_DWORD)v15 != 0x8000 )
    {
      Next &= ~0x10u;
      LODWORD(ListEntry[4].Next) = Next;
    }
  }
  while ( (Next & 8) != 0 );
  if ( (_DWORD)v15 == 32772 )
  {
    LODWORD(ListEntry[4].Next) = Next | 0x20;
    goto LABEL_34;
  }
  if ( (_DWORD)v15 == 0x8000 )
  {
    if ( !*((_QWORD *)&ListEntry[6].Next + 1) )
      LODWORD(ListEntry[4].Next) = Next & 0xFFFFFF7F;
    LODWORD(v15) = 0;
    goto LABEL_34;
  }
  KeReleaseSpinLock(&SpinLock, byte_1C00827B0);
  if ( !(_DWORD)v15 )
  {
    v18 = ListEntry[11].Next;
    v80 = v18;
    if ( v18 )
    {
      v19 = gpheapGlobal;
      v79 = gpheapGlobal;
      if ( v18 != &ListEntry[8] )
      {
        *v18 = ListEntry[8];
        v18[1] = ListEntry[9];
        v18[2].Next = ListEntry[10].Next;
        if ( ListEntry[10].Next != v15 )
        {
          v58 = (_SLIST_ENTRY *)NewObjData(v19, &ListEntry[8]);
          v18[2].Next = v58;
          if ( !v58 )
          {
            LODWORD(v15) = -1073741670;
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(0LL, 3221225626LL);
            PrintDebugMessage(43, 0, 0, 0, 0LL);
            goto LABEL_28;
          }
          memmove(v58, ListEntry[10].Next, *((unsigned int *)&ListEntry[9].Next + 2));
          v59 = WORD1(v18->Next);
          if ( v59 == 4 )
          {
            v60 = ListEntry[10].Next;
            v61 = 0;
            v62 = v18[2].Next;
            LODWORD(v62->Next) = v60->Next;
            if ( SLODWORD(v60->Next) > 0 )
            {
              v63 = &v62->Next + 1;
              do
              {
                LODWORD(v15) = DupObjData(v79, &v63[10 * v61], &v60->Next + 5 * v61 + 1);
                if ( (_DWORD)v15 )
                  break;
                ++v61;
              }
              while ( v61 < SLODWORD(v60->Next) );
              v18 = v80;
              v2 = (PSLIST_ENTRY)((char *)ListEntry + 392);
            }
          }
          else
          {
            v64 = v59 - 5;
            if ( !v64 )
              goto LABEL_139;
            v65 = v64 - 125;
            if ( !v65 )
            {
              v69 = v18[2].Next;
              if ( (gdwfAMLI & 4) != 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)&v69->Next[7]);
                v69 = v18[2].Next;
              }
              if ( (gdwfAMLI & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v69->Next + 1) + 112LL));
              goto LABEL_100;
            }
            v66 = v65 - 1;
            if ( v66 )
            {
              if ( v66 == 1 )
              {
                v68 = v18[2].Next;
                if ( (gdwfAMLI & 4) != 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v68->Next + 1) + 112LL));
                  v68 = v18[2].Next;
                }
                if ( (gdwfAMLI & 4) != 0 )
                  _InterlockedIncrement((volatile signed __int32 *)&v68->Next[7]);
              }
            }
            else
            {
LABEL_139:
              if ( (gdwfAMLI & 4) != 0 )
                _InterlockedIncrement((volatile signed __int32 *)&v18[2].Next->Next[7]);
            }
          }
LABEL_100:
          LOWORD(v18->Next) &= ~1u;
          _InterlockedExchange((volatile __int32 *)&v18->Next + 2, 0);
        }
      }
    }
  }
LABEL_28:
  v20 = (int)ListEntry[4].Next;
  if ( (v20 & 0x20) != 0 )
  {
    v46 = (_QWORD *)*((_QWORD *)&ListEntry[6].Next + 1);
    if ( v46 )
    {
      v47 = (__int64 (__fastcall *)())v46[11];
      v48 = v46[4];
      v49 = (_SLIST_ENTRY *)v46[12];
      v50 = v46[13];
    }
    else
    {
      v47 = (__int64 (__fastcall *)())*((_QWORD *)&ListEntry[10].Next + 1);
      v48 = *((_QWORD *)&ListEntry[4].Next + 1);
      v49 = ListEntry[11].Next;
      v50 = *((_QWORD *)&ListEntry[11].Next + 1);
    }
    if ( v47 == EvalMethodComplete )
    {
      LogSchedEvent(1146048069, (_DWORD)ListEntry, v48, (_DWORD)v15, v50);
      *(_DWORD *)v50 = (_DWORD)v15;
      *(_QWORD *)(v50 + 8) = ListEntry;
      KeSetEvent((PRKEVENT)(v50 + 16), 0, 0);
    }
    else if ( (_DWORD)v15 == 32771 )
    {
      RestartContext(ListEntry, 0LL);
    }
    else if ( v47 )
    {
      v51 = KeGetCurrentThread();
      v52 = *((_QWORD *)&ListEntry[25].Next + 1);
      v80 = (_SLIST_ENTRY *)(unsigned int)gReadyQueue;
      if ( (gDebugger & 0x8000) != 0 && qword_1C00828E0 )
      {
        v53 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00828D8 + 1, 1u);
        if ( (_DWORD)qword_1C00828D8 == 204 )
          v54 = v53 % 0xCC;
        else
          v54 = v53 % (unsigned int)qword_1C00828D8;
        v55 = 72LL * v54;
        *(_QWORD *)((char *)qword_1C00828E0 + v55 + 8) = MEMORY[0xFFFFF78000000008];
        v56 = v80;
        *(_DWORD *)((char *)qword_1C00828E0 + v55) = 1095975746;
        *(_QWORD *)((char *)qword_1C00828E0 + v55 + 16) = v51;
        *(_QWORD *)((char *)qword_1C00828E0 + v55 + 24) = v52;
        *(_QWORD *)((char *)qword_1C00828E0 + v55 + 32) = ListEntry;
        *(_QWORD *)((char *)qword_1C00828E0 + v55 + 40) = v56;
        *(_QWORD *)((char *)qword_1C00828E0 + v55 + 48) = v48;
        *(_QWORD *)((char *)qword_1C00828E0 + v55 + 56) = (int)v15;
        *(_QWORD *)((char *)qword_1C00828E0 + v55 + 64) = v50;
      }
      ((void (__fastcall *)(__int64, _QWORD, _SLIST_ENTRY *, __int64))v47)(v48 + 120, (unsigned int)v15, v49, v50);
    }
    v20 = (int)ListEntry[4].Next;
    if ( (v20 & 0x100) != 0 )
      LODWORD(v15) = 32772;
  }
  if ( (v20 & 0x200) != 0 )
    gReadyQueue &= ~0x200u;
  v21 = ListEntry + 3;
  while ( 1 )
  {
    v22 = v21->Next;
    if ( v21->Next == v21 )
      break;
    if ( *((_DWORD *)&v22[-2].Next + 2) == 1 )
    {
      ReleaseASLMutex(ListEntry, *((_QWORD *)&v22[-1].Next + 1), 0LL);
    }
    else
    {
      if ( *(&v22->Next + 1) != v21 )
        goto LABEL_158;
      v70 = v22->Next;
      if ( *(&v22->Next->Next + 1) != v22 )
        goto LABEL_158;
      v21->Next = v70;
      *((_QWORD *)&v70->Next + 1) = v21;
      HeapFree((_QWORD *)&v22[-2].Next + 1);
    }
  }
  v1 = 1;
  byte_1C00827B0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
LABEL_34:
  if ( !v75 )
  {
    v23 = v2->Next;
    if ( *(&v2->Next->Next + 1) != v2 )
      goto LABEL_158;
    v24 = (_SLIST_ENTRY **)*((_QWORD *)&v2->Next + 1);
    if ( *v24 != v2 )
      goto LABEL_158;
    *v24 = v23;
    *((_QWORD *)&v23->Next + 1) = v24;
    *((_QWORD *)&v2->Next + 1) = v2;
    v2->Next = v2;
    *((_QWORD *)&ListEntry[25].Next + 1) = 0LL;
  }
  if ( !v1 )
    goto LABEL_67;
  byte_1C0082BC8 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  v25 = ListEntry[1].Next;
  if ( *(&v25->Next + 1) != &ListEntry[1]
    || (v26 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry[1].Next + 1), *v26 != &ListEntry[1])
    || (*v26 = v25,
        v27 = ListEntry + 2,
        *((_QWORD *)&v25->Next + 1) = v26,
        v28 = ListEntry[2].Next,
        *(&v28->Next + 1) != &ListEntry[2])
    || (v29 = (_SLIST_ENTRY **)*((_QWORD *)&ListEntry[2].Next + 1), *v29 != v27) )
  {
LABEL_158:
    __fastfail(3u);
  }
  *v29 = v28;
  *((_QWORD *)&v28->Next + 1) = v29;
  *((_QWORD *)&ListEntry[2].Next + 1) = ListEntry + 2;
  v27->Next = v27;
  KeReleaseSpinLock(&gmutCtxtList, byte_1C0082BC8);
  if ( ((__int64)ListEntry[8].Next & 1) != 0 )
  {
    v67 = *((_QWORD *)&ListEntry[8].Next + 1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v67 & 8) != 0 )
      FreeData(v67);
  }
  else if ( ListEntry[10].Next && *((int *)&ListEntry[8].Next + 2) <= 0 )
  {
    if ( WORD1(ListEntry[8].Next) == 4 )
      FreeDataBuffs((__int64)(&ListEntry[10].Next->Next + 1), (unsigned int)ListEntry[10].Next->Next);
    FreeObjData((__int64)&ListEntry[8]);
  }
  ListEntry[8] = 0LL;
  ListEntry[9] = 0LL;
  ListEntry[10].Next = 0LL;
  v30 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  --gdwcCTObjs;
  KeReleaseSpinLock(&gdwGContextSpinLock, v30);
  if ( AcpiDiagHandle && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE) )
  {
    *(_QWORD *)&UserData.Size = 2LL;
    v71 = *((unsigned __int16 *)&ListEntry[27].Next + 4);
    v72 = (MEMORY[0xFFFFF78000000008] - *((_QWORD *)&ListEntry[28].Next + 1)) / 0x2710uLL;
    v76 = *((_WORD *)&ListEntry[27].Next + 4) >> 1;
    UserData.Ptr = (unsigned __int64)&v76;
    v83 = ListEntry[28].Next;
    v86 = &v77;
    v88 = &v81;
    v81 = v72;
    v84 = v71;
    v85 = 0;
    v77 = 0;
    v87 = 2LL;
    v89 = 8LL;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AML_METHOD_TRACE, 0LL, 4u, &UserData);
  }
  v31 = *((_QWORD *)&ListEntry[28].Next + 1);
  if ( v31
    && (unsigned int)((MEMORY[0xFFFFF78000000008] - v31) / 0x2710uLL) >= 0x3E8
    && (unsigned int)dword_1C007F0E8 > 5
    && (unsigned __int8)tlgKeywordOn(&dword_1C007F0E8) )
  {
    v92 = 2LL;
    v91 = v94;
    v93 = ListEntry[28].Next;
    v94[0] = *((unsigned __int16 *)&ListEntry[27].Next + 4);
    v95 = &v78;
    v94[1] = 0;
    v78 = v73;
    v96 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C007F0E8, (int)&dword_1C0072640, v73, v74, 5u, &v90);
  }
  v32 = ListEntry[29].Next;
  if ( v32 )
  {
    v33 = KeAcquireSpinLockRaiseToDpc(&AcpiWatchdogLock);
    v34 = v32->Next;
    if ( *((_BYTE *)&v32[5].Next + 8) || *((_BYTE *)&v34[29].Next + 8) )
    {
      *((_BYTE *)&v32[5].Next + 8) = 0;
      if ( !KeCancelTimer((PKTIMER)(&v32[6].Next + 1)) )
      {
        if ( *((_BYTE *)&v34[29].Next + 8) )
          AcpiQueueRecordBlackboxInformation();
        else
          AmliWatchdogTimeoutAction(v32);
      }
    }
    KeReleaseSpinLock(&AcpiWatchdogLock, v33);
    ExFreePoolWithTag(ListEntry[29].Next, 0);
  }
  v35 = ListEntry[28].Next;
  if ( v35 )
    ExFreePoolWithTag(v35, 0);
  v36 = *((_QWORD *)&ListEntry[4].Next + 1);
  if ( v36 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v36 + 64) |= 4u;
      if ( (*(_WORD *)(v36 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects(v36);
    }
    *((_QWORD *)&ListEntry[4].Next + 1) = 0LL;
  }
  v37 = *((_QWORD *)&ListEntry[26].Next + 1);
  if ( v37 )
  {
    DereferenceObjectEx(v37);
    *((_QWORD *)&ListEntry[26].Next + 1) = 0LL;
  }
  v38 = ListEntry[5].Next;
  if ( v38 )
  {
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)&v38[7], 0xFFFFFFFF) == 1 )
    {
      LOWORD(v38[4].Next) |= 4u;
      if ( ((__int64)v38[4].Next & 0x40) == 0 )
        FreeNameSpaceObjects((unsigned __int64)v38);
    }
    ListEntry[5].Next = 0LL;
  }
  v39 = *((_QWORD *)&ListEntry[31].Next + 1);
  if ( v39 )
  {
    do
    {
      v57 = *(_QWORD *)(v39 + 24);
      ++dword_1C0082C1C;
      if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C0082C10 )
      {
        ++dword_1C0082C20;
        ((void (__fastcall *)(__int64))qword_1C0082C38)(v39);
      }
      else
      {
        ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, (PSLIST_ENTRY)v39);
      }
      v39 = v57;
    }
    while ( v57 );
  }
  ++dword_1C0082C1C;
  if ( ExQueryDepthSList(&AMLIContextLookAsideList) >= (unsigned __int16)word_1C0082C10 )
  {
    ++dword_1C0082C20;
    ((void (__fastcall *)(PSLIST_ENTRY))qword_1C0082C38)(ListEntry);
  }
  else
  {
    ExpInterlockedPushEntrySList(&AMLIContextLookAsideList, ListEntry);
  }
LABEL_67:
  if ( (gReadyQueue & 4) != 0 && glistCtxtHead == (_UNKNOWN *)&glistCtxtHead )
  {
    gReadyQueue = gReadyQueue & 0xFFFFFFF3 | 8;
    if ( (__int64 *)qword_1C00827E0 != &qword_1C00827E0 )
    {
      InvokePauseCallbacks();
      LogSchedEvent(1346454338, 0, (_DWORD)ListEntry, (_DWORD)v15, 0LL);
    }
  }
  v40 = KeGetCurrentThread();
  v41 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C00828E0 )
  {
    v42 = _InterlockedExchangeAdd((_DWORD *)&qword_1C00828D8 + 1, 1u);
    if ( (_DWORD)qword_1C00828D8 == 204 )
      v43 = v42 % 0xCC;
    else
      v43 = v42 % (unsigned int)qword_1C00828D8;
    v44 = 72LL * v43;
    *(_QWORD *)((char *)qword_1C00828E0 + v44 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C00828E0 + v44) = 1381322273;
    *(_QWORD *)((char *)qword_1C00828E0 + v44 + 16) = v40;
    *(_QWORD *)((char *)qword_1C00828E0 + v44 + 24) = 0LL;
    *(_QWORD *)((char *)qword_1C00828E0 + v44 + 32) = 0LL;
    *(_QWORD *)((char *)qword_1C00828E0 + v44 + 40) = v41;
    *(_QWORD *)((char *)qword_1C00828E0 + v44 + 48) = ListEntry;
    *(_QWORD *)((char *)qword_1C00828E0 + v44 + 56) = (int)v15;
    *(_QWORD *)((char *)qword_1C00828E0 + v44 + 64) = 0LL;
  }
  return (unsigned int)v15;
}
