/*
 * XREFs of CreateVisRgnTracker @ 0x1C0028A38
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C004B334 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C0150BE8 (UserSetWindowedSwapChain.c)
 * Callees:
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C0022C94 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0027814 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C0028ABC (--$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SAJPEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateVisRgnTracker(struct tagWND *a1, int a2)
{
  unsigned int v3; // edi
  CWindowProp *v5; // rbx
  __int64 result; // rax
  CWindowProp *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v7 = 0LL;
  CWindowProp::GetProp<CVisRgnTrackerProp>((__int64)a1, (__int64 *)&v7);
  v5 = v7;
  if ( !v7 )
  {
    result = CWindowProp::CreateWindowProp<CVisRgnTrackerProp>(&v7);
    v3 = result;
    if ( (int)result < 0 )
      return result;
    v5 = v7;
    if ( !(unsigned int)CWindowProp::SetProp(v7, (__int64)a1) )
    {
      (**(void (__fastcall ***)(CWindowProp *))v5)(v5);
      return 3221225506LL;
    }
  }
  *((_DWORD *)v5 + 8) |= a2;
  DirtyVisRgnTrackers(a1);
  return v3;
}
