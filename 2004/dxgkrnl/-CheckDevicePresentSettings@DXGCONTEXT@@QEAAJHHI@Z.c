/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0153160
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD2E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A410C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B9F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E210 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGCONTEXT *this, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  int v29; // [rsp+30h] [rbp-38h]

  v4 = *((_QWORD *)this + 2);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 1848) + 2696LL);
  v10 = *(_QWORD *)(v9 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v20 + 24) = 6030LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v11 = *(_DWORD *)(v9 + 80);
  if ( (unsigned int)v6 >= v11 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v21 + 24) = 6031LL;
    WdLogEvent5_WdAssertion(v21);
    v11 = *(_DWORD *)(v9 + 80);
  }
  if ( (unsigned int)v6 < v11 && v4 == *(_QWORD *)(*(_QWORD *)(v9 + 112) + 3968 * v6 + 688) )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL);
    if ( !v12 )
      goto LABEL_15;
    v13 = *(_QWORD *)(v12 + 2696);
    if ( v13
      || (v22 = WdLogNewEntry5_WdAssertion(v10, a2),
          *(_QWORD *)(v22 + 24) = 9659LL,
          WdLogEvent5_WdAssertion(v22),
          (v13 = *(_QWORD *)(v12 + 2696)) != 0) )
    {
      if ( (unsigned int)v6 >= *(_DWORD *)(v13 + 80) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v10, a2);
        *(_QWORD *)(v23 + 24) = 6068LL;
        WdLogEvent5_WdAssertion(v23);
      }
      if ( *(_BYTE *)(*(_QWORD *)(v13 + 112) + 3968 * v6 + 720) )
        goto LABEL_15;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 432LL) == 1 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, a2);
      v16[3] = -1071775738LL;
      v16[4] = this;
      v16[5] = v6;
      WdLogEvent5_WdEvent(v16);
      return 3223191558LL;
    }
    if ( !v8 )
    {
LABEL_15:
      if ( v7 )
        return 0LL;
      v14 = *((_QWORD *)this + 2);
      if ( *(_DWORD *)(v14 + 432) != 1 || (*(_DWORD *)(v14 + 4 * v6 + 1208) & 0x100) != 0 )
      {
        return 0LL;
      }
      else
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, a2);
        v25[3] = -1071775739LL;
        v25[4] = this;
        v25[5] = v6;
        WdLogEvent5_WdEvent(v25);
        return 3223191557LL;
      }
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, a2);
      v24[3] = 0LL;
      v24[4] = this;
      v24[5] = v6;
      WdLogEvent5_WdEvent(v24);
      return 3223192376LL;
    }
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, a2, a3);
    v17[3] = -1071775744LL;
    v17[4] = this;
    v17[5] = v6;
    WdLogEvent5_WdWarning(v17);
    v18 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v18 + 40) + 346LL) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(ADAPTER_DISPLAY **)(*(_QWORD *)(v18 + 1848) + 2696LL),
                           (unsigned int)v6) == 1 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL) + 112LL)
                        + 3968 * v6
                        + 712);
        if ( *(_BYTE *)(v26 + 346) )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v26, v19);
          v27[3] = *((_QWORD *)this + 2);
          v27[4] = v6;
          v27[5] = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                     *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL),
                     (unsigned int)v6);
          WdLogEvent5_WdError(v27);
          LOBYTE(v28) = 1;
          *(_BYTE *)(*((_QWORD *)this + 2) + 1906LL) = 1;
          if ( (unsigned __int8)WdIsDebuggerPresent(v28) )
          {
            DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
            __debugbreak();
          }
          else
          {
            wil_details_FeatureReporting_ReportUsageToService(
              (__int64)&Feature_Dwm_Ownership_Leak_Bugchek__private_reporting,
              0xA84D9Au,
              0LL,
              0LL,
              (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
              0,
              v29);
          }
        }
      }
    }
    return 3223191552LL;
  }
}
