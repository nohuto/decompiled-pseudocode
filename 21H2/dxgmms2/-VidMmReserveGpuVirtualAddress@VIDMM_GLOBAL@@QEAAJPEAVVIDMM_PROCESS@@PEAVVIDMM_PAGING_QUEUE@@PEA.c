/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00A6E84
 * Callers:
 *     VidMmReserveGpuVirtualAddress @ 0x1C0018C00 (VidMmReserveGpuVirtualAddress.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C009B124 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C009BB44 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00B85BC (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a4)
{
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // r11
  CVirtualAddressAllocator *VirtualAddressAllocator; // rbp
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11
  int v12; // r9d
  D3DGPU_VIRTUAL_ADDRESS MinimumAddress; // r9
  int v14; // esi
  D3DGPU_SIZE_T Size; // rdx
  _QWORD *v17; // r14
  unsigned int v18; // ecx
  void *v19; // rcx
  D3DGPU_VIRTUAL_ADDRESS MaximumAddress; // [rsp+20h] [rbp-78h]
  unsigned int v21; // [rsp+28h] [rbp-70h]
  enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE ReservationType; // [rsp+30h] [rbp-68h]
  struct VIDMM_VAD_PENDING_OPERATION *DriverProtection; // [rsp+38h] [rbp-60h]
  D3DGPU_VIRTUAL_ADDRESS VirtualAddress; // [rsp+60h] [rbp-38h]
  D3DGPU_SIZE_T v25; // [rsp+68h] [rbp-30h]
  struct VIDMM_MAPPED_VA_RANGE *v26; // [rsp+A0h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 40936) & 2) == 0 )
  {
    WdLogSingleEntry0(3LL);
    return 3221225485LL;
  }
  BaseAddress = a4->BaseAddress;
  a4->PagingFenceValue = 0LL;
  if ( (BaseAddress & 0xFFF) != 0 )
  {
    Size = BaseAddress;
LABEL_16:
    WdLogSingleEntry1(2LL, Size);
    return 3221225485LL;
  }
  if ( (a4->Size & 0xFFF) != 0 )
  {
    Size = a4->Size;
    goto LABEL_16;
  }
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                              0xFFFFFFFF);
  if ( !VirtualAddressAllocator )
  {
    WdLogSingleEntry1(2LL, 20996LL);
    return 3221225485LL;
  }
  v12 = 0x10000;
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2692LL) >= 2400
    && (*((_BYTE *)this + 40936) & 1) != 0
    && *((_DWORD *)this + 10232) >= 0x28u
    && !(v10 % (unsigned int)(4096 << *((_DWORD *)this + 10233))) )
  {
    v12 = 4096 << *((_DWORD *)this + 10233);
  }
  DriverProtection = (struct VIDMM_VAD_PENDING_OPERATION *)a4->DriverProtection;
  ReservationType = a4->ReservationType;
  v21 = v12;
  MinimumAddress = a4->MinimumAddress;
  MaximumAddress = a4->MaximumAddress;
  v26 = 0LL;
  v14 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
          VirtualAddressAllocator,
          v10,
          v11,
          MinimumAddress,
          MaximumAddress,
          v21,
          ReservationType,
          (unsigned __int64)DriverProtection,
          0,
          &a4->VirtualAddress,
          &v26,
          1u);
  if ( v14 < 0 )
  {
    WdLogSingleEntry0(3LL);
  }
  else
  {
    v25 = a4->Size;
    VirtualAddress = a4->VirtualAddress;
    if ( *((_QWORD *)this + 5123) )
    {
      v17 = (_QWORD *)operator new(32LL, 0x32356956u, 256LL);
      if ( v17 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
        *((_QWORD *)this + 5126) = KeGetCurrentThread();
        v18 = *((_DWORD *)this + 10248);
        if ( v18 == dword_1C006E41C )
        {
          *((_DWORD *)this + 10248) = 0;
          v18 = 0;
        }
        v19 = *(void **)(*((_QWORD *)this + 5123) + 24LL * v18 + 16);
        if ( v19 )
          operator delete(v19);
        *v17 = *(_QWORD *)a2;
        v17[1] = *((_QWORD *)a2 + 4);
        v17[2] = VirtualAddress;
        v17[3] = v25;
        *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248)) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*((_QWORD *)this + 5123) + 24LL * *((unsigned int *)this + 10248) + 16) = v17;
        *(_DWORD *)(*((_QWORD *)this + 5123) + 24LL * (unsigned int)(*((_DWORD *)this + 10248))++ + 8) = 16;
        *((_QWORD *)this + 5126) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( a4->Reserved0 == 1 )
    {
      v14 = VIDMM_GLOBAL::CommitVirtualAddressRange(this, VirtualAddressAllocator, a3, v26, 0, 0LL, 0LL, 0LL);
      if ( v14 < 0 )
      {
        WdLogSingleEntry0(3LL);
        CVirtualAddressAllocator::FreeVirtualAddressRange(VirtualAddressAllocator, a4->BaseAddress);
      }
    }
  }
  return (unsigned int)v14;
}
