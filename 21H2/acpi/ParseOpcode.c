/*
 * XREFs of ParseOpcode @ 0x1C000B180
 * Callers:
 *     ParseArg @ 0x1C000B10C (ParseArg.c)
 * Callees:
 *     ParseArgObj @ 0x1C00083D4 (ParseArgObj.c)
 *     ParseIntObj @ 0x1C000B2AC (ParseIntObj.c)
 *     ParseNameObj @ 0x1C000BCC4 (ParseNameObj.c)
 *     PushTerm @ 0x1C0016BE8 (PushTerm.c)
 *     ParseString @ 0x1C0027434 (ParseString.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     ParseLocalObj @ 0x1C002CB68 (ParseLocalObj.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     FindOpcodeTerm @ 0x1C00663B0 (FindOpcodeTerm.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseOpcode(__int64 a1, int a2, __int64 a3)
{
  PVOID *v3; // rax
  int v6; // edx
  unsigned __int8 *v8; // r10
  __int64 v9; // rax
  __int64 OpcodeTerm; // r9
  __int64 v11; // r8
  int v12; // eax

  v3 = (PVOID *)&unk_1C0081A00;
  v6 = 0;
  do
  {
    if ( *(PVOID *)(a1 + 120) == *v3 )
      break;
    ++v6;
    v3 += 2;
  }
  while ( (__int64)v3 < (__int64)&qword_1C0081AA0 );
  if ( v6 != 10 && (dword_1C00819F8[4 * v6] & 1) != 0 && v6 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n");
    AMLIDebugger();
  }
  v8 = *(unsigned __int8 **)(a1 + 120);
  v9 = *v8;
  if ( (_BYTE)v9 == 91 )
  {
    *(_QWORD *)(a1 + 120) = v8 + 1;
    OpcodeTerm = FindOpcodeTerm(v8[1]);
  }
  else
  {
    OpcodeTerm = (__int64)*(&OpcodeTable + v9);
    v11 = *(_QWORD *)(a1 + 120);
  }
  if ( OpcodeTerm )
  {
    v12 = *(_DWORD *)(OpcodeTerm + 28);
    if ( (v12 & 8) != 0 )
    {
      return ParseIntObj(a1, a1 + 120, a3, 0LL);
    }
    else if ( (v12 & 0x10) != 0 )
    {
      return ParseString(a1, a1 + 120, a3, 0LL);
    }
    else if ( (v12 & 2) != 0 )
    {
      return ParseArgObj(a1, a3);
    }
    else if ( (v12 & 4) != 0 )
    {
      return ParseLocalObj(a1, a3, v11);
    }
    else if ( (v12 & 0x20) != 0 )
    {
      return ParseNameObj(a1, a3, v11);
    }
    else if ( (v12 & 0x40) != 0 )
    {
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(a1, 3222536198LL);
      PrintDebugMessage(133, 0, 0, 0, 0LL);
      return 3222536198LL;
    }
    else
    {
      *(_QWORD *)(a1 + 120) = v11 + 1;
      return PushTerm(a1, (_DWORD)v8, a2, OpcodeTerm, a3);
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
