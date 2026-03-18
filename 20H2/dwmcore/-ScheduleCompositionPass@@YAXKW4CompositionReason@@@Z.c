/*
 * XREFs of ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800D3E74
 * Callers:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BAFA8 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z @ 0x1800BB248 (-CheckForOcclusionChange@CLegacyRenderTarget@@AEAAJJ@Z.c)
 *     ?GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ @ 0x1800E8AB4 (-GetNextBufferIndexAvailable@CCaptureRenderTarget@@IEAAHXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@UEAAJ_N@Z @ 0x180185D4C (-Present@CRemoteAppRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18018BD20 (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801989BC (-Present@CDDARenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ScheduleCompositionPass(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  if ( g_pComposition )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)g_pComposition + 63) + 96LL))(
             *((_QWORD *)g_pComposition + 63),
             a1,
             a2);
  return result;
}
