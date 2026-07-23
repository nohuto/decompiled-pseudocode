/*
 * XREFs of ?RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DF49C
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009BBB0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6470 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFlsClonePrepare(struct _RTLP_FLS_CONTEXT *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rbp
  unsigned int v5; // ecx
  unsigned int v6; // edx
  _RTL_SRWLOCK *v7; // rcx

  v1 = qword_18016D358;
  v2 = 1;
  while ( 1 )
  {
    if ( v2 <= v1 )
    {
      v3 = v2 + 16;
      v4 = v1 - v2 + 1;
      v2 = v1 + 1;
      do
      {
        _BitScanReverse(&v5, v3);
        v6 = v3 ^ (1 << v5);
        v7 = (_RTL_SRWLOCK *)*((_QWORD *)&RtlpFlsContext + v5 - 3);
        if ( v7 )
          v7 += 2 * v6 + 1;
        RtlAcquireSRWLockExclusive(v7);
        ++v3;
        --v4;
      }
      while ( v4 );
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    if ( (unsigned int)qword_18016D358 <= v1 )
      break;
    v1 = qword_18016D358;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
}
