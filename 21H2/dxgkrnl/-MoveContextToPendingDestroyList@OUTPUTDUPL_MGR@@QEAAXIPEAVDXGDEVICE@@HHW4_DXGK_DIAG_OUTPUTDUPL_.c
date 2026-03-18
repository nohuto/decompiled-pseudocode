/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C019F49C
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01C3D18 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C77B4 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01C8BD0 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01DEA0C (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C01E6290 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01E82D4 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C01E9500 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1C031EF30 (_lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_--_lambda_invoker_cdecl_.c)
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0323254 (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0323300 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0323350 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0323730 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C019F5D0 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0321EF8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C0326990 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0326FE0 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        struct _KTHREAD **a1,
        unsigned int a2,
        struct DXGDEVICE *a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v7; // rbx
  struct _KTHREAD *v8; // rcx
  struct _KTHREAD *v11; // rax
  __int64 v12; // r14
  OUTPUTDUPL_MGR *v13; // rcx
  __int64 v14; // rdx
  OUTPUTDUPL_CONTEXT *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // esi
  OUTPUTDUPL_CONTEXT **i; // rbx
  __int64 CurrentProcess; // rax
  int v21; // eax
  int v22; // eax
  unsigned int ProcessSessionId; // eax
  OUTPUTDUPL_CONTEXT *v24; // rcx
  OUTPUTDUPL_CONTEXT **v25; // rax
  struct _KTHREAD *v26; // rdx
  _BYTE v27[16]; // [rsp+50h] [rbp-89h] BYREF
  _BYTE v28[8]; // [rsp+60h] [rbp-79h] BYREF
  DXGPUSHLOCK *v29; // [rsp+68h] [rbp-71h]
  int v30; // [rsp+70h] [rbp-69h]
  _OWORD v31[2]; // [rsp+78h] [rbp-61h] BYREF
  _DWORD v32[16]; // [rsp+A0h] [rbp-39h] BYREF

  v7 = a2;
  v8 = *a1;
  if ( v8 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v8 + 2)) )
  {
    WdLogSingleEntry1(1LL, 2332LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      2332LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, a1 + 3, 0);
  DXGPUSHLOCK::AcquireExclusive(v29);
  v11 = a1[2];
  v30 = 2;
  v12 = (__int64)v11 + 72 * v7;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)v12, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  memset(v32, 0, sizeof(v32));
  OUTPUTDUPL_MGR::InitializePacketHeader(v13, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v32);
  v32[1] = 64;
  v18 = 0;
  v32[15] = a6;
  v32[12] = 1;
  v32[13] = v7;
  for ( i = *(OUTPUTDUPL_CONTEXT ***)(v12 + 48); v18 < *((_DWORD *)a1 + 2); ++i )
  {
    if ( *i )
    {
      if ( *((_DWORD *)*i + 72) )
      {
        WdLogSingleEntry1(1LL, 2361LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(*ppCurrentContext)->IsPendingDestroy() == FALSE",
          2361LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(*i) == a3 )
      {
        if ( !a4
          || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16, v17), v15 = *i, CurrentProcess == *((_QWORD *)*i + 3)) )
        {
          if ( !a5 || !*((_DWORD *)*i + 82) )
          {
            if ( *((_DWORD *)*i + 79) )
            {
              v21 = *(_DWORD *)(v12 + 64);
              if ( !v21 )
              {
                WdLogSingleEntry1(1LL, 2384LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pContextList->cActiveContexts > 0",
                  2384LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v21 = *(_DWORD *)(v12 + 64);
              }
              v22 = v21 - 1;
              *(_DWORD *)(v12 + 64) = v22;
              if ( !v22 )
              {
                ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)*i + 3));
                memset(v31, 0, sizeof(v31));
                LODWORD(v31[0]) = 15;
                SMgrGdiCallout(v31, ProcessSessionId, 0LL, 0LL, 0LL, 0LL);
              }
            }
            OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*i);
            v24 = *i;
            v25 = a1 + 7;
            v26 = a1[7];
            if ( *((struct _KTHREAD ***)v26 + 1) != a1 + 7 )
              __fastfail(3u);
            *(_QWORD *)v24 = v26;
            *((_QWORD *)v24 + 1) = v25;
            *((_QWORD *)v26 + 1) = v24;
            *v25 = v24;
            *i = 0LL;
            v32[14] = v18;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics((OUTPUTDUPL_MGR *)a1, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v32, 1);
          }
        }
      }
    }
    ++v18;
  }
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
}
