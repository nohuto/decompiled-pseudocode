/*
 * XREFs of std::_Guess_median_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A4BB8
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A51C8 (std--_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e71.c)
 * Callees:
 *     std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A4EFC (std--_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

__int64 __fastcall std::_Guess_median_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r11

  v4 = a3;
  v5 = (a3 - a1) / 72;
  if ( v5 > 40 )
  {
    std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
      a1,
      72 * ((v5 + 1) >> 3) + a1,
      144 * ((v5 + 1) >> 3) + a1);
    std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(a2 - v6, a2, v6 + a2);
    std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v4 - v8, v4 - v7, v4);
    a3 = v9;
    a1 = v10;
  }
  return std::_Med3_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(a1, a2, a3);
}
