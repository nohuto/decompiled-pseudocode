/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C0154240
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00FE910 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0104170 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9F4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        __int64 a2,
        char *a3,
        struct CRefCountedBuffer **a4)
{
  size_t v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  size_t v12; // r14
  __int64 v14; // rax
  __int64 v15; // rax

  v6 = (unsigned int)a2;
  *a4 = 0LL;
  if ( *((int *)a1 + 582) < 0x2000 && !*((_BYTE *)a1 + 2628) || *((_DWORD *)a1 + 468) < 0x5007u || !(_DWORD)a2 )
    return 0LL;
  if ( (int)a2 + 16 < (unsigned int)a2 )
  {
    v14 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    v12 = v6;
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdWarning(v14);
    v9 = 0LL;
  }
  else
  {
    v9 = operator new[]((unsigned int)(a2 + 16), 0x4B677844u, (POOL_TYPE)512);
    v12 = v6;
  }
  if ( v9 )
  {
    *(_QWORD *)v9 = 0LL;
    v9[2] = v6;
    v9[3] = 1;
    if ( &a3[v12] < a3 || (unsigned __int64)&a3[v12] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v9 + 4, a3, v12);
    *a4 = (struct CRefCountedBuffer *)v9;
    return 0LL;
  }
  v15 = WdLogNewEntry5_WdLowResource(v8, v7, v10, v11);
  *(_QWORD *)(v15 + 24) = 2510LL;
  WdLogEvent5_WdLowResource(v15);
  return 3221225495LL;
}
