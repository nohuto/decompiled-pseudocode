/*
 * XREFs of ?IsIndependentFlipSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800DB870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CLegacyRenderTarget::IsIndependentFlipSupported(CLegacyRenderTarget *this)
{
  return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 80LL))(*((_QWORD *)this + 2)) != 0;
}
