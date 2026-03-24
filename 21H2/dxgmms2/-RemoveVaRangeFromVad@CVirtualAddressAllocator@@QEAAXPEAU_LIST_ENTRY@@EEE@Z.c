/*
 * XREFs of ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0060348
 * Callers:
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005F15C (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENT.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0068080 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006E028 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0087208 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001338 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015080 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C006E028 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVaRangeFromVad(
        CVirtualAddressAllocator *this,
        struct _LIST_ENTRY *a2,
        char a3,
        char a4,
        char a5)
{
  struct _LIST_ENTRY **p_Blink; // r14
  struct _LIST_ENTRY *Blink; // rsi
  char v8; // di
  __int64 v10; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v12; // rcx
  int v13; // ecx
  struct _LIST_ENTRY *v14; // rdx
  __int64 **VidMmAllocFromOwner; // r8
  struct _LIST_ENTRY *v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  char *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rax
  char **v21; // rcx
  __int64 v22; // rcx
  char **v23; // rax

  p_Blink = &a2[-1].Blink;
  Blink = a2[-1].Blink;
  v8 = a3;
  v10 = (LODWORD(a2[3].Blink) >> 4) & 0x3F;
  if ( *(&Blink[7].Flink + 5 * v10) == a2 )
    *((_QWORD *)&Blink[7].Flink + 5 * v10) = 0LL;
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 )
    goto LABEL_29;
  v12 = a2->Blink;
  if ( v12->Flink != a2 )
    goto LABEL_29;
  v12->Flink = Flink;
  Flink->Blink = v12;
  v13 = *((_DWORD *)p_Blink + 16) << 28;
  a2->Flink = 0LL;
  VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v13 >> 28, (__int64)p_Blink[7]);
  if ( !VidMmAllocFromOwner )
    goto LABEL_22;
  v16 = (struct _LIST_ENTRY *)(p_Blink + 3);
  v14 = p_Blink[3];
  if ( v14 )
  {
    if ( v14->Blink != v16 )
      goto LABEL_29;
    v17 = p_Blink[4];
    if ( v17->Flink != v16 )
      goto LABEL_29;
    v17->Flink = v14;
    v14->Blink = v17;
    v16->Flink = 0LL;
  }
  v18 = (char *)(p_Blink + 5);
  if ( p_Blink[5] )
  {
    v19 = **VidMmAllocFromOwner;
    if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
    {
      if ( !a5 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v19 + 344, 0LL);
        *(_QWORD *)(v19 + 352) = KeGetCurrentThread();
      }
      v20 = *(_QWORD *)v18;
      if ( *(char **)(*(_QWORD *)v18 + 8LL) == v18 )
      {
        v21 = (char **)p_Blink[6];
        if ( *v21 == v18 )
        {
          *v21 = (char *)v20;
          *(_QWORD *)(v20 + 8) = v21;
          *(_QWORD *)v18 = 0LL;
          if ( !a5 )
          {
            *(_QWORD *)(v19 + 352) = 0LL;
            ExReleasePushLockExclusiveEx(v19 + 344, 0LL);
            KeLeaveCriticalRegion();
          }
          goto LABEL_21;
        }
      }
LABEL_29:
      __fastfail(3u);
    }
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v19 + 344, 0LL);
    *(_QWORD *)(v19 + 352) = KeGetCurrentThread();
    v22 = *(_QWORD *)v18;
    if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 )
      goto LABEL_29;
    v23 = (char **)p_Blink[6];
    if ( *v23 != v18 )
      goto LABEL_29;
    *v23 = (char *)v22;
    *(_QWORD *)(v22 + 8) = v23;
    *(_QWORD *)v18 = 0LL;
    *(_QWORD *)(v19 + 352) = 0LL;
    ExReleasePushLockExclusiveEx(v19 + 344, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_21:
  v8 = a3;
LABEL_22:
  --HIDWORD(Blink[4].Blink);
  if ( a4 )
    *p_Blink = 0LL;
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)p_Blink, (unsigned int)v14);
  if ( v8 && ((__int64)Blink[4].Blink & 0xF) == 3 && !HIDWORD(Blink[4].Blink) )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)Blink);
}
