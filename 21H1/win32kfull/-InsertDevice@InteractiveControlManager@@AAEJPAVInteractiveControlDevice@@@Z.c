/*
 * XREFs of ?InsertDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z @ 0x1AE240
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z @ 0x1ADBE0 (-FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z.c)
 */

int __thiscall InteractiveControlManager::InsertDevice(InteractiveControlManager *this, void **a2)
{
  int result; // eax
  int v4; // ecx
  _DWORD *i; // edx

  if ( *((_DWORD *)this + 11) >= 5u )
    return -1073741670;
  result = InteractiveControlManager::FindDevice(this, 0, *a2, 0, 0);
  if ( result != -1073741275 )
    return -1073741811;
  v4 = 0;
  for ( i = (_DWORD *)((char *)this + 24); *i; ++i )
  {
    if ( (unsigned int)++v4 >= 5 )
      return result;
  }
  *((_DWORD *)this + v4 + 6) = a2;
  result = 0;
  ++*((_DWORD *)this + 11);
  return result;
}
