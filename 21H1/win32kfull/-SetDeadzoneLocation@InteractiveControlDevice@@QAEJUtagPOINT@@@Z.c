/*
 * XREFs of ?SetDeadzoneLocation@InteractiveControlDevice@@QAEJUtagPOINT@@@Z @ 0x1B2AFC
 * Callers:
 *     ?PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z @ 0x1B2345 (-PerformInputActions@InteractiveControlDevice@@QAEXPAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall InteractiveControlDevice::SetDeadzoneLocation(InteractiveControlDevice *this, struct tagPOINT a2)
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
    return RIMUpdatePointerDeviceDeadzoneOrigin(v2 + 56, v3, a2.x, a2.y);
}
