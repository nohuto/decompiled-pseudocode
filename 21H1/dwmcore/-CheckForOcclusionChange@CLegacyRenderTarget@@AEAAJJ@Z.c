/*
 * XREFs of ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800D4748
 * Callers:
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800D43F8 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800D44A8 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800CC60C (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800D5CC0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::CheckForOcclusionChange(CLegacyRenderTarget *this, int a2)
{
  if ( a2 == 142213121 )
  {
    *((_BYTE *)this + 18590) = 1;
    return (unsigned int)a2;
  }
  if ( a2 == 142213167 )
  {
    *((_BYTE *)this + 18586) = 1;
    ScheduleCompositionPass(0, 0x2000u);
    return 0;
  }
  if ( a2 >= 0 && *((_BYTE *)this + 18590) )
  {
    *((_BYTE *)this + 18590) = 0;
    *((_BYTE *)this + 129) = 1;
    *((_BYTE *)this + 18588) = 1;
    CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 136), 1);
    return 0;
  }
  return (unsigned int)a2;
}
