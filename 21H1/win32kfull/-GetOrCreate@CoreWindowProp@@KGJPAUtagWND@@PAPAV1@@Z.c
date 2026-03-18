/*
 * XREFs of ?GetOrCreate@CoreWindowProp@@KGJPAUtagWND@@PAPAV1@@Z @ 0xCC6FC
 * Callers:
 *     ?ChangeRole@CoreWindowProp@@KGJPAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0xCC6B6 (-ChangeRole@CoreWindowProp@@KGJPAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QAEHPAUtagWND@@@Z @ 0xB4F1C (-SetProp@CWindowProp@@QAEHPAUtagWND@@@Z.c)
 *     ??$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SGJPAPAVCoreWindowProp@@@Z @ 0xCC736 (--$CreateWindowProp@VCoreWindowProp@@@CWindowProp@@SGJPAPAVCoreWindowProp@@@Z.c)
 */

int __fastcall CoreWindowProp::GetOrCreate(struct tagWND *a1, CWindowProp **a2)
{
  int Window; // edi

  Window = 0;
  *a2 = 0;
  if ( !CWindowProp::GetProp<CoreWindowProp>((int)a1, a2) )
  {
    Window = CWindowProp::CreateWindowProp<CoreWindowProp>(a2);
    if ( Window >= 0 && !CWindowProp::SetProp(*a2, a1) )
    {
      (**(void (__thiscall ***)(CWindowProp *))*a2)(*a2);
      *a2 = 0;
      return -1073741790;
    }
  }
  return Window;
}
