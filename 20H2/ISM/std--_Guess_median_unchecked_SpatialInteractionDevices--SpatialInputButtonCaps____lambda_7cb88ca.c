/*
 * XREFs of std::_Guess_median_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C7E20
 * Callers:
 *     std::_Partition_by_median_guess_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8608 (std--_Partition_by_median_guess_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____l.c)
 * Callees:
 *     std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8564 (std--_Med3_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca86370cec.c)
 */

__int64 __fastcall std::_Guess_median_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v6; // r15
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r9
  __int64 v13; // r9

  v7 = a3 - a1;
  v6 = a3;
  LOBYTE(v7) = a4;
  v8 = (a3 - a1) / 12;
  if ( v8 > 40 )
  {
    v9 = 12 * ((v8 + 1) >> 3);
    v10 = 24 * ((v8 + 1) >> 3);
    v11 = v9 + a1;
    std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      a1,
      v9 + a1,
      v10 + a1,
      v7);
    LOBYTE(v12) = a4;
    std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      a2 - v9,
      a2,
      v9 + a2,
      v12);
    LOBYTE(v13) = a4;
    std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
      v6 - v10,
      v6 - v9,
      v6,
      v13);
    LOBYTE(v7) = a4;
    a3 = v6 - v9;
    a1 = v11;
  }
  return std::_Med3_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
           a1,
           a2,
           a3,
           v7);
}
