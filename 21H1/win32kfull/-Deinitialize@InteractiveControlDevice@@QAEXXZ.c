/*
 * XREFs of ?Deinitialize@InteractiveControlDevice@@QAEXXZ @ 0x1B1A87
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z @ 0x1AE5A8 (-RemoveDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z.c)
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 *     ?DestroyDeadzone@InteractiveControlDevice@@QAEJXZ @ 0x1B1B81 (-DestroyDeadzone@InteractiveControlDevice@@QAEJXZ.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QAEXPAUtagWND@@I@Z @ 0x1B26CF (-SetBackgroundAccessor@InteractiveControlDevice@@QAEXPAUtagWND@@I@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1B2B32 (-SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 *     ?DeInitialize@SimpleHapticsController@@QAEJXZ @ 0x1B4278 (-DeInitialize@SimpleHapticsController@@QAEJXZ.c)
 *     ?FreeDeviceCapabilities@InteractiveControlParser@@SGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1B5DA9 (-FreeDeviceCapabilities@InteractiveControlParser@@SGXPAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

void __thiscall InteractiveControlDevice::Deinitialize(InteractiveControlDevice *this)
{
  int v2; // edx
  SimpleHapticsController *v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  _DWORD **v7; // ebx
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  struct _INTERACTIVECTRL_CAPABILITIES *v10; // [esp+0h] [ebp-Ch]

  v2 = *((_DWORD *)this + 70);
  if ( v2 )
  {
    FindTimer(0, v2, 4u, 1, 0);
    *((_DWORD *)this + 70) = 0;
  }
  InteractiveControlDevice::SetFocus(0, *((_DWORD *)this + 9), 0);
  v3 = (SimpleHapticsController *)*((_DWORD *)this + 76);
  if ( v3 )
  {
    SimpleHapticsController::DeInitialize(v3);
    v4 = *((_DWORD *)this + 76);
    if ( v4 )
    {
      SimpleHapticsController::DeInitialize(*((SimpleHapticsController **)this + 76));
      Win32FreePool(v4);
    }
    *((_DWORD *)this + 76) = 0;
  }
  if ( *((_DWORD *)this + 49) )
  {
    Win32FreePool(*((_DWORD *)this + 49));
    *((_DWORD *)this + 49) = 0;
  }
  if ( *((_DWORD *)this + 69) != -1 )
    InteractiveControlDevice::DestroyDeadzone(this);
  if ( *(_DWORD *)this )
  {
    RawInputManagerDeviceObjectDereference(*(_DWORD *)this);
    *(_DWORD *)this = 0;
  }
  InteractiveControlParser::FreeDeviceCapabilities(v10);
  v7 = (_DWORD **)((char *)this + 8);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    if ( (_DWORD **)v8[1] != v7 || (v9 = (_DWORD *)*v8, *(_DWORD **)(*v8 + 4) != v8) )
      __fastfail(3u);
    *v7 = v9;
    v9[1] = v7;
    if ( v8[15] )
    {
      Win32FreePool(v8[15]);
      v8[15] = 0;
      v8[16] = 0;
    }
    Win32FreePool(v8);
    --*((_DWORD *)this + 4);
  }
  HMAssignmentLock(v6, v5);
  InteractiveControlDevice::SetBackgroundAccessor(this, 0, 0);
  *((_DWORD *)this + 1) = 0;
}
