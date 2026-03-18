/*
 * XREFs of ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800BBC48
 * Callers:
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ @ 0x1800BB8F8 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BB9A8 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800321C0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800D42AC (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
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
    ScheduleCompositionPass(0LL, 0x2000LL);
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
