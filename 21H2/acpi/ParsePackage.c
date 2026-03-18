/*
 * XREFs of ParsePackage @ 0x1C0012D00
 * Callers:
 *     <none>
 * Callees:
 *     CopyObjData @ 0x1C000A900 (CopyObjData.c)
 *     ParseIntObj @ 0x1C000B2AC (ParseIntObj.c)
 *     ParseNameObj @ 0x1C000BCC4 (ParseNameObj.c)
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     IsCompatableDSDTRevision @ 0x1C0019BAC (IsCompatableDSDTRevision.c)
 *     ParseString @ 0x1C0027434 (ParseString.c)
 *     ParseObjName @ 0x1C0028CA8 (ParseObjName.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     FindOpcodeTerm @ 0x1C00663B0 (FindOpcodeTerm.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintIndent @ 0x1C0067C48 (PrintIndent.c)
 *     PrintObject @ 0x1C0067C8C (PrintObject.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParsePackage(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, PVOID *a4)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // rbp
  __int64 v7; // rbx
  _BYTE *v8; // r8
  unsigned __int8 *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v17; // r8
  void *v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // r8
  _QWORD *v22; // rax
  _QWORD *i; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // r9
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  int v33; // edx
  __int64 v34; // r15
  __int64 v35; // rcx
  PVOID *v36; // rax
  unsigned __int8 *v37; // rsi
  __int64 v38; // rax
  __int64 OpcodeTerm; // rbx
  unsigned __int8 *v40; // r8
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // rax
  void *v46; // rax
  char v47; // al
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r9
  int v51; // ebx
  __int64 v52; // r10
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  _QWORD *v57; // rax

  v4 = a3;
  v5 = a2;
  if ( (_DWORD)a3 )
    goto LABEL_40;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) == 1 )
      goto LABEL_5;
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 2 )
      return v4;
LABEL_40:
    if ( (gDebugger & 0xD0) != 0 )
    {
      --dword_1C00819C4;
      PrintIndent(a1, a2, a3, a4);
      ConPrintf("}");
      --dword_1C00819C4;
    }
    v19 = *(_QWORD **)(a1 + 416);
    v20 = v19 - 2;
    *(_QWORD *)(a1 + 416) = v19[1];
    *((_DWORD *)v19 - 4) = 0;
    byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v21 = *(v19 - 1);
    v22 = *(_QWORD **)(v21 + 40);
    for ( i = (_QWORD *)(v21 + 40); v22 != i; v22 = (_QWORD *)*v22 )
    {
      if ( v19 < v22 )
        break;
    }
    v24 = (_QWORD *)v22[1];
    if ( (_QWORD *)*v24 == v22 )
    {
      v19[1] = v24;
      *v19 = v22;
      *v24 = v19;
      v22[1] = v19;
      v25 = (_QWORD *)*v19;
      v26 = *v19 - 16LL;
      if ( (_QWORD *)*v19 != i )
      {
        v52 = *((unsigned int *)v20 + 1);
        if ( (_QWORD *)v26 == (_QWORD *)((char *)v20 + v52) )
        {
          *((_DWORD *)v20 + 1) = v52 + *(_DWORD *)(v26 + 4);
          v53 = *v25;
          if ( *(_QWORD **)(*v25 + 8LL) != v25 )
            goto LABEL_132;
          v54 = (_QWORD *)v25[1];
          if ( (_QWORD *)*v54 != v25 )
            goto LABEL_132;
          *v54 = v53;
          *(_QWORD *)(v53 + 8) = v54;
        }
      }
      v27 = (_QWORD *)v20[3];
      v28 = v27 - 2;
      if ( v27 != i )
      {
        v55 = *((unsigned int *)v28 + 1);
        if ( v20 == (_QWORD *)((char *)v28 + v55) )
        {
          *((_DWORD *)v28 + 1) = *((_DWORD *)v20 + 1) + v55;
          v56 = *v19;
          if ( *(_QWORD **)(*v19 + 8LL) != v19 )
            goto LABEL_132;
          v57 = (_QWORD *)v19[1];
          if ( (_QWORD *)*v57 != v19 )
            goto LABEL_132;
          *v57 = v56;
          v20 = v28;
          *(_QWORD *)(v56 + 8) = v57;
        }
      }
      if ( *(_QWORD *)(v21 + 32) > (unsigned __int64)v20 + *((unsigned int *)v20 + 1) )
      {
LABEL_50:
        KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
        return v4;
      }
      *(_QWORD *)(v21 + 32) = v20;
      v29 = v20 + 2;
      v30 = *v29;
      if ( *(_QWORD **)(*v29 + 8LL) == v29 )
      {
        v31 = (_QWORD *)v29[1];
        if ( (_QWORD *)*v31 == v29 )
        {
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
          goto LABEL_50;
        }
      }
    }
LABEL_132:
    __fastfail(3u);
  }
  ++*(_DWORD *)(a2 + 16);
  if ( (gDebugger & 0xD0) != 0 )
  {
    ((void (*)(void))PrintIndent)();
    ConPrintf("{");
    ++dword_1C00819C4;
  }
LABEL_5:
  a2 = *(_QWORD *)(a1 + 120);
  a3 = *(_QWORD *)(v5 + 48);
  while ( 2 )
  {
    a4 = &qword_1C0081AA0;
    if ( a2 >= a3 )
      goto LABEL_36;
    while ( 1 )
    {
      v7 = *(int *)(v5 + 40);
      if ( (unsigned int)v7 >= **(_DWORD **)(v5 + 32) )
      {
LABEL_35:
        if ( v4 != 32772 )
          goto LABEL_36;
        return v4;
      }
      *(_DWORD *)(v5 + 40) = v7 + 1;
      if ( (gDebugger & 0xD0) != 0 && (int)v7 > 0 )
      {
        ConPrintf(",");
        a4 = &qword_1C0081AA0;
      }
      v8 = *(_BYTE **)(a1 + 120);
      if ( (unsigned __int8)(*v8 - 17) <= 2u )
        break;
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1, a2, v8, &qword_1C0081AA0);
        a4 = &qword_1C0081AA0;
      }
      v9 = *(unsigned __int8 **)(a1 + 120);
      a3 = 40 * v7;
      v10 = 40 * v7 + *(_QWORD *)(v5 + 32);
      v11 = *v9;
      *(_QWORD *)(a1 + 120) = v9 + 1;
      a2 = (unsigned int)v11;
      *(_WORD *)(v10 + 10) = 1;
      *(_QWORD *)(v10 + 24) = 0LL;
      if ( (_DWORD)v11 == 13 )
        goto LABEL_23;
      if ( (_DWORD)v11 == 12 )
      {
        *(_DWORD *)(v10 + 24) = **(_DWORD **)(a1 + 120);
        *(_QWORD *)(a1 + 120) += 4LL;
        goto LABEL_19;
      }
      if ( (unsigned int)v11 > 0xC )
      {
        if ( (_DWORD)v11 != 14 )
        {
          if ( (_DWORD)v11 == 255 )
          {
            v47 = IsCompatableDSDTRevision(v11, (unsigned int)v11, a3, &qword_1C0081AA0);
            v48 = 0xFFFFFFFFLL;
            if ( v47 )
              v48 = -1LL;
            *(_QWORD *)(v10 + 24) = v48;
            if ( (gDebugger & 0xD0) != 0 )
              ConPrintf("Ones");
            v4 = 0;
          }
          else
          {
LABEL_23:
            v12 = *(_QWORD *)(a1 + 120);
            v4 = 0;
            *(_QWORD *)(a1 + 120) = v12 - 1;
            v13 = *(_QWORD *)(v5 + 32);
            v14 = v13 + a3;
            if ( *(_BYTE *)(v12 - 1) == 13 )
            {
              *(_QWORD *)(a1 + 120) = v12;
              v15 = -1LL;
              *(_WORD *)(v14 + 10) = 2;
              while ( *(_BYTE *)(*(_QWORD *)(a1 + 120) + v15++ + 1) != 0 )
                ;
              v17 = (unsigned int)(v15 + 1);
              *(_DWORD *)(v14 + 32) = v17;
              if ( (gDebugger & 0xD0) != 0 )
              {
                ConPrintf("\"%s\"");
                v17 = *(unsigned int *)(v14 + 32);
              }
              v18 = (void *)HeapAlloc(gpheapGlobal, 1381258056LL, v17);
              *(_QWORD *)(v14 + 40) = v18;
              if ( v18 )
              {
                memmove(v18, *(const void **)(a1 + 120), *(unsigned int *)(v14 + 32));
              }
              else
              {
                LogError(3221225626LL);
                AcpiDiagTraceAmlError(a1, 3221225626LL);
                PrintDebugMessage(139, 0, 0, 0, 0LL);
                v4 = -1073741670;
              }
              *(_QWORD *)(a1 + 120) += *(unsigned int *)(v14 + 32);
            }
            else
            {
              LOBYTE(a4) = 1;
              v4 = ParseObjName(a1, a1 + 120, v13 + 8 + a3, a4);
              if ( v4 == -1072431103 )
              {
                LogError(3222536193LL);
                AcpiDiagTraceAmlError(a1, 3222536193LL);
                PrintDebugMessage(135, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
                goto LABEL_36;
              }
            }
            if ( v4 )
              goto LABEL_35;
          }
LABEL_32:
          a4 = &qword_1C0081AA0;
          goto LABEL_33;
        }
        *(_QWORD *)(v10 + 24) = **(_QWORD **)(a1 + 120);
        *(_QWORD *)(a1 + 120) += 8LL;
LABEL_19:
        if ( (gDebugger & 0xD0) != 0 )
        {
          ConPrintf("0x%I64x");
          goto LABEL_97;
        }
        goto LABEL_20;
      }
      if ( (_BYTE)v11 )
      {
        a2 = (unsigned int)(v11 - 1);
        if ( (_DWORD)v11 != 1 )
        {
          a2 = (unsigned int)(v11 - 10);
          if ( (_DWORD)v11 == 10 )
          {
            *(_BYTE *)(v10 + 24) = *(_BYTE *)(*(_QWORD *)(a1 + 120))++;
          }
          else
          {
            if ( (_DWORD)v11 != 11 )
              goto LABEL_23;
            *(_WORD *)(v10 + 24) = **(_WORD **)(a1 + 120);
            *(_QWORD *)(a1 + 120) += 2LL;
          }
          goto LABEL_19;
        }
        *(_QWORD *)(v10 + 24) = 1LL;
        if ( (gDebugger & 0xD0) != 0 )
        {
          ConPrintf("One");
          goto LABEL_97;
        }
      }
      else if ( (gDebugger & 0xD0) != 0 )
      {
        ConPrintf("Zero");
LABEL_97:
        a4 = &qword_1C0081AA0;
      }
LABEL_20:
      v4 = 0;
LABEL_33:
      if ( *(_QWORD *)(a1 + 120) >= *(_QWORD *)(v5 + 48) )
        goto LABEL_36;
    }
    v33 = 0;
    v34 = *(_QWORD *)(v5 + 32) + 8 * (v7 + 4 * v7 + 1);
    v35 = 0LL;
    v36 = (PVOID *)&unk_1C0081A00;
    do
    {
      if ( v8 == *v36 )
        break;
      ++v33;
      ++v35;
      v36 += 2;
    }
    while ( (__int64)v36 < (__int64)&qword_1C0081AA0 );
    if ( v33 != 10 && (dword_1C00819F8[4 * v35] & 1) != 0 && v33 != -1 )
    {
      ConPrintf("\nHit Breakpoint %d.\n");
      AMLIDebugger();
    }
    v37 = *(unsigned __int8 **)(a1 + 120);
    v38 = *v37;
    if ( (_BYTE)v38 == 91 )
    {
      *(_QWORD *)(a1 + 120) = v37 + 1;
      OpcodeTerm = FindOpcodeTerm(v37[1]);
    }
    else
    {
      OpcodeTerm = (__int64)*(&OpcodeTable + v38);
      v40 = *(unsigned __int8 **)(a1 + 120);
    }
    if ( OpcodeTerm )
    {
      v41 = *(_DWORD *)(OpcodeTerm + 28);
      if ( (v41 & 8) == 0 )
      {
        if ( (v41 & 0x10) != 0 )
        {
          v4 = ParseString(a1, a1 + 120, v34, 0LL);
          goto LABEL_72;
        }
        if ( (v41 & 2) != 0 )
        {
          v49 = *(_QWORD *)(a1 + 96);
          v4 = 0;
          v50 = (unsigned int)*v40 - 104;
          v51 = v50;
          if ( (unsigned int)v50 < *(_DWORD *)(v49 + 60) )
          {
            CopyObjData(v34, *(_QWORD *)(v49 + 64) + 40 * v50);
            ++*(_QWORD *)(a1 + 120);
            if ( (gDebugger & 0xD0) != 0 )
            {
              ConPrintf("Arg%d=");
              PrintObject(v34);
            }
          }
          else
          {
            LogError(3222536197LL);
            AcpiDiagTraceAmlError(a1, 3222536197LL);
            PrintDebugMessage(122, v51, 0, 0, 0LL);
            v4 = -1072431099;
          }
          goto LABEL_72;
        }
        if ( (v41 & 4) != 0 )
        {
          CopyObjData(v34, *(_QWORD *)(a1 + 96) + 8 * ((unsigned int)*v40 - 96 + 4LL * ((unsigned int)*v40 - 96) + 9));
          if ( (gDebugger & 0xD0) != 0 )
          {
            ConPrintf("Local%d=");
            PrintObject(v34);
          }
          ++*(_QWORD *)(a1 + 120);
          v4 = 0;
        }
        else
        {
          if ( (v41 & 0x20) != 0 )
          {
            v4 = ParseNameObj(a1, v34);
          }
          else
          {
            if ( (v41 & 0x40) != 0 )
            {
              LogError(3222536198LL);
              AcpiDiagTraceAmlError(a1, 3222536198LL);
              PrintDebugMessage(133, 0, 0, 0, 0LL);
              v4 = -1072431098;
              goto LABEL_36;
            }
            *(_QWORD *)(a1 + 120) = v40 + 1;
            v42 = HeapAlloc(a1 + 480, 1297237576LL, 96LL);
            v43 = v42;
            if ( v42 )
            {
              v4 = 0;
              *(_QWORD *)(v42 + 8) = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = v42;
              *(_DWORD *)v42 = 1297237332;
              *(_QWORD *)(v42 + 24) = ParseTerm;
              *(_QWORD *)(v42 + 32) = v37;
              *(_QWORD *)(v42 + 48) = 0LL;
              *(_QWORD *)(v42 + 56) = OpcodeTerm;
              *(_QWORD *)(v42 + 88) = v34;
              v44 = *(_QWORD *)(OpcodeTerm + 16);
              if ( v44 )
              {
                v45 = -1LL;
                do
                  ++v45;
                while ( *(_BYTE *)(v44 + v45) );
                *(_DWORD *)(v43 + 76) = v45;
                if ( (_DWORD)v45 )
                {
                  v46 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1413563464LL, (unsigned int)(40 * v45));
                  *(_QWORD *)(v43 + 80) = v46;
                  if ( v46 )
                  {
                    memset(v46, 0, 40LL * *(unsigned int *)(v43 + 76));
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
                *(_DWORD *)(v42 + 76) = 0;
              }
            }
            else
            {
              LogError(3222536194LL);
              AcpiDiagTraceAmlError(a1, 3222536194LL);
              PrintDebugMessage(153, 0, 0, 0, 0LL);
              v4 = -1072431102;
            }
          }
LABEL_72:
          if ( v4 )
            goto LABEL_35;
        }
        if ( v5 != *(_QWORD *)(a1 + 416) )
          return v4;
        goto LABEL_32;
      }
      v4 = ParseIntObj(a1, (_WORD **)(a1 + 120), v34, 0);
      goto LABEL_72;
    }
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(134, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
    v4 = -1072431103;
LABEL_36:
    if ( v5 == *(_QWORD *)(a1 + 416) )
    {
      if ( v4
        || (a2 = *(_QWORD *)(a1 + 120), a3 = *(_QWORD *)(v5 + 48), a2 >= a3)
        || *(_DWORD *)(v5 + 40) >= **(_DWORD **)(v5 + 32) )
      {
        ++*(_DWORD *)(v5 + 16);
        goto LABEL_40;
      }
      continue;
    }
    return v4;
  }
}
