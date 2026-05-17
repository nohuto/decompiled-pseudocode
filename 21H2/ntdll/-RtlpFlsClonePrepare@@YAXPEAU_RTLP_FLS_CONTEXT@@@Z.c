/*
 * XREFs of ?RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DF4DC
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009BBB0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D64B0 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall RtlpFlsClonePrepare(
        struct _RTLP_FLS_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // rbp
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx

  v4 = qword_18016D358;
  v5 = 1;
  while ( 1 )
  {
    if ( v5 <= v4 )
    {
      v6 = v5 + 16;
      v7 = v4 - v5 + 1;
      v5 = v4 + 1;
      do
      {
        _BitScanReverse(&v8, v6);
        v9 = v6 ^ (1 << v8);
        v10 = *((_QWORD *)&RtlpFlsContext + v8 - 3);
        if ( v10 )
          v10 += 16LL * (unsigned int)v9 + 8;
        RtlAcquireSRWLockExclusive(v10, v9, a3, a4);
        ++v6;
        --v7;
      }
      while ( v7 );
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsContext, a2, a3, a4);
    if ( (unsigned int)qword_18016D358 <= v4 )
      break;
    v4 = qword_18016D358;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  }
}
