/*
 * XREFs of ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x1C00228D8
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C018D86C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?Stop@LongPowerButtonHoldListener@@QEAAXXZ @ 0x1C004FB2C (-Stop@LongPowerButtonHoldListener@@QEAAXXZ.c)
 *     ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1C018FA5C (-Initialize@DXGBLACKBOX@@QEAAJXZ.c)
 */

void __fastcall DisplayDiagnostics::Initialize(DisplayDiagnostics *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  LongPowerButtonHoldListener *v6; // rdi
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  v2 = DXGBLACKBOX::Initialize(this);
  v5 = v2;
  if ( v2 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v9 + 24) = v5;
    WdLogEvent5_WdError(v9);
  }
  v6 = (DisplayDiagnostics *)((char *)this + 56);
  v7 = ExSubscribeWnfStateChange(v6, &WNF_PO_POWER_BUTTON_STATE, 1LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    LongPowerButtonHoldListener::Stop(v6);
    v12 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v12 + 24) = v8;
    WdLogEvent5_WdError(v12);
  }
}
