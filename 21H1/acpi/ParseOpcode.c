/*
 * XREFs of ParseOpcode @ 0x1C00222D0
 * Callers:
 *     ParseArg @ 0x1C0021E34 (ParseArg.c)
 *     ParsePackage @ 0x1C0021EA0 (ParsePackage.c)
 * Callees:
 *     ParseString @ 0x1C00020D8 (ParseString.c)
 *     HeapAlloc @ 0x1C0008A70 (HeapAlloc.c)
 *     ParseNameObj @ 0x1C00216C0 (ParseNameObj.c)
 *     ParseIntObj @ 0x1C00224C4 (ParseIntObj.c)
 *     ParseArgObj @ 0x1C0022584 (ParseArgObj.c)
 *     FindOpcodeTerm @ 0x1C0022658 (FindOpcodeTerm.c)
 *     ParseLocalObj @ 0x1C002306C (ParseLocalObj.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     AMLIDebugger @ 0x1C0065AF0 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 */

__int64 __fastcall ParseOpcode(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID *v3; // rax
  unsigned int v4; // r15d
  int v7; // edx
  unsigned __int8 *v9; // rsi
  __int64 v10; // rax
  __int64 OpcodeTerm; // rdi
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  void *v18; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9

  v3 = (PVOID *)&unk_1C0082840;
  v4 = 0;
  v7 = 0;
  do
  {
    if ( *(PVOID *)(a1 + 120) == *v3 )
      break;
    ++v7;
    v3 += 2;
  }
  while ( (__int64)v3 < (__int64)&qword_1C00828E0 );
  if ( v7 != 10 && (dword_1C0082838[4 * v7] & 1) != 0 && v7 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n");
    AMLIDebugger(v21, v20, v22, v23);
  }
  v9 = *(unsigned __int8 **)(a1 + 120);
  v10 = *v9;
  if ( (_BYTE)v10 == 91 )
  {
    *(_QWORD *)(a1 + 120) = v9 + 1;
    OpcodeTerm = FindOpcodeTerm(v9[1]);
  }
  else
  {
    OpcodeTerm = (__int64)*(&OpcodeTable + v10);
    v12 = *(_QWORD *)(a1 + 120);
  }
  if ( OpcodeTerm )
  {
    v13 = *(_DWORD *)(OpcodeTerm + 28);
    if ( (v13 & 8) != 0 )
    {
      return ParseIntObj(a1, a1 + 120, a3, 0LL);
    }
    else if ( (v13 & 0x10) != 0 )
    {
      return ParseString(a1, (const void **)(a1 + 120), a3, 0);
    }
    else if ( (v13 & 2) != 0 )
    {
      return ParseArgObj(a1, a3, v12);
    }
    else if ( (v13 & 4) != 0 )
    {
      return ParseLocalObj(a1, a3, v12);
    }
    else if ( (v13 & 0x20) != 0 )
    {
      return ParseNameObj(a1, a3);
    }
    else if ( (v13 & 0x40) != 0 )
    {
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(a1, 3222536198LL);
      PrintDebugMessage(133, 0, 0, 0, 0LL);
      return 3222536198LL;
    }
    else
    {
      *(_QWORD *)(a1 + 120) = v12 + 1;
      v14 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x60u);
      v15 = v14;
      if ( v14 )
      {
        *(_QWORD *)(v14 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v14;
        *(_QWORD *)(v14 + 24) = ParseTerm;
        *(_DWORD *)v14 = 1297237332;
        *(_QWORD *)(v14 + 32) = v9;
        *(_QWORD *)(v14 + 48) = a2;
        *(_QWORD *)(v14 + 56) = OpcodeTerm;
        *(_QWORD *)(v14 + 88) = a3;
        v16 = *(_QWORD *)(OpcodeTerm + 16);
        if ( v16 )
        {
          v17 = -1LL;
          do
            ++v17;
          while ( *(_BYTE *)(v16 + v17) );
        }
        else
        {
          LODWORD(v17) = 0;
        }
        *(_DWORD *)(v15 + 76) = v17;
        if ( (_DWORD)v17 )
        {
          v18 = (void *)HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1413563464, 40 * (int)v17);
          *(_QWORD *)(v15 + 80) = v18;
          if ( v18 )
          {
            memset(v18, 0, 40LL * *(unsigned int *)(v15 + 76));
          }
          else
          {
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(a1, 3221225626LL);
            PrintDebugMessage(154, 0, 0, 0, 0LL);
            return (unsigned int)-1073741670;
          }
        }
      }
      else
      {
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
        return (unsigned int)-1072431102;
      }
      return v4;
    }
  }
  else
  {
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(134, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
    return 3222536193LL;
  }
}
