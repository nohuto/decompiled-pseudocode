/*
 * XREFs of ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x1800A27B0
 * Callers:
 *     ??1CTextTetherVisual@@MEAA@XZ @ 0x1800A2298 (--1CTextTetherVisual@@MEAA@XZ.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x1800A2614 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTextTetherVisual@@QEAAJXZ @ 0x1800A2704 (-Start@CTextTetherVisual@@QEAAJXZ.c)
 *     ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x1800A28E0 (-UpdateTransition@CTextTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001A02C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085078 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?StopTimer@CTextTetherVisual@@MEAAJXZ @ 0x1800A2840 (-StopTimer@CTextTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTextTetherVisual::Stop(CTextTetherVisual *this)
{
  __int64 v2; // r8
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  CRenderDataVisual::ClearInstructions(this);
  CTextTetherVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( *((_BYTE *)this + 424) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmTextTetherVisual_End,
      v2,
      1LL,
      (__int64)v3);
  *((_BYTE *)this + 424) = 0;
}
