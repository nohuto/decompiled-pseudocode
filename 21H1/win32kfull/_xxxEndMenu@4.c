/*
 * XREFs of _xxxEndMenu@4 @ 0x1A7B2A
 * Callers:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z @ 0xABBE4 (-xxxDWP_DoCancelMode@@YGXPAUtagWND@@@Z.c)
 *     _xxxEndMenuLoop@8 @ 0x195235 (_xxxEndMenuLoop@8.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNReleaseCapture@4 @ 0x19A19C (_xxxMNReleaseCapture@4.c)
 */

_DWORD *__thiscall xxxEndMenu(int *this)
{
  _DWORD **v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  _DWORD v7[2]; // [esp+10h] [ebp-8h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v7, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v7, *this);
  if ( *(_DWORD *)v7[0] )
  {
    v2 = (_DWORD **)v7[0];
    this[1] &= 0xFFFFFFFA;
    **v2 |= 0x8000u;
    v3 = this[6];
    if ( *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 56) == *(_DWORD *)(*this + 4) )
      xxxMNReleaseCapture(this);
    if ( _gptiCurrent == v3 )
    {
      v4 = this[1];
      if ( (v4 & 0x10) == 0 )
      {
        this[1] = v4 | 0x10;
        if ( *(_DWORD *)(*this + 4) )
        {
          if ( ((unsigned int)&loc_80000 & *(_DWORD *)*this) == 0 )
            xxxMNCancel(this, 0, 0, 0);
        }
        else
        {
          v5 = **(_DWORD **)v7[0];
          xxxMNCloseHierarchy(*(_DWORD *)v7[0], (int)this);
          if ( (v5 & 8) != 0 && *(_DWORD *)(*(_DWORD *)v7[0] + 8) )
            xxxDestroyWindow(*(struct tagVWPL ***)(*(_DWORD *)v7[0] + 8));
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7);
}
