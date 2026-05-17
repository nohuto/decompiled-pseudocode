/*
 * XREFs of RtlNewSecurityObjectWithMultipleInheritance @ 0x180086310
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 */

__int64 __fastcall RtlNewSecurityObjectWithMultipleInheritance(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  return RtlpNewSecurityObject(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
