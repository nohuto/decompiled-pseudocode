/*
 * XREFs of ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0080794
 * Callers:
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C0080674 (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00809F8 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     ??$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z @ 0x1C0080A30 (--$CreateWindowProp@VCHwndTargetProp@@@CWindowProp@@SAJPEAPEAVCHwndTargetProp@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00C1188 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     CreateVisRgnTracker @ 0x1C00C6F1C (CreateVisRgnTracker.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00C6FCC (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _AttachWindowCompositionTarget(struct tagWND *a1, int a2, struct CompositionObject *a3)
{
  char v6; // bp
  signed int VisRgnTracker; // ebx
  CWindowProp *v8; // rdi
  CWindowProp *v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0LL;
  v6 = 0;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v10) )
  {
    v8 = v10;
    VisRgnTracker = *(_QWORD *)((char *)v10 + (a2 == 0 ? 0x20 : 0) + 16) != 0LL ? 0xC0000022 : 0;
  }
  else
  {
    VisRgnTracker = CWindowProp::CreateWindowProp<CHwndTargetProp>(&v10);
    if ( VisRgnTracker < 0 )
      return (unsigned int)VisRgnTracker;
    v8 = v10;
    if ( (unsigned int)CWindowProp::SetProp(v10, a1) )
    {
      v6 = 1;
    }
    else
    {
      (**(void (__fastcall ***)(CWindowProp *))v8)(v8);
      v8 = 0LL;
      VisRgnTracker = -1073741790;
    }
  }
  if ( VisRgnTracker < 0
    || (VisRgnTracker = CHwndTargetProp::SetSystemVisual(v8, a2 == 0 ? 2 : 0, a3), VisRgnTracker < 0)
    || (VisRgnTracker = CreateVisRgnTracker(a1), VisRgnTracker < 0) )
  {
    if ( v6 )
      CWindowProp::RemoveAndDeleteProp(v8);
  }
  return (unsigned int)VisRgnTracker;
}
