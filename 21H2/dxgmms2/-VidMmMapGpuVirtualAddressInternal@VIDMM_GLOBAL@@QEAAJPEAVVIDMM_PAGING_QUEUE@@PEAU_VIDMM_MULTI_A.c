/*
 * XREFs of ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0088C60
 * Callers:
 *     ?VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@EI@Z @ 0x1C0088B6C (-VidMmMapGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C007B4E8 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C007B820 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0089010 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C00A303C (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAVVIDMM_PAGING_QUEUE@@_K@Z @ 0x1C00E3640 (-RecordVaPagingHistoryMapGpuVa@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MAPPED_VA_RANGE@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmMapGpuVirtualAddressInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        __int64 **a3,
        struct D3DDDI_MAPGPUVIRTUALADDRESS *a4,
        char a5)
{
  unsigned int v5; // eax
  bool v7; // cf
  D3DGPU_SIZE_T SizeInPages; // rdx
  VIDMM_GLOBAL *v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 *v12; // r12
  unsigned __int64 v13; // rdi
  unsigned int v14; // r10d
  char v15; // r13
  D3DGPU_SIZE_T OffsetInPages; // rax
  __int64 v17; // r14
  D3DGPU_SIZE_T v18; // rcx
  __int64 v19; // r8
  unsigned int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rdx
  _QWORD *v24; // r14
  __int64 v25; // r14
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdi
  bool v29; // zf
  VIDMM_GLOBAL *v30; // r13
  unsigned int v31; // esi
  struct VIDMM_PAGING_QUEUE *v32; // rcx
  char v33; // al
  bool v34; // r9
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // [rsp+28h] [rbp-D8h]
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // [rsp+30h] [rbp-D0h]
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+38h] [rbp-C8h]
  struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA Value; // [rsp+48h] [rbp-B8h]
  UINT64 DriverProtection; // [rsp+50h] [rbp-B0h]
  _QWORD v40[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v41; // [rsp+80h] [rbp-80h]
  __int128 v42; // [rsp+90h] [rbp-70h]
  __int128 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  _QWORD v46[11]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v49; // [rsp+180h] [rbp+80h]
  struct VIDMM_VAD_PENDING_OPERATION *v50; // [rsp+188h] [rbp+88h] BYREF

  v5 = *((_DWORD *)a2 + 36);
  v7 = a5 != 0;
  a5 = -a5;
  SizeInPages = a4->SizeInPages;
  v10 = this;
  v49 = v5;
  v11 = 0LL;
  v12 = (unsigned __int64 *)((unsigned __int64)&a4->PagingFenceValue & -(__int64)v7);
  v13 = SizeInPages << 12;
  v14 = 4096;
  v15 = 1;
  if ( a3 )
  {
    if ( !SizeInPages )
      v13 = *(_QWORD *)(**a3 + 16);
    if ( *((_BYTE *)a3 + 24) )
      a4->Protection.Value &= ~1uLL;
    OffsetInPages = a4->OffsetInPages;
    v17 = **a3;
    v18 = *(_QWORD *)(v17 + 16) >> 12;
    if ( OffsetInPages >= v18 )
    {
      v19 = 20720LL;
      SizeInPages = a4->OffsetInPages;
LABEL_8:
      WdLogSingleEntry2(3LL, SizeInPages, v19);
      return 3221225485LL;
    }
    if ( v18 - OffsetInPages < v13 >> 12 && (*((_BYTE *)v10 + 40937) & 4) == 0 )
    {
      v19 = 20731LL;
      goto LABEL_8;
    }
    v21 = 1;
    v22 = (*a3)[1];
    if ( *(_DWORD *)(v17 + 32) > 0x1000u )
      v14 = *(_DWORD *)(v17 + 32);
  }
  else
  {
    v23 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v23 )
      v22 = *(_QWORD *)(v23 + 8);
    else
      v22 = 0LL;
    v21 = 0;
    v10 = this;
    if ( (*(_BYTE *)&a4->Protection.0 & 4) != 0 )
      v21 = 6;
    v14 = 4096;
  }
  if ( !v13 )
  {
    SizeInPages = a4->SizeInPages;
    v19 = 20753LL;
    goto LABEL_8;
  }
  v24 = *(_QWORD **)(*(_QWORD *)(v22 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)v10 + 3) + 240LL));
  if ( !v24
    || !*(_DWORD *)(*v24 + 40928LL)
    || ((*(_DWORD *)(v22 + 96) & 2) == 0 ? (v25 = v24[63]) : (v25 = *(_QWORD *)(*v24 + 0x800009DD8LL)), !v25) )
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
  DriverProtection = a4->DriverProtection;
  Value = (struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE::$1733E72EC9282FC5874A304A0CB4AC6C::$B8A99364A42B8948C2A577AA69BF28DA)a4->Protection.Value;
  MaximumAddress = a4->MaximumAddress;
  MinimumAddress = a4->MinimumAddress;
  BaseAddress = a4->BaseAddress;
  v26 = a4->OffsetInPages << 12;
  v50 = 0LL;
  v27 = CVirtualAddressAllocator::MapVirtualAddressRange(
          (_QWORD *)v25,
          (__int64)a3,
          v26,
          v21,
          v13,
          BaseAddress,
          MinimumAddress,
          MaximumAddress,
          v14,
          (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)Value,
          DriverProtection,
          v49,
          (void **)&v50,
          1);
  v28 = v27;
  if ( !v27 )
  {
    WdLogSingleEntry1(2LL, 20785LL);
    return 3221225473LL;
  }
  v29 = (*(_BYTE *)&a4->Protection.0 & 8) == 0;
  a4->VirtualAddress = *(_QWORD *)(v27 + 96);
  a4->PagingFenceValue = 0LL;
  if ( v29 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v27 + 128), 1u);
    memset(v46, 0, sizeof(v46));
    v46[8] = v50;
    v46[6] = v28;
    v46[5] = v25;
    v40[1] = *((_QWORD *)a2 + 17);
    v33 = *(_DWORD *)(v28 + 64) & 0xF;
    v46[7] = 0LL;
    v40[0] = 113LL;
    v41 = 0LL;
    v45 = 0LL;
    if ( v33 == 1 )
      *(_QWORD *)&v41 = *(_QWORD *)(v28 + 56);
    v42 = *(_OWORD *)&v46[5];
    v44 = v46[9];
    LOBYTE(v44) = 1;
    v43 = *(_OWORD *)&v46[7];
    if ( v12 && dword_1C006E428 )
      v15 = 0;
    v34 = v15;
    v30 = this;
    v31 = VIDMM_GLOBAL::QueueDeferredCommand(this, a2, (struct _VIDMM_DEFERRED_COMMAND *)v40, v34, v12);
    if ( v31 == 259 )
    {
      v32 = a2;
      if ( a3 && (*((_DWORD *)a3 + 7) & 0x20) != 0 )
      {
        a3[31] = (__int64 *)a2;
        a3[34] = (__int64 *)*v12;
      }
      goto LABEL_34;
    }
  }
  else
  {
    v30 = this;
    v31 = VIDMM_GLOBAL::UncommitVirtualAddressRange(
            this,
            (struct CVirtualAddressAllocator *)v25,
            (struct VIDMM_MAPPED_VA_RANGE *)v27,
            0,
            v50);
  }
  v32 = a2;
LABEL_34:
  if ( *((_QWORD *)v30 + 5123) )
  {
    if ( v12 )
      v11 = *v12;
    VIDMM_GLOBAL::RecordVaPagingHistoryMapGpuVa(
      v30,
      *(struct VIDMM_PROCESS **)(v25 + 96),
      (struct VIDMM_MAPPED_VA_RANGE *)v28,
      v32,
      v11);
  }
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(
    (volatile signed __int32 *)v28,
    (struct CVirtualAddressAllocator *)v25);
  return v31;
}
