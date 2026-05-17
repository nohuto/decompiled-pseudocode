/*
 * XREFs of __CIsqrt @ 0x4B2F5F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_4B2F5F8D @ 0x4B2F5F8D (sub_4B2F5F8D.c)
 *     __checkTOS_withFB @ 0x4B2FAFE8 (__checkTOS_withFB.c)
 */

double __usercall _CIsqrt@<st0>(unsigned __int64 x@<st0>)
{
  int v2; // [esp+0h] [ebp-Ch]
  int v3; // [esp+4h] [ebp-8h]

  _checkTOS_withFB(x, HIDWORD(x));
  return sub_4B2F5F8D(v2, v3);
}
