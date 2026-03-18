/*
 * XREFs of ParseCall @ 0x1C00123D0
 * Callers:
 *     <none>
 * Callees:
 *     ParseArg @ 0x1C000B10C (ParseArg.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     DupObjData @ 0x1C00169A0 (DupObjData.c)
 *     HeapInsertFreeList @ 0x1C0017940 (HeapInsertFreeList.c)
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     ParseRelease @ 0x1C0024F10 (ParseRelease.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     PerformNativeMethodCall @ 0x1C00659C8 (PerformNativeMethodCall.c)
 *     MoveObjData @ 0x1C0066938 (MoveObjData.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseCall(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // eax
  bool v10; // zf
  void *v11; // rax
  void *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rax
  _QWORD *v20; // rdx
  char v21; // al
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // ecx
  _BYTE *v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rsi
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  KIRQL v32; // al
  __int64 v33; // rbx
  struct _EX_RUNDOWN_REF *v34; // rsi
  struct _EX_RUNDOWN_REF *v35; // rbx
  unsigned __int64 Count; // r8
  struct _EX_RUNDOWN_REF *v37; // rax
  struct _EX_RUNDOWN_REF *i; // rdx
  struct _EX_RUNDOWN_REF **v39; // rcx
  _QWORD *v40; // r9
  __int64 v41; // rcx
  struct _EX_RUNDOWN_REF *v42; // rax
  struct _EX_RUNDOWN_REF *v43; // r9
  struct _EX_RUNDOWN_REF *v44; // rbx
  unsigned __int64 v45; // rcx
  struct _EX_RUNDOWN_REF **v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  _QWORD *v49; // rdi
  _QWORD *v50; // rbx
  __int64 v51; // r8
  _QWORD *v52; // rax
  _QWORD *j; // rdx
  _QWORD *v54; // rcx
  _QWORD *v55; // r9
  __int64 v56; // rcx
  _QWORD *v57; // rax
  _QWORD *v58; // r9
  _QWORD *v59; // rbx
  __int64 v60; // rdx
  _QWORD *v61; // rax
  unsigned int v63; // ecx
  unsigned int v64; // edx
  __int64 v65; // r8
  bool v66; // cf
  __int64 v67; // rax
  unsigned int v68; // eax
  __int64 v69; // rsi
  __int64 v70; // rsi
  __int64 v71; // rcx
  __int64 Ptr_high; // r10
  __int64 v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // r10
  __int64 v76; // rcx
  _QWORD *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  struct _EX_RUNDOWN_REF **v84; // rax
  __int64 v85; // rcx
  _QWORD *v86; // rax
  __int128 v87; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v88; // [rsp+40h] [rbp-C0h]
  __int64 v89; // [rsp+50h] [rbp-B0h]
  __int128 v90; // [rsp+58h] [rbp-A8h]
  struct _KDPC Dpc; // [rsp+70h] [rbp-90h] BYREF
  struct _KTIMER Timer; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v93; // [rsp+138h] [rbp+38h]
  __int64 v94; // [rsp+148h] [rbp+48h]

  v3 = a3;
  if ( a3 )
    v6 = 5;
  else
    v6 = *(_DWORD *)(a2 + 16) & 0xF;
  v7 = *(_QWORD *)(a2 + 48);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 96);
  else
    v8 = 0LL;
  v93 = v8;
  if ( v6 == 5 )
    goto LABEL_22;
  switch ( v6 )
  {
    case 0:
      ++*(_DWORD *)(a2 + 16);
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("(");
      goto LABEL_66;
    case 1:
LABEL_66:
      v63 = *(_DWORD *)(a2 + 56);
      if ( v63 < *(_DWORD *)(a2 + 60) )
        goto LABEL_67;
      if ( v3 || a2 != a1[52] )
        return v3;
      v63 = *(_DWORD *)(a2 + 56);
      v66 = v63 < *(_DWORD *)(a2 + 60);
      break;
    case 2:
      goto LABEL_7;
    case 3:
      goto LABEL_9;
    case 4:
      goto LABEL_19;
    case 6:
      goto LABEL_53;
    default:
      return v3;
  }
  while ( v66 )
  {
LABEL_67:
    v64 = v63;
    if ( (gDebugger & 0xD0) != 0 && v63 )
    {
      ConPrintf(",");
      v64 = *(_DWORD *)(a2 + 56);
    }
    v65 = *(_QWORD *)(a2 + 64) + 40LL * v64;
    *(_DWORD *)(a2 + 56) = v64 + 1;
    v3 = ParseArg((__int64)a1, 67, v65, 0LL);
    if ( v3 || a2 != a1[52] )
      return v3;
    v63 = *(_DWORD *)(a2 + 56);
    v66 = v63 < *(_DWORD *)(a2 + 60);
  }
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf(")");
  ++*(_DWORD *)(a2 + 16);
LABEL_7:
  ++*(_DWORD *)(a2 + 16);
  if ( !v8 )
  {
    v3 = -1072431101;
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(a1, 3222536195LL);
    PrintDebugMessage(123, 0, 0, 0, 0LL);
    return v3;
  }
  if ( (*(_BYTE *)(v8 + 193) & 8) != 0 )
  {
    v67 = HeapAlloc(a1 + 60, 1297237576LL, 64LL);
    if ( v67 )
    {
      v3 = 0;
      *(_QWORD *)(v67 + 8) = a1[52];
      a1[52] = v67;
      *(_DWORD *)v67 = 1179730753;
      *(_QWORD *)(v67 + 24) = ParseAcquire;
      *(_QWORD *)(v67 + 32) = v8;
      *(_WORD *)(v67 + 40) = -1;
      *(_QWORD *)(v67 + 48) = *(_QWORD *)(a2 + 392);
      return v3;
    }
LABEL_121:
    v3 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return v3;
  }
LABEL_9:
  v9 = *(_DWORD *)(a2 + 16) + 1;
  v10 = *(_DWORD *)a2 == 1280065859;
  *(_DWORD *)(a2 + 16) = v9;
  if ( v10 && (v9 & 0x80000) != 0 )
  {
    *(_QWORD *)(a2 + 32) = a1[12];
    a1[12] = a2;
    *(_DWORD *)(a2 + 16) |= 0x40000u;
    v3 = PerformNativeMethodCall(0LL, a1, a2);
    if ( v3 == 32772 )
      return v3;
    goto LABEL_19;
  }
  if ( (v9 & 0x10000) != 0 )
    *(_DWORD *)(a2 + 16) = v9 | 0x20000;
  v11 = (void *)HeapAlloc(a1[40], 1314344776LL, 64LL);
  v12 = v11;
  if ( !v11 )
  {
    v3 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(113, 0, 0, 0, 0LL);
LABEL_19:
    v23 = *(_DWORD *)(a2 + 16) + 1;
    v10 = *(_DWORD *)a2 == 1280065859;
    *(_DWORD *)(a2 + 16) = v23;
    if ( v10 && (v23 & 0x80000) != 0 )
      v3 = PerformNativeMethodCall(1LL, a1, a2);
LABEL_22:
    v24 = 0;
    v25 = *(_DWORD *)(a2 + 16) + 1;
    *(_DWORD *)(a2 + 16) = v25;
    if ( v3 != 32770 )
      v24 = v3;
    v3 = v24;
    if ( *(_DWORD *)a2 == 1280065859 && (v25 & 0x80000) != 0 )
    {
      if ( (v25 & 0x40000) == 0 )
        goto LABEL_47;
      v79 = *(_QWORD *)(a2 + 392);
      v80 = a1[40];
      v87 = 0LL;
      v89 = 0LL;
      v88 = 0LL;
      DupObjData(v80, &v87, v79);
      PerformNativeMethodCall(2LL, a1, a2);
      MoveObjData(*(_QWORD *)(a2 + 392), &v87);
      a1[11] = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v26 = *(_BYTE **)(a2 + 392);
      if ( (*v26 & 1) != 0 )
      {
        v81 = a1[40];
        v87 = 0LL;
        v89 = 0LL;
        v88 = 0LL;
        v3 = DupObjData(v81, &v87, v26);
        if ( (v3 & 0x80000000) != 0 )
          return v3;
        FreeDataBuffs(*(_QWORD *)(a2 + 392), 1LL);
        MoveObjData(*(_QWORD *)(a2 + 392), &v87);
      }
      v27 = a2 + 72;
      v28 = 8LL;
      do
      {
        if ( (*(_BYTE *)v27 & 1) != 0 )
        {
          v82 = *(_QWORD *)(v27 + 8);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v82 + 8), 0xFFFFFFFF) == 1
            && (*(_BYTE *)v82 & 8) != 0 )
          {
            ((void (*)(void))FreeData)();
          }
        }
        else if ( *(_QWORD *)(v27 + 32) && *(int *)(v27 + 8) <= 0 )
        {
          if ( *(_WORD *)(v27 + 2) == 4 )
            FreeDataBuffs(*(_QWORD *)(v27 + 32) + 8LL, **(unsigned int **)(v27 + 32));
          FreeObjData(v27);
        }
        *(_OWORD *)v27 = 0LL;
        *(_OWORD *)(v27 + 16) = 0LL;
        *(_QWORD *)(v27 + 32) = 0LL;
        v27 += 40LL;
        --v28;
      }
      while ( v28 );
      if ( (*(_DWORD *)(a2 + 16) & 0x40000) != 0 )
      {
        v29 = (_QWORD *)a1[11];
        byte_1C0082260 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
        v30 = *v29;
        if ( *(_QWORD **)(*v29 + 8LL) != v29 )
          goto LABEL_114;
        v31 = (_QWORD *)v29[1];
        if ( (_QWORD *)*v31 != v29 )
          goto LABEL_114;
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        KeReleaseSpinLock(&gmutOwnerList, byte_1C0082260);
        v32 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
        v33 = v29[3];
        if ( v33 )
        {
          do
          {
            v70 = *(_QWORD *)(v33 + 56);
            ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
            if ( (gdwfAMLI & 4) != 0 )
              AMLIDereferenceHandleEx((volatile signed __int32 *)(v33 + 120));
            else
              FreeNameSpaceObjects(v33);
            v32 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
            v33 = v70;
          }
          while ( v70 );
        }
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v32);
        v34 = (struct _EX_RUNDOWN_REF *)a1[11];
        memset(&Dpc, 0, 60);
        memset(&Timer, 0, sizeof(Timer));
        if ( (gdwfAMLI & 4) != 0 )
        {
          KeInitializeTimer(&Timer);
          KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, v34);
          KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
          ExWaitForRundownProtectionRelease(v34 + 4);
          KeCancelTimer(&Timer);
          HeapFree(v34);
        }
        else
        {
          v35 = v34 - 2;
          LODWORD(v34[-2].Count) = 0;
          byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          Count = v34[-1].Count;
          v37 = *(struct _EX_RUNDOWN_REF **)(Count + 40);
          for ( i = (struct _EX_RUNDOWN_REF *)(Count + 40); v37 != i; v37 = (struct _EX_RUNDOWN_REF *)v37->Count )
          {
            if ( v34 < v37 )
              break;
          }
          v39 = (struct _EX_RUNDOWN_REF **)v37[1].Count;
          if ( *v39 != v37 )
            goto LABEL_114;
          v34[1].Count = (unsigned __int64)v39;
          v34->Count = (unsigned __int64)v37;
          *v39 = v34;
          v37[1].Count = (unsigned __int64)v34;
          v40 = (_QWORD *)v34->Count;
          v41 = v34->Count - 16;
          if ( (struct _EX_RUNDOWN_REF *)v34->Count != i )
          {
            Ptr_high = HIDWORD(v35->Ptr);
            if ( (struct _EX_RUNDOWN_REF *)v41 == (struct _EX_RUNDOWN_REF *)((char *)v35 + Ptr_high) )
            {
              HIDWORD(v35->Ptr) = Ptr_high + *(_DWORD *)(v41 + 4);
              v73 = *v40;
              if ( *(_QWORD **)(*v40 + 8LL) != v40 )
                goto LABEL_114;
              v74 = (_QWORD *)v40[1];
              if ( (_QWORD *)*v74 != v40 )
                goto LABEL_114;
              *v74 = v73;
              *(_QWORD *)(v73 + 8) = v74;
            }
          }
          v42 = (struct _EX_RUNDOWN_REF *)v35[3].Count;
          v43 = v42 - 2;
          if ( v42 != i )
          {
            v71 = HIDWORD(v43->Ptr);
            if ( v35 == (struct _EX_RUNDOWN_REF *)((char *)v43 + v71) )
            {
              HIDWORD(v43->Ptr) = HIDWORD(v35->Ptr) + v71;
              v83 = v34->Count;
              if ( *(struct _EX_RUNDOWN_REF **)(v34->Count + 8) != v34 )
                goto LABEL_114;
              v84 = (struct _EX_RUNDOWN_REF **)v34[1].Count;
              if ( *v84 != v34 )
                goto LABEL_114;
              *v84 = (struct _EX_RUNDOWN_REF *)v83;
              v35 = v43;
              *(_QWORD *)(v83 + 8) = v84;
            }
          }
          if ( *(_QWORD *)(Count + 32) <= (unsigned __int64)v35 + HIDWORD(v35->Ptr) )
          {
            *(_QWORD *)(Count + 32) = v35;
            v44 = v35 + 2;
            v45 = v44->Count;
            if ( *(struct _EX_RUNDOWN_REF **)(v44->Count + 8) != v44 )
              goto LABEL_114;
            v46 = (struct _EX_RUNDOWN_REF **)v44[1].Count;
            if ( *v46 != v44 )
              goto LABEL_114;
            *v46 = (struct _EX_RUNDOWN_REF *)v45;
            *(_QWORD *)(v45 + 8) = v46;
          }
          KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
        }
      }
      else if ( *(_QWORD *)(a2 + 48) )
      {
        goto LABEL_47;
      }
      a1[11] = *(_QWORD *)(a2 + 40);
    }
    a1[12] = *(_QWORD *)(a2 + 32);
LABEL_47:
    v47 = *(_QWORD *)(a2 + 48);
    if ( v47 )
    {
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v47 + 64) |= 4u;
        if ( (*(_WORD *)(v47 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v47);
      }
      *(_QWORD *)(a2 + 48) = 0LL;
    }
    v48 = *(_QWORD *)(a2 + 64);
    if ( v48 )
    {
      v68 = *(_DWORD *)(a2 + 60);
      if ( v68 )
      {
        v69 = v68;
        do
        {
          FreeData(v48);
          v48 += 40LL;
          --v69;
        }
        while ( v69 );
        v48 = *(_QWORD *)(a2 + 64);
      }
      *(_DWORD *)(v48 - 16) = 0;
      byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      HeapInsertFreeList(*(_QWORD *)(v48 - 8), v48 - 16);
      KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
    }
    if ( (*(_DWORD *)(a2 + 16) & 0x20000) != 0 )
    {
      v87 = 0x464C4552uLL;
      v88 = 0x60000uLL;
      v90 = 0LL;
      v89 = v8;
      ParseRelease(a1, &v87, 0LL);
    }
LABEL_53:
    v49 = (_QWORD *)a1[52];
    v50 = v49 - 2;
    a1[52] = v49[1];
    *((_DWORD *)v49 - 4) = 0;
    byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v51 = *(v49 - 1);
    v52 = *(_QWORD **)(v51 + 40);
    for ( j = (_QWORD *)(v51 + 40); v52 != j; v52 = (_QWORD *)*v52 )
    {
      if ( v49 < v52 )
        break;
    }
    v54 = (_QWORD *)v52[1];
    if ( (_QWORD *)*v54 == v52 )
    {
      v49[1] = v54;
      *v49 = v52;
      *v54 = v49;
      v52[1] = v49;
      v55 = (_QWORD *)*v49;
      v56 = *v49 - 16LL;
      if ( (_QWORD *)*v49 != j )
      {
        v75 = *((unsigned int *)v50 + 1);
        if ( (_QWORD *)v56 == (_QWORD *)((char *)v50 + v75) )
        {
          *((_DWORD *)v50 + 1) = v75 + *(_DWORD *)(v56 + 4);
          v76 = *v55;
          if ( *(_QWORD **)(*v55 + 8LL) != v55 )
            goto LABEL_114;
          v77 = (_QWORD *)v55[1];
          if ( (_QWORD *)*v77 != v55 )
            goto LABEL_114;
          *v77 = v76;
          *(_QWORD *)(v76 + 8) = v77;
        }
      }
      v57 = (_QWORD *)v50[3];
      v58 = v57 - 2;
      if ( v57 != j )
      {
        v78 = *((unsigned int *)v58 + 1);
        if ( v50 == (_QWORD *)((char *)v58 + v78) )
        {
          *((_DWORD *)v58 + 1) = *((_DWORD *)v50 + 1) + v78;
          v85 = *v49;
          if ( *(_QWORD **)(*v49 + 8LL) != v49 )
            goto LABEL_114;
          v86 = (_QWORD *)v49[1];
          if ( (_QWORD *)*v86 != v49 )
            goto LABEL_114;
          *v86 = v85;
          v50 = v58;
          *(_QWORD *)(v85 + 8) = v86;
        }
      }
      if ( *(_QWORD *)(v51 + 32) > (unsigned __int64)v50 + *((unsigned int *)v50 + 1) )
      {
LABEL_61:
        KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
        return v3;
      }
      *(_QWORD *)(v51 + 32) = v50;
      v59 = v50 + 2;
      v60 = *v59;
      if ( *(_QWORD **)(*v59 + 8LL) == v59 )
      {
        v61 = (_QWORD *)v59[1];
        if ( (_QWORD *)*v61 == v59 )
        {
          *v61 = v60;
          *(_QWORD *)(v60 + 8) = v61;
          goto LABEL_61;
        }
      }
    }
LABEL_114:
    __fastfail(3u);
  }
  memset(v11, 0, 0x40uLL);
  *((_DWORD *)v12 + 4) = 1380865871;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)v12 + 4);
  KeInitializeSpinLock((PKSPIN_LOCK)v12 + 5);
  byte_1C0082260 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
  v13 = off_1C007E3A0;
  if ( *(_UNKNOWN ***)off_1C007E3A0 != &glistObjOwners )
    goto LABEL_114;
  *(_QWORD *)v12 = &glistObjOwners;
  *((_QWORD *)v12 + 1) = v13;
  *v13 = v12;
  off_1C007E3A0 = v12;
  KeReleaseSpinLock(&gmutOwnerList, byte_1C0082260);
  *(_QWORD *)(a2 + 40) = a1[11];
  v3 = 0;
  v14 = a1[12];
  a1[11] = v12;
  *(_QWORD *)(a2 + 32) = v14;
  a1[12] = a2;
  *(_DWORD *)(a2 + 16) |= 0x40000u;
  v15 = *(_QWORD *)(a2 + 392);
  v16 = *(_QWORD *)(a2 + 48);
  v17 = a1[40];
  v94 = a1[15];
  v18 = *(_QWORD *)(v16 + 96) + *(unsigned int *)(v16 + 88);
  v19 = HeapAlloc(a1 + 60, 1297237576LL, 80LL);
  v20 = (_QWORD *)v19;
  if ( !v19 )
    goto LABEL_121;
  *(_QWORD *)(v19 + 8) = a1[52];
  a1[52] = v19;
  *(_DWORD *)v19 = 1347371859;
  *(_QWORD *)(v19 + 24) = ParseScope;
  a1[15] = v93 + 194;
  *(_QWORD *)(v19 + 32) = v18;
  *(_QWORD *)(v19 + 40) = v94;
  *(_QWORD *)(v19 + 48) = a1[10];
  v21 = gdwfAMLI;
  a1[10] = v16;
  if ( (v21 & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 112));
  v20[7] = a1[11];
  v22 = a1[40];
  a1[11] = v12;
  v20[8] = v22;
  a1[40] = v17;
  v20[9] = v15;
  return v3;
}
