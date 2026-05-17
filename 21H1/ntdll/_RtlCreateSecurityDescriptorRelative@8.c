/*
 * XREFs of _RtlCreateSecurityDescriptorRelative@8 @ 0x4B2D92C5
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlQuerySecurityObject@20 @ 0x4B336460 (_RtlQuerySecurityObject@20.c)
 *     _RtlpConvertToAutoInheritSecurityObject@24 @ 0x4B348358 (_RtlpConvertToAutoInheritSecurityObject@24.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlCreateSecurityDescriptorRelative(_DWORD *this)
{
  int result; // eax

  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  result = 0;
  *(_BYTE *)this = 1;
  return result;
}
