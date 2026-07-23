/*
 * XREFs of MiInitializeCacheFlushing @ 0x140A55B0C
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiFlushCacheForAttributeChange @ 0x14030E598 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14030F0DC (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x1403A4F50 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwQuerySystemInformation @ 0x1403FAC40 (ZwQuerySystemInformation.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeCacheFlushing()
{
  __int64 result; // rax
  ULONG_PTR v1; // rbx
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rsi
  __int64 v15; // r13
  unsigned int v16; // eax
  PVOID Pool; // r15
  size_t v18; // r14
  __int64 v19; // r12
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  _DWORD *SchedulerAssist; // r9
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
    byte_140C4DF28 = 1;
  result = MiGetPage((__int64)&MiSystemPartition, 0, 0LL);
  v1 = result;
  if ( result != -1 )
  {
    v2 = 0LL;
    v3 = 48 * result - 0x58000000000LL;
    MiFinalizePageAttribute(v3, 1LL, 0);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = 4LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
    }
    do
    {
      MiZeroPhysicalPage(v1, 1, 0);
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v29, v6, v7, v8);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      *(_BYTE *)(v3 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      Size = __rdtsc();
      _InterlockedOr(v28, 0);
      MiFlushCacheForAttributeChange(v1, 1LL, 0);
      _InterlockedOr(v28, 0);
      v11 = __rdtsc();
      v12 = (unsigned __int64)HIDWORD(v11) << 32;
      v30 = 0;
      v13 = v11;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v30, v12, v9, v10);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      *(_BYTE *)(v3 + 34) = *(_BYTE *)(v3 + 34) & 0x3F | 0x40;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      v2 += v13 - Size;
      --v5;
    }
    while ( v5 );
    v14 = v2 >> 2;
    v15 = 0LL;
    if ( v14 )
    {
      v16 = dword_140C4DF18;
      if ( !dword_140C4DF18 )
        v16 = 256;
      Size = 3 * (v16 >> 2);
      Pool = MiAllocatePool(64, Size, 0x20206D4Du);
      if ( Pool )
      {
        v18 = Size;
        v19 = 2LL;
        do
        {
          memset(Pool, 0, v18);
          v20 = __rdtsc();
          _InterlockedOr(v28, 0);
          ++dword_140C4DF44;
          KeInvalidateAllCaches();
          _InterlockedOr(v28, 0);
          v21 = __rdtsc();
          _InterlockedOr(v28, 0);
          v15 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v20;
          --v19;
        }
        while ( v19 );
        ExFreePoolWithTag(Pool, 0);
        dword_140C4DF4C = (v15 & 0xFFFFFFFFFFFFFFFEuLL) / v14;
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
