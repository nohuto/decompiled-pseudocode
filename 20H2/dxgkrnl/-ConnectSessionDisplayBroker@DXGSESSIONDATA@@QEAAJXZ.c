/*
 * XREFs of ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0160000
 * Callers:
 *     DxgkDispMgrOperation @ 0x1C015FBA0 (DxgkDispMgrOperation.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019498 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C012F53C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0160070 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C0160138 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::ConnectSessionDisplayBroker(DXGSESSIONDATA *this)
{
  unsigned int **v1; // rsi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGGLOBAL *Global; // rax

  v1 = (unsigned int **)((char *)this + 18936);
  v3 = DispBrokerClient::EnsureConnected((DXGSESSIONDATA *)((char *)this + 18936));
  v6 = v3;
  if ( v3 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v13 + 24) = **v1;
    *(_QWORD *)(v13 + 32) = v6;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    LODWORD(v6) = 0;
  }
  if ( (int)v6 < 0 )
  {
    DxgkLogCodePointPacketForSession(0x6Cu, *(unsigned int *)this, v6, 0, 0, 0LL);
    v16 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v16 + 24) = *(unsigned int *)this;
    *(_QWORD *)(v16 + 32) = (int)v6;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v6;
  }
  else
  {
    v7 = DXGSESSIONDATA::SendCachedIddDisplayConfigRequest(this);
    v11 = v7;
    if ( v7 == -1073741749 )
    {
      v17 = WdLogNewEntry5_WdWarning(v9, v8, v10);
      *(_QWORD *)(v17 + 24) = *(unsigned int *)this;
      WdLogEvent5_WdWarning(v17);
    }
    else if ( v7 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v19 = *(unsigned int *)this;
      v18[5] = 0LL;
      v18[3] = v19;
      v18[4] = v11;
      WdLogEvent5_WdError(v18);
      Global = DXGGLOBAL::GetGlobal(v21, v20);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))lambda_4498cf4aa093f7a41b3920419f3e92d9_::_lambda_invoker_cdecl_,
        (__int64)this,
        4);
    }
    return 0LL;
  }
}
