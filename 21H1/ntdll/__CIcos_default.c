/*
 * XREFs of __CIcos_default @ 0x4B2F5AC2
 * Callers:
 *     __CIcos @ 0x4B2F5AC0 (__CIcos.c)
 * Callees:
 *     sub_4B2F5ADF @ 0x4B2F5ADF (sub_4B2F5ADF.c)
 *     __checkTOS_withFB @ 0x4B2FAFE8 (__checkTOS_withFB.c)
 */

int __usercall _CIcos_default@<eax>(unsigned __int64 a1@<st0>)
{
  int v2; // [esp+0h] [ebp-Ch]

  _checkTOS_withFB(a1, HIDWORD(a1));
  return sub_4B2F5ADF(v2);
}
