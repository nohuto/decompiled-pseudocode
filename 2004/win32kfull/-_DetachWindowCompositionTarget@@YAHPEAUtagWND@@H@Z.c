/*
 * XREFs of ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C004B644
 * Callers:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C004AB70 (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C004B598 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     RemoveVisRgnTracker @ 0x1C004EC9C (RemoveVisRgnTracker.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C004EFEC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 */

__int64 __fastcall _DetachWindowCompositionTarget(struct tagWND *a1, int a2)
{
  unsigned int v3; // esi
  CWindowProp *v5; // rbx
  __int64 v6; // rdx
  CWindowProp *v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v8 = 0LL;
  if ( CWindowProp::GetProp<CHwndTargetProp>((__int64)a1, (__int64 *)&v8) )
  {
    v5 = v8;
    v3 = CHwndTargetProp::ClearSystemVisual(v8, a2 == 0 ? 2 : 0);
    if ( !*((_QWORD *)v5 + 2) && !*((_QWORD *)v5 + 4) && !*((_QWORD *)v5 + 6) )
      CWindowProp::RemoveAndDeleteProp(v5);
    v6 = 8LL;
    if ( !a2 )
      v6 = 4LL;
    RemoveVisRgnTracker(a1, v6);
  }
  return v3;
}
