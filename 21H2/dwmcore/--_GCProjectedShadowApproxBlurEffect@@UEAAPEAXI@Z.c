/*
 * XREFs of ??_GCProjectedShadowApproxBlurEffect@@UEAAPEAXI@Z @ 0x180020310
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 */

CProjectedShadowApproxBlurEffect *__fastcall CProjectedShadowApproxBlurEffect::`scalar deleting destructor'(
        CProjectedShadowApproxBlurEffect *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xA8uLL);
  return this;
}
