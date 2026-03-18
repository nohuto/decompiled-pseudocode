/*
 * XREFs of ?_TTWindowPenalty@@YGIPAUtagWND@@PAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x17A562
 * Callers:
 *     ?xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x17AAE3 (-xxxTargetingHitTest@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@1PAUtagPNTRWINDOWHITTTESTARGS@@PAHUtagR.c)
 * Callees:
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _TouchTargetingBigTargetWindow@20 @ 0x1B8A48 (_TouchTargetingBigTargetWindow@20.c)
 *     _TouchTargetingDownrank@8 @ 0x1B8E01 (_TouchTargetingDownrank@8.c)
 */

int __userpurge _TTWindowPenalty@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        struct tagPNTRWINDOWHITTTESTARGS *a4,
        unsigned int a5)
{
  int v5; // ebx
  int Prop; // eax

  v5 = 0;
  if ( !a3
    && TouchTargetingBigTargetWindow(
         *(_DWORD *)(*(_DWORD *)(a2 + 20) + 52),
         *(_DWORD *)(*(_DWORD *)(a2 + 20) + 56),
         *(_DWORD *)(*(_DWORD *)(a2 + 20) + 60),
         *(_DWORD *)(*(_DWORD *)(a2 + 20) + 64)) )
  {
    Prop = _GetProp(a2, (unsigned __int16)gatomPtrTargetFlags, 1);
    return TouchTargetingDownrank(*(_DWORD *)(a1 + 24), Prop);
  }
  return v5;
}
