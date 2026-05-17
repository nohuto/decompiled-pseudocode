/*
 * XREFs of __CItan_default @ 0x4B2FA472
 * Callers:
 *     __CItan @ 0x4B2FA470 (__CItan.c)
 * Callees:
 *     sub_4B2FA48F @ 0x4B2FA48F (sub_4B2FA48F.c)
 *     __checkTOS_withFB @ 0x4B2FAFE8 (__checkTOS_withFB.c)
 */

int __usercall _CItan_default@<eax>(unsigned __int64 a1@<st0>)
{
  int v2; // [esp+0h] [ebp-Ch]

  _checkTOS_withFB(a1, HIDWORD(a1));
  return sub_4B2FA48F(v2);
}
