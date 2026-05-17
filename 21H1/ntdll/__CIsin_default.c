/*
 * XREFs of __CIsin_default @ 0x4B2F5EA2
 * Callers:
 *     __CIsin @ 0x4B2F5EA0 (__CIsin.c)
 * Callees:
 *     sub_4B2F5EBF @ 0x4B2F5EBF (sub_4B2F5EBF.c)
 *     __checkTOS_withFB @ 0x4B2FAFE8 (__checkTOS_withFB.c)
 */

int __usercall _CIsin_default@<eax>(unsigned __int64 a1@<st0>)
{
  int v2; // [esp+0h] [ebp-Ch]

  _checkTOS_withFB(a1, HIDWORD(a1));
  return sub_4B2F5EBF(v2);
}
