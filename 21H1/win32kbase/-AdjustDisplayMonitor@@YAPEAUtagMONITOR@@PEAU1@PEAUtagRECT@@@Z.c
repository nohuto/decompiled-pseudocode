/*
 * XREFs of ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00503EC
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GetMonitorRect @ 0x1C006BC48 (GetMonitorRect.c)
 *     IntersectRect @ 0x1C00A6D20 (IntersectRect.c)
 */

struct tagMONITOR *__fastcall AdjustDisplayMonitor(struct tagMONITOR *a1, struct tagRECT *a2)
{
  __int64 i; // rbx
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[24]; // [rsp+40h] [rbp-18h] BYREF

  for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) == 0 )
    {
      v7 = 0LL;
      v6 = *(_OWORD *)GetMonitorRect(v8, i);
      if ( (unsigned int)IntersectRect(&v7, a2, &v6) )
        return (struct tagMONITOR *)i;
    }
  }
  return a1;
}
