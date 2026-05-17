/*
 * XREFs of _RtlSetControlSecurityDescriptor@12 @ 0x4B2ED370
 * Callers:
 *     _RtlSetAttributesSecurityDescriptor@12 @ 0x4B347290 (_RtlSetAttributesSecurityDescriptor@12.c)
 *     _RtlpSysVolCreateSecurityDescriptor@8 @ 0x4B35DDBB (_RtlpSysVolCreateSecurityDescriptor@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlSetControlSecurityDescriptor(int a1, unsigned __int16 a2, unsigned __int16 a3)
{
  if ( (a3 & ~a2) != 0 || (a2 & 0xC03F) != 0 )
    return -1073741811;
  *(_WORD *)(a1 + 2) = a3 | *(_WORD *)(a1 + 2) & ~a2;
  return 0;
}
