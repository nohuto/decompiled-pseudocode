/*
 * XREFs of ??$query_to@VIBitmapDest2@@@?$com_ptr_t@VIBitmapDest@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIBitmapDest2@@@Z @ 0x1800F28AC
 * Callers:
 *     ?SetAlphaMode@CLegacyRemotingSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802522C0 (-SetAlphaMode@CLegacyRemotingSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetColorSpace@CLegacyRemotingSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180252340 (-SetColorSpace@CLegacyRemotingSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IBitmapDest,wil::err_returncode_policy>::query_to<IBitmapDest2>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_11bb5fd3_c76d_405e_a8d7_7fe7375f478a, a2);
}
