/*
 * XREFs of ?GetCurrentBackBuffer@CLegacyRemotingSwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1800FFE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CLegacyRemotingSwapChain::GetCurrentBackBuffer(CLegacyRemotingSwapChain *this)
{
  return (struct IDeviceTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10));
}
