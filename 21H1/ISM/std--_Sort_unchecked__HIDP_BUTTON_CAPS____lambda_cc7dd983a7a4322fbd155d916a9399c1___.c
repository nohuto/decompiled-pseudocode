/*
 * XREFs of std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB754
 * Callers:
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB754 (std--_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800CC3D0 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CAC94 (std--_Insertion_sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     std::_Make_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CAE08 (std--_Make_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB018 (std--_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a.c)
 *     std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB6D0 (std--_Sort_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB754 (std--_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 */

char *__fastcall std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        char *a1,
        char *a2,
        __int64 a3,
        char a4)
{
  char *v4; // rdi
  char *v7; // rsi
  unsigned __int64 v8; // rdx
  char *result; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  char *v12; // [rsp+20h] [rbp-18h] BYREF
  char *v13; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v7 = a1;
  v8 = (__int64)((unsigned __int128)((a2 - a1) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  result = (char *)(v8 >> 63);
  v10 = (v8 >> 63) + v8;
  if ( v10 <= 32 )
    goto LABEL_9;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
      (unsigned __int64 *)&v12,
      (unsigned __int64)v7,
      (unsigned __int64)v4,
      a4);
    LOBYTE(v11) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (v12 - v7) / 72 >= (v4 - v13) / 72 )
    {
      std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(v13, v4, a3, v11);
      v4 = v12;
    }
    else
    {
      std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(v7, v12, a3, v11);
      v7 = v13;
    }
    result = (char *)((unsigned __int64)((unsigned __int128)((v4 - v7) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 63);
    v10 = (v4 - v7) / 72;
  }
  while ( v10 > 32 );
  if ( v10 <= 32 )
  {
LABEL_9:
    if ( v10 >= 2 )
      return std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(v7, v4);
  }
  else
  {
    std::_Make_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
      (__int64)v7,
      (__int64)v4,
      a4);
    return (char *)std::_Sort_heap_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
                     (__int64)v7,
                     (__int64)v4);
  }
  return result;
}
