/*
 * XREFs of ?AddDMMSegmentBuffer@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ECE74
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EE034 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z @ 0x1C039A488 (-DmmCollectBlackScreenDiagInfo@@YAJPEAX_K0@Z.c)
 */

int __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddDMMSegmentBuffer(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  int result; // eax
  __int64 v5; // r9
  void *v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // edi

  if ( !a2 )
    return -1073741811;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry1(1LL, 1145LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1145LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = (void *)operator new[](0x2000uLL, 0x4B677844u, 256LL, v5);
  *((_QWORD *)this + 6) = v6;
  if ( v6 )
  {
    result = DmmCollectBlackScreenDiagInfo(a2, v7, v6);
    v8 = result;
    if ( result >= 0 )
    {
      *((_BYTE *)this + 56) = 1;
    }
    else
    {
      operator delete[](*((void **)this + 6));
      *((_QWORD *)this + 6) = 0LL;
      result = v8;
      *((_BYTE *)this + 56) = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 0x2000LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DMM Segment data (size 0x%I64x)",
      0x2000LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741801;
  }
  return result;
}
