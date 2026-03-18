/*
 * XREFs of ?InternalCreateMenu@@YGPAUtagMENU@@H@Z @ 0xA713E
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PAU_UNICODE_STRING@@PAH@Z @ 0x1E646 (-SetLPITEMInfoNoRedraw@@YGHABV-$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@PAUtagMENUITEMINFOW@@PA.c)
 *     __CreateMenu@0 @ 0xA7136 (__CreateMenu@0.c)
 *     __CreatePopupMenu@0 @ 0xEC8A0 (__CreatePopupMenu@0.c)
 * Callees:
 *     _CheckGrantedAccess@8 @ 0x2A3D4 (_CheckGrantedAccess@8.c)
 *     ??$InitLookAsideRef@UtagMENU@@@@YGEPAUtagMENU@@@Z @ 0xA71B4 (--$InitLookAsideRef@UtagMENU@@@@YGEPAUtagMENU@@@Z.c)
 */

struct tagMENU *__thiscall InternalCreateMenu(void *this)
{
  int v2; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v2 = *(_DWORD *)(_gptiCurrent + 248);
  if ( *(_DWORD *)(_gptiCurrent + 316) && !CheckGrantedAccess(*(_DWORD *)(_gptiCurrent + 496), 4u) )
    return 0;
  v3 = (_DWORD *)HMAllocObject(_gptiCurrent, v2, 2, 108);
  v4 = v3;
  if ( v3 )
  {
    if ( !(unsigned __int8)InitLookAsideRef<tagMENU>(v3) )
    {
      HMFreeObject(v4);
      v4 = 0;
    }
    if ( v4 )
    {
      if ( this )
      {
        *(_DWORD *)(v4[5] + 20) = 1;
        v4[21] = 0;
        v4[22] = 0;
        v4[23] = 0;
        v4[24] = 0;
        v4[25] = 0;
      }
    }
  }
  return (struct tagMENU *)v4;
}
