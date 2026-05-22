/*
 * XREFs of std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5B34
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5B34 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     ?ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AEAV?$unique_ptr@$$BY0A@UParsedHidReportDescriptor@@U?$default_delete@$$BY0A@UParsedHidReportDescriptor@@@std@@@std@@PEAI@Z @ 0x1800A6588 (-ExtractReportDescriptorsFromPreparsedData@HidLampArrayDevice@@AEAAJQEAU_HIDP_PREPARSED_DATA@@AE.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A4D94 (std--_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A4E9C (std--_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5268 (std--_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e71.c)
 *     std::_Sort_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A599C (std--_Sort_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5B34 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 */

unsigned __int64 __fastcall std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  unsigned __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v7 = a1;
  v8 = (__int64)((unsigned __int128)((__int64)(a2 - a1) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  result = v8 >> 63;
  v10 = (v8 >> 63) + v8;
  if ( v10 <= 32 )
    goto LABEL_9;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
      &v12,
      v7,
      v4);
    LOBYTE(v11) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(v12 - v7) / 72 >= (__int64)(v4 - v13) / 72 )
    {
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v13, v4, a3, v11);
      v4 = v12;
    }
    else
    {
      std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v7, v12, a3, v11);
      v7 = v13;
    }
    result = (unsigned __int64)((unsigned __int128)((__int64)(v4 - v7) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63;
    v10 = (__int64)(v4 - v7) / 72;
  }
  while ( v10 > 32 );
  if ( v10 <= 32 )
  {
LABEL_9:
    if ( v10 >= 2 )
      return std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v7, v4);
  }
  else
  {
    std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v7, v4, a4);
    return std::_Sort_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(v7, v4);
  }
  return result;
}
