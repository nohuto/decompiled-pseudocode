/*
 * XREFs of ParseScope @ 0x1C0014A90
 * Callers:
 *     <none>
 * Callees:
 *     CopyObjData @ 0x1C000A900 (CopyObjData.c)
 *     ParseIntObj @ 0x1C000B2AC (ParseIntObj.c)
 *     ParseNameObj @ 0x1C000BCC4 (ParseNameObj.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     ParseString @ 0x1C0027434 (ParseString.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintIndent @ 0x1C0067C48 (PrintIndent.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseScope(_QWORD *a1, __int64 a2, __int64 a3, PVOID *a4)
{
  unsigned int v4; // ebx
  PVOID *v7; // r14
  _WORD *v8; // rax
  __int64 v9; // rbx
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r15
  PVOID *v13; // rax
  __int64 v14; // r12
  _WORD *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v23; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rsi
  _QWORD *v30; // rdi
  __int64 v31; // r8
  _QWORD *v32; // rax
  _QWORD *i; // rdx
  _QWORD *v34; // rcx
  _QWORD *v35; // r9
  __int64 v36; // rcx
  _QWORD *v37; // rax
  _QWORD *v38; // r9
  _QWORD *v39; // rdi
  __int64 v40; // rdx
  _QWORD *v41; // rax
  unsigned int v42; // ecx
  _QWORD *v43; // rax
  __int64 v44; // r10
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  bool v49; // zf
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // r9
  int v56; // edi
  __int64 v57; // r9
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  _QWORD *v61; // rax

  v4 = a3;
  if ( (_DWORD)a3 && (_DWORD)a3 != 32769 && (_DWORD)a3 != 32774 )
    goto LABEL_41;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0xF) != 2 )
        return v4;
LABEL_41:
      if ( (gDebugger & 0xD0) != 0 )
      {
        --dword_1C00819C4;
        PrintIndent(a1, -1LL, a3, a4);
        ConPrintf("}");
      }
      v26 = a1[10];
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v26 + 64) |= 4u;
        if ( (*(_WORD *)(v26 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v26);
      }
      a1[10] = *(_QWORD *)(a2 + 48);
      v27 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a2 + 48) = 0LL;
      a1[11] = v27;
      a1[40] = *(_QWORD *)(a2 + 64);
      v28 = *(_QWORD *)(a2 + 40);
      if ( v28 )
        a1[15] = v28;
      v29 = (_QWORD *)a1[52];
      v30 = v29 - 2;
      a1[52] = v29[1];
      *((_DWORD *)v29 - 4) = 0;
      byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v31 = *(v29 - 1);
      v32 = *(_QWORD **)(v31 + 40);
      for ( i = (_QWORD *)(v31 + 40); v32 != i; v32 = (_QWORD *)*v32 )
      {
        if ( v29 < v32 )
          break;
      }
      v34 = (_QWORD *)v32[1];
      if ( (_QWORD *)*v34 == v32 )
      {
        v29[1] = v34;
        *v29 = v32;
        *v34 = v29;
        v32[1] = v29;
        v35 = (_QWORD *)*v29;
        v36 = *v29 - 16LL;
        if ( (_QWORD *)*v29 != i )
        {
          v44 = *((unsigned int *)v30 + 1);
          if ( (_QWORD *)v36 == (_QWORD *)((char *)v30 + v44) )
          {
            *((_DWORD *)v30 + 1) = v44 + *(_DWORD *)(v36 + 4);
            v45 = *v35;
            if ( *(_QWORD **)(*v35 + 8LL) != v35 )
              goto LABEL_129;
            v46 = (_QWORD *)v35[1];
            if ( (_QWORD *)*v46 != v35 )
              goto LABEL_129;
            *v46 = v45;
            *(_QWORD *)(v45 + 8) = v46;
          }
        }
        v37 = (_QWORD *)v30[3];
        v38 = v37 - 2;
        if ( v37 != i )
        {
          v47 = *((unsigned int *)v38 + 1);
          if ( v30 == (_QWORD *)((char *)v38 + v47) )
          {
            *((_DWORD *)v38 + 1) = *((_DWORD *)v30 + 1) + v47;
            v60 = *v29;
            if ( *(_QWORD **)(*v29 + 8LL) != v29 )
              goto LABEL_129;
            v61 = (_QWORD *)v29[1];
            if ( (_QWORD *)*v61 != v29 )
              goto LABEL_129;
            *v61 = v60;
            v30 = v38;
            *(_QWORD *)(v60 + 8) = v61;
          }
        }
        if ( *(_QWORD *)(v31 + 32) > (unsigned __int64)v30 + *((unsigned int *)v30 + 1) )
        {
LABEL_54:
          KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
          return v4;
        }
        *(_QWORD *)(v31 + 32) = v30;
        v39 = v30 + 2;
        v40 = *v39;
        if ( *(_QWORD **)(*v39 + 8LL) == v39 )
        {
          v41 = (_QWORD *)v39[1];
          if ( (_QWORD *)*v41 == v39 )
          {
            *v41 = v40;
            *(_QWORD *)(v40 + 8) = v41;
            goto LABEL_54;
          }
        }
      }
LABEL_129:
      __fastfail(3u);
    }
  }
  else
  {
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("{");
      ++dword_1C00819C4;
      v25 = *(_DWORD *)(a2 + 16) | 0x10000;
    }
    else
    {
      v25 = *(_DWORD *)(a2 + 16);
    }
    *(_DWORD *)(a2 + 16) = v25 + 1;
  }
  v7 = (PVOID *)(a1 + 15);
LABEL_5:
  a4 = &qword_1C0081AA0;
  if ( v4 == 32769 )
  {
    *v7 = *(PVOID *)(a2 + 32);
    v49 = (*(_DWORD *)(a2 + 16) & 0x20000) == 0;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
    if ( !v49 )
      v4 = 0;
    goto LABEL_63;
  }
  if ( v4 == 32774 )
  {
    *v7 = *(PVOID *)(a2 + 32);
    v59 = 0;
    if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
      v59 = 32774;
    v4 = v59;
    goto LABEL_63;
  }
  v8 = *v7;
  if ( (unsigned __int64)*v7 >= *(_QWORD *)(a2 + 32) )
    goto LABEL_59;
  do
  {
    qword_1C00819D0 = (__int64)v8;
    if ( (gDebugger & 0xD0) != 0 )
    {
      v50 = *(unsigned int *)(a2 + 16);
      if ( (v50 & 0x10000) != 0 )
      {
        *(_DWORD *)(a2 + 16) = v50 & 0xFFFEFFFF;
      }
      else if ( (gDebugger & 0x80u) != 0 )
      {
        _InterlockedAnd(&gDebugger, 0xFFFFFF7F);
        AMLIDebugger(v50, -1LL, a3);
      }
    }
    if ( (gDebugger & 0xD0) != 0 && (unsigned __int8)(*(_BYTE *)*v7 - 18) > 1u )
      PrintIndent(a1, -1LL, a3, &qword_1C0081AA0);
    v9 = *(_QWORD *)(a2 + 72);
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      v48 = *(_QWORD *)(v9 + 8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v48 & 8) != 0 )
        FreeData(v48);
    }
    else if ( *(_QWORD *)(v9 + 32) && *(int *)(v9 + 8) <= 0 )
    {
      if ( *(_WORD *)(v9 + 2) == 4 )
        FreeDataBuffs(*(_QWORD *)(v9 + 32) + 8LL, **(unsigned int **)(v9 + 32));
      FreeObjData(v9);
    }
    *(_OWORD *)v9 = 0LL;
    v10 = 0;
    *(_OWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    v11 = 0LL;
    v12 = *(_QWORD *)(a2 + 72);
    v13 = (PVOID *)&unk_1C0081A00;
    v14 = *(_QWORD *)(a2 + 32);
    do
    {
      if ( *v7 == *v13 )
        break;
      ++v10;
      ++v11;
      v13 += 2;
    }
    while ( (__int64)v13 < (__int64)&qword_1C0081AA0 );
    if ( v10 != 10 && (dword_1C00819F8[4 * v11] & 1) != 0 && v10 != -1 )
    {
      ConPrintf("\nHit Breakpoint %d.\n");
      AMLIDebugger(v52, v51, v53);
    }
    v15 = *v7;
    v16 = *(unsigned __int8 *)*v7;
    if ( (_BYTE)v16 == 91 )
    {
      v17 = 0LL;
      *v7 = (char *)v15 + 1;
      v43 = &ExOpcodeTable;
      if ( &atMutex )
      {
        while ( *((unsigned __int8 *)v15 + 1) != *(_DWORD *)v43 )
        {
          v43 += 2;
          if ( !v43[1] )
            goto LABEL_18;
        }
        v17 = v43[1];
      }
    }
    else
    {
      v17 = (__int64)*(&OpcodeTable + v16);
    }
LABEL_18:
    if ( !v17 )
    {
      LogError(3222536193LL);
      AcpiDiagTraceAmlError(a1, 3222536193LL);
      PrintDebugMessage(134, *(unsigned __int8 *)*v7, (unsigned int)*v7, 0, 0LL);
      v4 = -1072431103;
LABEL_60:
      if ( a2 != a1[52] )
        return v4;
      if ( v4 || (unsigned __int64)*v7 >= *(_QWORD *)(a2 + 32) )
        goto LABEL_63;
      goto LABEL_5;
    }
    v18 = *(_DWORD *)(v17 + 28);
    if ( (v18 & 8) != 0 )
    {
      v4 = ParseIntObj((__int64)a1, (_WORD **)v7, v12, 0);
    }
    else if ( (v18 & 0x10) != 0 )
    {
      v4 = ParseString(a1, v7, v12, 0LL);
    }
    else if ( (v18 & 2) != 0 )
    {
      v4 = 0;
      v54 = a1[12];
      v55 = (unsigned int)*(unsigned __int8 *)*v7 - 104;
      v56 = v55;
      if ( (unsigned int)v55 < *(_DWORD *)(v54 + 60) )
      {
        CopyObjData(v12, *(_QWORD *)(v54 + 64) + 40 * v55);
        *v7 = (char *)*v7 + 1;
        if ( (gDebugger & 0xD0) != 0 )
        {
          ConPrintf("Arg%d=");
          PrintObject(v12);
        }
      }
      else
      {
        LogError(3222536197LL);
        AcpiDiagTraceAmlError(a1, 3222536197LL);
        PrintDebugMessage(122, v56, 0, 0, 0LL);
        v4 = -1072431099;
      }
    }
    else
    {
      if ( (v18 & 4) != 0 )
      {
        v57 = (unsigned int)*(unsigned __int8 *)*v7 - 96;
        CopyObjData(v12, a1[12] + 8 * (v57 + 4 * v57 + 9));
        if ( (gDebugger & 0xD0) != 0 )
        {
          ConPrintf("Local%d=");
          PrintObject(v12);
        }
        *v7 = (char *)*v7 + 1;
        v4 = 0;
        goto LABEL_34;
      }
      if ( (v18 & 0x20) != 0 )
      {
        v4 = ParseNameObj((__int64)a1, v12);
        goto LABEL_33;
      }
      if ( (v18 & 0x40) != 0 )
      {
        LogError(3222536198LL);
        AcpiDiagTraceAmlError(a1, 3222536198LL);
        PrintDebugMessage(133, 0, 0, 0, 0LL);
        v4 = -1072431098;
        goto LABEL_60;
      }
      *v7 = (char *)*v7 + 1;
      v19 = HeapAlloc(a1 + 60, 1297237576LL, 96LL);
      v20 = v19;
      if ( v19 )
      {
        v4 = 0;
        *(_QWORD *)(v19 + 8) = a1[52];
        a1[52] = v19;
        *(_DWORD *)v19 = 1297237332;
        *(_QWORD *)(v19 + 24) = ParseTerm;
        *(_QWORD *)(v19 + 32) = v15;
        *(_QWORD *)(v19 + 48) = v14;
        *(_QWORD *)(v19 + 56) = v17;
        *(_QWORD *)(v19 + 88) = v12;
        v21 = *(_QWORD *)(v17 + 16);
        if ( v21 )
        {
          v22 = -1LL;
          do
            ++v22;
          while ( *(_BYTE *)(v21 + v22) );
          *(_DWORD *)(v20 + 76) = v22;
          if ( (_DWORD)v22 )
          {
            v23 = (void *)HeapAlloc(a1[40], 1413563464LL, (unsigned int)(40 * v22));
            *(_QWORD *)(v20 + 80) = v23;
            if ( v23 )
            {
              memset(v23, 0, 40LL * *(unsigned int *)(v20 + 76));
            }
            else
            {
              LogError(3221225626LL);
              AcpiDiagTraceAmlError(a1, 3221225626LL);
              PrintDebugMessage(154, 0, 0, 0, 0LL);
              v4 = -1073741670;
            }
          }
        }
        else
        {
          *(_DWORD *)(v19 + 76) = 0;
        }
      }
      else
      {
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
        v4 = -1072431102;
      }
      v7 = (PVOID *)(a1 + 15);
    }
LABEL_33:
    if ( v4 )
      break;
LABEL_34:
    if ( a2 != a1[52] )
      return v4;
    v8 = *v7;
    a4 = &qword_1C0081AA0;
  }
  while ( (unsigned __int64)*v7 < *(_QWORD *)(a2 + 32) );
  v42 = v4;
  if ( v4 == 32769 )
  {
    *v7 = *(PVOID *)(a2 + 32);
    v49 = (*(_DWORD *)(a2 + 16) & 0x20000) == 0;
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 32);
    v58 = 0;
    if ( v49 )
      v58 = 32769;
    v4 = v58;
    goto LABEL_63;
  }
  if ( v4 == 32774 )
  {
    v4 = 0;
    *v7 = *(PVOID *)(a2 + 32);
    if ( (*(_DWORD *)(a2 + 16) & 0x20000) == 0 )
      v4 = v42;
LABEL_63:
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_41;
  }
LABEL_59:
  if ( v4 != 32772 )
    goto LABEL_60;
  return v4;
}
