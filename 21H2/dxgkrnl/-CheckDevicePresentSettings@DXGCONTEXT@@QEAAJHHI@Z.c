/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0157EB0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FDFA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A45EC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000BB90 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E9EC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     Feature_Dwm_Ownership_Leak_Bugchek__private_ReportDeviceUsage @ 0x1C0027EE4 (Feature_Dwm_Ownership_Leak_Bugchek__private_ReportDeviceUsage.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGCONTEXT *this, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r14
  __int64 v6; // rsi
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rbx
  __int64 v28; // rcx

  v4 = *((_QWORD *)this + 2);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = *(_QWORD *)(*(_QWORD *)(v4 + 1848) + 2696LL);
  v10 = *(_QWORD *)(v9 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v11 + 24) = 6038LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *(_DWORD *)(v9 + 80);
  if ( (unsigned int)v6 >= v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10, a2);
    *(_QWORD *)(v13 + 24) = 6039LL;
    WdLogEvent5_WdAssertion(v13);
    v12 = *(_DWORD *)(v9 + 80);
  }
  if ( (unsigned int)v6 < v12 && v4 == *(_QWORD *)(*(_QWORD *)(v9 + 112) + 3968 * v6 + 688) )
  {
    v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL);
    if ( !v14 )
      goto LABEL_20;
    v15 = *(_QWORD *)(v14 + 2696);
    if ( v15
      || (v16 = WdLogNewEntry5_WdAssertion(v10, a2),
          *(_QWORD *)(v16 + 24) = 9659LL,
          WdLogEvent5_WdAssertion(v16),
          (v15 = *(_QWORD *)(v14 + 2696)) != 0) )
    {
      if ( (unsigned int)v6 >= *(_DWORD *)(v15 + 80) )
      {
        v17 = WdLogNewEntry5_WdAssertion(v10, a2);
        *(_QWORD *)(v17 + 24) = 6076LL;
        WdLogEvent5_WdAssertion(v17);
      }
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 112) + 3968 * v6 + 720) )
        goto LABEL_20;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 432LL) == 1 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, a2);
      v18[3] = -1071775738LL;
      v18[4] = this;
      v18[5] = v6;
      WdLogEvent5_WdEvent(v18);
      return 3223191558LL;
    }
    if ( !v8 )
    {
LABEL_20:
      if ( v7 )
        return 0LL;
      v21 = *((_QWORD *)this + 2);
      if ( *(_DWORD *)(v21 + 432) != 1 || (*(_DWORD *)(v21 + 4 * v6 + 1208) & 0x100) != 0 )
      {
        return 0LL;
      }
      else
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, a2);
        v22[3] = -1071775739LL;
        v22[4] = this;
        v22[5] = v6;
        WdLogEvent5_WdEvent(v22);
        return 3223191557LL;
      }
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v10, a2);
      v20[3] = 0LL;
      v20[4] = this;
      v20[5] = v6;
      WdLogEvent5_WdEvent(v20);
      return 3223192376LL;
    }
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, a2, a3);
    v23[3] = -1071775744LL;
    v23[4] = this;
    v23[5] = v6;
    WdLogEvent5_WdWarning(v23);
    v24 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v24 + 40) + 346LL) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(ADAPTER_DISPLAY **)(*(_QWORD *)(v24 + 1848) + 2696LL),
                           (unsigned int)v6) == 1 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL) + 112LL)
                        + 3968 * v6
                        + 712);
        if ( *(_BYTE *)(v26 + 346) )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
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
            Feature_Dwm_Ownership_Leak_Bugchek__private_ReportDeviceUsage();
          }
        }
      }
    }
    return 3223191552LL;
  }
}
