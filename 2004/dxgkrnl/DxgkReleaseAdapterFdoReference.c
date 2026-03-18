/*
 * XREFs of DxgkReleaseAdapterFdoReference @ 0x1C0217A48
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0182794 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C02CB8C4 (DpiFdoResetFdo.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007384 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterFdoReference(DXGADAPTER *a1, __int64 a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    *((_QWORD *)a1 + 27) = 0LL;
    *((_QWORD *)a1 + 28) = 0LL;
    DXGADAPTER::ReleaseReferenceNoTracking(a1);
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
}
