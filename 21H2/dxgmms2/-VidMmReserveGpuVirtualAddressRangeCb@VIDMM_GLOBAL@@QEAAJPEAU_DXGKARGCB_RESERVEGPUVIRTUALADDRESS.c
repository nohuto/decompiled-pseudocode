/*
 * XREFs of ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C009CBCC
 * Callers:
 *     VidMmReserveGpuVirtualAddressRangeCb @ 0x1C0014A90 (VidMmReserveGpuVirtualAddressRangeCb.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00859C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C009A5E0 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C009BB44 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddressRangeCb(
        VIDMM_GLOBAL *this,
        struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // dl
  UINT Alignment; // ecx
  UINT64 v8; // rcx
  __int64 v9; // rax
  UINT64 v10; // rcx
  unsigned int v11; // r10d
  unsigned int v12; // r15d
  VIDMM_PROCESS *v13; // r13
  __int64 v14; // r12
  unsigned int v15; // r14d
  CVirtualAddressAllocator *VirtualAddressAllocator; // r11
  __int64 result; // rax
  UINT64 BaseAddress; // rax
  UINT64 SizeInBytes; // rax
  __int64 v20; // rcx

  v6 = *((_BYTE *)this + 40936);
  if ( (v6 & 2) == 0 )
  {
    WdLogSingleEntry1(1LL, 22264LL);
    goto LABEL_34;
  }
  Alignment = a2->Alignment;
  if ( !Alignment || ((Alignment - 1) & Alignment) != 0 )
  {
    WdLogSingleEntry1(1LL, 22270LL);
    goto LABEL_34;
  }
  if ( (a2->Flags & 1) != 0 )
  {
    BaseAddress = a2->BaseAddress;
    if ( BaseAddress && (BaseAddress & 0xFFF) != 0 )
    {
      WdLogSingleEntry1(1LL, 22293LL);
    }
    else
    {
      SizeInBytes = a2->SizeInBytes;
      if ( SizeInBytes && (SizeInBytes & 0xFFF) == 0 )
        goto LABEL_9;
      WdLogSingleEntry1(1LL, 22299LL);
    }
LABEL_34:
    DxgkLogInternalTriageEvent(v20, 0x40000LL);
    return 3221225485LL;
  }
  v8 = a2->BaseAddress;
  v9 = (1LL << *((_DWORD *)this + 10233) << 12) - 1;
  if ( v8 && (v8 & v9) != 0 )
  {
    WdLogSingleEntry1(1LL, 22279LL);
    goto LABEL_34;
  }
  v10 = a2->SizeInBytes;
  if ( !v10 || (v10 & v9) != 0 )
  {
    WdLogSingleEntry1(1LL, 22285LL);
    goto LABEL_34;
  }
LABEL_9:
  v11 = 0;
  v12 = 1;
  v13 = (VIDMM_PROCESS *)*((_QWORD *)a2->hDxgkProcess + 1);
  if ( (*(_DWORD *)(*((_QWORD *)a2->hDxgkProcess + 4) + 424LL) & 2) == 0 )
  {
LABEL_10:
    v14 = 0LL;
    v15 = 0;
    while ( 1 )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  v13,
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                  v15);
      if ( VirtualAddressAllocator )
      {
        v11 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
                VirtualAddressAllocator,
                a2->SizeInBytes,
                a2->BaseAddress,
                0LL,
                0LL,
                a2->Alignment,
                D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT,
                0LL,
                (*(_BYTE *)&a2->0 & 1) == 0,
                &a2->StartVirtualAddress,
                0LL,
                0);
      }
      else if ( (*(_BYTE *)(*((_QWORD *)this + 5028) + v14 + 436) & 1) != 0 )
      {
        return 3221225485LL;
      }
      ++v15;
      v14 += 1584LL;
      if ( v15 >= v12 )
        return v11;
    }
  }
  if ( (v6 & 0x20) == 0 )
  {
    result = VIDMM_PROCESS::OpenAdapter(*((struct _KTHREAD ***)a2->hDxgkProcess + 1), this, a3, a4);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    *((_BYTE *)this + 40936) |= 0x20u;
  }
  v12 = *((_DWORD *)this + 1754);
  if ( v12 )
    goto LABEL_10;
  return v11;
}
