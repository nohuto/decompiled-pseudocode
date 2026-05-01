/*
 * XREFs of ??0hresult_not_implemented@winrt@@QEAA@XZ @ 0x1800B4830
 * Callers:
 *     ?IsSupported@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1800B84FC (-IsSupported@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x18043E2FC (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

winrt::hresult_not_implemented *__fastcall winrt::hresult_not_implemented::hresult_not_implemented(
        winrt::hresult_not_implemented *this)
{
  winrt::hresult_error::hresult_error(this, winrt::impl::error_not_implemented);
  return this;
}
