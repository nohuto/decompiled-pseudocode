/*
 * XREFs of ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x180045F30
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800185C0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x180045CE4 (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 *     ??0CDxHandleYUVBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180262688 (--0CDxHandleYUVBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_IN.c)
 *     ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180263958 (-UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CBitmapRealization::CalcDisplayRestriction(_DWORD *a1, char a2, __int64 a3)
{
  if ( a2 && a3 )
    *a1 = a3;
  else
    *a1 = DisplayId::None;
  return a1;
}
