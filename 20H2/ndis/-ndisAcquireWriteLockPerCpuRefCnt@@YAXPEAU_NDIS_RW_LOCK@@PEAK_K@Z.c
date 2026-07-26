/*
 * XREFs of ?ndisAcquireWriteLockPerCpuRefCnt@@YAXPEAU_NDIS_RW_LOCK@@PEAK_K@Z @ 0x1C003CA10
 * Callers:
 *     ?ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z @ 0x1C003C948 (-ndisAcquireReadWriteLockX@@YAXPEAU_NDIS_RW_LOCK@@EPEAU_LOCK_STATE@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAcquireWriteLockPerCpuRefCnt(struct _NDIS_RW_LOCK *a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // edi
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx

  v3 = *a2;
  *a2 = 0;
  v5 = 0;
  v8 = 0x400 / a3;
  if ( 0x400 / a3 )
  {
    v9 = 0LL;
    do
    {
      v10 = (a3 * v9) >> 2;
      while ( *(_DWORD *)&a1->RefCount[0].cacheLine[4 * v10] )
        KeStallExecutionProcessor(1u);
      v9 = ++v5;
    }
    while ( v5 < v8 );
  }
  *a2 = v3;
}
