/*
 * XREFs of sub_180017D14 @ 0x180017D14
 * Callers:
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000CF70 @ 0x18000CF70 (sub_18000CF70.c)
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     _o_wmemcpy_s @ 0x18003A7C0 (_o_wmemcpy_s.c)
 */

__int64 __fastcall sub_180017D14(__int64 *a1, HMODULE a2, unsigned int a3)
{
  HRSRC Resource; // rax
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r10
  unsigned __int16 v10; // dx
  int v11; // eax
  __int64 result; // rax

  Resource = FindResourceExW(a2, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a3 >> 4) + 1), 0);
  if ( Resource )
  {
    v6 = (unsigned __int16 *)sub_180019FC0(a2, Resource);
    v7 = v6;
    if ( v6 )
    {
      v8 = *v6;
      v9 = *a1;
      v10 = *v6;
      if ( (int)((*(_DWORD *)(*a1 - 12) - v8) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
      {
        sub_18000CF70(a1, v8);
        v9 = *a1;
        v10 = *v7;
      }
      v11 = o_wmemcpy_s(v9, (int)v8, v7 + 1, v10);
      if ( v11 )
      {
        if ( v11 == 12 )
          sub_18000A174(-2147024882);
        if ( v11 == 22 || v11 == 34 )
          goto LABEL_15;
        if ( v11 != 80 )
          sub_18000A174(-2147467259);
      }
      if ( (int)v8 <= *(_DWORD *)(*a1 - 12) )
      {
        *(_DWORD *)(*a1 - 16) = v8;
        result = 1LL;
        *(_WORD *)(*a1 + 2 * v8) = 0;
        return result;
      }
LABEL_15:
      sub_18000A174(-2147024809);
    }
  }
  return 0LL;
}
