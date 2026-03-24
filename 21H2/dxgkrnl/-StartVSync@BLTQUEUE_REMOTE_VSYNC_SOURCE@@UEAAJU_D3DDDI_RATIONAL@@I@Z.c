/*
 * XREFs of ?StartVSync@BLTQUEUE_REMOTE_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C0300920
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001AFA4 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x1C024D97C (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z @ 0x1C02C3E6C (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z.c)
 *     ?LogUnexpectedStartFailure@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z @ 0x1C03007BC (-LogUnexpectedStartFailure@BLTQUEUE_REMOTE_VSYNC_SOURCE@@AEAAXJW4StartExitReason@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE_REMOTE_VSYNC_SOURCE::StartVSync(
        BLTQUEUE_REMOTE_VSYNC_SOURCE *this,
        struct _D3DDDI_RATIONAL a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rsi
  struct DXGADAPTER *Adapter; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGADAPTER *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int MappingFromGuestId; // ebx
  struct DXGADAPTER *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  struct _KTHREAD **v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  struct _LUID v28; // rbx
  unsigned int v29; // r14d
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbp
  struct DXGADAPTER *v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  struct _LUID v38; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-20h]
  __int64 v40; // [rsp+40h] [rbp-18h] BYREF
  int v41; // [rsp+48h] [rbp-10h]

  v5 = (unsigned int)a3;
  if ( *((_BYTE *)this + 104) )
    return 3221225473LL;
  if ( !*((_QWORD *)this + 12) )
  {
    *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdTrace)(this, a2, a3, a4) + 24) = 62LL;
    return 3221225473LL;
  }
  if ( (_DWORD)a3 == -1 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdWarning)(this, a2, a3);
    Adapter = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    *(_QWORD *)(v8 + 24) = Adapter;
    WdLogEvent5_WdWarning(v8);
    return 3221225473LL;
  }
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal((__int64)this, *(_QWORD *)&a2) + 304664) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = 76LL;
    return 3221225473LL;
  }
  v13 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
  v41 = v5;
  v14 = *(_QWORD *)((char *)v13 + 316);
  v38 = 0LL;
  v39 = 0;
  v40 = v14;
  Global = DXGGLOBAL::GetGlobal(v14, v15);
  MappingFromGuestId = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                         (struct _KTHREAD **)Global + 38077,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v40,
                         (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v38);
  if ( MappingFromGuestId >= 0 )
  {
    v24 = (struct _KTHREAD **)*((_QWORD *)DXGGLOBAL::GetGlobal(v18, v17) + 197);
    if ( !v24 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v23, v25, v26) + 24) = 97LL;
      BLTQUEUE_REMOTE_VSYNC_SOURCE::LogUnexpectedStartFailure(v27, -1073741823, 1);
      return 3221225473LL;
    }
    v28 = v38;
    v29 = v39;
    v30 = DXG_GUEST_GLOBAL_VMBUS::VmBusSendVsyncControl(v24, v38, v39, (char *)this + 72, 1);
    v34 = v30;
    if ( v30 >= 0 )
    {
      KeSetTimerEx((PKTIMER)((char *)this + 8), (LARGE_INTEGER)-300000000LL, 0, 0LL);
      *((_BYTE *)this + 104) = 1;
      *(struct _LUID *)((char *)this + 108) = v28;
      *((_DWORD *)this + 29) = v29;
    }
    else
    {
      WdLogNewEntry5_WdWarning(v32, v31, v33);
      v35 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
      v36[3] = v35;
      v36[4] = v5;
      v36[5] = v34;
      WdLogEvent5_WdWarning(v36);
      BLTQUEUE_REMOTE_VSYNC_SOURCE::LogUnexpectedStartFailure(v37, v34, 2);
    }
    return (unsigned int)v34;
  }
  else
  {
    WdLogNewEntry5_WdError(v18, v17);
    v20 = DXGDODPRESENT::GetAdapter(*((DXGDODPRESENT **)this + 12));
    *(_QWORD *)(v21 + 24) = v20;
    *(_QWORD *)(v21 + 32) = v5;
    WdLogEvent5_WdError(v21);
    BLTQUEUE_REMOTE_VSYNC_SOURCE::LogUnexpectedStartFailure(v22, MappingFromGuestId, 0);
    return (unsigned int)MappingFromGuestId;
  }
}
