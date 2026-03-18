/*
 * XREFs of ?ActivateDeadzone@InteractiveControlDevice@@QAEJH@Z @ 0x1B1791
 * Callers:
 *     ?PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B2345 (-PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall InteractiveControlDevice::ActivateDeadzone(InteractiveControlDevice *this, int a2)
{
  int v2; // edx
  int v3; // eax

  v2 = *((_DWORD *)this + 47);
  if ( !v2 )
    return -1073741811;
  v3 = *((_DWORD *)this + 69);
  if ( v3 == -1 )
    return -1073741811;
  else
    return RIMActivatePointerDeviceDeadzone(v2 + 56, v3, a2);
}
