/*
 * XREFs of HvpViewMapExtendStorage @ 0x1405DA1BC
 * Callers:
 *     HvpAddBin @ 0x1405DB258 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1408767D8 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmSiExtendSection @ 0x140203AC0 (CmSiExtendSection.c)
 *     HvpViewMapGetLastView @ 0x1405DA264 (HvpViewMapGetLastView.c)
 *     HvpViewMapCreateViewsForRegion @ 0x1405DBCD8 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1405DBF74 (HvpViewMapMakeViewRangeValid.c)
 */

NTSTATUS __fastcall HvpViewMapExtendStorage(__int64 a1, int a2)
{
  __int64 v2; // rdi
  NTSTATUS result; // eax
  __int64 LastView; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx

  v2 = (unsigned int)(a2 + 4096);
  if ( *(_QWORD *)(a1 + 8) >= v2 )
    return 0;
  if ( v2 <= *(_QWORD *)(a1 + 16)
    || (result = CmSiExtendSection(*(void **)a1, (LARGE_INTEGER)(unsigned int)v2), result >= 0) )
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
        result = HvpViewMapMakeViewRangeValid(a1, LastView, v6, v7, 0);
        if ( result < 0 )
          return result;
        *(_QWORD *)(a1 + 8) = v7;
      }
    }
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 >= v2 )
      return 0;
    result = HvpViewMapCreateViewsForRegion(a1, v8, v2, 0LL);
    if ( result >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v2;
      return 0;
    }
  }
  return result;
}
