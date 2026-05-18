/*
 * XREFs of sub_1800B4DE0 @ 0x1800B4DE0
 * Callers:
 *     sub_1800B4510 @ 0x1800B4510 (sub_1800B4510.c)
 *     sub_1800B5AB4 @ 0x1800B5AB4 (sub_1800B5AB4.c)
 * Callees:
 *     sub_1800B3C60 @ 0x1800B3C60 (sub_1800B3C60.c)
 */

__int128 *__fastcall sub_1800B4DE0(__int64 a1)
{
  __int128 *result; // rax
  __int128 v3; // xmm1
  bool v4; // zf
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 426) = 0;
  *(_BYTE *)(a1 + 425) = 1;
  v6 = a1;
  v7 = sub_1800B5910;
  result = (__int128 *)sub_1800B3C60((__int64)v5, &v7, &v6);
  if ( *(_DWORD *)(a1 + 112) || (v3 = *result, *result = 0LL, v4 = v5[2] == 0, *(_OWORD *)(a1 + 104) = v3, !v4) )
  {
    _o_terminate();
    __debugbreak();
  }
  return result;
}
