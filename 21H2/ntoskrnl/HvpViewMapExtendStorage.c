/*
 * XREFs of HvpViewMapExtendStorage @ 0x140724E8C
 * Callers:
 *     HvpAddBin @ 0x140722A58 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1408740BC (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmSiExtendSection @ 0x140363D90 (CmSiExtendSection.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140723598 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140723924 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapGetLastView @ 0x140724F34 (HvpViewMapGetLastView.c)
 */

__int64 __fastcall HvpViewMapExtendStorage(__int64 *a1, int a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  _QWORD *LastView; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx

  v2 = (unsigned int)(a2 + 4096);
  if ( a1[1] >= v2 )
    return 0LL;
  if ( v2 <= a1[2] || (result = CmSiExtendSection(*a1, (unsigned int)v2), (int)result >= 0) )
  {
    LastView = (_QWORD *)HvpViewMapGetLastView(a1);
    if ( LastView )
    {
      v6 = LastView[6];
      v7 = LastView[4];
      if ( v6 < v7 )
      {
        if ( v7 > v2 )
          v7 = v2;
        result = HvpViewMapMakeViewRangeValid((__int64)a1, LastView, v6, v7, 0);
        if ( (int)result < 0 )
          return result;
        a1[1] = v7;
      }
    }
    v8 = a1[1];
    if ( v8 >= v2 )
      return 0LL;
    result = HvpViewMapCreateViewsForRegion((__int64)a1, v8, v2, 0);
    if ( (int)result >= 0 )
    {
      a1[1] = v2;
      return 0LL;
    }
  }
  return result;
}
