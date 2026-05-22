/*
 * XREFs of ?ResetAndInitializeInteractionContext@DragGestureTracker@@QEAAJXZ @ 0x180144DC8
 * Callers:
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@@Z @ 0x1800FAA3C (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@@Z.c)
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x1800FED9C (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 *     ?OnPointerInfoFrame@DragGestureTracker@@QEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180144D88 (-OnPointerInfoFrame@DragGestureTracker@@QEAAJKPEAUtagPOINTER_INFO_UNION@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DragGestureTracker::ResetAndInitializeInteractionContext(DragGestureTracker *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ResetInteractionContext(*((_QWORD *)this + 2));
  v2 = *((_QWORD *)this + 2);
  *(__m128i *)v9 = _mm_load_si128((const __m128i *)&_xmm);
  v3 = SetPropertyInteractionContext(v2, 1LL, 1LL);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      37LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = SetPropertyInteractionContext(*((_QWORD *)this + 2), 3LL, 0LL);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      38LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = SetPropertyInteractionContext(*((_QWORD *)this + 2), 2LL, 0LL);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      39LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = SetInteractionConfigurationInteractionContext(*((_QWORD *)this + 2), 2LL, v9);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      40LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = RegisterOutputCallbackInteractionContext(
         *((_QWORD *)this + 2),
         DragGestureTracker::s_InteractionOutputCallback,
         this);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\pointermanipulationtracker\\draggesturetracker.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  return 0LL;
}
