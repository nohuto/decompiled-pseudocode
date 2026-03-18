/*
 * XREFs of ?TTSqm@@YGXUtagPOINT@@PBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x179E96
 * Callers:
 *     _xxxPointerWindowHitTest@48 @ 0x17C5CD (_xxxPointerWindowHitTest@48.c)
 * Callees:
 *     __TTPixelsToHm@8 @ 0x1B97F4 (__TTPixelsToHm@8.c)
 */

void __userpurge TTSqm(int a1@<ecx>, struct tagPOINT a2, const struct tagTOUCHTARGETINGCONTACT *a3)
{
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // eax

  if ( _gSqmIsOptedIn )
  {
    v3 = 1000;
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8657, a2 != 0LL ? 0x3E8 : 0);
    if ( a2 )
    {
      v4 = _TTPixelsToHm(abs32(a2.y), *(_DWORD *)(a1 + 188));
      v5 = _TTPixelsToHm(abs32(a2.x), *(_DWORD *)(a1 + 184));
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8293, v5 + v4);
      if ( a2.x <= 0 )
        v6 = 0;
      else
        v6 = 1000;
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8294, v6);
      if ( a2.y <= 0 )
        v3 = 0;
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8634, v3);
    }
  }
}
