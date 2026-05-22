/*
 * XREFs of _lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator() @ 0x1800CB648
 * Callers:
 *     std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CA744 (std--_Insertion_sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     std::_Med3_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CA984 (std--_Med3_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     std::_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CAAC8 (std--_Partition_by_median_guess_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a.c)
 *     std::_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CAEDC (std--_Pop_heap_hole_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155.c)
 *     std::_Push_heap_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB0D8 (std--_Push_heap_by_index__HIDP_BUTTON_CAPS____HIDP_BUTTON_CAPS__lambda_cc7dd983a7a4322fbd155d916.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al

  v3 = *(_BYTE *)(a3 + 2);
  return *(_BYTE *)(a2 + 2) < v3 || *(_BYTE *)(a2 + 2) == v3 && *(_WORD *)(a2 + 6) < *(_WORD *)(a3 + 6);
}
