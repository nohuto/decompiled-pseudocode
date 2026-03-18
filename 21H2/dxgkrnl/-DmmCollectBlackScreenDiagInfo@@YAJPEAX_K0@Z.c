/*
 * XREFs of ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C039A488
 * Callers:
 *     ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ECE74 (-AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 */

__int64 __fastcall DmmCollectBlackScreenDiagInfo(DXGADAPTER *a1, size_t a2, void *a3)
{
  __int64 result; // rax
  struct VIDPN_MGR *v6; // rcx
  size_t v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  if ( !*((_QWORD *)a1 + 349) )
    return 0LL;
  memset(a3, 0, 0x2000uLL);
  v6 = *(struct VIDPN_MGR **)(*((_QWORD *)a1 + 349) + 104LL);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
  v7 = 0LL;
  result = VIDPN_MGR::AcquireDiagInfo(v6, a3, 0x2000uLL, 1, 0LL, &v7);
  if ( (_DWORD)result == -2147483643 )
  {
    WdLogSingleEntry2(3LL, 0x2000LL, v7);
    return 2147483653LL;
  }
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
