/*
 * XREFs of _RtlSetAttributesSecurityDescriptor@12 @ 0x4B347290
 * Callers:
 *     <none>
 * Callees:
 *     _RtlSetControlSecurityDescriptor@12 @ 0x4B2ED370 (_RtlSetControlSecurityDescriptor@12.c)
 */

int __stdcall RtlSetAttributesSecurityDescriptor(_BYTE *a1, __int16 a2, _DWORD *a3)
{
  *a3 = (unsigned __int8)*a1;
  if ( *a1 == 1 )
    return RtlSetControlSecurityDescriptor((int)a1, a2 & 0x3FC0, a2 & 0x3FC0);
  else
    return -1073741736;
}
