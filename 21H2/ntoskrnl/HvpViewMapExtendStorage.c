/*
 * XREFs of HvpViewMapExtendStorage @ 0x1406FCEC4
 * Callers:
 *     HvpAddBin @ 0x1406FAA84 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmSiExtendSection @ 0x140250A9C (CmSiExtendSection.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1406FB5C4 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1406FB950 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapGetLastView @ 0x1406FCF6C (HvpViewMapGetLastView.c)
 */

int __fastcall HvpViewMapExtendStorage(ULONG_PTR a1, int a2)
{
  __int64 v2; // rdi
  int result; // eax
  _QWORD *LastView; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx

  v2 = (unsigned int)(a2 + 4096);
  if ( *(_QWORD *)(a1 + 8) >= v2 )
    return 0;
  if ( v2 <= *(_QWORD *)(a1 + 16)
    || (result = CmSiExtendSection(*(void **)a1, (LARGE_INTEGER)(unsigned int)v2), result >= 0) )
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
        result = HvpViewMapMakeViewRangeValid(a1, LastView, v6, v7, 0);
        if ( result < 0 )
          return result;
        *(_QWORD *)(a1 + 8) = v7;
      }
    }
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 >= v2 )
      return 0;
    result = HvpViewMapCreateViewsForRegion(a1, v8, v2, 0);
    if ( result >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v2;
      return 0;
    }
  }
  return result;
}
