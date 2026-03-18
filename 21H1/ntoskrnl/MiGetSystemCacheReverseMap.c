/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x14022B3C0
 * Callers:
 *     MiComputePxeWalkAction @ 0x14020BF20 (MiComputePxeWalkAction.c)
 *     MmMapViewInSystemCache @ 0x14022A1F0 (MmMapViewInSystemCache.c)
 *     MiSynchronizeSystemVa @ 0x14022B050 (MiSynchronizeSystemVa.c)
 *     MiReleaseSystemCacheView @ 0x14022F3DC (MiReleaseSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiProbeAndLockPrepare @ 0x1402A7E50 (MiProbeAndLockPrepare.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402BBFB0 (MmSetAddressRangeModifiedEx.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmFreeSystemCacheReserveView @ 0x1408C3AD0 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
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
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

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
      v2 = v3 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v2 = v3;
      v3 = v2;
      if ( (v10 & 0x42) != 0 )
        v3 = v2 | 0x42;
    }
  }
  v11 = v3;
  if ( (unsigned int)MiPteInShadowRange(&v11, v2)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v6 )
    {
      v7 = *((_QWORD *)&v6->Flink + (((unsigned __int64)&v11 >> 3) & 0x1FF));
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
