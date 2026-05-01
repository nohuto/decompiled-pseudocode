/*
 * XREFs of ?GetSafeArray@AccessibilityHelpers@@YAJPEAUIRawElementProviderSimple@@PEAPEAUtagSAFEARRAY@@@Z @ 0x1803F68F0
 * Callers:
 *     ?GetGrabbedItems@AppResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1803F6750 (-GetGrabbedItems@AppResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?GetGrabbedItems@JointResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1803FBAE0 (-GetGrabbedItems@JointResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?GetGrabbedItems@CDragVisualAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x18040A190 (-GetGrabbedItems@CDragVisualAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccessibilityHelpers::GetSafeArray(
        AccessibilityHelpers *this,
        struct IRawElementProviderSimple *a2,
        struct tagSAFEARRAY **a3)
{
  SAFEARRAY *Vector; // rax
  SAFEARRAY *v6; // rdi
  HRESULT v7; // ebx
  LONG rgIndices; // [rsp+38h] [rbp+10h] BYREF

  a2->lpVtbl = 0LL;
  Vector = SafeArrayCreateVector(0xDu, 0, 1u);
  v6 = Vector;
  if ( Vector )
  {
    rgIndices = 0;
    v7 = SafeArrayPutElement(Vector, &rgIndices, this);
    if ( v7 < 0 )
      SafeArrayDestroy(v6);
    else
      a2->lpVtbl = (struct IRawElementProviderSimpleVtbl *)v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
