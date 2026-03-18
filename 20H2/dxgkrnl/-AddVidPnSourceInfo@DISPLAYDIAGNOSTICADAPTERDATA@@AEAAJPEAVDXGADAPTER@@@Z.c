/*
 * XREFs of ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B8410
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B8F50 (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000CEDC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetNextVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNSOURCEINFO@@XZ @ 0x1C0026C60 (-GetNextVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNSOURCEINFO@@XZ.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02BA058 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnSourceInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        ADAPTER_DISPLAY **a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  ADAPTER_DISPLAY *v8; // rbp
  unsigned int v9; // ebx
  unsigned int v10; // esi
  VIDPNSOURCEINFO *NextVidPnSourceInfo; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax

  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a2) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 1081LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = a2[337];
  v9 = 0;
  v10 = *((_DWORD *)v8 + 20);
  if ( !v10 )
    return 0LL;
  while ( !ADAPTER_DISPLAY::IsPartOfDesktop(v8, v9) )
  {
LABEL_9:
    if ( ++v9 >= v10 )
      return 0LL;
  }
  NextVidPnSourceInfo = DISPLAYDIAGNOSTICADAPTERDATA::GetNextVidPnSourceInfo(this);
  if ( NextVidPnSourceInfo )
  {
    VIDPNSOURCEINFO::Initialize(NextVidPnSourceInfo, (struct DXGADAPTER *)a2, v9);
    ++*((_DWORD *)this + 240);
    goto LABEL_9;
  }
  v14 = WdLogNewEntry5_WdError(v13, v12);
  *(_QWORD *)(v14 + 24) = 1096LL;
  WdLogEvent5_WdError(v14);
  return 3221225495LL;
}
