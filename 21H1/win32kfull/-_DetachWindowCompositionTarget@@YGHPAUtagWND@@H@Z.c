/*
 * XREFs of ?_DetachWindowCompositionTarget@@YGHPAUtagWND@@H@Z @ 0xB522A
 * Callers:
 *     ?DetachWindowCompositionTarget@@YGJPAUHWND__@@H@Z @ 0x81FFA (-DetachWindowCompositionTarget@@YGJPAUHWND__@@H@Z.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z @ 0xB2C26 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z.c)
 *     _InternalRemoveProp@12 @ 0xB50F2 (_InternalRemoveProp@12.c)
 *     _RemoveVisRgnTracker@8 @ 0xF4D94 (_RemoveVisRgnTracker@8.c)
 */

int *__fastcall _DetachWindowCompositionTarget(int a1, int a2)
{
  int v3; // esi
  int *v5; // esi
  __int16 v6; // ax
  void (__thiscall **v7)(int *); // eax
  int *v9; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  v9 = 0;
  if ( CWindowProp::GetProp<CHwndTargetProp>(a1, (int *)&v9) )
  {
    v5 = v9;
    v9 = (int *)CHwndTargetProp::ClearSystemVisual(v9, a2 != 0 ? 0 : 2);
    if ( !v5[2] && !v5[4] && !v5[6] )
    {
      v6 = (*(int (__thiscall **)(int *))(*v5 + 4))(v5);
      InternalRemoveProp(v5[1], v6, 1);
      v7 = (void (__thiscall **)(int *))*v5;
      v5[1] = 0;
      (*v7)(v5);
    }
    if ( a2 )
      RemoveVisRgnTracker(a1, 8);
    else
      RemoveVisRgnTracker(a1, 4);
    return v9;
  }
  return (int *)v3;
}
