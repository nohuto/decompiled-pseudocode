/*
 * XREFs of NewGlobalHeap @ 0x1C0022190
 * Callers:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall NewGlobalHeap(_QWORD *a1)
{
  unsigned int v2; // esi
  _QWORD *Pool2; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rbx

  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)gdwGlobalHeapBlkSize, 1215065409LL);
  *a1 = Pool2;
  v4 = Pool2;
  if ( Pool2 )
  {
    v5 = (unsigned int)gdwGlobalHeapBlkSize;
    memset(Pool2, 0, (unsigned int)gdwGlobalHeapBlkSize);
    *(_DWORD *)v4 = 1346454856;
    v4[1] = (char *)v4 + v5;
    v4[4] = v4 + 7;
    v4[6] = v4 + 5;
    v4[5] = v4 + 5;
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(110, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
