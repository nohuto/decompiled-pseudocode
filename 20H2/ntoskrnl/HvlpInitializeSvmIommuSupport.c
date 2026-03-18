/*
 * XREFs of HvlpInitializeSvmIommuSupport @ 0x1404F7AEC
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CE6C8 (HvlPhase2Initialize.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     memset @ 0x140411300 (memset.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F54C0 (HvlSvmGetSystemCapabilities.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HvlpInitializeSvmIommuSupport(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  PVOID PoolWithTag; // rax
  __int64 v6; // rdi
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  HvlSvmGetSystemCapabilities((__int64)&v10, a2, a3, a4);
  if ( (v10 & 1) == 0 )
    return 3221225659LL;
  v4 = v11;
  if ( !(_DWORD)v11 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 104LL * (unsigned int)v11, 0x204C5648u);
  qword_140CF6408 = (__int64)PoolWithTag;
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 104LL * v4);
  dword_140CF6404 = v4;
  v8 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      v9 = v6 + 104LL * v8;
      *(_DWORD *)v9 = v8;
      *(_QWORD *)(v9 + 32) = HvlpIommuPrqDpcRoutine;
      *(_DWORD *)(v9 + 8) = 275;
      *(_QWORD *)(v9 + 40) = v9;
      *(_QWORD *)(v9 + 64) = 0LL;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_QWORD *)(v9 + 96) = v9;
      *(_QWORD *)(v9 + 88) = HvlpProcessIommuPrq;
      *(_QWORD *)(v9 + 72) = 0LL;
      *(_DWORD *)(v9 + 4) = 3;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 72), HyperCriticalWorkQueue);
      if ( ++v8 >= dword_140CF6404 )
        break;
      v6 = qword_140CF6408;
    }
  }
  return 0LL;
}
