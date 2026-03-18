/*
 * XREFs of ??$query_to@UID2D1PrivateFactoryDwmRoundedRectangle@@@?$com_ptr_t@UID2D1Factory1@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUID2D1PrivateFactoryDwmRoundedRectangle@@@Z @ 0x180104EA4
 * Callers:
 *     ?EnsureD2DFactory@CD2DFactory@@QEAAJXZ @ 0x180025F18 (-EnsureD2DFactory@CD2DFactory@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<ID2D1Factory1,wil::err_returncode_policy>::query_to<ID2D1PrivateFactoryDwmRoundedRectangle>(
        __int64 a1,
        __int64 a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))*g_DeviceManager)(
           g_DeviceManager,
           &GUID_b73f9229_1b12_4e63_bc00_54cdff7ada0e,
           a2);
}
