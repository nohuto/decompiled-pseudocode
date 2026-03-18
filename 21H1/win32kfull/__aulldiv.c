/*
 * XREFs of __aulldiv @ 0xF91F1
 * Callers:
 *     RenderNineGridInternal @ 0x50CC0 (RenderNineGridInternal.c)
 *     DNG_InitStretch @ 0x52622 (DNG_InitStretch.c)
 *     ?bGIQtoIntegerLine@@YGHPAU_POINTFIX@@0PAU_RECTL@@PAU_DDALINE@@@Z @ 0xBE568 (-bGIQtoIntegerLine@@YGHPAU_POINTFIX@@0PAU_RECTL@@PAU_DDALINE@@@Z.c)
 *     _FadeDesktop@16 @ 0xCE936 (_FadeDesktop@16.c)
 *     ?_GetQpcBasedTouchStackTime@@YGKXZ @ 0x149798 (-_GetQpcBasedTouchStackTime@@YGKXZ.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 *     ?uDiv128by64@@YG_K_K00AA_K@Z @ 0x158D5A (-uDiv128by64@@YG_K_K00AA_K@Z.c)
 *     ?MsgSQMFlushMsgRecord@@YGXPAUtagPROCESSINFO@@0PAUtagMSGSQM_MSGRECORD@@@Z @ 0x180C8E (-MsgSQMFlushMsgRecord@@YGXPAUtagPROCESSINFO@@0PAUtagMSGSQM_MSGRECORD@@@Z.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AAEJPAF@Z @ 0x1B37FF (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AAEJPAF@Z.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AAEJPAH@Z @ 0x1B3E87 (-UpdateTime@InteractiveControlDefaultScroller@@AAEJPAH@Z.c)
 *     _BuildShrinkAAInfo @ 0x1C22ED (_BuildShrinkAAInfo.c)
 *     ?xCompute@DDA_CLIPLINE@@QAEJJ@Z @ 0x23878E (-xCompute@DDA_CLIPLINE@@QAEJJ@Z.c)
 *     ?yCompute@DDA_CLIPLINE@@QAEJJ@Z @ 0x2387D6 (-yCompute@DDA_CLIPLINE@@QAEJJ@Z.c)
 *     ?bLines@@YGHPAU_BMINFO@@PAU_POINTFIX@@1PAU_RUN@@KPAU_LINESTATE@@PAU_RECTL@@PAP6GXPAU_STRIP@@03@ZKPAKJPAU_W32KCDD_ENG_CALLBACKS@@@Z @ 0x23F480 (-bLines@@YGHPAU_BMINFO@@PAU_POINTFIX@@1PAU_RUN@@KPAU_LINESTATE@@PAU_RECTL@@PAP6GXPAU_STRIP@@03@Z.c)
 *     ?bInit@DDA_CLIPLINE@@QAEHPAU_POINTFIX@@0@Z @ 0x24939F (-bInit@DDA_CLIPLINE@@QAEHPAU_POINTFIX@@0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __stdcall _aulldiv(int a1, int a2, int a3, int a4)
{
  return __aulldiv(a1, a2, a3, a4);
}
