/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x18003C950
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     RtlCreateAndSetSD @ 0x180066880 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800881D0 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x18008832C (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateSecurityDescriptor(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 1 )
    return 3221225560LL;
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)a1 = 1;
  return result;
}
