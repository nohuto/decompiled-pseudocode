/*
 * XREFs of ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x1C032FDD0
 * Callers:
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C01EB3E0 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPRESENT::ClipIntervals(int *a1, int *a2, int *a3, int *a4, int a5, int a6)
{
  int v10; // ecx
  int v11; // edx
  int v12; // r10d
  int v13; // r11d
  int v14; // r8d
  int v15; // r9d
  int v16; // r12d

  if ( *a1 >= *a2 )
  {
    WdLogSingleEntry1(1LL, 10155LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"*low1 < *high1", 10155LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *a3 >= *a4 )
  {
    WdLogSingleEntry1(1LL, 10156LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"*low2 < *high2", 10156LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a5 >= a6 )
  {
    WdLogSingleEntry1(1LL, 10157LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"low < high", 10157LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = *a1;
  if ( a5 > *a1 )
  {
    *a1 = a5;
    v10 = a5;
  }
  v11 = *a2;
  if ( a6 < *a2 )
  {
    *a2 = a6;
    v11 = a6;
    v10 = *a1;
  }
  v12 = a6 - a5;
  if ( v11 - v10 != a6 - a5 )
  {
    v13 = *a4;
    v14 = *a3;
    v15 = *a4;
    v16 = *a4 - *a3;
    if ( a5 < v10 )
    {
      v14 += (v16 * (v10 - a5) + v12 - 1) / v12;
      *a3 = v14;
      v13 = *a4;
      v15 = *a4;
      v11 = *a2;
    }
    if ( a6 > v11 )
    {
      v15 = v13 - v16 * (a6 - v11) / v12;
      *a4 = v15;
      v14 = *a3;
    }
    if ( v14 == v15 )
    {
      if ( *a1 - a5 < a6 - *a2 )
        *a4 = v15 + 1;
      else
        *a3 = v14 - 1;
    }
  }
}
