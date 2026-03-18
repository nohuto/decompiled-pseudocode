/*
 * XREFs of ?ReNotifyDwm@CHwndTargetProp@@SGXPAUtagWND@@@Z @ 0xE0D90
 * Callers:
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z @ 0xB2C26 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCHwndTargetProp@@@Z.c)
 *     ?HasSystemVisual@CHwndTargetProp@@QBEHW4HwndTargetPropVisualType@@@Z @ 0xF578A (-HasSystemVisual@CHwndTargetProp@@QBEHW4HwndTargetPropVisualType@@@Z.c)
 *     _DwmAsyncCreateDCompositionHwndTarget@16 @ 0xF5EDA (_DwmAsyncCreateDCompositionHwndTarget@16.c)
 */

void __thiscall CHwndTargetProp::ReNotifyDwm(void *this)
{
  int v1; // edi
  void *v2; // eax
  void *v3; // eax
  int v4; // [esp-4h] [ebp-1Ch]
  int v5; // [esp-4h] [ebp-1Ch]
  int v6; // [esp+10h] [ebp-8h] BYREF
  int v7; // [esp+14h] [ebp-4h] BYREF

  v6 = 0;
  if ( CWindowProp::GetProp<CHwndTargetProp>((int)this, &v6) )
  {
    v1 = v6;
    v7 = 0;
    if ( CHwndTargetProp::HasSystemVisual(v6, 0)
      && (int)CompositionObject::OpenDwmHandle(*(CompositionObject **)(v1 + 8), (void **)&v7) >= 0 )
    {
      v4 = v7;
      v2 = (void *)ReferenceDwmApiPort();
      DwmAsyncCreateDCompositionHwndTarget(v2, 1, v4);
    }
    if ( CHwndTargetProp::HasSystemVisual(v1, 2) )
    {
      if ( (int)CompositionObject::OpenDwmHandle(*(CompositionObject **)(v1 + 24), (void **)&v7) >= 0 )
      {
        v5 = v7;
        v3 = (void *)ReferenceDwmApiPort();
        DwmAsyncCreateDCompositionHwndTarget(v3, 0, v5);
      }
    }
  }
}
