/*
 * XREFs of MiInitializeCacheFlushing @ 0x140A52E84
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402F4E60 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiFlushCacheForAttributeChange @ 0x1402F7368 (MiFlushCacheForAttributeChange.c)
 *     MiFinalizePageAttribute @ 0x14031CC14 (MiFinalizePageAttribute.c)
 *     KeInvalidateAllCaches @ 0x1403A2070 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwQuerySystemInformation @ 0x1403F3C80 (ZwQuerySystemInformation.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rsi
  __int64 v16; // r13
  unsigned int v17; // eax
  PVOID Pool; // r15
  size_t v19; // r14
  __int64 v20; // r12
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  signed __int32 v28[8]; // [rsp+0h] [rbp-88h] BYREF
  int v29; // [rsp+20h] [rbp-68h] BYREF
  int v30; // [rsp+24h] [rbp-64h] BYREF
  size_t Size; // [rsp+28h] [rbp-60h]
  _OWORD v32[2]; // [rsp+30h] [rbp-58h] BYREF

  memset(v32, 0, sizeof(v32));
  if ( ZwQuerySystemInformation(SystemFlushInformation, v32, 0x20u, 0LL) >= 0 && (BYTE8(v32[0]) & 1) != 0 )
    byte_140C4DCE8 = 1;
  result = MiGetPage((__int64)&MiSystemPartition, 0, 0LL);
  v1 = result;
  if ( result != -1 )
  {
    v2 = 0LL;
    v3 = 48 * result - 0x58000000000LL;
    MiFinalizePageAttribute(v3, 1u, 0);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = 4LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
    }
    do
    {
      MiZeroPhysicalPage(v1, 1, 0LL, (unsigned __int64)SchedulerAssist);
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v29, v7, v8, v9);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      *(_BYTE *)(v3 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      Size = __rdtsc();
      _InterlockedOr(v28, 0);
      MiFlushCacheForAttributeChange(v1, 1LL, 0);
      _InterlockedOr(v28, 0);
      v12 = __rdtsc();
      v13 = (unsigned __int64)HIDWORD(v12) << 32;
      v30 = 0;
      v14 = v12;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30, v13, v10, v11);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      *(_BYTE *)(v3 + 34) = *(_BYTE *)(v3 + 34) & 0x3F | 0x40;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      v2 += v14 - Size;
      --v6;
    }
    while ( v6 );
    v15 = v2 >> 2;
    v16 = 0LL;
    if ( v15 )
    {
      v17 = dword_140C4DCD8;
      if ( !dword_140C4DCD8 )
        v17 = 256;
      Size = 3 * (v17 >> 2);
      Pool = MiAllocatePool(64, Size, 0x20206D4Du);
      if ( Pool )
      {
        v19 = Size;
        v20 = 2LL;
        do
        {
          memset(Pool, 0, v19);
          v21 = __rdtsc();
          _InterlockedOr(v28, 0);
          ++dword_140C4DD04;
          KeInvalidateAllCaches();
          _InterlockedOr(v28, 0);
          v22 = __rdtsc();
          _InterlockedOr(v28, 0);
          v16 += (((unsigned __int64)HIDWORD(v22) << 32) | (unsigned int)v22) - v21;
          --v20;
        }
        while ( v20 );
        ExFreePoolWithTag(Pool, 0);
        dword_140C4DD0C = (v16 & 0xFFFFFFFFFFFFFFFEuLL) / v15;
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v25 = CurrentPrcb->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v3);
  }
  return result;
}
