/*
 * XREFs of ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x18017271C
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x18017271C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801732F8 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801736BC (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x180173AEC (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAPEAW4_Button@@PEAW41@QEAW41@U?$less@X@0@@Z @ 0x1801722F0 (--$_Insertion_sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAPEAW4_Button@@PEAW41@QEAW41@U-.c)
 *     ??$_Make_heap_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0U?$less@X@0@@Z @ 0x180172384 (--$_Make_heap_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0U-$less@X@0@@Z.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YA?AU?$pair@PEAW4_Button@@PEAW41@@0@PEAW4_Button@@0U?$less@X@0@@Z @ 0x18017241C (--$_Partition_by_median_guess_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YA-AU-$pair@PEAW4_But.c)
 *     ??$_Sort_heap_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0U?$less@X@0@@Z @ 0x180172688 (--$_Sort_heap_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0U-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x18017271C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 */

__int64 __fastcall std::_Sort_unchecked<enum _Button *,std::less<void>>(int *a1, int *a2, __int64 a3, char a4)
{
  __int64 result; // rax
  int *v7; // rdi
  int *v8; // rsi
  __int64 v9; // r9
  int *v10; // [rsp+20h] [rbp-18h] BYREF
  int *v11; // [rsp+28h] [rbp-10h]

  result = a2 - a1;
  v7 = a2;
  v8 = a1;
  if ( result <= 32 )
    goto LABEL_9;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<enum _Button *,std::less<void>>(&v10, v8, v7);
    a3 = (a3 >> 2) + (a3 >> 1);
    LOBYTE(v9) = a4;
    if ( (__int64)(((char *)v10 - (char *)v8) & 0xFFFFFFFFFFFFFFFCuLL) >= (__int64)(((char *)v7 - (char *)v11) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      std::_Sort_unchecked<enum _Button *,std::less<void>>(v11, v7, a3, v9);
      v7 = v10;
    }
    else
    {
      std::_Sort_unchecked<enum _Button *,std::less<void>>(v8, v10, a3, v9);
      v8 = v11;
    }
    result = v7 - v8;
  }
  while ( result > 32 );
  if ( result <= 32 )
  {
LABEL_9:
    if ( result >= 2 )
      return (__int64)std::_Insertion_sort_unchecked<enum _Button *,std::less<void>>((char *)v8, (char *)v7);
  }
  else
  {
    std::_Make_heap_unchecked<enum _Button *,std::less<void>>((__int64)v8, (__int64)v7, a4);
    return std::_Sort_heap_unchecked<enum _Button *,std::less<void>>(v8, (__int64)v7);
  }
  return result;
}
