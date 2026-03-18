/*
 * XREFs of draw_gray_nf_ntb_o_to_temp_start @ 0x1C00F8700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall draw_gray_nf_ntb_o_to_temp_start(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx

  result = a2;
  v10 = 3LL * a2;
  if ( a1 < a1 + 8 * v10 )
  {
    v11 = a1 + 16;
    v12 = (8 * v10 - 1) / 0x18uLL + 1;
    do
    {
      v13 = **(_QWORD **)(v11 - 8);
      result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))(&(&apfnGray)[2
                                                                                      * ((*(_BYTE *)v13
                                                                                        + *(_BYTE *)v11
                                                                                        - (_BYTE)a4) & 1u)])[*(_DWORD *)(v13 + 8) & 1])(
                 v13,
                 (unsigned int)(*(_DWORD *)(v13 + 8) + 1) >> 1,
                 a3
               + a5 * (__int64)(*(_DWORD *)(v13 + 4) + *(_DWORD *)(v11 + 4) - a7)
               + (*(_DWORD *)v13 + *(_DWORD *)v11 - a4) / 2,
                 a5);
      v11 += 24LL;
      --v12;
    }
    while ( v12 );
  }
  return result;
}
