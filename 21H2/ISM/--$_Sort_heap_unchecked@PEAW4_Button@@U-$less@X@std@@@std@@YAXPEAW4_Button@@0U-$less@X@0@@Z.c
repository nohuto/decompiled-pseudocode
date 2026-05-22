/*
 * XREFs of ??$_Sort_heap_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0U?$less@X@0@@Z @ 0x180172B38
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x180172BCC (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x180172A90 (--$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U-$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U.c)
 */

__int64 __fastcall std::_Sort_heap_unchecked<enum _Button *,std::less<void>>(int *a1, __int64 a2)
{
  __int64 result; // rax
  int *v4; // rdi
  __int64 v5; // r14
  int v6; // [rsp+40h] [rbp+8h] BYREF

  result = (a2 - (__int64)a1) >> 2;
  if ( result >= 2 )
  {
    v4 = (int *)(a2 - 4);
    v5 = 4LL - (_QWORD)a1;
    do
    {
      v6 = *v4;
      *v4 = *a1;
      std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>((__int64)a1, 0LL, v4 - a1, &v6);
      result = ((__int64)--v4 + v5) >> 2;
    }
    while ( result >= 2 );
  }
  return result;
}
