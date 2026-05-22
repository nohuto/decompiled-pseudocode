/*
 * XREFs of ??0HeatDisplayOcclusionRect@@QEAA@AEBUtagRECT@@0QEBG@Z @ 0x18012C31C
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x18012C930 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031A5C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

HeatDisplayOcclusionRect *__fastcall HeatDisplayOcclusionRect::HeatDisplayOcclusionRect(
        HeatDisplayOcclusionRect *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        size_t *a4)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(struct tagRECT *)this = *a2;
  *((struct tagRECT *)this + 1) = *a3;
  v5 = StringCchCopyW((unsigned __int16 *)this + 16, 0x39uLL, a4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      120LL,
      (__int64)"onecoreuap\\windows\\input\\heat\\inc\\heatcoretypes.h",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  return this;
}
