/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0066D60
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0066CA0 (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001690 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage @ 0x1C0017A40 (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C005FFD8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00602F0 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0062E04 (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0067880 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C006F95C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00BE2F0 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        unsigned __int8 a5)
{
  bool v5; // cf
  unsigned __int64 *v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v11; // rsi
  unsigned int v12; // r13d
  __int64 *v13; // rdx
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v15; // r8
  D3DGPU_SIZE_T v16; // rcx
  __int64 v17; // rax
  D3DGPU_SIZE_T SizeInPages; // rcx
  unsigned __int64 v20; // rcx
  VIDMM_PROCESS *v21; // rcx
  __int64 v22; // rcx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r10d
  unsigned int v27; // r11d
  struct VIDMM_PROCESS **v28; // rbp
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  volatile signed __int32 *v32; // rsi
  __int64 v33; // rax
  bool v34; // zf
  struct VIDMM_PAGING_QUEUE *v35; // r13
  unsigned int v36; // edi
  struct _MDL *BaseAddress; // [rsp+28h] [rbp-90h]
  unsigned __int64 *MinimumAddress; // [rsp+30h] [rbp-88h]
  struct VIDMM_VAD_PENDING_OPERATION *MaximumAddress; // [rsp+38h] [rbp-80h]
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // [rsp+48h] [rbp-70h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-68h]
  struct VIDMM_VAD_PENDING_OPERATION *v43; // [rsp+D0h] [rbp+18h] BYREF

  v5 = a5 != 0;
  a5 = -a5;
  LODWORD(v43) = *((_DWORD *)a2 + 36);
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
      v17 = WdLogNewEntry5_WdWarning(v16, v13);
      SizeInPages = a4->OffsetInPages;
      *(_QWORD *)(v17 + 32) = 20455LL;
LABEL_8:
      *(_QWORD *)(v17 + 24) = SizeInPages;
      WdLogEvent5_WdWarning(v17);
      return 3221225485LL;
    }
    v20 = v16 - OffsetInPages;
    if ( v20 < v11 >> 12 && (*((_BYTE *)this + 40937) & 4) == 0 )
    {
      v17 = WdLogNewEntry5_WdWarning(v20, v13);
      SizeInPages = a4->SizeInPages;
      *(_QWORD *)(v17 + 32) = 20466LL;
      goto LABEL_8;
    }
    v21 = (VIDMM_PROCESS *)v13[1];
    if ( *(_DWORD *)(v15 + 32) > 0x1000u )
      v12 = *(_DWORD *)(v15 + 32);
  }
  else
  {
    v22 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v22 )
      v21 = *(VIDMM_PROCESS **)(v22 + 8);
    else
      v21 = 0LL;
  }
  if ( !v11 )
  {
    v17 = WdLogNewEntry5_WdWarning(v21, v13);
    SizeInPages = a4->SizeInPages;
    *(_QWORD *)(v17 + 32) = 20488LL;
    goto LABEL_8;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              v21,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
                              0xFFFFFFFF);
  v28 = (struct VIDMM_PROCESS **)VirtualAddressAllocator;
  if ( VirtualAddressAllocator )
  {
    DriverProtection = a4->DriverProtection;
    Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
    MaximumAddress = (struct VIDMM_VAD_PENDING_OPERATION *)a4->MaximumAddress;
    MinimumAddress = (unsigned __int64 *)a4->MinimumAddress;
    BaseAddress = (struct _MDL *)a4->BaseAddress;
    v30 = a4->OffsetInPages << 12;
    v43 = 0LL;
    v31 = CVirtualAddressAllocator::MapVirtualAddressRange(
            VirtualAddressAllocator,
            (__int64)a3,
            v30,
            v26,
            v11,
            (unsigned __int64)BaseAddress,
            (unsigned __int64)MinimumAddress,
            (unsigned __int64)MaximumAddress,
            v12,
            (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)Value,
            DriverProtection,
            v27,
            (void **)&v43,
            1,
            1);
    v32 = (volatile signed __int32 *)v31;
    if ( v31 )
    {
      v34 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
      a4->VirtualAddress = *(_QWORD *)(v31 + 96);
      a4->PagingFenceValue = 0LL;
      if ( v34 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 128));
        v35 = a2;
        v36 = VIDMM_GLOBAL::CommitVirtualAddressRange(
                this,
                (struct CVirtualAddressAllocator *)v28,
                a2,
                (struct VIDMM_MAPPED_VA_RANGE *)v31,
                0,
                0LL,
                v7,
                v43);
        if ( v36 == 259 && a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
        {
          a3[33] = (__int64 *)a2;
          a3[36] = (__int64 *)*v7;
        }
      }
      else
      {
        if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage()
          && (unsigned int)Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsage() )
        {
          _InterlockedIncrement(v32 + 32);
        }
        v35 = a2;
        v36 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
                this,
                (struct CVirtualAddressAllocator *)v28,
                (struct VIDMM_MAPPED_VA_RANGE *)v32,
                0,
                v43);
      }
      if ( *((_QWORD *)this + 5123) )
      {
        if ( v7 )
          v8 = *v7;
        VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(this, v28[12], (struct VIDMM_MAPPED_VA_RANGE *)v32, v35, v8);
      }
      VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
        (VIDMM_MAPPED_VA_RANGE *)v32,
        (struct CVirtualAddressAllocator *)v28);
      return v36;
    }
    else
    {
      v33 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v33 + 24) = 20521LL;
      WdLogEvent5_WdError(v33);
      return 3221225473LL;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdWarning(v25, v24);
    WdLogEvent5_WdWarning(v29);
    return 3221225495LL;
  }
}
