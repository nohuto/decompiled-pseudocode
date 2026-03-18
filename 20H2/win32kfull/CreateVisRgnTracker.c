/*
 * XREFs of CreateVisRgnTracker @ 0x1C00C6F1C
 * Callers:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C0080794 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     UserSetWindowedSwapChain @ 0x1C01532E8 (UserSetWindowedSwapChain.c)
 * Callees:
 *     ??$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00C6DDC (--$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00C6FCC (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00C9B94 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00CBC14 (DirtyVisRgnTrackers.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateVisRgnTracker(struct tagWND *a1, int a2)
{
  unsigned int v3; // edi
  CWindowProp *v5; // rbx
  __int64 result; // rax
  CWindowProp *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v7 = 0LL;
  CWindowProp::GetProp<CVisRgnTrackerProp>(a1, &v7);
  v5 = v7;
  if ( !v7 )
  {
    result = CWindowProp::CreateWindowProp<CVisRgnTrackerProp>(&v7);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v5 = v7;
    if ( !(unsigned int)CWindowProp::SetProp(v7, a1) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v5)(v5);
      return 3221225506LL;
    }
  }
  *((_DWORD *)v5 + 8) |= a2;
  DirtyVisRgnTrackers(a1);
  return v3;
}
