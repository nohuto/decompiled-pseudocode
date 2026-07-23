/*
 * XREFs of HalpInitializeInterrupts @ 0x140A3A6FC
 * Callers:
 *     HalpInterruptInitDiscard @ 0x140A73AD4 (HalpInterruptInitDiscard.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 *     HalpInterruptSetIdtEntry @ 0x1403A27FC (HalpInterruptSetIdtEntry.c)
 *     HalpInterruptInitializeController @ 0x1403A37A8 (HalpInterruptInitializeController.c)
 *     HalpInterruptParseAcpiTables @ 0x1403A9920 (HalpInterruptParseAcpiTables.c)
 *     HalpInterruptInitializeIpis @ 0x1403AA05C (HalpInterruptInitializeIpis.c)
 *     HalpInterruptSelectController @ 0x1403AA0F0 (HalpInterruptSelectController.c)
 *     HalpApicDiscover @ 0x1403AB950 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1403ABD00 (HalpPicDiscover.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403BB428 (HalpMmAllocateMemoryInternal.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall HalpInitializeInterrupts(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  unsigned int v4; // ebx
  void *MemoryInternal; // rax
  unsigned int v6; // ebx
  void *v7; // rax
  void *v8; // rax
  unsigned int v9; // ebx
  void *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  ULONG_PTR *i; // rdi
  ULONG_PTR v20; // rcx
  int v21; // eax
  _DWORD *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ecx
  int v25; // eax
  ULONG_PTR v27; // [rsp+60h] [rbp+18h] BYREF

  v27 = 0LL;
  HalpInterruptOverridesLock = 0LL;
  HalpInterruptLocalUnitErrorLock = 0LL;
  qword_140C498C8 = (__int64)&HalpInterruptOverrides;
  HalpInterruptOverrides = (__int64)&HalpInterruptOverrides;
  HalpInterruptPhysicalTargets = 1310721;
  memset(&unk_140C4BA84, 0, 0xA4uLL);
  v3 = HalpInterruptParseAcpiTables(a1, 0);
  if ( v3 < 0 )
    goto LABEL_32;
  HalpInterruptMaxProcessors = HalQueryMaximumProcessorCount(v2);
  v4 = 24 * HalpInterruptMaxProcessors;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(24 * HalpInterruptMaxProcessors, 1u);
  HalpInterruptTargets = (__int64)MemoryInternal;
  if ( !MemoryInternal )
    goto LABEL_31;
  memset(MemoryInternal, 0, v4);
  v6 = HalpInterruptMaxProcessors << 6;
  v7 = (void *)HalpMmAllocateMemoryInternal(HalpInterruptMaxProcessors << 6, 1u);
  HalpInterruptProcessorState = (ULONG_PTR)v7;
  if ( !v7
    || (memset(v7, 0, v6),
        v8 = (void *)HalpMmAllocateMemoryInternal(v6, 1u),
        (HalpInterruptDynamicProcessorState = (__int64)v8) == 0)
    || (memset(v8, 0, v6),
        v9 = 8 * HalpInterruptMaxProcessors,
        v10 = (void *)HalpMmAllocateMemoryInternal(8 * HalpInterruptMaxProcessors, 1u),
        (HalpInterruptProcessorPcr = (__int64)v10) == 0) )
  {
LABEL_31:
    v3 = -1073741801;
    goto LABEL_32;
  }
  memset(v10, 0, v9);
  *(_QWORD *)HalpInterruptProcessorPcr = KeGetPcr();
  v3 = HalpApicDiscover();
  if ( v3 >= 0 )
    v3 = HalpPicDiscover();
  if ( v3 < 0 )
  {
    HalpInterruptLastProblem = 3;
    goto LABEL_29;
  }
  HalpInterruptSetIdtEntry(0x35u, (int)HalpInterruptDeferredErrorService, 5, v11, -1LL);
  HalpInterruptSetIdtEntry(0xE3u, (int)HalpInterruptDeferredRecoveryService, 14, v12, -1LL);
  HalpInterruptSetIdtEntry(0x36u, (int)HalpInterruptDeferredErrorService, 5, v13, -1LL);
  HalpInterruptSetIdtEntry(0xDFu, (int)HalpInterruptSpuriousService, 15, v14, -2LL);
  HalpInterruptSetIdtEntry(0xD8u, (int)HalpInterruptStubService, 15, v15, -1LL);
  HalpInterruptSetIdtEntry(0xE2u, (int)HalpInterruptLocalErrorService, 15, v16, -1LL);
  HalpInterruptSetIdtEntry(0xD7u, (int)HalpInterruptRebootService, 15, v17, -1LL);
  HalpInterruptSetIdtEntry(0xFEu, (int)HalpPerfInterrupt, 15, v18, -3LL);
  byte_140D58962 = 17;
  byte_140D58D6A = 15;
  dword_140D58D6B = 2;
  byte_140D58A3F = 17;
  byte_140D591BB = 15;
  dword_140D591BC = 223;
  v3 = HalpInterruptSelectController((__int64)&v27);
  if ( v3 < 0 )
    goto LABEL_32;
  for ( i = (ULONG_PTR *)HalpRegisteredInterruptControllers; i != &HalpRegisteredInterruptControllers; i = (ULONG_PTR *)*i )
  {
    v3 = HalpInterruptInitializeController((ULONG_PTR)i);
    if ( v3 < 0 )
      goto LABEL_32;
  }
  v3 = HalpInterruptParseAcpiTables(a1, 1u);
  if ( v3 < 0 )
    goto LABEL_32;
  v20 = v27;
  HalpHwToSwIrqlMap = (__int128)_mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  LOWORD(HalpHwToSwIrqlMap) = 256;
  v21 = *(_DWORD *)(v27 + 220);
  *(_WORD *)((char *)&HalpHwToSwIrqlMap + 13) = 3597;
  BYTE12(HalpHwToSwIrqlMap) = 12;
  HIBYTE(HalpHwToSwIrqlMap) = 15;
  BYTE2(HalpHwToSwIrqlMap) = 2;
  if ( (v21 & 1) == 0 )
  {
    v22 = (_DWORD *)HalpInterruptTargets;
    LODWORD(HalpInterruptProcessorCount) = 1;
    *(_DWORD *)(HalpInterruptTargets + 8) = 0;
    *v22 = 4;
    v21 = *(_DWORD *)(v20 + 220);
  }
  if ( !(_DWORD)HalpInterruptProcessorCount )
    LODWORD(HalpInterruptProcessorCount) = 1;
  if ( (v21 & 4) == 0 )
    HalpInterruptLogicalFlatLimit = 0;
  HalpInterruptController = v20;
  v3 = HalpInterruptInitializeIpis();
  if ( v3 < 0 )
LABEL_32:
    KeBugCheckEx(0x5Cu, 0x200uLL, 0x5250631uLL, HalpInterruptLastProblem, v3);
  if ( (*(_DWORD *)(HalpInterruptController + 220) & 0x100) != 0 )
  {
    if ( KeGetCurrentPrcb()->CpuVendor == 1 )
    {
      v25 = 0x200000;
    }
    else
    {
      v24 = 240 * HalQueryMaximumProcessorCount(v23);
      v25 = 0x10000;
      if ( v24 <= 0x10000 )
      {
        _BitScanReverse(&v24, 2 * v24 - 1);
        v25 = 1 << v24;
      }
    }
    HalpIrtTotalEntries = v25;
  }
LABEL_29:
  if ( v3 < 0 )
    goto LABEL_32;
  return (unsigned int)v3;
}
