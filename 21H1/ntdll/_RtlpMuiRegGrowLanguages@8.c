/*
 * XREFs of _RtlpMuiRegGrowLanguages@8 @ 0x4B36B916
 * Callers:
 *     _RtlpMuiRegGetOrAddLangInfo@12 @ 0x4B2EA745 (_RtlpMuiRegGetOrAddLangInfo@12.c)
 * Callees:
 *     _RtlpMuiRegResizeLanguages@8 @ 0x4B36BD50 (_RtlpMuiRegResizeLanguages@8.c)
 */

int __thiscall RtlpMuiRegGrowLanguages(unsigned __int16 *this)
{
  int result; // eax

  result = 0;
  if ( this )
  {
    if ( (unsigned int)this[3] + 4 >= this[2] )
      return RtlpMuiRegResizeLanguages(this);
    else
      return (int)this;
  }
  return result;
}
