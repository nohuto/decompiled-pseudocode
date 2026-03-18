/*
 * XREFs of ?WindowHasCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C004B544
 * Callers:
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C004B42C (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C004B598 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 */

__int64 __fastcall WindowHasCompositionTarget(struct tagWND *a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v5 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndTargetProp>(a1, &v5) )
    return *(_QWORD *)((a2 == 0 ? 0x20 : 0) + v5 + 16) != 0LL;
  return v3;
}
