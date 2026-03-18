/*
 * XREFs of ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C007DE28
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0078BB4 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C007DAA4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C007DFA4 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015030 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C001505C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C007DAA4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVaRangeFromVad(
        CVirtualAddressAllocator *this,
        struct _LIST_ENTRY *a2,
        char a3,
        char a4)
{
  volatile signed __int32 *p_Blink; // rdi
  struct _LIST_ENTRY *Blink; // rbp
  __int64 v9; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 **VidMmAllocFromOwner; // r8
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  volatile signed __int32 *v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  struct _LIST_ENTRY *v22; // rax
  int v23; // ecx
  volatile signed __int32 *v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  volatile signed __int32 **v28; // rax
  struct _LIST_ENTRY *v29; // rcx
  __int64 VidMmGlobalAllocFromOwner; // rbx
  __int64 v31; // rdx
  volatile signed __int32 **v32; // rax

  p_Blink = (volatile signed __int32 *)&a2[-1].Blink;
  Blink = a2[-1].Blink;
  v9 = (LODWORD(a2[3].Blink) >> 4) & 0x3F;
  if ( *(&Blink[7].Flink + 3 * v9) == a2 )
    *((_QWORD *)&Blink[7].Flink + 3 * v9) = 0LL;
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 )
    goto LABEL_27;
  v12 = a2->Blink;
  if ( v12->Flink != a2 )
    goto LABEL_27;
  v12->Flink = Flink;
  Flink->Blink = v12;
  v13 = *((_QWORD *)p_Blink + 7);
  v14 = (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28;
  a2->Flink = 0LL;
  VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v14, v13);
  if ( VidMmAllocFromOwner )
  {
    v16 = p_Blink + 6;
    v17 = *((_QWORD *)p_Blink + 3);
    if ( v17 )
    {
      if ( *(_QWORD **)(v17 + 8) != v16 )
        goto LABEL_27;
      v25 = (_QWORD *)*((_QWORD *)p_Blink + 4);
      if ( (_QWORD *)*v25 != v16 )
        goto LABEL_27;
      *v25 = v17;
      *(_QWORD *)(v17 + 8) = v25;
      *v16 = 0LL;
    }
    v18 = p_Blink + 10;
    if ( *((_QWORD *)p_Blink + 5) )
    {
      v26 = **VidMmAllocFromOwner;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v26 + 344, 0LL);
      v27 = *(_QWORD *)v18;
      if ( *(volatile signed __int32 **)(*(_QWORD *)v18 + 8LL) != v18 )
        goto LABEL_27;
      v28 = (volatile signed __int32 **)*((_QWORD *)p_Blink + 6);
      if ( *v28 != v18 )
        goto LABEL_27;
      *v28 = (volatile signed __int32 *)v27;
      *(_QWORD *)(v27 + 8) = v28;
      *(_QWORD *)v18 = 0LL;
      ExReleasePushLockExclusiveEx(v26 + 344, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  --HIDWORD(Blink[4].Blink);
  if ( a4 )
    *(_QWORD *)p_Blink = 0LL;
  if ( _InterlockedExchangeAdd(p_Blink + 32, 0xFFFFFFFF) == 1 )
  {
    v19 = p_Blink + 6;
    v20 = *((_QWORD *)p_Blink + 3);
    if ( v20 )
    {
      if ( *(_QWORD **)(v20 + 8) != v19 )
        goto LABEL_27;
      v21 = (_QWORD *)*((_QWORD *)p_Blink + 4);
      if ( (_QWORD *)*v21 != v19 )
        goto LABEL_27;
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      *v19 = 0LL;
    }
    v22 = a2->Flink;
    if ( a2->Flink )
    {
      if ( v22->Blink != a2 )
        goto LABEL_27;
      v29 = a2->Blink;
      if ( v29->Flink != a2 )
        goto LABEL_27;
      v29->Flink = v22;
      v22->Blink = v29;
      a2->Flink = 0LL;
    }
    v23 = *((_DWORD *)p_Blink + 16);
    if ( (v23 & 0x1000) != 0 )
      goto LABEL_23;
    v24 = p_Blink + 10;
    if ( !*((_QWORD *)p_Blink + 5) )
      goto LABEL_23;
    VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v23 << 28 >> 28, *((_QWORD *)p_Blink + 7));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
    v31 = *(_QWORD *)v24;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v24 + 8LL) == v24 )
    {
      v32 = (volatile signed __int32 **)*((_QWORD *)p_Blink + 6);
      if ( *v32 == v24 )
      {
        *v32 = (volatile signed __int32 *)v31;
        *(_QWORD *)(v31 + 8) = v32;
        *(_QWORD *)v24 = 0LL;
        ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
        KeLeaveCriticalRegion();
LABEL_23:
        operator delete((void *)p_Blink);
        goto LABEL_11;
      }
    }
LABEL_27:
    __fastfail(3u);
  }
LABEL_11:
  if ( a3 && ((__int64)Blink[4].Blink & 0xF) == 3 && !HIDWORD(Blink[4].Blink) )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
      this,
      (struct VIDMM_VAD *)Blink,
      (__int64)VidMmAllocFromOwner);
}
