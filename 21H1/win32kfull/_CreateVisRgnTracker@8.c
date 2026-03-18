/*
 * XREFs of _CreateVisRgnTracker@8 @ 0xF4C7C
 * Callers:
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     ?_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z @ 0xB2A44 (-_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z.c)
 *     _UserSetWindowedSwapChain@12 @ 0xC2B6E (_UserSetWindowedSwapChain@12.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QAEHPAUtagWND@@@Z @ 0xB4F1C (-SetProp@CWindowProp@@QAEHPAUtagWND@@@Z.c)
 *     ??$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SGJPAPAVCVisRgnTrackerProp@@@Z @ 0xF4540 (--$CreateWindowProp@VCVisRgnTrackerProp@@@CWindowProp@@SGJPAPAVCVisRgnTrackerProp@@@Z.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z @ 0xF457E (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCVisRgnTrackerProp@@@Z.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 */

int __fastcall CreateVisRgnTracker(struct tagWND *a1, int a2)
{
  int v2; // edi
  CWindowProp *v4; // esi
  int result; // eax
  CWindowProp *v7; // [esp+14h] [ebp-4h] BYREF

  v2 = 0;
  v7 = 0;
  CWindowProp::GetProp<CVisRgnTrackerProp>((int)a1, (int *)&v7);
  v4 = v7;
  if ( v7 )
    goto LABEL_5;
  result = CWindowProp::CreateWindowProp<CVisRgnTrackerProp>(&v7);
  v2 = result;
  if ( result < 0 )
    return result;
  v4 = v7;
  if ( CWindowProp::SetProp(v7, a1) )
  {
LABEL_5:
    *((_DWORD *)v4 + 4) |= a2;
    DirtyVisRgnTrackers(a1);
    return v2;
  }
  else
  {
    (**(void (__thiscall ***)(CWindowProp *))v4)(v4);
    return -1073741790;
  }
}
