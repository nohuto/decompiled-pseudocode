/*
 * XREFs of ?Delete@CoreWindowProp@@UAEXXZ @ 0xD49BE
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z @ 0x19C601 (-RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z.c)
 *     ?UnlinkAndDestroyComponent@CoreWindowProp@@IAEXPAUComponent@1@0@Z @ 0x19C676 (-UnlinkAndDestroyComponent@CoreWindowProp@@IAEXPAUComponent@1@0@Z.c)
 */

void __thiscall CoreWindowProp::Delete(CoreWindowProp *this)
{
  struct tagWND *v2; // [esp+0h] [ebp-8h]
  struct tagWND *v3; // [esp+4h] [ebp-4h]

  if ( *((_DWORD *)this + 4) )
    CoreWindowProp::RemoveComponentInternal(v2, v3);
  *((_DWORD *)this + 4) = 0;
  while ( *((_DWORD *)this + 5) )
    CoreWindowProp::UnlinkAndDestroyComponent(this, *((struct CoreWindowProp::Component **)this + 5), 0);
  Win32FreePool(this);
}
