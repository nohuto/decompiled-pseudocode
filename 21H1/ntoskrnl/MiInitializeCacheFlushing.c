/*
 * XREFs of MiInitializeCacheFlushing @ 0x140A4D184
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiFinalizePageAttribute @ 0x14034BF54 (MiFinalizePageAttribute.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140350E3C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MiFlushCacheForAttributeChange @ 0x140353348 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x1403A18E0 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwQuerySystemInformation @ 0x1403F29F0 (ZwQuerySystemInformation.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  __int64 v18; // r13
  unsigned int v19; // eax
  PVOID Pool; // r15
  size_t v21; // r14
  __int64 v22; // r12
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r13
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v28; // eax
  bool v29; // zf
  signed __int32 v30[8]; // [rsp+0h] [rbp-88h] BYREF
  int v31; // [rsp+20h] [rbp-68h] BYREF
  int v32; // [rsp+24h] [rbp-64h] BYREF
  size_t Size; // [rsp+28h] [rbp-60h]
  _OWORD v34[2]; // [rsp+30h] [rbp-58h] BYREF

  memset(v34, 0, sizeof(v34));
  if ( ZwQuerySystemInformation(SystemFlushInformation, v34, 0x20u, 0LL) >= 0 && (BYTE8(v34[0]) & 1) != 0 )
    byte_140C4DE28 = 1;
  result = MiGetPage((__int64)&MiSystemPartition, 0, 0LL);
  v1 = result;
  if ( result != -1 )
  {
    v2 = 0LL;
    v3 = 48 * result - 0x58000000000LL;
    MiFinalizePageAttribute(v3, 1LL, 0);
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
      MiZeroPhysicalPage(v1, 1, 0, SchedulerAssist);
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v31, v7, v8, v9);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      *(_BYTE *)(v3 + 34) &= 0x3Fu;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      Size = __rdtsc();
      _InterlockedOr(v30, 0);
      MiFlushCacheForAttributeChange(v1, 1LL, 0, v9);
      _InterlockedOr(v30, 0);
      v12 = __rdtsc();
      v13 = (unsigned __int64)HIDWORD(v12) << 32;
      v32 = 0;
      v14 = v12;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v32, v13, v10, v11);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      *(_BYTE *)(v3 + 34) = *(_BYTE *)(v3 + 34) & 0x3F | 0x40;
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiFlushEntireTbDueToAttributeChange();
      v2 += v14 - Size;
      --v6;
    }
    while ( v6 );
    v17 = v2 >> 2;
    v18 = 0LL;
    if ( v17 )
    {
      v19 = dword_140C4DE18;
      if ( !dword_140C4DE18 )
        v19 = 256;
      Size = 3 * (v19 >> 2);
      Pool = MiAllocatePool(64, Size, 0x20206D4Du);
      if ( Pool )
      {
        v21 = Size;
        v22 = 2LL;
        do
        {
          memset(Pool, 0, v21);
          v23 = __rdtsc();
          _InterlockedOr(v30, 0);
          ++dword_140C4DE44;
          KeInvalidateAllCaches();
          _InterlockedOr(v30, 0);
          v24 = __rdtsc();
          _InterlockedOr(v30, 0);
          v18 += (((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24) - v23;
          --v22;
        }
        while ( v22 );
        ExFreePoolWithTag(Pool, 0);
        v25 = v18 & 0xFFFFFFFFFFFFFFFEuLL;
        v15 = v25 % v17;
        dword_140C4DE4C = v25 / v17;
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = (__int64)CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v28 & *(_DWORD *)(v16 + 20)) == 0;
          v15 = (unsigned int)v28 & *(_DWORD *)(v16 + 20);
          *(_DWORD *)(v16 + 20) = v15;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return MiReleaseFreshPage(v3, v15, v16);
  }
  return result;
}
