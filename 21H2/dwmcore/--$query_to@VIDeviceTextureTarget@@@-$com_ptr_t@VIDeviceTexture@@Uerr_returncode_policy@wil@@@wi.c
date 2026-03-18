/*
 * XREFs of ??$query_to@VIDeviceTextureTarget@@@?$com_ptr_t@VIDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVIDeviceTextureTarget@@@Z @ 0x180104F4C
 * Callers:
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x180292718 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IDeviceTexture,wil::err_returncode_policy>::query_to<IDeviceTextureTarget>(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64); // rcx

  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))(*(_QWORD *)a1
                                                         + 8LL
                                                         + *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 4LL));
  return (**v2)(v2, &GUID_77778ec0_8ef7_4222_bede_336213c916e3, a2);
}
