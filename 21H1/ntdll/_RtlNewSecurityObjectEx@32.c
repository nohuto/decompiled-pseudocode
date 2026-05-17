/*
 * XREFs of _RtlNewSecurityObjectEx@32 @ 0x4B2D93A0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 */

int __stdcall RtlNewSecurityObjectEx(int a1, _BYTE *a2, _DWORD *a3, int a4, int a5, unsigned int a6, void *a7, int a8)
{
  return RtlpNewSecurityObject(a1, a2, a3, a4 != 0 ? (unsigned int)&a4 : 0, a4 != 0, a5, a6, a7, a8, 0);
}
