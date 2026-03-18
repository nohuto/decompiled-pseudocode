/*
 * XREFs of ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01E4730
 * Callers:
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01E5624 (DetectNewMonitor.c)
 * Callees:
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 */

_BOOL8 __fastcall IsNewMonitorRectMostOccupied(
        const struct tagRECT *a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3)
{
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  IntersectRect(&v6, &a1->left, &a2->left);
  IntersectRect(&v7, &a1->left, &a3->left);
  return (DWORD2(v6) - (int)v6) * (HIDWORD(v6) - DWORD1(v6)) > (DWORD2(v7) - (int)v7) * (HIDWORD(v7) - DWORD1(v7));
}
