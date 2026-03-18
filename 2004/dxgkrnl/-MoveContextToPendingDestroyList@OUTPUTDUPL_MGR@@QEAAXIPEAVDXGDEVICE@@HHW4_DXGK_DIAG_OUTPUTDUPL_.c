/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0157B44
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013C4DC (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01405DC (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01486BC (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01488B0 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014BBA4 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x1C0157A30 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0157A60 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0157ABC (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1C0297F90 (_lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_--_lambda_invoker_cdecl_.c)
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C029BA78 (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C029BB00 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C029BB74 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C029BE58 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0157C78 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C029A8A0 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x1C02A0AD4 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C02A0FB8 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        OUTPUTDUPL_CONTEXT **a1,
        unsigned int a2,
        struct DXGDEVICE *a3,
        int a4,
        int a5,
        int a6)
{
  OUTPUTDUPL_CONTEXT *v7; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  OUTPUTDUPL_CONTEXT *v12; // r12
  __int64 v13; // r15
  OUTPUTDUPL_MGR *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r14d
  OUTPUTDUPL_CONTEXT **i; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  unsigned int ProcessSessionId; // eax
  OUTPUTDUPL_CONTEXT *v26; // rcx
  OUTPUTDUPL_CONTEXT **v27; // rax
  OUTPUTDUPL_CONTEXT *v28; // rdx
  _BYTE v30[16]; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v31[8]; // [rsp+48h] [rbp-71h] BYREF
  DXGPUSHLOCK *v32; // [rsp+50h] [rbp-69h]
  int v33; // [rsp+58h] [rbp-61h]
  _OWORD v34[2]; // [rsp+60h] [rbp-59h] BYREF
  _DWORD v35[16]; // [rsp+80h] [rbp-39h] BYREF

  v7 = *a1;
  v9 = a2;
  if ( v7 && !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)v7 + 2)) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v19 + 24) = 2388LL;
    WdLogEvent5_WdAssertion(v19);
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31, (struct _KTHREAD **)a1[3], 0);
  DXGPUSHLOCK::AcquireExclusive(v32);
  v12 = a1[2];
  v33 = 2;
  v13 = 32 * v9;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, *((struct DXGFASTMUTEX *const *)v12 + 4 * v9), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  memset(v35, 0, sizeof(v35));
  OUTPUTDUPL_MGR::InitializePacketHeader(v14, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v35);
  v35[13] = v9;
  v17 = 0;
  v35[1] = 64;
  v35[12] = 1;
  v35[15] = a6;
  for ( i = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v12 + 4 * v9 + 1); v17 < *((_DWORD *)a1 + 2); ++i )
  {
    if ( *i )
    {
      if ( *((_DWORD *)*i + 72) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v20 + 24) = 2417LL;
        WdLogEvent5_WdAssertion(v20);
      }
      if ( !a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(*i) == a3 )
      {
        if ( !a4 || (v21 = *((_QWORD *)*i + 3), PsGetCurrentProcess(v16, v15) == v21) )
        {
          if ( !a5 || !*((_DWORD *)*i + 82) )
          {
            if ( *((_DWORD *)*i + 79) )
            {
              v22 = *(_DWORD *)((char *)v12 + v13 + 24);
              if ( !v22 )
              {
                v23 = WdLogNewEntry5_WdAssertion(v16, v15);
                *(_QWORD *)(v23 + 24) = 2440LL;
                WdLogEvent5_WdAssertion(v23);
                v22 = *(_DWORD *)((char *)v12 + v13 + 24);
              }
              v24 = v22 - 1;
              *(_DWORD *)((char *)v12 + v13 + 24) = v24;
              if ( !v24 )
              {
                ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)*i + 3));
                memset(v34, 0, sizeof(v34));
                LODWORD(v34[0]) = 15;
                SMgrGdiCallout(v34, ProcessSessionId, 0LL, 0LL, 0LL, 0LL);
              }
            }
            OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*i);
            v26 = *i;
            v27 = a1 + 4;
            v28 = a1[4];
            if ( *((OUTPUTDUPL_CONTEXT ***)v28 + 1) != a1 + 4 )
              __fastfail(3u);
            *(_QWORD *)v26 = v28;
            *((_QWORD *)v26 + 1) = v27;
            *((_QWORD *)v28 + 1) = v26;
            *v27 = v26;
            *i = 0LL;
            v35[14] = v17;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics((OUTPUTDUPL_MGR *)a1, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v35, 1);
          }
        }
      }
    }
    ++v17;
  }
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v15);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
}
