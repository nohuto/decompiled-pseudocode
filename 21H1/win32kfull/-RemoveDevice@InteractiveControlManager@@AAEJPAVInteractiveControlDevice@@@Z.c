/*
 * XREFs of ?RemoveDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z @ 0x1AE5A8
 * Callers:
 *     ??1InteractiveControlManager@@AAE@XZ @ 0xD3D50 (--1InteractiveControlManager@@AAE@XZ.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE439 (-OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z @ 0x1ADBE0 (-FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QAEXXZ @ 0x1B1A87 (-Deinitialize@InteractiveControlDevice@@QAEXXZ.c)
 */

int __thiscall InteractiveControlManager::RemoveDevice(
        InteractiveControlManager *this,
        struct InteractiveControlDevice *a2)
{
  void *v2; // eax
  int Device; // ebx
  unsigned int v5; // esi
  unsigned int v7; // [esp+10h] [ebp-4h] BYREF

  v2 = *(void **)a2;
  v7 = 0;
  Device = InteractiveControlManager::FindDevice(this, 0, v2, 0, &v7);
  if ( Device >= 0 )
  {
    v5 = v7;
    InteractiveControlDevice::Deinitialize(*((InteractiveControlDevice **)this + v7 + 6));
    Win32FreePool(*((_DWORD *)this + v5 + 6));
    *((_DWORD *)this + v5 + 6) = 0;
    --*((_DWORD *)this + 11);
  }
  return Device;
}
