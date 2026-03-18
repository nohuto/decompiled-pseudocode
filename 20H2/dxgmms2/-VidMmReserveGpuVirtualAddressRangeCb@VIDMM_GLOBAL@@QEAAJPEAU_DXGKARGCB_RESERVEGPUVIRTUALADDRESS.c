/*
 * XREFs of ?VidMmReserveGpuVirtualAddressRangeCb@VIDMM_GLOBAL@@QEAAJPEAU_DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE@@@Z @ 0x1C00869EC
 * Callers:
 *     VidMmReserveGpuVirtualAddressRangeCb @ 0x1C0015590 (VidMmReserveGpuVirtualAddressRangeCb.c)
 * Callees:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C006A9A4 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C007869C (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1C0086B78 (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmReserveGpuVirtualAddressRangeCb(
        VIDMM_GLOBAL *this,
        struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *a2,
        __int64 a3)
{
  struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE *v3; // rbx
  __int64 Alignment; // rcx
  UINT64 v6; // rcx
  __int64 v7; // rax
  UINT64 v8; // rcx
  unsigned int v9; // r10d
  VIDMM_PROCESS *v10; // r15
  unsigned int v11; // ebp
  unsigned int v12; // esi
  __int64 v13; // r14
  CVirtualAddressAllocator *VirtualAddressAllocator; // r11
  __int64 result; // rax
  UINT64 BaseAddress; // rax
  UINT64 SizeInBytes; // rax
  __int64 v18; // rax

  v3 = a2;
  LOBYTE(a2) = *((_BYTE *)this + 40936);
  if ( ((unsigned __int8)a2 & 2) == 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v18 + 24) = 21660LL;
    goto LABEL_34;
  }
  Alignment = v3->Alignment;
  if ( !(_DWORD)Alignment || (((_DWORD)Alignment - 1) & (unsigned int)Alignment) != 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(Alignment, a2, a3);
    *(_QWORD *)(v18 + 24) = 21666LL;
    goto LABEL_34;
  }
  if ( (v3->Flags & 1) != 0 )
  {
    BaseAddress = v3->BaseAddress;
    if ( BaseAddress && (BaseAddress & 0xFFF) != 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(4095LL, a2, a3);
      *(_QWORD *)(v18 + 24) = 21689LL;
    }
    else
    {
      SizeInBytes = v3->SizeInBytes;
      if ( SizeInBytes && (SizeInBytes & 0xFFF) == 0 )
        goto LABEL_9;
      v18 = WdLogNewEntry5_WdAssertion(4095LL, a2, a3);
      *(_QWORD *)(v18 + 24) = 21695LL;
    }
LABEL_34:
    WdLogEvent5_WdAssertion(v18);
    return 3221225485LL;
  }
  v6 = v3->BaseAddress;
  v7 = (1LL << *((_DWORD *)this + 10233) << 12) - 1;
  if ( v6 && (v6 & v7) != 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6, a2, a3);
    *(_QWORD *)(v18 + 24) = 21675LL;
    goto LABEL_34;
  }
  v8 = v3->SizeInBytes;
  if ( !v8 || (v8 & v7) != 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v8, a2, a3);
    *(_QWORD *)(v18 + 24) = 21681LL;
    goto LABEL_34;
  }
LABEL_9:
  v9 = 0;
  v10 = (VIDMM_PROCESS *)*((_QWORD *)v3->hDxgkProcess + 1);
  v11 = 1;
  if ( *(_BYTE *)(*((_QWORD *)v3->hDxgkProcess + 4) + 345LL) )
  {
    if ( ((unsigned __int8)a2 & 0x20) == 0 )
    {
      result = VIDMM_PROCESS::OpenAdapter(*((struct _KTHREAD ***)v3->hDxgkProcess + 1), this);
      v9 = result;
      if ( (int)result < 0 )
        return result;
      *((_BYTE *)this + 40936) |= 0x20u;
    }
    v11 = *((_DWORD *)this + 1750);
  }
  v12 = 0;
  if ( v11 )
  {
    v13 = 0LL;
    do
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  v10,
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 232LL),
                                  v12);
      if ( VirtualAddressAllocator )
      {
        v9 = CVirtualAddressAllocator::ReserveVirtualAddressRange(
               VirtualAddressAllocator,
               v3->SizeInBytes,
               v3->BaseAddress,
               0LL,
               0LL,
               v3->Alignment,
               D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT,
               0LL,
               (*(_BYTE *)&v3->0 & 1) == 0,
               &v3->StartVirtualAddress,
               0LL,
               0);
      }
      else if ( (*(_BYTE *)(*((_QWORD *)this + 5027) + v13 + 436) & 1) != 0 )
      {
        return 3221225485LL;
      }
      ++v12;
      v13 += 1584LL;
    }
    while ( v12 < v11 );
  }
  return v9;
}
