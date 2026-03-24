/*
 * XREFs of ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0087208
 * Callers:
 *     MergeAllocationPendingVaRangeList @ 0x1C005EAC0 (MergeAllocationPendingVaRangeList.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x1C005FDE4 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0062E98 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0073444 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B4F68 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C00BC970 (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001338 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015080 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x1C001794C (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C0026158 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1C005F060 (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 *     ?AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005F15C (-AddVaRangeToVadRangeListWithFix@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENT.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z @ 0x1C0060348 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EEE@Z.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0087674 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ?VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z @ 0x1C00BF794 (-VidMmiCalculateNewOwnerOffset@@YA_KPEAUVIDMM_MAPPED_VA_RANGE@@_J@Z.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x1C00BF7C0 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::AddVaRangeToVadRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        unsigned int a3,
        struct _LIST_ENTRY **a4,
        struct VIDMM_MAPPED_VA_RANGE *a5)
{
  __int64 v6; // rbx
  struct _LIST_ENTRY *Blink; // r9
  struct _LIST_ENTRY *v11; // r15
  struct _LIST_ENTRY **p_Flink; // rax
  struct _LIST_ENTRY *v13; // rbx
  unsigned __int64 v14; // rcx
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *v16; // r13
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  int v19; // ebx
  struct _LIST_ENTRY *v20; // r9
  PSLIST_ENTRY v21; // r10
  struct VIDMM_MAPPED_VA_RANGE *v22; // r15
  unsigned int v23; // edx
  struct _LIST_ENTRY *v24; // r9
  __int64 v25; // r9
  __int64 v26; // rbx
  struct _LIST_ENTRY *v27; // r9
  PSLIST_ENTRY v28; // r10
  int v29; // eax
  __int64 VidMmAllocFromOwner; // rax
  __int64 v31; // r8
  __int64 v32; // [rsp+50h] [rbp-68h]
  char v33; // [rsp+70h] [rbp-48h]
  unsigned __int64 v34; // [rsp+80h] [rbp-38h]
  char v35; // [rsp+D0h] [rbp+18h]

  v35 = a3;
  v6 = a3;
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
    return CVirtualAddressAllocator::AddVaRangeToVadRangeListWithFix(this, a2, v6, a4, a5);
  v33 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    v33 = 1;
  }
  v11 = (struct _LIST_ENTRY *)((char *)a2 + 32 * v6 + 8 * v6 + 96);
  p_Flink = &v11->Flink;
  if ( a4 )
    p_Flink = a4;
  v13 = *p_Flink;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( v13 == v11 )
        {
          v29 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v11);
LABEL_36:
          v19 = v29;
          if ( v29 < 0 )
            goto LABEL_41;
          goto LABEL_37;
        }
        v14 = *((_QWORD *)a5 + 13);
        p_Blink = &v13[-1].Blink;
        Blink = v13[5].Blink;
        v16 = v13;
        v13 = v13->Flink;
        if ( v14 <= (unsigned __int64)Blink )
        {
          v29 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v16);
          goto LABEL_36;
        }
        v17 = *((_QWORD *)a5 + 12);
        v18 = (unsigned __int64)p_Blink[13];
      }
      while ( v17 >= v18 );
      if ( v17 > (unsigned __int64)Blink )
        break;
      if ( v14 < v18 )
      {
        v19 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, Blink, v16);
        if ( v19 < 0 )
          goto LABEL_41;
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
LABEL_37:
        if ( a4 )
          *a4 = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 1);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*((_DWORD *)a5 + 16) << 28) >> 28, *((_QWORD *)a5 + 7));
          LODWORD(v32) = v31;
          McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
            *((_QWORD *)a5 + 9),
            &UpdateGpuVirtualAddressRangeMapping,
            v31,
            this,
            VidMmAllocFromOwner,
            *((_QWORD *)a5 + 9),
            *((_QWORD *)a5 + 12),
            *((_QWORD *)a5 + 13),
            *((_QWORD *)a5 + 11),
            *((_QWORD *)a5 + 10),
            v32,
            *((_QWORD *)a5 + 14),
            *((_QWORD *)a5 + 15));
        }
        goto LABEL_41;
      }
      VidMmiLogEndVaRangeMapping(
        (struct CVirtualAddressAllocator *)this,
        (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
        (unsigned __int64)p_Blink[9],
        (unsigned __int64)Blink,
        (unsigned __int64)p_Blink[13]);
      CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v16, 0, 1, 0);
    }
    if ( v14 < v18 )
      break;
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
      (unsigned __int64)p_Blink[9],
      *((_QWORD *)a5 + 12),
      (unsigned __int64)p_Blink[13]);
    p_Blink[13] = (struct _LIST_ENTRY *)*((_QWORD *)a5 + 12);
  }
  v21 = VIDMM_MAPPED_VA_RANGE::operator new();
  if ( v21 )
    v22 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                            (__int64)v21,
                                            (__int64)a2,
                                            (__int64)p_Blink[12],
                                            *((_QWORD *)a5 + 12),
                                            v35,
                                            (__int64)p_Blink[7],
                                            (__int64)p_Blink[9],
                                            (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                            (__int64)p_Blink[11],
                                            (__int64)p_Blink[10],
                                            (__int64)p_Blink[15],
                                            (__int64)p_Blink[14],
                                            0);
  else
    v22 = 0LL;
  if ( !v22 )
    goto LABEL_24;
  v19 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v22, v20, v16);
  if ( v19 < 0 )
  {
LABEL_26:
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v22, v23);
    goto LABEL_41;
  }
  v19 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, a5, v24, v16);
  if ( v19 >= 0 )
  {
    v34 = VidMmiCalculateNewOwnerOffset(
            (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
            *((_QWORD *)a5 + 12) - (_QWORD)p_Blink[12]);
    v26 = VidMmiCalculateNewOwnerOffset((struct VIDMM_MAPPED_VA_RANGE *)p_Blink, *((_QWORD *)a5 + 13) - v25);
    v28 = VIDMM_MAPPED_VA_RANGE::operator new();
    if ( v28 )
      v22 = (struct VIDMM_MAPPED_VA_RANGE *)VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                                              (__int64)v28,
                                              (__int64)a2,
                                              *((_QWORD *)a5 + 13),
                                              (__int64)p_Blink[13],
                                              v35,
                                              (__int64)p_Blink[7],
                                              v26,
                                              (int)(*((_DWORD *)p_Blink + 16) << 28) >> 28,
                                              (__int64)p_Blink[11],
                                              (__int64)p_Blink[10],
                                              (__int64)p_Blink[15],
                                              (__int64)p_Blink[14],
                                              0);
    else
      v22 = 0LL;
    if ( !v22 )
    {
LABEL_24:
      v19 = -1073741801;
      goto LABEL_41;
    }
    v19 = CVirtualAddressAllocator::AddVaRangeToVad((CVirtualAddressAllocator *)this, a2, v22, v27, v16);
    if ( v19 < 0 )
      goto LABEL_26;
    VidMmiLogEndVaRangeMapping(
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)p_Blink,
      v34,
      *((_QWORD *)a5 + 12),
      *((_QWORD *)a5 + 13));
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v16, 0, 0, 0);
    goto LABEL_37;
  }
LABEL_41:
  if ( v33 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v19;
}
