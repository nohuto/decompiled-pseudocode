/*
 * XREFs of __CIlog_default @ 0x4B2F5B82
 * Callers:
 *     __CIlog @ 0x4B2F5B80 (__CIlog.c)
 * Callees:
 *     sub_4B2F5B9F @ 0x4B2F5B9F (sub_4B2F5B9F.c)
 *     __checkTOS_withFB @ 0x4B2FAFE8 (__checkTOS_withFB.c)
 */

int __usercall _CIlog_default@<eax>(unsigned __int64 a1@<st0>)
{
  int v2; // [esp+0h] [ebp-Ch]
  int v3; // [esp+4h] [ebp-8h]

  _checkTOS_withFB(a1, HIDWORD(a1));
  return sub_4B2F5B9F(v2, v3);
}
