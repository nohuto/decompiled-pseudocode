/*
 * XREFs of ?GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18028EEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompSwapChain::GetPresentStatistics(CCompSwapChain *this, struct DXGI_FRAME_STATISTICS *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS *))(**((_QWORD **)this + 10) + 128LL))(
         *((_QWORD *)this + 10),
         a2);
  v6 = v2;
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_180397860, 3LL, v2, 0xB8u);
  TranslateDXGIorD3DErrorInContext(v4, 0, &v6);
  return v6;
}
