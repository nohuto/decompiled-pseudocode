/*
 * XREFs of ??1SharedStateLayer@@QEAA@XZ @ 0x1800C0310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SharedStateLayer::~SharedStateLayer(SharedStateLayer *this)
{
  wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::~com_ptr_t<CRenderingEffect,wil::err_returncode_policy>((char *)this + 32);
}
