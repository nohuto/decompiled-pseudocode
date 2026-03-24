/*
 * XREFs of ?GetPresentStatistics@CCompSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180251290
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180079DA4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompSwapChain::GetPresentStatistics(CCompSwapChain *this, struct DXGI_FRAME_STATISTICS *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS *))(**((_QWORD **)this + 4) + 128LL))(
         *((_QWORD *)this + 4),
         a2);
  v6 = v2;
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1803071E0, 3u, v2, 0xA6u, 0LL);
  TranslateDXGIorD3DErrorInContext(v4, 0, &v6);
  return v6;
}
