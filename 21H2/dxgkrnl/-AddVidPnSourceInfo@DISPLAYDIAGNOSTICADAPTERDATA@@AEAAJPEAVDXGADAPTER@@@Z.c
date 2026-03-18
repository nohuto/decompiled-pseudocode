/*
 * XREFs of ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02ED3F4
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02EE034 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013C94 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetNextVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNSOURCEINFO@@XZ @ 0x1C002C530 (-GetNextVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNSOURCEINFO@@XZ.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02EF3C8 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnSourceInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        ADAPTER_DISPLAY **a2)
{
  ADAPTER_DISPLAY *v5; // r14
  unsigned int v6; // ebx
  unsigned int v7; // esi
  VIDPNSOURCEINFO *NextVidPnSourceInfo; // rax

  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    WdLogSingleEntry1(1LL, 1181LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1181LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = a2[349];
  v6 = 0;
  v7 = *((_DWORD *)v5 + 24);
  if ( !v7 )
    return 0LL;
  while ( !ADAPTER_DISPLAY::IsPartOfDesktop(v5, v6) )
  {
LABEL_9:
    if ( ++v6 >= v7 )
      return 0LL;
  }
  NextVidPnSourceInfo = DISPLAYDIAGNOSTICADAPTERDATA::GetNextVidPnSourceInfo(this);
  if ( NextVidPnSourceInfo )
  {
    VIDPNSOURCEINFO::Initialize(NextVidPnSourceInfo, (struct DXGADAPTER *)a2, v6);
    ++*((_DWORD *)this + 240);
    goto LABEL_9;
  }
  WdLogSingleEntry1(2LL, 1196LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"No memory available for adding a new display source",
    1196LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
