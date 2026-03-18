/*
 * XREFs of ?_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z @ 0xB2A44
 * Callers:
 *     ?AttachWindowCompositionTarget@@YGJPAUHWND__@@HPAUCompositionObject@@@Z @ 0xB2988 (-AttachWindowCompositionTarget@@YGJPAUHWND__@@HPAUCompositionObject@@@Z.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z @ 0xB2C26 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QAEHPAUtagWND@@@Z @ 0xB4F1C (-SetProp@CWindowProp@@QAEHPAUtagWND@@@Z.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SGJPAPAVCHwndTargetProp@@@Z @ 0xB51D0 (--$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SGJPAPAVCHwndTargetProp@@@Z.c)
 *     _CreateVisRgnTracker@8 @ 0xF4C7C (_CreateVisRgnTracker@8.c)
 *     ?HasSystemVisual@CHwndTargetProp@@QBEHW4HwndTargetPropVisualType@@@Z @ 0xF578A (-HasSystemVisual@CHwndTargetProp@@QBEHW4HwndTargetPropVisualType@@@Z.c)
 */

int __userpurge _AttachWindowCompositionTarget@<eax>(
        int a1@<edx>,
        struct tagWND *a2@<ecx>,
        struct tagWND *a3,
        int a4,
        struct CompositionObject *a5)
{
  char v7; // bl
  CWindowProp *v8; // edi
  signed int VisRgnTracker; // esi
  void (__thiscall **v10)(CWindowProp *); // eax
  struct tagWND *v12; // [esp-4h] [ebp-1Ch]
  CWindowProp *v15; // [esp+14h] [ebp-4h] BYREF

  v15 = 0;
  v7 = 0;
  if ( CWindowProp::GetProp<CHwndTargetProp>() )
  {
    v8 = v15;
    VisRgnTracker = CHwndTargetProp::HasSystemVisual(v15, a1 != 0 ? 0 : 2) != 0 ? 0xC0000022 : 0;
  }
  else
  {
    VisRgnTracker = CWindowProp::CreateWindowProp<CHwndTargetProp>(&v15);
    if ( VisRgnTracker < 0 )
      return VisRgnTracker;
    v12 = a2;
    v8 = v15;
    if ( CWindowProp::SetProp(v15, v12) )
    {
      v7 = 1;
    }
    else
    {
      (**(void (__thiscall ***)(CWindowProp *))v8)(v8);
      v8 = 0;
      VisRgnTracker = -1073741790;
    }
  }
  if ( VisRgnTracker < 0
    || (VisRgnTracker = CHwndTargetProp::SetSystemVisual(v8, a1 != 0 ? 0 : 2, a3), VisRgnTracker < 0)
    || (VisRgnTracker = CreateVisRgnTracker(a2), VisRgnTracker < 0) )
  {
    if ( v7 )
    {
      (*(void (__thiscall **)(CWindowProp *))(*(_DWORD *)v8 + 4))(v8);
      InternalRemoveProp(1);
      v10 = *(void (__thiscall ***)(CWindowProp *))v8;
      *((_DWORD *)v8 + 1) = 0;
      (*v10)(v8);
    }
  }
  return VisRgnTracker;
}
