/*
 * XREFs of ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01C88B4
 * Callers:
 *     DxgkDispMgrOperation @ 0x1C01C89E0 (DxgkDispMgrOperation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0014340 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C01C8648 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01C8920 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::ConnectSessionDisplayBroker(DXGSESSIONDATA *this)
{
  unsigned int **v1; // r14
  int v3; // eax
  __int64 v4; // rsi
  int v5; // eax
  __int64 v7; // rbx
  struct DXGGLOBAL *Global; // rax

  v1 = (unsigned int **)((char *)this + 18968);
  v3 = DispBrokerClient::EnsureConnected((DXGSESSIONDATA *)((char *)this + 18968));
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry2(2LL, **v1, v3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to connect the display broker ALPC port for session 0x%I64x (Status = 0x%I64x).",
      **v1,
      v4,
      0LL,
      0LL,
      0LL);
    DxgkLogCodePointPacketForSession(0x6Cu, *(unsigned int *)this, v4, 0, 0, 0LL);
    WdLogSingleEntry2(2LL, *(unsigned int *)this, v4);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to connect display broker in session 0x%I64x, (Status = 0x%I64x).",
      *(unsigned int *)this,
      v4,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v4;
  }
  else
  {
    v5 = DXGSESSIONDATA::SendCachedIddDisplayConfigRequest(this);
    if ( v5 == -1073741749 )
    {
      WdLogSingleEntry1(3LL, *(unsigned int *)this);
    }
    else if ( v5 < 0 )
    {
      v7 = v5;
      WdLogSingleEntry3(2LL, *(unsigned int *)this, v5, 0LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to re-send IDD display config request in session 0x%I64x, (Status = 0x%I64x).",
        *(unsigned int *)this,
        v7,
        0LL,
        0LL,
        0LL);
      Global = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))lambda_cbfcde231c2a8d1b9d404329183532d4_::_lambda_invoker_cdecl_,
        (__int64)this,
        4LL);
    }
    return 0LL;
  }
}
