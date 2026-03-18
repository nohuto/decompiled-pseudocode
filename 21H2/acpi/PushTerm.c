/*
 * XREFs of PushTerm @ 0x1C0016BE8
 * Callers:
 *     ParseArg @ 0x1C000B10C (ParseArg.c)
 *     ParseOpcode @ 0x1C000B180 (ParseOpcode.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0015500 (ParseSuperName.c)
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall PushTerm(struct _SLIST_ENTRY *a1, _SLIST_ENTRY *a2, _SLIST_ENTRY *a3, __int64 a4, __int64 a5)
{
  _SLIST_ENTRY *v9; // rax
  unsigned int v10; // ebx
  _SLIST_ENTRY *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  _SLIST_ENTRY *v14; // rax
  unsigned int v16; // edi
  int v17; // ecx

  v9 = HeapAlloc(a1 + 30, 1297237576, 0x60u);
  v10 = 0;
  v11 = v9;
  if ( !v9 )
  {
    v16 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    v17 = 153;
    goto LABEL_12;
  }
  *((_QWORD *)&v9->Next + 1) = a1[26].Next;
  a1[26].Next = v9;
  LODWORD(v9->Next) = 1297237332;
  *((_QWORD *)&v9[1].Next + 1) = ParseTerm;
  v9[2].Next = a2;
  v9[3].Next = a3;
  *((_QWORD *)&v9[3].Next + 1) = a4;
  *((_QWORD *)&v9[5].Next + 1) = a5;
  v12 = *(_QWORD *)(a4 + 16);
  if ( v12 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v12 + v13) );
  }
  else
  {
    LODWORD(v13) = 0;
  }
  *((_DWORD *)&v11[4].Next + 3) = v13;
  if ( (_DWORD)v13 )
  {
    v14 = HeapAlloc(a1[20].Next, 1413563464, 40 * (int)v13);
    v11[5].Next = v14;
    if ( v14 )
    {
      memset(v14, 0, 40LL * *((unsigned int *)&v11[4].Next + 3));
      return v10;
    }
    v16 = -1073741670;
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(a1, 3221225626LL);
    v17 = 154;
LABEL_12:
    PrintDebugMessage(v17, 0, 0, 0, 0LL);
    return v16;
  }
  return v10;
}
