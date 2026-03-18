/*
 * XREFs of ?GetOutstandingFrameCount@CDDisplayRenderTarget@@UEAAIXZ @ 0x1801C86F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC0BC (-Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::GetOutstandingFrameCount(CDDisplayRenderTarget *this)
{
  unsigned int v1; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( CTargetStats::Update(
           (CDDisplayRenderTarget *)((char *)this + 18296),
           PerformanceCount.QuadPart,
           *((struct IOverlaySwapChain **)this + 4)) )
    {
      return *((unsigned int *)this + 4575);
    }
  }
  return v1;
}
