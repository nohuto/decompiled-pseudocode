/*
 * XREFs of _TouchTargetingRankForRegion@32 @ 0x1B95CF
 * Callers:
 *     ?BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1797A4 (-BasicTargetingHitTest@@YGHPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PAGPAU3@HPAUtagREC.c)
 * Callees:
 *     _TouchTargetingRankForRect@48 @ 0x1B902D (_TouchTargetingRankForRect@48.c)
 */

__int16 __fastcall TouchTargetingRankForRegion(
        int a1,
        struct tagPOINT *a2,
        int *a3,
        unsigned int a4,
        unsigned __int16 *a5,
        __int64 a6,
        LONG a7)
{
  __int16 v7; // di
  int RegionData; // eax
  int v9; // esi
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int *v13; // ecx
  int v14; // ebx
  unsigned __int16 v15; // ax
  int v17; // [esp+Ch] [ebp-1Ch] BYREF
  int v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+14h] [ebp-14h]
  struct tagPOINT *v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+20h] [ebp-8h]
  int v22; // [esp+24h] [ebp-4h]

  v20 = a2;
  v21 = a1;
  v7 = 4094;
  v17 = 0;
  v22 = 4094;
  v18 = 0;
  RegionData = GreGetRegionData(a1, 0, 0);
  v9 = RegionData;
  if ( RegionData )
  {
    v10 = Win32AllocPool(RegionData, 1920103253);
    v11 = v10;
    v19 = v10;
    if ( v10 )
    {
      if ( GreGetRegionData(v21, v9, v10) )
      {
        v12 = *(_DWORD *)(v11 + 8);
        v13 = (int *)(v11 + 32);
        v21 = v11 + 32;
        if ( v12 > 0 )
        {
          v14 = v12;
          do
          {
            v15 = TouchTargetingRankForRect(v20, 0, &v17, a4, *v13, v13[1], v13[2], v13[3], a5, a6, a7);
            v7 = v22;
            if ( v15 < (unsigned __int16)v22 )
            {
              v7 = v15;
              v22 = v15;
              *a3 = v17;
              a3[1] = v18;
            }
            v13 = (int *)(v21 + 16);
            v21 += 16;
            --v14;
          }
          while ( v14 );
          v11 = v19;
        }
      }
      Win32FreePool(v11);
    }
  }
  return v7;
}
