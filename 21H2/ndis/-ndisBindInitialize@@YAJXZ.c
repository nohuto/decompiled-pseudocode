/*
 * XREFs of ?ndisBindInitialize@@YAJXZ @ 0x1C0144F14
 * Callers:
 *     DriverEntry @ 0x1C01438F0 (DriverEntry.c)
 * Callees:
 *     ??0KPushLock@@QEAA@XZ @ 0x1C01221D0 (--0KPushLock@@QEAA@XZ.c)
 *     ?ndisBindBuilderCleanup@@YAXXZ @ 0x1C01245BC (-ndisBindBuilderCleanup@@YAXXZ.c)
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C0144E54 (-ndisBindBuilderInitialize@@YAJXZ.c)
 */

__int64 ndisBindInitialize(void)
{
  __int64 result; // rax
  KPushLock *PoolWithTag; // rdx
  KPushLock *v2; // rdx
  KPushLock *v3; // rdx
  __int64 v4; // rdx

  result = ndisBindBuilderInitialize();
  if ( !(_DWORD)result )
  {
    PoolWithTag = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x6762444Eu);
    if ( PoolWithTag )
    {
      *(_OWORD *)&PoolWithTag->m_Lock.0 = 0LL;
      *(_OWORD *)&PoolWithTag[2].m_Lock.0 = 0LL;
      *(_OWORD *)&PoolWithTag[4].m_Lock.0 = 0LL;
      PoolWithTag[6].m_Lock.Value = 0LL;
      KPushLock::KPushLock(PoolWithTag);
      KPushLock::KPushLock(v2 + 1);
      KPushLock::KPushLock(v3 + 2);
      *(_DWORD *)(v4 + 24) = 0;
      *(_DWORD *)(v4 + 28) = 0;
      *(_QWORD *)(v4 + 32) = 0LL;
      *(_DWORD *)(v4 + 40) = 0;
      *(_DWORD *)(v4 + 44) = 0;
      *(_QWORD *)(v4 + 48) = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    qword_1C00E4518 = v4;
    if ( v4 )
    {
      return 0LL;
    }
    else
    {
      ndisBindBuilderCleanup();
      return 3221225626LL;
    }
  }
  return result;
}
