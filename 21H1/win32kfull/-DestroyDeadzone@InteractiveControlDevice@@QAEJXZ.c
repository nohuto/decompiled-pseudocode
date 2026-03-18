/*
 * XREFs of ?DestroyDeadzone@InteractiveControlDevice@@QAEJXZ @ 0x1B1B81
 * Callers:
 *     ?Deinitialize@InteractiveControlDevice@@QAEXXZ @ 0x1B1A87 (-Deinitialize@InteractiveControlDevice@@QAEXXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B2345 (-PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall InteractiveControlDevice::DestroyDeadzone(InteractiveControlDevice *this)
{
  int v2; // eax
  int result; // eax

  v2 = *((_DWORD *)this + 47);
  if ( !v2 || *((_DWORD *)this + 69) == -1 )
    return -1073741811;
  result = RIMDestroyPointerDeviceDeadzone(v2 + 56, *((_DWORD *)this + 69));
  *((_DWORD *)this + 69) = -1;
  *((_DWORD *)this + 68) = 1;
  return result;
}
