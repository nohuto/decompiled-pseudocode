/*
 * XREFs of sub_1800B26D8 @ 0x1800B26D8
 * Callers:
 *     sub_1800AF1E0 @ 0x1800AF1E0 (sub_1800AF1E0.c)
 *     sub_1800B2AB0 @ 0x1800B2AB0 (sub_1800B2AB0.c)
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800C8A84 @ 0x1800C8A84 (sub_1800C8A84.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800FCF84 @ 0x1800FCF84 (sub_1800FCF84.c)
 * Callees:
 *     sub_180083FF0 @ 0x180083FF0 (sub_180083FF0.c)
 *     sub_1800AFA58 @ 0x1800AFA58 (sub_1800AFA58.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_1800B26D8(__int64 a1)
{
  _DWORD *result; // rax
  float v3; // xmm0_4
  float v4; // [rsp+20h] [rbp-38h] BYREF
  float v5; // [rsp+24h] [rbp-34h]
  unsigned __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+3Ch] [rbp-1Ch] BYREF

  if ( *(_BYTE *)(a1 + 336) )
  {
    if ( *(_BYTE *)(a1 + 1612) )
    {
      sub_1800AFA58(a1, (__int64)&v6);
      result = sub_180083FF0(&v4, &v7, &v6);
      if ( v5 != 0.0 )
      {
        v3 = v4 / v5;
        if ( (float)(v4 / v5) != *(float *)(a1 + 332) )
        {
          *(_DWORD *)(a1 + 544) |= 2u;
          *(float *)(a1 + 332) = v3;
        }
        *(_BYTE *)(a1 + 1612) = 0;
      }
    }
  }
  return result;
}
