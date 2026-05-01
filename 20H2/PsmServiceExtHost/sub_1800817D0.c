/*
 * XREFs of sub_1800817D0 @ 0x1800817D0
 * Callers:
 *     sub_180079C30 @ 0x180079C30 (sub_180079C30.c)
 * Callees:
 *     sub_18003D1D8 @ 0x18003D1D8 (sub_18003D1D8.c)
 *     sub_18003D210 @ 0x18003D210 (sub_18003D210.c)
 *     sub_180081898 @ 0x180081898 (sub_180081898.c)
 *     sub_180081BF0 @ 0x180081BF0 (sub_180081BF0.c)
 */

__int64 __fastcall sub_1800817D0(__int64 a1, __int64 a2, int a3)
{
  int v4; // r14d
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edi
  int v9; // edx
  int v10; // r8d
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx

  v4 = a2;
  sub_18003D210(a1, a2);
  v7 = *(_DWORD *)(a1 + 192);
  if ( (v7 & 1) != 0 )
  {
    v8 = -1073740682;
  }
  else
  {
    *(_DWORD *)(a1 + 192) = v7 | 1;
    v8 = 0;
  }
  sub_18003D1D8(a1, v6);
  if ( v8 >= 0 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    v8 = sub_180081898(a1, v9, v10, v4, a3);
    if ( v8 >= 0 )
    {
      sub_180081BF0(v11 + 376, a1);
      v8 = 0;
    }
    sub_18003D210(a1, v12);
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_DWORD *)(a1 + 192) &= 0xFFFFFFFC;
    sub_18003D1D8(a1, v13);
  }
  return (unsigned int)v8;
}
