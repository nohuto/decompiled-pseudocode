/*
 * XREFs of sub_1800542FC @ 0x1800542FC
 * Callers:
 *     DllMain @ 0x18006D2E0 (DllMain.c)
 * Callees:
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800B5E1C @ 0x1800B5E1C (sub_1800B5E1C.c)
 */

__int64 (__fastcall *sub_1800542FC())(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax
  _BYTE v1[152]; // [rsp+20h] [rbp-98h] BYREF

  result = qword_18019E5D0;
  if ( qword_18019E5D0 && qword_18019E5D0 != sub_180047100 )
  {
    memset(v1, 0, 0x90uLL);
    sub_1800B5E1C(v1);
  }
  qword_18019E5D0 = sub_180047100;
  return result;
}
