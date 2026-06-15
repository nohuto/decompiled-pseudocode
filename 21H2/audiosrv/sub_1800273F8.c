/*
 * XREFs of sub_1800273F8 @ 0x1800273F8
 * Callers:
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_18002732C @ 0x18002732C (sub_18002732C.c)
 *     sub_180028DAC @ 0x180028DAC (sub_180028DAC.c)
 *     sub_18002903C @ 0x18002903C (sub_18002903C.c)
 *     sub_1800291D4 @ 0x1800291D4 (sub_1800291D4.c)
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_180059784 @ 0x180059784 (sub_180059784.c)
 *     sub_180059A8C @ 0x180059A8C (sub_180059A8C.c)
 *     sub_180059F70 @ 0x180059F70 (sub_180059F70.c)
 *     sub_18005A458 @ 0x18005A458 (sub_18005A458.c)
 *     sub_18005B794 @ 0x18005B794 (sub_18005B794.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_180067BDC @ 0x180067BDC (sub_180067BDC.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 *     sub_1801195CC @ 0x1801195CC (sub_1801195CC.c)
 *     sub_1801230A8 @ 0x1801230A8 (sub_1801230A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800273F8(__int64 a1, _OWORD *a2)
{
  int v4; // ecx
  int v5; // edi
  __int64 v6; // rax
  _OWORD *v7; // rdx
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 == *(_DWORD *)(a1 + 12) )
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      v5 = 2 * v4;
      if ( (v4 & 0x40000000) != 0 )
        return 0LL;
    }
    else
    {
      v5 = 1;
    }
    if ( (unsigned __int64)v5 <= 0x7FFFFFF )
    {
      v6 = o__recalloc(*(_QWORD *)a1, v5, 16LL);
      if ( v6 )
      {
        v4 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 12) = v5;
        *(_QWORD *)a1 = v6;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
LABEL_7:
  v7 = (_OWORD *)(*(_QWORD *)a1 + 16LL * v4);
  if ( v7 )
  {
    *v7 = *a2;
    v4 = *(_DWORD *)(a1 + 8);
  }
  result = 1LL;
  *(_DWORD *)(a1 + 8) = v4 + 1;
  return result;
}
