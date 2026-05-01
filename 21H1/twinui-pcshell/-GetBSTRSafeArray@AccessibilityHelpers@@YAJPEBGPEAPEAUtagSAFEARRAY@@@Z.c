/*
 * XREFs of ?GetBSTRSafeArray@AccessibilityHelpers@@YAJPEBGPEAPEAUtagSAFEARRAY@@@Z @ 0x1803F667C
 * Callers:
 *     ?get_DropEffects@AppResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1803F7010 (-get_DropEffects@AppResizeAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?get_DropEffects@CDragVisualAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x18040B6C0 (-get_DropEffects@CDragVisualAcc@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccessibilityHelpers::GetBSTRSafeArray(
        const OLECHAR *this,
        unsigned __int16 *a2,
        struct tagSAFEARRAY **a3)
{
  OLECHAR *v4; // rsi
  HRESULT v5; // ebx
  SAFEARRAY *Vector; // rax
  SAFEARRAY *v7; // rdi
  LONG rgIndices; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v4 = SysAllocString(this);
  if ( !v4 )
    return (unsigned int)-2147024882;
  Vector = SafeArrayCreateVector(8u, 0, 1u);
  v7 = Vector;
  if ( !Vector )
  {
    v5 = -2147024882;
LABEL_9:
    SysFreeString(v4);
    return (unsigned int)v5;
  }
  rgIndices = 0;
  v5 = SafeArrayPutElement(Vector, &rgIndices, v4);
  if ( v5 < 0 )
    SafeArrayDestroy(v7);
  else
    *(_QWORD *)a2 = v7;
  if ( v5 < 0 )
    goto LABEL_9;
  return (unsigned int)v5;
}
