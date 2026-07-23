/*
 * XREFs of _RtlpMuiRegGrowLanguageList@8 @ 0x4B36B8F3
 * Callers:
 *     _RtlpLoadMachineUIByPolicy@12 @ 0x4B2A71E0 (_RtlpLoadMachineUIByPolicy@12.c)
 *     _RtlpLoadUserUIByPolicy@12 @ 0x4B2AD890 (_RtlpLoadUserUIByPolicy@12.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 * Callees:
 *     _RtlpMuiRegResizeLanguageList@8 @ 0x4B36BD04 (_RtlpMuiRegResizeLanguageList@8.c)
 */

int __thiscall RtlpMuiRegGrowLanguageList(unsigned __int16 *this)
{
  unsigned int v1; // edx

  if ( !this )
    return 0;
  v1 = this[2] + 1;
  if ( v1 >= this[3] )
    return RtlpMuiRegResizeLanguageList((int)this, v1);
  else
    return (int)this;
}
