/*
 * XREFs of ?SetZoomDecreasingThresholds@ManipulationInjector@@QEAAXJJ@Z @ 0x1800C3C64
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18007A6F8 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ManipulationInjector::SetZoomDecreasingThresholds(ManipulationInjector *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 22) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1459LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x1800C3C9BLL);
  }
  *((_DWORD *)this + 8) = 150;
  *((_DWORD *)this + 9) = 150;
}
