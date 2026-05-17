/*
 * XREFs of _RtlNewSecurityObjectWithMultipleInheritance@36 @ 0x4B336430
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 */

int __stdcall RtlNewSecurityObjectWithMultipleInheritance(
        int a1,
        _BYTE *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        void *a8,
        int a9)
{
  return RtlpNewSecurityObject(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0);
}
