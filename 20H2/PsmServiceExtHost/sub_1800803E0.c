/*
 * XREFs of sub_1800803E0 @ 0x1800803E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007984C @ 0x18007984C (sub_18007984C.c)
 */

__int64 __fastcall sub_1800803E0(__int64 a1, void *a2, __int64 a3, unsigned int a4, unsigned int a5, _BYTE *a6)
{
  __int64 result; // rax
  _DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF

  result = sub_18007984C(*(_QWORD *)&qword_1800B41A8 + 1768LL, a2, a3, a4, a5, v7);
  if ( (int)result >= 0 )
  {
    *a6 = v7[0];
    return 0LL;
  }
  return result;
}
