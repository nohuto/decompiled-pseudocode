/*
 * XREFs of ?SetSystemVisual@CHwndTargetProp@@QEAAJW4HwndTargetPropVisualType@@PEAUCompositionObject@@@Z @ 0x1C0041370
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionNotifyDwmForSystemVisualCreation @ 0x1C00413F0 (ApiSetEditionNotifyDwmForSystemVisualCreation.c)
 */

__int64 __fastcall CHwndTargetProp::SetSystemVisual(__int64 a1, int a2, void *a3)
{
  __int64 v3; // rsi
  int v6; // ebx

  v3 = a2;
  v6 = ApiSetEditionNotifyDwmForSystemVisualCreation(*(_QWORD *)(a1 + 8), a2 == 0);
  if ( v6 >= 0 )
  {
    *(_QWORD *)(a1 + 16 * (v3 + 1)) = a3;
    ObReferenceObjectByPointer(a3, 3u, ExCompositionObjectType, 0);
  }
  return (unsigned int)v6;
}
