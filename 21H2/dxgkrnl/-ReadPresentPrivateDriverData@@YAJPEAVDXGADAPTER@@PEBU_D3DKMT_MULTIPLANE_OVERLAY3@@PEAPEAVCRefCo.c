/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0174848
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01739B0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000A948 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z @ 0x1C002F002 (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a2,
        struct CRefCountedBuffer **a3,
        __int64 a4)
{
  UINT DriverPrivateDataSize; // ecx
  _DWORD *RefCountedBuffer; // rbx
  UINT v9; // eax
  size_t v10; // r8
  char *pDriverPrivateData; // rdx

  *a3 = 0LL;
  if ( *((int *)a1 + 606) < 0x2000 && !*((_BYTE *)a1 + 2724) )
    return 0LL;
  DriverPrivateDataSize = a2->DriverPrivateDataSize;
  if ( !DriverPrivateDataSize )
    return 0LL;
  RefCountedBuffer = (_DWORD *)CRefCountedBuffer::AllocateRefCountedBuffer(DriverPrivateDataSize, (__int64)a2, 66LL, a4);
  if ( RefCountedBuffer )
  {
    v9 = a2->DriverPrivateDataSize;
    *(_QWORD *)RefCountedBuffer = 0LL;
    RefCountedBuffer[2] = v9;
    RefCountedBuffer[3] = 1;
    v10 = a2->DriverPrivateDataSize;
    pDriverPrivateData = (char *)a2->pDriverPrivateData;
    if ( &pDriverPrivateData[v10] < pDriverPrivateData
      || (unsigned __int64)&pDriverPrivateData[v10] > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(RefCountedBuffer + 4, pDriverPrivateData, v10);
    *a3 = (struct CRefCountedBuffer *)RefCountedBuffer;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, 1354LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate memory for present private driver data",
    1354LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
