/*
 * XREFs of TouchTargetingRankForRegion @ 0x1C025FE50
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C0214640 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 * Callees:
 *     TouchTargetingRankForRect @ 0x1C025F79C (TouchTargetingRankForRect.c)
 */

__int64 __fastcall TouchTargetingRankForRegion(__int64 a1, struct tagRECT *a2, int *a3, _QWORD *a4, unsigned int a5)
{
  unsigned __int16 v9; // bp
  unsigned int RegionData; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  __int128 *v15; // rdi
  __int64 v16; // rsi
  __int128 v17; // xmm1
  unsigned __int16 v18; // cx
  int v20[4]; // [rsp+30h] [rbp-58h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-48h] BYREF
  __int128 v22; // [rsp+50h] [rbp-38h] BYREF

  *(_QWORD *)v20 = 0LL;
  v9 = 4094;
  RegionData = GreGetRegionData(a1, 0LL, 0LL);
  v11 = RegionData;
  if ( RegionData )
  {
    v12 = Win32AllocPool((int)RegionData, 1920103253LL);
    v13 = v12;
    if ( v12 )
    {
      if ( (unsigned int)GreGetRegionData(a1, v11, v12) )
      {
        v14 = *(_DWORD *)(v13 + 8);
        v15 = (__int128 *)(v13 + 32);
        if ( v14 > 0 )
        {
          v16 = (unsigned int)v14;
          do
          {
            v17 = *v15;
            v21 = *a2;
            v22 = v17;
            v18 = TouchTargetingRankForRect((int *)&v22, &v21, a3, 0LL, v20, a5);
            if ( v18 < v9 )
            {
              v9 = v18;
              *a4 = *(_QWORD *)v20;
            }
            ++v15;
            --v16;
          }
          while ( v16 );
        }
      }
      Win32FreePool(v13);
    }
  }
  return v9;
}
