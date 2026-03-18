/*
 * XREFs of _xxxMNEndMenuStateInternal@8 @ 0x1848C0
 * Callers:
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 * Callees:
 *     ?xxxActivateWindow@@YG_NPAUtagWND@@@Z @ 0x1A2B0 (-xxxActivateWindow@@YG_NPAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _IsMiPEnabledForThread@4 @ 0x9AF9E (_IsMiPEnabledForThread@4.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z @ 0x14CAE7 (--0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QAE@XZ @ 0x14CB0F (--1MenuStateOwnerLockxxxUnlock@@QAE@XZ.c)
 *     _MNDestroyAnimationBitmap@4 @ 0x184536 (_MNDestroyAnimationBitmap@4.c)
 *     _UnlockMFMWFPWindow@4 @ 0x19784F (_UnlockMFMWFPWindow@4.c)
 *     _xxxMNSetCapture@8 @ 0x19A754 (_xxxMNSetCapture@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __stdcall xxxMNEndMenuStateInternal(int a1, HDC a2)
{
  HDC v2; // eax
  _DWORD *v3; // ecx
  int v4; // ecx
  int *v5; // esi
  struct tagMENUSTATE *v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+4h] [ebp-14h]
  _BYTE v8[4]; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD v9[2]; // [esp+10h] [ebp-8h] BYREF

  UnlockMFMWFPWindow(a2 + 11);
  UnlockMFMWFPWindow(a2 + 14);
  v2 = *(HDC *)(a1 + 328);
  if ( v2 == a2 )
  {
    *(_DWORD *)(struct HDC__ *)(a1 + 328) = a2[8];
  }
  else
  {
    while ( v2 )
    {
      v3 = v2 + 8;
      v2 = (HDC)*((_DWORD *)v2 + 8);
      if ( v2 == a2 )
      {
        *v3 = *((_DWORD *)a2 + 8);
        break;
      }
    }
  }
  if ( IsMiPEnabledForThread((_DWORD *)a1) && *(_DWORD *)(a1 + 720) )
    *(_DWORD *)(*(_DWORD *)(a1 + 236) + 324) = 0;
  v4 = *((_DWORD *)a2 + 1);
  if ( (v4 & 0x2000100) == 0x2000000 )
  {
    --guSFWLockCount;
    *((_DWORD *)a2 + 1) = v4 & 0xFDFFFFFF;
  }
  if ( *((_DWORD *)a2 + 23) )
    MNDestroyAnimationBitmap(a2);
  if ( a2 == _gMenuState[0] )
  {
    _gdwPUDFlags &= ~0x2000000u;
    GreSetDCOwnerEx(_gMenuState[24], 0, 0, 1);
  }
  else
  {
    if ( *((_DWORD *)a2 + 24) )
      GreDeleteDC(*((_DWORD *)a2 + 24));
    Win32FreePool(a2);
  }
  v5 = *(int **)(a1 + 328);
  if ( v5 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)v8,
      *(struct tagMENUSTATE **)(a1 + 328));
    if ( (v5[1] & 0x100) != 0 )
    {
      xxxActivateWindow(*(void **)(*v5 + 28));
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v9, *v5);
      xxxMNSetCapture(v9, v5);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9);
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v8, v6, v7);
  }
}
