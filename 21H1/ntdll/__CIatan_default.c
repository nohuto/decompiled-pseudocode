/*
 * XREFs of __CIatan_default @ 0x4B2F8092
 * Callers:
 *     __CIatan @ 0x4B2F8090 (__CIatan.c)
 * Callees:
 *     sub_4B2F80AF @ 0x4B2F80AF (sub_4B2F80AF.c)
 *     __checkTOS_withFB @ 0x4B2FAFE8 (__checkTOS_withFB.c)
 */

int __usercall _CIatan_default@<eax>(unsigned __int64 a1@<st0>)
{
  int v2; // [esp+0h] [ebp-Ch]

  _checkTOS_withFB(a1, HIDWORD(a1));
  return sub_4B2F80AF(v2);
}
