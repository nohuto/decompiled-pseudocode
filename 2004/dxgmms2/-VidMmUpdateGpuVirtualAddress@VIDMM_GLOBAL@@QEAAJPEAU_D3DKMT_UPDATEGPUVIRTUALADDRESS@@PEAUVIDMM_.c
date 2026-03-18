/*
 * XREFs of ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00B80D4
 * Callers:
 *     VidMmUpdateGpuVirtualAddress @ 0x1C0022E50 (VidMmUpdateGpuVirtualAddress.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0001BA8 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001CC0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002354 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     VidSchWaitForSingleSyncObject @ 0x1C0005D70 (VidSchWaitForSingleSyncObject.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1C0022FFC (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0023B48 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     VidSchSubmitGlobalCommand @ 0x1C008AB94 (VidSchSubmitGlobalCommand.c)
 *     ?IsRangeValid@@YAE_K00@Z @ 0x1C00B1FC0 (-IsRangeValid@@YAE_K00@Z.c)
 *     ?RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IPEAU_VIDSCH_SYNC_OBJECT@@_K@Z @ 0x1C00BFCA0 (-RecordVaPagingHistoryUpdateGpuVa@VIDMM_GLOBAL@@QEAAXEPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@IP.c)
 *     ?RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@PEAUVIDMM_ALLOC@@PEAU_D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION@@@Z @ 0x1C00BFE24 (-RecordVaPagingHistoryUpdateGpuVaOp@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_VIDSCH_CONTEXT@@P.c)
 *     ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C00C054C (-ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *a2,
        struct VIDMM_COMPANION_CONTEXT *a3,
        int a4,
        struct _VIDMM_MULTI_ALLOC **a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        struct _KSEMAPHORE **a7)
{
  struct VIDMM_COMPANION_CONTEXT *v7; // rbx
  struct _D3DKMT_UPDATEGPUVIRTUALADDRESS *v8; // r12
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rsi
  __int64 v14; // r11
  __int64 v15; // r9
  unsigned __int64 BaseAddress; // r15
  VIDMM_GLOBAL *v17; // r10
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r13
  unsigned __int64 DriverProtection; // rcx
  __int64 v21; // rax
  UINT v22; // r14d
  struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v23; // rsi
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType; // eax
  PVOID v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int8 v30; // al
  unsigned __int8 v31; // al
  __int64 v32; // rdx
  D3DGPU_SIZE_T AllocationSizeInBytes; // r12
  D3DGPU_SIZE_T AllocationOffsetInBytes; // r9
  D3DGPU_SIZE_T SizeInBytes; // r8
  D3DGPU_SIZE_T v36; // rdx
  unsigned __int64 v37; // rax
  __int64 Value; // rbx
  PVOID v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r9
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct VIDMM_VAD *v57; // rbx
  struct VIDMM_VAD *v58; // r8
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rcx
  char *v62; // rcx
  struct VIDMM_VAD *v63; // rax
  struct VIDMM_VAD **v64; // rdx
  char **v65; // rdx
  __int128 *i; // rcx
  bool v67; // zf
  __int64 v68; // rdx
  char *v69; // rcx
  unsigned int j; // r9d
  __int64 v71; // rax
  char v72; // [rsp+68h] [rbp-A0h]
  __int128 v73; // [rsp+70h] [rbp-98h] BYREF
  int v74; // [rsp+80h] [rbp-88h]
  int v75; // [rsp+84h] [rbp-84h]
  int v76; // [rsp+88h] [rbp-80h]
  unsigned __int64 v77; // [rsp+90h] [rbp-78h]
  __int64 v78; // [rsp+98h] [rbp-70h]
  unsigned __int64 v79; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v80; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v81; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v82; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v83; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v84; // [rsp+C8h] [rbp-40h]
  __int64 v85; // [rsp+D0h] [rbp-38h]
  __int64 v86; // [rsp+D8h] [rbp-30h]
  __int64 v87; // [rsp+E0h] [rbp-28h]
  union _LARGE_INTEGER Timeout; // [rsp+E8h] [rbp-20h] BYREF
  D3DGPU_SIZE_T v89; // [rsp+F0h] [rbp-18h]
  PRKSEMAPHORE Semaphore; // [rsp+F8h] [rbp-10h]
  struct VIDMM_VAD *v91; // [rsp+100h] [rbp-8h]
  char v92[8]; // [rsp+108h] [rbp+0h] BYREF
  DXGPUSHLOCK *v93; // [rsp+110h] [rbp+8h]
  int v94; // [rsp+118h] [rbp+10h]
  _QWORD v95[26]; // [rsp+128h] [rbp+20h] BYREF
  bool v100; // [rsp+238h] [rbp+130h]

  Timeout.QuadPart = 0LL;
  v7 = a3;
  v8 = a2;
  Semaphore = (PRKSEMAPHORE)((char *)a3 + 24);
  *a7 = (struct _KSEMAPHORE *)((char *)a3 + 24);
  if ( KeWaitForSingleObject((char *)a3 + 24, Executive, 0, 0, &Timeout) == 258 )
  {
    v11 = WdLogNewEntry5_WdWarning(v10, v9);
    WdLogEvent5_WdWarning(v11);
    return 3223191810LL;
  }
  v13 = *(_QWORD *)v7;
  v14 = 0LL;
  v15 = *((_QWORD *)v7 + 1);
  BaseAddress = -1LL;
  v17 = this;
  v18 = 0LL;
  v78 = v13;
  v19 = 0LL;
  DriverProtection = *(_QWORD *)(v13 + 16);
  v21 = *(_QWORD *)(v15 + 96);
  v77 = DriverProtection;
  v76 = -1073741811;
  v91 = 0LL;
  v74 = *(unsigned __int16 *)(v21 + 6);
  *((_QWORD *)&v73 + 1) = &v73;
  *(_QWORD *)&v73 = &v73;
  v79 = -1LL;
  v80 = 0LL;
  v83 = -1LL;
  v82 = 0LL;
  v72 = 0;
  if ( *((_QWORD *)this + 5123) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVa(
      this,
      1u,
      *(struct VIDMM_PROCESS **)(v13 + 96),
      (struct _VIDSCH_CONTEXT *)v15,
      v8->NumOperations,
      a6,
      v8->FenceValue);
    v17 = this;
    v14 = 0LL;
    DriverProtection = v77;
  }
  v22 = 0;
  if ( !v8->NumOperations )
  {
LABEL_79:
    if ( (v8->Flags.Value & 1) == 0 )
    {
      *((_BYTE *)a6 + 25) = v14;
      v76 = VidSchWaitForSingleSyncObject(*((_QWORD *)v7 + 1), (__int64)a6, v8->FenceValue);
      if ( v76 < 0 )
      {
        v51 = WdLogNewEntry5_WdAssertion(v49, v48, v50);
        *(_QWORD *)(v51 + 24) = 25580LL;
        WdLogEvent5_WdAssertion(v51);
        goto LABEL_100;
      }
    }
    v52 = operator new[](0xB8uLL, 0x39346956u, PagedPool);
    v18 = v52;
    if ( v52 )
    {
      memset(v52, 0, 0xB8uLL);
      v18[13] = v18 + 12;
      v18[12] = v18 + 12;
      v18[7] = v18 + 6;
      v18[6] = v18 + 6;
    }
    else
    {
      v18 = 0LL;
    }
    if ( !v18 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v54, v53);
      goto LABEL_90;
    }
    v18[1] = this;
    *((_DWORD *)v18 + 5) = v8->NumOperations;
    v18[10] = v8->FenceValue + 1;
    *((_DWORD *)v18 + 4) = v74;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v92, (struct _KTHREAD **)(v13 + 56), 0);
    DXGPUSHLOCK::AcquireExclusive(v93);
    v94 = 2;
    v57 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v13, BaseAddress, v19);
    if ( !v57 )
      goto LABEL_99;
    if ( v72 )
    {
      v58 = CVirtualAddressAllocator::ReferenceReservedZeroVad((CVirtualAddressAllocator *)v13, v83, v82);
      if ( !v58 )
      {
LABEL_99:
        v59 = WdLogNewEntry5_WdWarning(v56, v55);
        WdLogEvent5_WdWarning(v59);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v92);
        goto LABEL_100;
      }
    }
    else
    {
      v58 = v91;
    }
    v18[14] = v57;
    v18[18] = v18 + 14;
    v62 = (char *)v57 + 80;
    v18[15] = v58;
    v18[21] = v18 + 15;
    v63 = (struct VIDMM_VAD *)(v18 + 16);
    v64 = (struct VIDMM_VAD **)*((_QWORD *)v57 + 11);
    if ( *v64 != (struct VIDMM_VAD *)((char *)v57 + 80) )
      goto LABEL_124;
    *(_QWORD *)v63 = v62;
    v18[17] = v64;
    *v64 = v63;
    *((_QWORD *)v57 + 11) = v63;
    if ( v58 )
    {
      v65 = (char **)(v18 + 19);
      if ( *(char **)v63 != v62 )
        goto LABEL_124;
      *v65 = v62;
      v18[20] = v63;
      *(_QWORD *)v63 = v65;
      *((_QWORD *)v57 + 11) = v65;
      *((_BYTE *)v18 + 176) = 1;
    }
    for ( i = (__int128 *)v73; i != &v73; i = *(__int128 **)i )
    {
      v67 = *((_QWORD *)i + 9) == 0LL;
      *((_QWORD *)i - 1) = v57;
      if ( v67 )
      {
        v68 = *((_QWORD *)v57 + 12);
        if ( (struct VIDMM_VAD *)v68 != (struct VIDMM_VAD *)((char *)v57 + 96) )
          *((_QWORD *)i + 9) = *(_QWORD *)(v68 + 72);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v92);
    v69 = (char *)(v18 + 12);
    v18[8] = a5;
    *((_DWORD *)v18 + 8) = a4;
    v18[3] = v8->Operations;
    v8->Operations = 0LL;
    v18[9] = a6;
    v18[11] = a3;
    *v18 = *((_QWORD *)a3 + 1);
    if ( (__int128 *)v73 == &v73 )
    {
      v18[13] = v18 + 12;
      *(_QWORD *)v69 = v69;
    }
    else
    {
      *(_OWORD *)v69 = v73;
      *(_QWORD *)(*(_QWORD *)v69 + 8LL) = v69;
      *(_QWORD *)v18[13] = v69;
    }
    *((_QWORD *)&v73 + 1) = &v73;
    *(_QWORD *)&v73 = &v73;
    _InterlockedIncrement((volatile signed __int32 *)a6 + 8);
    for ( j = 0; j < *((_DWORD *)v18 + 8); ++j )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18[8] + 8LL * j) + 160LL));
    memset(v95, 0, 0x88uLL);
    v95[6] = v18;
    LODWORD(v95[5]) = 2;
    LODWORD(v95[0]) = 2;
    v95[3] = VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress;
    v71 = *((_QWORD *)a3 + 1);
    v95[4] = 0LL;
    VidSchSubmitGlobalCommand(*(_QWORD *)(*(_QWORD *)(v71 + 104) + 32LL), (__int64)v95);
    return 0LL;
  }
  while ( 1 )
  {
    v23 = &v8->Operations[(unsigned __int64)v22];
    OperationType = v23->OperationType;
    if ( v23->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
      || OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
    {
      break;
    }
    if ( OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP )
    {
      BaseAddress = v23->Map.BaseAddress;
      v19 = BaseAddress + v23->Map.SizeInBytes;
      if ( *((_QWORD *)v17 + 5123) != v14 )
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
          v17,
          *(struct VIDMM_PROCESS **)(v78 + 96),
          *((struct _VIDSCH_CONTEXT **)v7 + 1),
          0LL,
          &v8->Operations[(unsigned __int64)v22]);
      if ( !IsRangeValid(BaseAddress, v19, v77) )
        goto LABEL_100;
      v25 = operator new[](0x88uLL, 0x39346956u, PagedPool);
      v14 = 0LL;
      if ( v25 )
        v28 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                (__int64)v25,
                0LL,
                BaseAddress,
                v19,
                v74,
                0LL,
                0LL,
                (v23->Copy.DestAddress & 8) == 0 ? 6 : 0,
                v23->Unmap.Protection.Value,
                0LL,
                0LL,
                0LL);
      else
        v28 = 0LL;
      if ( !v28 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26);
        v47[3] = 25496LL;
        goto LABEL_90;
      }
      DriverProtection = *((_QWORD *)&v73 + 1);
      v29 = (_QWORD *)(v28 + 8);
      if ( **((__int128 ***)&v73 + 1) == &v73 )
      {
        v29[1] = *((_QWORD *)&v73 + 1);
        v9 = (unsigned __int64)&v73;
        *v29 = &v73;
        *(_QWORD *)DriverProtection = v29;
        *((_QWORD *)&v73 + 1) = v29;
        goto LABEL_63;
      }
LABEL_124:
      __fastfail(3u);
    }
    if ( OperationType != D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY )
      goto LABEL_83;
    BaseAddress = v23->Unmap.Protection.Value;
    v19 = BaseAddress + v23->Map.SizeInBytes;
    if ( *((_QWORD *)v17 + 5123) != v14 )
      VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
        v17,
        *(struct VIDMM_PROCESS **)(v78 + 96),
        *((struct _VIDSCH_CONTEXT **)v7 + 1),
        0LL,
        &v8->Operations[(unsigned __int64)v22]);
    v30 = IsRangeValid(BaseAddress, v19, v77);
    v14 = 0LL;
    if ( !v30 )
      goto LABEL_100;
    DriverProtection = v23->Map.BaseAddress;
    v9 = DriverProtection + v23->Map.SizeInBytes;
    if ( v9 <= DriverProtection )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(DriverProtection, v9);
      v47[4] = 25521LL;
      goto LABEL_89;
    }
    if ( (DriverProtection & 0xFFF) != 0 || (v9 & 0xFFF) != 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(DriverProtection, v9);
      v47[4] = 25526LL;
      goto LABEL_89;
    }
    if ( BaseAddress < v9 && v19 > DriverProtection )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(DriverProtection, v9);
      v47[4] = 25532LL;
      goto LABEL_89;
    }
    v72 = 1;
    if ( v83 <= DriverProtection )
      DriverProtection = v83;
    v83 = DriverProtection;
    if ( v82 >= v9 )
      v9 = v82;
    v82 = v9;
LABEL_63:
    v17 = this;
LABEL_64:
    if ( v19 <= BaseAddress )
    {
LABEL_83:
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(DriverProtection, v9);
      v47[4] = 25552LL;
      goto LABEL_89;
    }
    if ( ((BaseAddress | v19) & 0xFFF) != 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(DriverProtection, v9);
      v47[4] = 25557LL;
      goto LABEL_89;
    }
    if ( v79 <= BaseAddress )
      BaseAddress = v79;
    v79 = BaseAddress;
    if ( v80 >= v19 )
      v19 = v80;
    ++v22;
    v80 = v19;
    if ( v22 >= v8->NumOperations )
    {
      v13 = v78;
      goto LABEL_79;
    }
    DriverProtection = v77;
  }
  BaseAddress = v23->Map.BaseAddress;
  v19 = BaseAddress + v23->Map.SizeInBytes;
  v31 = IsRangeValid(BaseAddress, v19, DriverProtection);
  v14 = 0LL;
  if ( !v31 )
    goto LABEL_100;
  v17 = this;
  DriverProtection = (unsigned __int64)a5[v23->Map.hAllocation];
  v81 = DriverProtection;
  if ( *((_QWORD *)this + 5123) )
  {
    VIDMM_GLOBAL::RecordVaPagingHistoryUpdateGpuVaOp(
      this,
      *(struct VIDMM_PROCESS **)(v78 + 96),
      *((struct _VIDSCH_CONTEXT **)v7 + 1),
      (struct VIDMM_ALLOC *)DriverProtection,
      v23);
    v17 = this;
    v14 = 0LL;
    DriverProtection = v81;
  }
  AllocationSizeInBytes = v23->Map.AllocationSizeInBytes;
  if ( (AllocationSizeInBytes & 0xFFF) != 0
    || (AllocationOffsetInBytes = v23->Map.AllocationOffsetInBytes, (AllocationOffsetInBytes & 0xFFF) != 0) )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(DriverProtection, v32);
    v47[4] = 25371LL;
    goto LABEL_89;
  }
  SizeInBytes = v23->Map.SizeInBytes;
  if ( AllocationSizeInBytes )
  {
    if ( AllocationSizeInBytes > SizeInBytes )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(DriverProtection, v32);
    }
    else
    {
      if ( !(SizeInBytes % AllocationSizeInBytes) )
        goto LABEL_41;
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(DriverProtection, SizeInBytes % AllocationSizeInBytes);
      v47[4] = 25394LL;
    }
LABEL_89:
    v47[3] = v22;
    goto LABEL_90;
  }
  v23->Map.AllocationSizeInBytes = SizeInBytes;
  AllocationSizeInBytes = SizeInBytes;
LABEL_41:
  v36 = AllocationSizeInBytes + AllocationOffsetInBytes;
  if ( AllocationSizeInBytes + AllocationOffsetInBytes < AllocationOffsetInBytes
    || (DriverProtection = **(_QWORD **)DriverProtection, v36 > *(_QWORD *)(DriverProtection + 16)) )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(DriverProtection, v36);
    v47[3] = *(_QWORD *)(**(_QWORD **)v81 + 16LL);
    v47[4] = v22;
    v47[5] = 25405LL;
    goto LABEL_90;
  }
  LOBYTE(DriverProtection) = *((_BYTE *)v17 + 40937) & 4;
  if ( (_BYTE)DriverProtection )
  {
    v9 = 1LL;
    v87 = 1LL;
    v100 = SizeInBytes != AllocationSizeInBytes;
  }
  else
  {
    v100 = 0;
    v9 = SizeInBytes / AllocationSizeInBytes;
    v87 = SizeInBytes / AllocationSizeInBytes;
  }
  v89 = AllocationOffsetInBytes & -(__int64)((_BYTE)DriverProtection != 0);
  if ( (_BYTE)DriverProtection )
    AllocationSizeInBytes = SizeInBytes;
  if ( v9 >= 0xFFFFFFFF )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(DriverProtection, v9);
    v47[4] = 25428LL;
    goto LABEL_89;
  }
  v37 = BaseAddress;
  v84 = 0LL;
  v86 = BaseAddress;
  if ( v23->OperationType )
  {
    DriverProtection = v23->MapProtect.DriverProtection;
    Value = v23->MapProtect.Protection.Value;
    v84 = DriverProtection;
  }
  else
  {
    Value = 1LL;
  }
  v75 = 0;
  if ( !(_DWORD)v9 )
  {
    v8 = a2;
    v7 = a3;
    goto LABEL_64;
  }
  while ( 1 )
  {
    v85 = AllocationSizeInBytes + v37;
    v39 = operator new[](0x88uLL, 0x39346956u, PagedPool);
    v14 = 0LL;
    if ( v39 )
    {
      v42 = v100 ? v23->Map.AllocationSizeInBytes >> 12 : 0LL;
      v43 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
              (__int64)v39,
              0LL,
              v86,
              v85,
              v74,
              v81,
              v23->Map.AllocationOffsetInBytes,
              1,
              Value,
              v84,
              v42,
              v89);
    }
    else
    {
      v44 = v85;
      v43 = 0LL;
    }
    if ( !v43 )
      break;
    v45 = (_QWORD *)*((_QWORD *)&v73 + 1);
    v46 = (_QWORD *)(v43 + 8);
    if ( **((__int128 ***)&v73 + 1) != &v73 )
      goto LABEL_124;
    v46[1] = *((_QWORD *)&v73 + 1);
    v9 = (unsigned __int64)&v73;
    *v46 = &v73;
    *v45 = v46;
    DriverProtection = (unsigned int)(v75 + 1);
    *((_QWORD *)&v73 + 1) = v46;
    v37 = v44;
    v75 = DriverProtection;
    v86 = v44;
    if ( (unsigned int)DriverProtection >= (unsigned int)v87 )
    {
      v8 = a2;
      v7 = a3;
      goto LABEL_63;
    }
  }
  v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v40);
  v47[3] = 25460LL;
LABEL_90:
  WdLogEvent5_WdWarning(v47);
LABEL_100:
  KeReleaseSemaphore(Semaphore, 0, 1, 0);
  if ( v18 )
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'((VIDMM_DEVICE_COMMAND_UPDATEGPUVA *)v18);
  while ( 1 )
  {
    v60 = (_QWORD *)v73;
    if ( (__int128 *)v73 == &v73 )
      return (unsigned int)v76;
    if ( *(__int128 **)(v73 + 8) != &v73 )
      goto LABEL_124;
    v61 = *(_QWORD *)v73;
    if ( *(_QWORD *)(*(_QWORD *)v73 + 8LL) != (_QWORD)v73 )
      goto LABEL_124;
    *(_QWORD *)&v73 = *(_QWORD *)v73;
    *(_QWORD *)(v61 + 8) = &v73;
    v60[1] = 0LL;
    *v60 = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v60 - 1));
  }
}
