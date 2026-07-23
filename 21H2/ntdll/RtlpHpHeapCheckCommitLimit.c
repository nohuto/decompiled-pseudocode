/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x180003748
 * Callers:
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180003724 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpInitializeHeapSegment @ 0x18000BB54 (RtlpInitializeHeapSegment.c)
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18000E618 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x18000ED0C (RtlpCommitBlock.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rcx
  char *v8; // rax
  __int64 v9; // r9

  v4 = 0;
  if ( !dword_1801663E8 && ((v6 = *a4) != 0 || (v6 = *((_QWORD *)&xmmword_18016A670 + 1)) != 0) && a1 + a2 > v6 )
  {
    v8 = (char *)&xmmword_18016A670 + 8;
    if ( *a4 )
      v8 = (char *)a4;
    v9 = *((_QWORD *)v8 + 1);
    if ( v9 )
      RtlpLogHeapFailure(21, a3, 0, v9, a1, a2);
  }
  else
  {
    return 1;
  }
  return v4;
}
