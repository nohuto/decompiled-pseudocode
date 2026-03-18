/*
 * XREFs of ?IsNewMonitorRectMostOccupied@@YGHPBUtagRECT@@00@Z @ 0x14FE5B
 * Callers:
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _DetectNewMonitor@8 @ 0x150BE3 (_DetectNewMonitor@8.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __userpurge IsNewMonitorRectMostOccupied@<eax>(
        int *a1@<edx>,
        int *a2@<ecx>,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  int v7; // [esp+4h] [ebp-28h] BYREF
  int v8; // [esp+8h] [ebp-24h]
  int v9; // [esp+Ch] [ebp-20h]
  int v10; // [esp+10h] [ebp-1Ch]
  int v11; // [esp+14h] [ebp-18h] BYREF
  int v12; // [esp+18h] [ebp-14h]
  int v13; // [esp+1Ch] [ebp-10h]
  int v14; // [esp+20h] [ebp-Ch]

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  IntersectRect(&v7, a2, a1);
  IntersectRect(&v11, a2, &a3->left);
  return (v9 - v7) * (v10 - v8) > (v13 - v11) * (v14 - v12);
}
