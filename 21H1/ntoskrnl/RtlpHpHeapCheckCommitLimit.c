/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x1402B0FDC
 * Callers:
 *     RtlpHpSegHeapCheckCommitLimit @ 0x1402B0FAC (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpAllocateHeap @ 0x140583090 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x140584C14 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x140584E98 (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x140585660 (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14058D990 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  char *v7; // rax
  __int64 v8; // r9

  v4 = *a4;
  v5 = 0;
  if ( (*a4 || (v4 = *((_QWORD *)&xmmword_140C1DD90 + 1)) != 0) && a1 + a2 > v4 )
  {
    v7 = (char *)&xmmword_140C1DD90 + 8;
    if ( *a4 )
      v7 = (char *)a4;
    v8 = *((_QWORD *)v7 + 1);
    if ( v8 )
      RtlpLogHeapFailure(21, a3, 0, v8, a1, a2);
  }
  else
  {
    return 1;
  }
  return v5;
}
