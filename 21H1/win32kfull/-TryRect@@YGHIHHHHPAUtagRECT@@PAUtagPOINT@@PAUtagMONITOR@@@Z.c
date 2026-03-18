/*
 * XREFs of ?TryRect@@YGHIHHHHPAUtagRECT@@PAUtagPOINT@@PAUtagMONITOR@@@Z @ 0x1A7C3C
 * Callers:
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 */

BOOL __userpurge TryRect@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        int a4,
        int a5,
        int *a6,
        int *a7,
        struct tagRECT *a8,
        struct tagPOINT *a9,
        struct tagMONITOR *a10)
{
  int *MonitorWorkRect; // eax
  signed int v12; // ecx
  _DWORD v14[5]; // [esp+10h] [ebp-28h] BYREF
  int v15; // [esp+24h] [ebp-14h] BYREF
  int v16; // [esp+28h] [ebp-10h]
  int v17; // [esp+2Ch] [ebp-Ch]
  int v18; // [esp+30h] [ebp-8h]
  int v19; // [esp+34h] [ebp-4h]

  v19 = a2;
  MonitorWorkRect = GetMonitorWorkRect(a8, v14);
  v15 = *MonitorWorkRect;
  v16 = MonitorWorkRect[1];
  v17 = MonitorWorkRect[2];
  v18 = MonitorWorkRect[3];
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      v12 = a6[1] - a5;
      if ( v12 < v16 )
        return 0;
      goto LABEL_9;
    }
    if ( v19 != 2 )
    {
      if ( v19 == 3 )
      {
        v12 = a6[3];
        if ( v12 + a5 > v18 )
          return 0;
LABEL_9:
        v16 = v12;
        v15 = a1;
        a7[1] = v12;
        *a7 = a1;
        v17 = a1 + a4;
        v18 = v12 + a5;
        return IntersectRect(&v15, &v15, a6) == 0;
      }
LABEL_8:
      v12 = a3;
      goto LABEL_9;
    }
    a1 = a6[2];
    if ( a1 + a4 <= v17 )
      goto LABEL_8;
  }
  else
  {
    a1 = *a6 - a4;
    if ( a1 >= v15 )
      goto LABEL_8;
  }
  return 0;
}
