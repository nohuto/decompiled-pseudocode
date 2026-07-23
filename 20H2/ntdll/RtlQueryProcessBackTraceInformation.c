/*
 * XREFs of RtlQueryProcessBackTraceInformation @ 0x1800D7970
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800D7B00 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D8C88 (RtlpCommitQueryDebugInfo.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800D8EDC (RtlpDeCommitQueryDebugInfo.c)
 */

__int64 __fastcall RtlQueryProcessBackTraceInformation(_RTL_DEBUG_INFORMATION *a1)
{
  PRTL_SRWLOCK v2; // rbx
  _RTL_PROCESS_BACKTRACES *DebugInfo; // rax
  _RTL_PROCESS_BACKTRACES *v5; // r14
  int Ptr_high; // eax
  _DWORD *v7; // r12
  int v8; // edi
  int v9; // esi
  _QWORD *Value; // r13
  _WORD *v12; // rdx

  v2 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  DebugInfo = (_RTL_PROCESS_BACKTRACES *)RtlpCommitQueryDebugInfo(a1, 0x18uLL);
  v5 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  *((_BYTE *)&v2[16].0 + 1) = 1;
  *(_QWORD *)&DebugInfo->CommittedMemory = v2[19].Value - v2[17].Value;
  *(_QWORD *)&DebugInfo->NumberOfBackTraceLookups = v2[23].Value - v2[17].Value;
  LODWORD(DebugInfo->BackTraces[0].SymbolicBackTrace) = v2[22].0;
  Ptr_high = HIDWORD(v2[22].Ptr);
  HIDWORD(v5->BackTraces[0].SymbolicBackTrace) = Ptr_high;
  v7 = RtlpCommitQueryDebugInfo(a1, (unsigned int)(272 * Ptr_high));
  if ( v7 )
  {
    v8 = 0;
    v9 = HIDWORD(v2[22].Ptr);
    Value = (_QWORD *)v2[23].Value;
    while ( v9-- )
    {
      v12 = (_WORD *)*--Value;
      *(_QWORD *)v7 = 0LL;
      v7[2] = v12[4] & 0x7FF;
      *((_WORD *)v7 + 6) = v12[6];
      *((_WORD *)v7 + 7) = v12[7];
      memmove(v7 + 4, v12 + 8, 8LL * (unsigned __int16)v12[7]);
      v7 += 68;
    }
  }
  else
  {
    v8 = -1073741801;
    RtlpDeCommitQueryDebugInfo(a1, v5, 0x18uLL);
  }
  *((_BYTE *)&v2[16].0 + 1) = 0;
  if ( v8 >= 0 )
    a1->BackTraces = v5;
  return (unsigned int)v8;
}
