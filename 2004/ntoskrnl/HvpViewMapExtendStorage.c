/*
 * XREFs of HvpViewMapExtendStorage @ 0x1406375BC
 * Callers:
 *     HvpAddBin @ 0x140638040 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x140870C80 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmSiExtendSection @ 0x140270058 (CmSiExtendSection.c)
 *     HvpViewMapGetLastView @ 0x140637664 (HvpViewMapGetLastView.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140638B80 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140638E1C (HvpViewMapMakeViewRangeValid.c)
 */

__int64 __fastcall HvpViewMapExtendStorage(__int64 *a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 LastView; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx

  v2 = (unsigned int)(a2 + 4096);
  if ( a1[1] >= v2 )
    return 0LL;
  if ( v2 <= a1[2] || (result = CmSiExtendSection(*a1, (unsigned int)v2), (int)result >= 0) )
  {
    LastView = HvpViewMapGetLastView(a1);
    if ( LastView )
    {
      v6 = *(_QWORD *)(LastView + 48);
      v7 = *(_QWORD *)(LastView + 32);
      if ( v6 < v7 )
      {
        if ( v7 > v2 )
          v7 = v2;
        result = HvpViewMapMakeViewRangeValid((_DWORD)a1, LastView, v6, v7, 0);
        if ( (int)result < 0 )
          return result;
        a1[1] = v7;
      }
    }
    v8 = a1[1];
    if ( v8 >= v2 )
      return 0LL;
    result = HvpViewMapCreateViewsForRegion(a1, v8, v2, 0LL);
    if ( (int)result >= 0 )
    {
      a1[1] = v2;
      return 0LL;
    }
  }
  return result;
}
