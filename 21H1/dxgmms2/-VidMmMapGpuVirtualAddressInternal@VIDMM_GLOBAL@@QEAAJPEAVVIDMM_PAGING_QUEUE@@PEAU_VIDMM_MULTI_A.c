/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C006500C
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0064F4C (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00659D0 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C006FAB8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C007080C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00755C0 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00BF6C0 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        unsigned __int8 a5)
{
  bool v5; // cf
  unsigned __int64 *v7; // r15
  unsigned __int64 v8; // rbx
  D3DGPU_SIZE_T v11; // rbp
  int v12; // r12d
  __int64 *v13; // rdx
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v15; // r8
  D3DGPU_SIZE_T v16; // rcx
  D3DGPU_SIZE_T v17; // rcx
  VIDMM_PROCESS *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r10d
  int v22; // r11d
  struct VIDMM_PROCESS **VirtualAddressAllocator; // r13
  D3DGPU_SIZE_T v24; // r8
  __int64 v25; // rax
  struct VIDMM_MAPPED_VA_RANGE *v26; // rbp
  bool v27; // zf
  struct VIDMM_PAGING_QUEUE *v28; // r12
  unsigned int v29; // edi
  __int64 v31; // rax
  D3DGPU_SIZE_T SizeInPages; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  struct _MDL *BaseAddress; // [rsp+28h] [rbp-80h]
  unsigned __int64 *MinimumAddress; // [rsp+30h] [rbp-78h]
  struct VIDMM_VAD_PENDING_OPERATION *MaximumAddress; // [rsp+38h] [rbp-70h]
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // [rsp+48h] [rbp-60h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-58h]
  struct VIDMM_VAD_PENDING_OPERATION *v42; // [rsp+C0h] [rbp+18h] BYREF

  v5 = a5 != 0;
  a5 = -a5;
  LODWORD(v42) = *((_DWORD *)a2 + 36);
  v7 = (unsigned __int64 *)((unsigned __int64)&a4->PagingFenceValue & -(__int64)v5);
  v8 = 0LL;
  v11 = a4->SizeInPages << 12;
  v12 = 4096;
  if ( a3 )
  {
    if ( !a4->SizeInPages )
      v11 = *(_QWORD *)(**a3 + 16);
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    v13 = *a3;
    OffsetInPages = a4->OffsetInPages;
    v15 = **a3;
    v16 = *(_QWORD *)(v15 + 16) >> 12;
    if ( OffsetInPages >= v16 )
    {
      v31 = WdLogNewEntry5_WdWarning(v16, v13);
      SizeInPages = a4->OffsetInPages;
      *(_QWORD *)(v31 + 32) = 20186LL;
LABEL_22:
      *(_QWORD *)(v31 + 24) = SizeInPages;
      WdLogEvent5_WdWarning(v31);
      return 3221225485LL;
    }
    v17 = v16 - OffsetInPages;
    if ( v17 < v11 >> 12 && (*((_BYTE *)this + 40937) & 4) == 0 )
    {
      v31 = WdLogNewEntry5_WdWarning(v17, v13);
      SizeInPages = a4->SizeInPages;
      *(_QWORD *)(v31 + 32) = 20197LL;
      goto LABEL_22;
    }
    v18 = (VIDMM_PROCESS *)v13[1];
    if ( *(_DWORD *)(v15 + 32) > 0x1000u )
      v12 = *(_DWORD *)(v15 + 32);
  }
  else
  {
    v33 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v33 )
      v18 = *(VIDMM_PROCESS **)(v33 + 8);
    else
      v18 = 0LL;
  }
  if ( !v11 )
  {
    v31 = WdLogNewEntry5_WdWarning(v18, v13);
    SizeInPages = a4->SizeInPages;
    *(_QWORD *)(v31 + 32) = 20219LL;
    goto LABEL_22;
  }
  VirtualAddressAllocator = (struct VIDMM_PROCESS **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                       v18,
                                                       *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
                                                       0xFFFFFFFF);
  if ( VirtualAddressAllocator )
  {
    DriverProtection = a4->DriverProtection;
    Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
    MaximumAddress = (struct VIDMM_VAD_PENDING_OPERATION *)a4->MaximumAddress;
    MinimumAddress = (unsigned __int64 *)a4->MinimumAddress;
    BaseAddress = (struct _MDL *)a4->BaseAddress;
    v24 = a4->OffsetInPages << 12;
    v42 = 0LL;
    v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _DWORD, _QWORD))CVirtualAddressAllocator::MapVirtualAddressRange)(
            VirtualAddressAllocator,
            a3,
            v24,
            v21,
            v11,
            BaseAddress,
            MinimumAddress,
            MaximumAddress,
            v12,
            Value,
            DriverProtection,
            v22,
            &v42);
    v26 = (struct VIDMM_MAPPED_VA_RANGE *)v25;
    if ( v25 )
    {
      v27 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
      a4->VirtualAddress = *(_QWORD *)(v25 + 96);
      a4->PagingFenceValue = 0LL;
      if ( v27 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 128));
        v28 = a2;
        v29 = VIDMM_GLOBAL::CommitVirtualAddressRange(
                this,
                (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
                a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v25,
                0,
                0LL,
                v7,
                v42);
        if ( v29 == 259 && a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
        {
          a3[31] = (__int64 *)a2;
          a3[34] = (__int64 *)*v7;
        }
      }
      else
      {
        v28 = a2;
        v29 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
                this,
                (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
                (struct VIDMM_MAPPED_VA_RANGE *)v25,
                0,
                v42);
      }
      if ( *((_QWORD *)this + 5123) )
      {
        if ( v7 )
          v8 = *v7;
        VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(this, VirtualAddressAllocator[12], v26, v28, v8);
      }
      return v29;
    }
    else
    {
      v35 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v35 + 24) = 20250LL;
      WdLogEvent5_WdError(v35);
      return 3221225473LL;
    }
  }
  else
  {
    v34 = WdLogNewEntry5_WdWarning(v20, v19);
    WdLogEvent5_WdWarning(v34);
    return 3221225495LL;
  }
}
