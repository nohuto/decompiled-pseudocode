/*
 * XREFs of ??$query_to@UIDXGIOutput@@@?$com_ptr_t@UIDXGIOutputDWM@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIDXGIOutput@@@Z @ 0x180184784
 * Callers:
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x180199484 (-UpdateTransform@CDDARenderTarget@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IDXGIOutputDWM,wil::err_returncode_policy>::query_to<IDXGIOutput>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa, a2);
}
