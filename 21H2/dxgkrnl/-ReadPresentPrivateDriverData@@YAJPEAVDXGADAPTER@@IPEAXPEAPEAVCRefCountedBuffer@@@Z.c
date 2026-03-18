/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C01789B0
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C017B810 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000A948 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        unsigned int a2,
        char *a3,
        struct CRefCountedBuffer **a4)
{
  size_t v6; // rbx
  _DWORD *v8; // rdi
  size_t v9; // r15

  v6 = a2;
  *a4 = 0LL;
  if ( *((int *)a1 + 606) < 0x2000 && !*((_BYTE *)a1 + 2724) || *((_DWORD *)a1 + 492) < 0x5007u || !a2 )
    return 0LL;
  if ( a2 + 16 < a2 )
  {
    v9 = a2;
    WdLogSingleEntry1(3LL, a2);
    v8 = 0LL;
  }
  else
  {
    v8 = (_DWORD *)operator new[](a2 + 16, 0x4B677844u, 66LL, (__int64)a4);
    v9 = v6;
  }
  if ( v8 )
  {
    *(_QWORD *)v8 = 0LL;
    v8[2] = v6;
    v8[3] = 1;
    if ( &a3[v9] < a3 || (unsigned __int64)&a3[v9] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v8 + 4, a3, v9);
    *a4 = (struct CRefCountedBuffer *)v8;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, 2714LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate memory for present private driver data",
    2714LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
