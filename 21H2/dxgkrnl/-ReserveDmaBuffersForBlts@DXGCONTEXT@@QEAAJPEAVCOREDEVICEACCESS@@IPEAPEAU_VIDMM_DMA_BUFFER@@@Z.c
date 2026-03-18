/*
 * XREFs of ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C03322A4
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0323350 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C01EBD10 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C0332F3C (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 */

__int64 __fastcall DXGCONTEXT::ReserveDmaBuffersForBlts(
        DXGCONTEXT *this,
        struct COREDEVICEACCESS *a2,
        unsigned int a3,
        struct _VIDMM_DMA_BUFFER **a4)
{
  __int64 v6; // rbp
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // eax

  v6 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 7822LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7822LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 46) )
  {
    WdLogSingleEntry1(1LL, 7823LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_ppBltDmaBuffers", 7823LL, 0LL, 0LL, 0LL, 0LL);
  }
  LODWORD(v8) = 0;
  if ( (_DWORD)v6 )
  {
    memset(a4, 0, 8 * v6);
    *((_QWORD *)this + 46) = a4;
    v9 = 0;
    *((_DWORD *)this + 94) = v6;
    while ( 1 )
    {
      v10 = DXGCONTEXT::AcquireDmaBuffer(this, &a4[v9], a2, 1);
      v8 = v10;
      if ( v10 < 0 )
        break;
      if ( ++v9 >= (unsigned int)v6 )
        return (unsigned int)v8;
    }
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire DMA buffer 0x%I64x",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGCONTEXT::UnreserveDmaBuffersForBlts(this);
  }
  return (unsigned int)v8;
}
