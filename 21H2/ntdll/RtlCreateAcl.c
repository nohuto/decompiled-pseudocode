/*
 * XREFs of RtlCreateAcl @ 0x18003A450
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18003A094 (RtlpInheritAcl2.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     RtlCreateAndSetSD @ 0x180067E80 (RtlCreateAndSetSD.c)
 *     RtlpCombineAcls @ 0x180072A14 (RtlpCombineAcls.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800888D0 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlDefaultNpAcl @ 0x1800D6AA0 (RtlDefaultNpAcl.c)
 *     RtlpComputeMergedAcl2 @ 0x1800E7628 (RtlpComputeMergedAcl2.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7924 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800E869C (RtlpCreateServerAcl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAcl(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a2 < 8 )
    return 3221225507LL;
  if ( (unsigned int)(a3 - 2) > 2 || a2 > 0xFFFC )
    return 3221225485LL;
  result = 0LL;
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = 0;
  *(_WORD *)(a1 + 2) = a2 & 0xFFFC;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}
