/*
 * XREFs of ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800BD1A8
 * Callers:
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BCFA4 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800D8694 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18001DFB0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800DCDE8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::CheckForOcclusionChange(CLegacyRenderTarget *this, int a2)
{
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 18613) = 1;
    return (unsigned int)a2;
  }
  if ( a2 == 142213167 )
  {
    *((_BYTE *)this + 18611) = 1;
    ScheduleCompositionPass(0LL, 0x2000LL);
    return 0;
  }
  if ( a2 >= 0 && (*((_BYTE *)this + 18613) || a2 == 142213129) )
  {
    *((_WORD *)this + 9306) = 1;
    *((_BYTE *)this + 141) = 1;
    CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 144));
    return 0;
  }
  return (unsigned int)a2;
}
