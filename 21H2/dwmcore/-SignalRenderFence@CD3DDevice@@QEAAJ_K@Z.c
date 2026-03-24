/*
 * XREFs of ?SignalRenderFence@CD3DDevice@@QEAAJ_K@Z @ 0x1802406A4
 * Callers:
 *     ?FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ @ 0x180184854 (-FlushAndWaitAtPresent@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018C4E4 (-FlushAndWaitAtPresent@CDDisplayRenderTarget@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078248 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::SignalRenderFence(CD3DDevice *this, __int64 a2)
{
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // esi

  result = 0LL;
  if ( a2 != *((_QWORD *)this + 176) )
  {
    *((_BYTE *)this + 1435) = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 33) + 152LL))(
           *((_QWORD *)this + 33),
           *((_QWORD *)this + 77),
           a2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xE9Eu, 0LL);
    result = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v7, 0xFu);
    *((_QWORD *)this + 176) = a2;
    *((_BYTE *)this + 1435) = 0;
  }
  return result;
}
