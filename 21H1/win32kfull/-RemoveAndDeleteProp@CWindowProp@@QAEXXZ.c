/*
 * XREFs of ?RemoveAndDeleteProp@CWindowProp@@QAEXXZ @ 0x19C226
 * Callers:
 *     _RemoveVisRgnTracker@8 @ 0xF4D94 (_RemoveVisRgnTracker@8.c)
 * Callees:
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 */

void __thiscall CWindowProp::RemoveAndDeleteProp(CWindowProp *this)
{
  __int16 v2; // ax

  v2 = (*(int (__thiscall **)(CWindowProp *))(*(_DWORD *)this + 4))(this);
  InternalRemoveProp(*((_DWORD *)this + 1), v2, 1);
  *((_DWORD *)this + 1) = 0;
  (**(void (__thiscall ***)(CWindowProp *))this)(this);
}
