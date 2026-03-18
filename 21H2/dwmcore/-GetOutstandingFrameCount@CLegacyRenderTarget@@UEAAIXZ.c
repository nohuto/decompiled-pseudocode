/*
 * XREFs of ?GetOutstandingFrameCount@CLegacyRenderTarget@@UEAAIXZ @ 0x1800BBE40
 * Callers:
 *     <none>
 * Callees:
 *     ?Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC0BC (-Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetOutstandingFrameCount(CLegacyRenderTarget *this)
{
  unsigned int v1; // ebx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    if ( CTargetStats::Update(
           (CLegacyRenderTarget *)((char *)this + 18304),
           PerformanceCount.QuadPart,
           *((struct IOverlaySwapChain **)this + 4)) )
    {
      return *((unsigned int *)this + 4577);
    }
  }
  return v1;
}
