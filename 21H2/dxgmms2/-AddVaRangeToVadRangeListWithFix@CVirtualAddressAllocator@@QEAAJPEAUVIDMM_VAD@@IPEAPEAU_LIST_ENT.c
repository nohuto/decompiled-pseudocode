/*
 * XREFs of ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005F15C
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0087208 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001338 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015054 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015080 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x1C001794C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsage @ 0x1C0018990 (Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C0026158 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ?AddVaRangeToVadWithFix@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C005F9B4 (-AddVaRangeToVadWithFix@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0060348 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z.c)
 *     ValidateUniqueGpuVaMapping @ 0x1C0060610 (ValidateUniqueGpuVaMapping.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x1C00BF794 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x1C00BF7C0 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeListWithFix(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY **a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  __int64 v8; // r14
  struct _LIST_ENTRY **v9; // rsi
  __int64 VidMmGlobalAllocFromOwner; // r13
  __int64 v11; // rbx
  struct VIDMM_MAPPED_VA_RANGE *v12; // rbx
  __int64 v13; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _LIST_ENTRY *v17; // r9
  __int64 v18; // rax
  unsigned int v19; // edi
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  struct _LIST_ENTRY *v26; // rcx
  struct _LIST_ENTRY **p_Flink; // rax
  struct _LIST_ENTRY *v28; // rdi
  struct _LIST_ENTRY **p_Blink; // r14
  struct _LIST_ENTRY *v30; // rdx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v32; // r9
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  int v37; // r10d
  int v38; // r11d
  struct VIDMM_VAD *v39; // rdx
  struct _LIST_ENTRY *v40; // r9
  unsigned int v41; // edx
  struct _LIST_ENTRY *v42; // rax
  unsigned int v43; // edx
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // r9
  int v47; // ebx
  unsigned __int64 v48; // rsi
  __int64 v49; // rax
  int v50; // r11d
  struct VIDMM_VAD *v51; // rdx
  struct _LIST_ENTRY *v52; // r9
  __int64 VidMmAllocFromOwner; // rax
  __int64 v54; // r8
  __int64 v55; // rcx
  bool v56; // zf
  __int64 v57; // rax
  __int64 v59; // [rsp+50h] [rbp-98h]
  struct _LIST_ENTRY *Flink; // [rsp+78h] [rbp-70h]
  struct _LIST_ENTRY *v61; // [rsp+80h] [rbp-68h]
  __int64 v62; // [rsp+88h] [rbp-60h]
  __int64 v63; // [rsp+90h] [rbp-58h]
  char v64; // [rsp+F0h] [rbp+8h]
  char v66; // [rsp+100h] [rbp+18h]
  char v68; // [rsp+110h] [rbp+28h]

  v66 = a3;
  v8 = a3;
  v9 = a4;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner((int)(*((_DWORD *)a5 + 16) << 28) >> 28, *((_QWORD *)a5 + 7));
  v64 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v64 = 1;
  }
  v68 = 0;
  if ( !(unsigned int)Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsage() )
  {
    if ( !VidMmGlobalAllocFromOwner )
      goto LABEL_10;
    v11 = VidMmGlobalAllocFromOwner + 344;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
    goto LABEL_9;
  }
  if ( VidMmGlobalAllocFromOwner && *(struct _KTHREAD **)(VidMmGlobalAllocFromOwner + 352) != KeGetCurrentThread() )
  {
    v11 = VidMmGlobalAllocFromOwner + 344;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
    v68 = 1;
LABEL_9:
    *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
  }
LABEL_10:
  ++dword_1C0050804;
  v12 = (struct VIDMM_MAPPED_VA_RANGE *)ExpInterlockedPopEntrySList(&g_VaRangeLookasideList);
  if ( !v12 )
  {
    ++dword_1C0050808;
    v12 = (struct VIDMM_MAPPED_VA_RANGE *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, union _SLIST_HEADER *))qword_1C0050820)(
                                            (unsigned int)dword_1C0050814,
                                            (unsigned int)dword_1C005081C,
                                            (unsigned int)dword_1C0050818,
                                            &g_VaRangeLookasideList);
  }
  ++dword_1C0050804;
  v14 = (struct VIDMM_MAPPED_VA_RANGE *)ExpInterlockedPopEntrySList(&g_VaRangeLookasideList);
  if ( !v14 )
  {
    ++dword_1C0050808;
    v14 = (struct VIDMM_MAPPED_VA_RANGE *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, union _SLIST_HEADER *))qword_1C0050820)(
                                            (unsigned int)dword_1C0050814,
                                            (unsigned int)dword_1C005081C,
                                            (unsigned int)dword_1C0050818,
                                            &g_VaRangeLookasideList);
  }
  if ( !v12 || !v14 )
  {
    _InterlockedIncrement(&dword_1C00507E8);
    v57 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v57 + 24) = v12;
    *(_QWORD *)(v57 + 32) = v14;
    WdLogEvent5_WdLowResource(v57);
    v19 = -1073741801;
    goto LABEL_57;
  }
  if ( !(unsigned __int8)ValidateUniqueGpuVaMapping(a5) )
  {
    v18 = WdLogNewEntry5_WdWarning(v16, v15);
    WdLogEvent5_WdWarning(v18);
    v19 = -1073741811;
    goto LABEL_57;
  }
  if ( (*((_DWORD *)a5 + 16) & 0x2000) != 0 )
  {
    v20 = (_QWORD *)((char *)a5 + 24);
    v21 = *((_QWORD *)a5 + 3);
    if ( v21 )
    {
      if ( *(_QWORD **)(v21 + 8) != v20 )
        goto LABEL_39;
      v22 = (_QWORD *)*((_QWORD *)a5 + 4);
      if ( (_QWORD *)*v22 != v20 )
        goto LABEL_39;
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      *v20 = 0LL;
      *((_QWORD *)a5 + 4) = 0LL;
    }
    v23 = (_QWORD *)((char *)a5 + 8);
    v24 = *((_QWORD *)a5 + 1);
    if ( *(struct VIDMM_MAPPED_VA_RANGE **)(v24 + 8) == (struct VIDMM_MAPPED_VA_RANGE *)((char *)a5 + 8) )
    {
      v25 = (_QWORD *)*((_QWORD *)a5 + 2);
      if ( (_QWORD *)*v25 == v23 )
      {
        *v25 = v24;
        *(_QWORD *)(v24 + 8) = v25;
        *((_DWORD *)a5 + 16) &= ~0x2000u;
        *v23 = 0LL;
        *((_QWORD *)a5 + 2) = 0LL;
        goto LABEL_26;
      }
    }
LABEL_39:
    __fastfail(3u);
  }
LABEL_26:
  v26 = (struct _LIST_ENTRY *)((char *)a2 + 32 * v8 + 8 * v8 + 96);
  p_Flink = &v26->Flink;
  v61 = v26;
  if ( v9 )
    p_Flink = v9;
  Flink = (struct _LIST_ENTRY *)((char *)a2 + 32 * v8 + 8 * v8 + 96);
  v28 = *p_Flink;
  if ( *p_Flink == v26 )
  {
    v42 = v26;
  }
  else
  {
    while ( 1 )
    {
      p_Blink = &v28[-1].Blink;
      v30 = v28;
      Blink = v28[5].Blink;
      v28 = v28->Flink;
      if ( *((_QWORD *)a5 + 13) <= (unsigned __int64)Blink )
        break;
      if ( *((_QWORD *)a5 + 12) < (unsigned __int64)p_Blink[13] )
      {
        _InterlockedIncrement((volatile signed __int32 *)p_Blink + 32);
        Flink = v30->Flink;
        CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v30, 0, 0, 1);
        v32 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 12);
        v33 = (unsigned __int64)p_Blink[12];
        v34 = *((_QWORD *)a5 + 13);
        v35 = (unsigned __int64)p_Blink[13];
        v62 = v34;
        v63 = v35;
        if ( (unsigned __int64)v32 > v33 )
        {
          if ( v34 < v35 )
          {
            if ( v12 )
              VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                (__int64)v12,
                (__int64)a2,
                v33,
                (__int64)v32,
                v66,
                (__int64)p_Blink[7],
                (__int64)p_Blink[9],
                (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                (__int64)p_Blink[11],
                (__int64)p_Blink[10],
                (__int64)p_Blink[15],
                (__int64)p_Blink[14],
                *((_DWORD *)p_Blink + 16));
            CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v12, v32, Flink);
            v44 = VidMmiCalculateNewOwnerOffset(
                    (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                    *((_QWORD *)a5 + 12) - (_QWORD)p_Blink[12]);
            v45 = *((_QWORD *)a5 + 13);
            v47 = (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28;
            v48 = v44;
            v49 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)p_Blink, v45 - v46);
            VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
              (__int64)v14,
              (__int64)a2,
              v45,
              v63,
              v66,
              (__int64)p_Blink[7],
              v49,
              v47,
              (__int64)p_Blink[11],
              (__int64)p_Blink[10],
              (__int64)p_Blink[15],
              (__int64)p_Blink[14],
              v50);
            CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, v51, v14, v52, Flink);
            Flink = (struct _LIST_ENTRY *)((char *)v14 + 8);
            VidMmiLogEndVaRangeMapping(
              (struct CVirtualAddressAllocator *)this,
              (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
              v48,
              *((_QWORD *)a5 + 12),
              *((_QWORD *)a5 + 13));
            v12 = 0LL;
            goto LABEL_36;
          }
          if ( v12 )
            VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
              (__int64)v12,
              (__int64)a2,
              v33,
              (__int64)v32,
              v66,
              (__int64)p_Blink[7],
              (__int64)p_Blink[9],
              (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
              (__int64)p_Blink[11],
              (__int64)p_Blink[10],
              (__int64)p_Blink[15],
              (__int64)p_Blink[14],
              *((_DWORD *)p_Blink + 16));
          CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, v12, v32, Flink);
          v33 = *((_QWORD *)a5 + 12);
          v12 = 0LL;
          v35 = (unsigned __int64)p_Blink[13];
        }
        else if ( v34 < v35 )
        {
          v36 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)p_Blink, v34 - v33);
          VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
            (__int64)v14,
            (__int64)a2,
            v62,
            v35,
            v66,
            (__int64)p_Blink[7],
            v36,
            v38,
            (__int64)p_Blink[11],
            (__int64)p_Blink[10],
            (__int64)p_Blink[15],
            (__int64)p_Blink[14],
            v37);
          CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, v39, v14, v40, Flink);
          Flink = (struct _LIST_ENTRY *)((char *)v14 + 8);
          VidMmiLogEndVaRangeMapping(
            (struct CVirtualAddressAllocator *)this,
            (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
            (unsigned __int64)p_Blink[9],
            (unsigned __int64)p_Blink[12],
            *((_QWORD *)a5 + 13));
          if ( GetVidMmAllocFromOwner((int)(*((_DWORD *)p_Blink + 16) << 28) >> 28, (__int64)p_Blink[7]) )
            p_Blink[9] = (struct _LIST_ENTRY *)VidMmiCalculateNewOwnerOffset(
                                                 (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
                                                 *((_QWORD *)a5 + 13) - (_QWORD)p_Blink[12]);
          p_Blink[12] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 13);
LABEL_36:
          v14 = 0LL;
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)p_Blink, v41);
LABEL_37:
          v42 = Flink;
          goto LABEL_38;
        }
        VidMmiLogEndVaRangeMapping(
          (struct CVirtualAddressAllocator *)this,
          (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
          (unsigned __int64)p_Blink[9],
          v33,
          v35);
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)p_Blink, v43);
        v26 = v61;
      }
      if ( v28 == v26 )
        goto LABEL_37;
    }
    v42 = v30;
LABEL_38:
    v9 = a4;
  }
  CVirtualAddressAllocator::AddVaRangeToVadWithFix((CVirtualAddressAllocator *)this, a2, a5, v17, v42);
  if ( v9 )
    *v9 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)a5 + 16) << 28) >> 28, *((_QWORD *)a5 + 7));
    LODWORD(v59) = v54;
    McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
      v55,
      &UpdateGpuVirtualAddressRangeMapping,
      v54,
      this,
      VidMmAllocFromOwner,
      *((_QWORD *)a5 + 9),
      *((_QWORD *)a5 + 12),
      *((_QWORD *)a5 + 13),
      *((_QWORD *)a5 + 11),
      *((_QWORD *)a5 + 10),
      v59,
      *((_QWORD *)a5 + 14),
      *((_QWORD *)a5 + 15));
  }
  v19 = 0;
LABEL_57:
  if ( (unsigned int)Feature_Servicing_PteDeadLock__private_IsEnabledDeviceUsage() )
    v56 = v68 == 0;
  else
    v56 = VidMmGlobalAllocFromOwner == 0;
  if ( !v56 )
  {
    *(_QWORD *)(VidMmGlobalAllocFromOwner + 352) = 0LL;
    ExReleasePushLockExclusiveEx(VidMmGlobalAllocFromOwner + 344, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v12 )
  {
    ++dword_1C005080C;
    if ( ExQueryDepthSList(&g_VaRangeLookasideList) < (unsigned __int16)word_1C0050800 )
    {
      ExpInterlockedPushEntrySList(&g_VaRangeLookasideList, (PSLIST_ENTRY)v12);
    }
    else
    {
      ++dword_1C0050810;
      ((void (__fastcall *)(struct VIDMM_MAPPED_VA_RANGE *, union _SLIST_HEADER *))qword_1C0050828)(
        v12,
        &g_VaRangeLookasideList);
    }
  }
  if ( v14 )
  {
    ++dword_1C005080C;
    if ( ExQueryDepthSList(&g_VaRangeLookasideList) < (unsigned __int16)word_1C0050800 )
    {
      ExpInterlockedPushEntrySList(&g_VaRangeLookasideList, (PSLIST_ENTRY)v14);
    }
    else
    {
      ++dword_1C0050810;
      ((void (__fastcall *)(struct VIDMM_MAPPED_VA_RANGE *, union _SLIST_HEADER *))qword_1C0050828)(
        v14,
        &g_VaRangeLookasideList);
    }
  }
  if ( v64 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return v19;
}
