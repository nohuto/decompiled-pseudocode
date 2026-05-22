/*
 * XREFs of std::_Guess_median_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CA670
 * Callers:
 *     std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CAAC8 (std--_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a.c)
 * Callees:
 *     std::_Med3_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CA984 (std--_Med3_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 */

__int64 __fastcall std::_Guess_median_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v6; // r14
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbp
  char v13; // r11
  __int64 v14; // r9
  char v15; // r11
  __int64 v16; // r9
  char v17; // r11

  v7 = a3 - a1;
  v6 = a3;
  LOBYTE(v7) = a4;
  v8 = (a3 - a1) / 72;
  if ( v8 > 40 )
  {
    v9 = (v8 + 1) >> 3;
    v10 = 72 * v9;
    v11 = 144 * v9;
    v12 = 72 * v9 + a1;
    std::_Med3_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(a1, v12, 144 * v9 + a1, v7);
    LOBYTE(v14) = v13;
    std::_Med3_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(a2 - v10, a2, v10 + a2, v14);
    LOBYTE(v16) = v15;
    std::_Med3_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(v6 - v11, v6 - v10, v6, v16);
    LOBYTE(v7) = v17;
    a3 = v6 - v10;
    a1 = v12;
  }
  return std::_Med3_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(a1, a2, a3, v7);
}
