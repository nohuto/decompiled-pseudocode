/*
 * XREFs of EtwpReenableCompression @ 0x1405ABCC0
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x140267618 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     EtwpQueryUsedProcessorCount @ 0x1402670A4 (EtwpQueryUsedProcessorCount.c)
 *     EtwpUnlockBufferList @ 0x140267518 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140267564 (EtwpLockBufferList.c)
 */

void __fastcall EtwpReenableCompression(__int64 a1)
{
  bool v1; // zf
  __int64 *v3; // rdi
  int i; // eax
  __int64 *j; // rcx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 1164) == 2;
  v6 = 0;
  if ( !v1 && ObGetCurrentIrql() < 2u && _InterlockedExchange((volatile __int32 *)(a1 + 1152), 1) != 1 )
  {
    EtwpLockBufferList(a1, &v6);
    v3 = *(__int64 **)(a1 + 88);
    for ( i = EtwpQueryUsedProcessorCount(a1); i && v3; --i )
    {
      if ( *((_DWORD *)v3 + 3) == 4 )
        *((_WORD *)v3 + 10) |= 0x80u;
      v3 = (__int64 *)*v3;
    }
    for ( j = *(__int64 **)(a1 + 72); i && j; j = (__int64 *)*j )
    {
      --i;
      if ( *((_DWORD *)j + 3) == 4 )
        *((_WORD *)j + 10) |= 0x80u;
    }
    EtwpUnlockBufferList(a1, &v6);
  }
}
