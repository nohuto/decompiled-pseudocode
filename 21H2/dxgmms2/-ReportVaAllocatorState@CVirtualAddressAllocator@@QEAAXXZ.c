/*
 * XREFs of ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00BF51C
 * Callers:
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B3280 (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B74 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001C48 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0024FC8 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C0026158 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C0026258 (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BF234 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::ReportVaAllocatorState(CVirtualAddressAllocator *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax
  unsigned __int64 k; // rbx
  __int64 i; // rbp
  __int64 **v7; // r14
  __int64 *j; // rsi
  _QWORD **v9; // rax
  _QWORD *m; // rax
  _QWORD **v11; // rax
  VIDMM_PAGE_DIRECTORY *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-78h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  _BYTE v15[8]; // [rsp+70h] [rbp-28h] BYREF
  DXGPUSHLOCK *v16; // [rsp+78h] [rbp-20h]
  int v17; // [rsp+80h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v16);
  v17 = 2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 12) + 32LL),
      &ReportGpuVirtualAddressAllocator,
      *((_QWORD *)this + 11),
      this,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 32LL) + 64LL) + 72LL),
      *(_QWORD *)(*((_QWORD *)this + 11) + 24LL));
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  k = 0LL;
  while ( v4 )
  {
    k = (unsigned __int64)v4;
    v4 = (_QWORD *)*v4;
  }
  while ( k )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v13) = *(_DWORD *)(k + 72);
      McTemplateK0pqxx_EtwWriteTransfer(
        (__int64)v2,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v13,
        *(_QWORD *)(k + 24),
        *(_QWORD *)(k + 32));
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*((_QWORD *)this + 11) + 7000LL); i = (unsigned int)(i + 1) )
    {
      v7 = (__int64 **)(k + 8 * (i + 4 * i + 12));
      for ( j = *v7; j != (__int64 *)v7; j = (__int64 *)*j )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          LODWORD(v14) = *((_DWORD *)j + 14);
          McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
            (__int64)v2,
            &ReportGpuVirtualAddressRangeMapping,
            v3,
            this,
            j[6],
            j[8],
            j[11],
            j[12],
            j[10],
            j[9],
            v14,
            j[13],
            j[14]);
        }
      }
    }
    v9 = *(_QWORD ***)(k + 8);
    v2 = (_QWORD *)k;
    if ( v9 )
    {
      v2 = *v9;
      for ( k = *(_QWORD *)(k + 8); v2; v2 = (_QWORD *)*v2 )
        k = (unsigned __int64)v2;
    }
    else
    {
      while ( 1 )
      {
        k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !k || *(_QWORD **)k == v2 )
          break;
        v2 = (_QWORD *)k;
      }
    }
  }
  for ( m = (_QWORD *)*((_QWORD *)this + 5); m; m = (_QWORD *)*m )
    k = (unsigned __int64)m;
  while ( k )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v13) = *(_DWORD *)(k + 72);
      McTemplateK0pqxx_EtwWriteTransfer(
        (__int64)v2,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v13,
        *(_QWORD *)(k + 24),
        *(_QWORD *)(k + 32));
    }
    v11 = *(_QWORD ***)(k + 8);
    v2 = (_QWORD *)k;
    if ( v11 )
    {
      v2 = *v11;
      for ( k = *(_QWORD *)(k + 8); v2; v2 = (_QWORD *)*v2 )
        k = (unsigned __int64)v2;
    }
    else
    {
      while ( 1 )
      {
        k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !k || *(_QWORD **)k == v2 )
          break;
        v2 = (_QWORD *)k;
      }
    }
  }
  v12 = (VIDMM_PAGE_DIRECTORY *)**((_QWORD **)this + 15);
  if ( v12 )
    VIDMM_PAGE_DIRECTORY::ReportState(v12, this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
}
