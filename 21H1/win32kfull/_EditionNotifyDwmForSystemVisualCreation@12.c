/*
 * XREFs of _EditionNotifyDwmForSystemVisualCreation@12 @ 0xF3C7A
 * Callers:
 *     <none>
 * Callees:
 *     _DwmAsyncCreateDCompositionHwndTarget@16 @ 0xF5EDA (_DwmAsyncCreateDCompositionHwndTarget@16.c)
 */

int __stdcall EditionNotifyDwmForSystemVisualCreation(int a1, int a2, CompositionObject *a3)
{
  int v3; // ebx
  void *v4; // eax
  int v6; // [esp-8h] [ebp-14h]
  int v7; // [esp-4h] [ebp-10h]

  v3 = 0;
  if ( IsWindowDesktopComposed(a1) )
  {
    a1 = 0;
    v3 = CompositionObject::OpenDwmHandle(a3, (void **)&a1);
    if ( v3 >= 0 )
    {
      v7 = a1;
      v6 = a2;
      v4 = (void *)ReferenceDwmApiPort();
      return DwmAsyncCreateDCompositionHwndTarget(v4, v6, v7);
    }
  }
  return v3;
}
