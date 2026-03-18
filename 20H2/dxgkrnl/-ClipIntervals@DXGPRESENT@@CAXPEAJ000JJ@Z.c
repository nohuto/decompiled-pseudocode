/*
 * XREFs of ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x1C027E6A8
 * Callers:
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C016A650 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPRESENT::ClipIntervals(int *a1, int *a2, int *a3, int *a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ecx
  int v14; // edx
  int v15; // r10d
  int v16; // r11d
  int v17; // r8d
  int v18; // r9d
  int v19; // r12d

  if ( *a1 >= *a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v10 + 24) = 9936LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *a3 >= *a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v11 + 24) = 9937LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a5 >= a6 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v12 + 24) = 9938LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *a1;
  if ( a5 > *a1 )
  {
    *a1 = a5;
    v13 = a5;
  }
  v14 = *a2;
  if ( a6 < *a2 )
  {
    *a2 = a6;
    v14 = a6;
    v13 = *a1;
  }
  v15 = a6 - a5;
  if ( v14 - v13 != a6 - a5 )
  {
    v16 = *a4;
    v17 = *a3;
    v18 = *a4;
    v19 = *a4 - *a3;
    if ( a5 < v13 )
    {
      v17 += (v19 * (v13 - a5) + v15 - 1) / v15;
      *a3 = v17;
      v16 = *a4;
      v18 = *a4;
      v14 = *a2;
    }
    if ( a6 > v14 )
    {
      v18 = v16 - v19 * (a6 - v14) / v15;
      *a4 = v18;
      v17 = *a3;
    }
    if ( v17 == v18 )
    {
      if ( *a1 - a5 < a6 - *a2 )
        *a4 = v18 + 1;
      else
        *a3 = v17 - 1;
    }
  }
}
