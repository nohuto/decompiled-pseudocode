/*
 * XREFs of HvlpInitializeSvmIommuSupport @ 0x1404F960C
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CF228 (HvlPhase2Initialize.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F6FE0 (HvlSvmGetSystemCapabilities.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 HvlpInitializeSvmIommuSupport()
{
  unsigned int v0; // ebx
  PVOID PoolWithTag; // rax
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  HvlSvmGetSystemCapabilities((__int64)&v6);
  if ( (v6 & 1) == 0 )
    return 3221225659LL;
  v0 = v7;
  if ( !(_DWORD)v7 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 104LL * (unsigned int)v7, 0x204C5648u);
  qword_140CF6908 = (__int64)PoolWithTag;
  v2 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 104LL * v0);
  dword_140CF6904 = v0;
  v4 = 0;
  if ( v0 )
  {
    while ( 1 )
    {
      v5 = v2 + 104LL * v4;
      *(_DWORD *)v5 = v4;
      *(_QWORD *)(v5 + 32) = HvlpIommuPrqDpcRoutine;
      *(_DWORD *)(v5 + 8) = 275;
      *(_QWORD *)(v5 + 40) = v5;
      *(_QWORD *)(v5 + 64) = 0LL;
      *(_QWORD *)(v5 + 24) = 0LL;
      *(_QWORD *)(v5 + 96) = v5;
      *(_QWORD *)(v5 + 88) = HvlpProcessIommuPrq;
      *(_QWORD *)(v5 + 72) = 0LL;
      *(_DWORD *)(v5 + 4) = 3;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v5 + 72), HyperCriticalWorkQueue);
      if ( ++v4 >= dword_140CF6904 )
        break;
      v2 = qword_140CF6908;
    }
  }
  return 0LL;
}
