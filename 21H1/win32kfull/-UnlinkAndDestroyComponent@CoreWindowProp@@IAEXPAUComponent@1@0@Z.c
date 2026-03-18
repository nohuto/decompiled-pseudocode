/*
 * XREFs of ?UnlinkAndDestroyComponent@CoreWindowProp@@IAEXPAUComponent@1@0@Z @ 0x19C676
 * Callers:
 *     ?Delete@CoreWindowProp@@UAEXXZ @ 0xD49BE (-Delete@CoreWindowProp@@UAEXXZ.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z @ 0x19C601 (-RemoveComponentInternal@CoreWindowProp@@KGJPAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 */

void __thiscall CoreWindowProp::UnlinkAndDestroyComponent(
        CoreWindowProp *this,
        struct CoreWindowProp::Component *a2,
        struct CoreWindowProp::Component *a3)
{
  struct CoreWindowProp::Component *v3; // esi
  int v5; // eax
  int v6; // ecx

  v3 = a2;
  if ( a2 )
  {
    v5 = *(_DWORD *)a2;
    if ( a3 )
      *(_DWORD *)a3 = v5;
    else
      *((_DWORD *)this + 5) = v5;
    v6 = *((_DWORD *)v3 + 1);
    a2 = 0;
    if ( CWindowProp::GetProp<CoreWindowProp>(v6, &a2) )
      *((_DWORD *)a2 + 4) = 0;
    *((_DWORD *)v3 + 1) = 0;
    --*((_DWORD *)this + 6);
    Win32FreePool(v3);
  }
}
