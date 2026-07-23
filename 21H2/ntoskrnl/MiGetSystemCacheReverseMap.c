/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x14031CD00
 * Callers:
 *     MiProbeAndLockPrepare @ 0x1402AEBF0 (MiProbeAndLockPrepare.c)
 *     MiComputePxeWalkAction @ 0x1402B1350 (MiComputePxeWalkAction.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MmSetAddressRangeModifiedEx @ 0x14031A390 (MmSetAddressRangeModifiedEx.c)
 *     MiReleaseSystemCacheView @ 0x14031AA4C (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MmUnmapViewInSystemCache @ 0x14031E830 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x1408C8580 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiGetSystemCacheReverseMap(unsigned __int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  struct _LIST_ENTRY *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
      v11 = v3 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v3;
      v3 = v11;
      if ( (v10 & 0x42) != 0 )
        v3 = v11 | 0x42;
    }
  }
  v12 = v3;
  if ( (unsigned int)MiPteInShadowRange(&v12)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v6 )
    {
      v7 = *((_QWORD *)&v6->Flink + (((unsigned __int64)&v12 >> 3) & 0x1FF));
      v8 = v3 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v8 = v3;
      v3 = v8;
      if ( (v7 & 0x42) != 0 )
        v3 = v8 | 0x42;
    }
  }
  v4 = *(_QWORD *)(48 * ((v3 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
  if ( v4 )
    return v4 + 40 * ((a1 >> 18) & 7);
  else
    return 0LL;
}
