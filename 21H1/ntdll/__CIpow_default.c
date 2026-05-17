/*
 * XREFs of __CIpow_default @ 0x4B2F5C72
 * Callers:
 *     __CIpow @ 0x4B2F5C70 (__CIpow.c)
 * Callees:
 *     sub_4B2F5C94 @ 0x4B2F5C94 (sub_4B2F5C94.c)
 */

int __usercall _CIpow_default@<eax>(unsigned __int64 a1@<st1>, unsigned __int64 a2@<st0>)
{
  return sub_4B2F5C94(a2, HIDWORD(a2), a1, HIDWORD(a1));
}
