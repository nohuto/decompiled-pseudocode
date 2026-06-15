/*
 * XREFs of ??I?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIAudioProcess@@XZ @ 0x1800C7068
 * Callers:
 *     AudioServerIsOffloadCapable @ 0x1800E0880 (AudioServerIsOffloadCapable.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator&(__int64 a1)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(a1);
  return a1;
}
