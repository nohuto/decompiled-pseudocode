/*
 * XREFs of _GetClassPtr@12 @ 0x4741E
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     __GetClassInfoEx@20 @ 0x8052E (__GetClassInfoEx@20.c)
 *     __GetWOWClass@8 @ 0x15463B (__GetWOWClass@8.c)
 * Callees:
 *     __InnerGetClassPtr@12 @ 0x47482 (__InnerGetClassPtr@12.c)
 */

int __stdcall GetClassPtr(int a1, int a2, int a3)
{
  int result; // eax
  PKDEFERRED_ROUTINE DeferredRoutine; // edi

  result = _InnerGetClassPtr(a3);
  if ( !result )
  {
    result = _InnerGetClassPtr(0);
    if ( !result )
    {
      DeferredRoutine = WPP_MAIN_CB.Dpc.DeferredRoutine;
      result = _InnerGetClassPtr(WPP_MAIN_CB.Dpc.DeferredRoutine);
      if ( !result )
        return _InnerGetClassPtr(DeferredRoutine);
    }
  }
  return result;
}
