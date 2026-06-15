/*
 * XREFs of s_ccCreateHandsfreeHidFileFromAudioId @ 0x1800BD270
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z @ 0x1800BC350 (-AudioDeviceInterfaceGetContainerId@@YAJPEBGPEAU_GUID@@@Z.c)
 *     ?FindSupportedHidCollection@@YAJPEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU_HIDP_CAPS@@PEAPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800BC604 (-FindSupportedHidCollection@@YAJPEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@PEAPEAXPEAU.c)
 *     ?FreeNode@?$CAtlList@PEAVAudioEffectsWatcher@@V?$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800BC74C (-FreeNode@-$CAtlList@PEAVAudioEffectsWatcher@@V-$CElementTraits@PEAVAudioEffectsWatcher@@@ATL@@@.c)
 *     ?GetHidCollectionsInContainer@@YAJU_GUID@@PEAV?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@@Z @ 0x1800BC774 (-GetHidCollectionsInContainer@@YAJU_GUID@@PEAV-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@@.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800BD008 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall s_ccCreateHandsfreeHidFileFromAudioId(
        RPC_BINDING_HANDLE BindingHandle,
        unsigned __int16 *a2,
        _DWORD *a3)
{
  __int64 v4; // rdi
  char v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // r8
  int ContainerId; // ebx
  int LastError; // eax
  HANDLE CurrentProcess; // rax
  int v13; // eax
  __int64 *v14; // rdx
  __int64 v15; // rax
  void *v16; // rdi
  HANDLE hSourceHandle; // [rsp+40h] [rbp-C0h] BYREF
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  __int128 v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+88h] [rbp-78h]
  struct _TP_TIMER *pv[8]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v26[6]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int Pid; // [rsp+150h] [rbp+50h] BYREF
  HANDLE TargetHandle; // [rsp+158h] [rbp+58h] BYREF

  v22 = 0LL;
  PreparsedData = 0LL;
  v4 = -1LL;
  v24 = 10;
  hSourceHandle = (HANDLE)-1LL;
  v21 = 0LL;
  TargetHandle = (HANDLE)-1LL;
  v23 = 0LL;
  v7 = 0;
  v8 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         (__int64)BindingHandle,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v8[1],
    v9,
    (struct _TP_TIMER *)L"s_ccCreateHandsfreeHidFileFromAudioId");
  *a3 = 0;
  ContainerId = AudioDeviceInterfaceGetContainerId(a2, &v20);
  if ( ContainerId >= 0 )
  {
    ContainerId = GetHidCollectionsInContainer((__int64)&v20, (__int64)&v21);
    if ( ContainerId >= 0 )
    {
      ContainerId = FindSupportedHidCollection(&v21, (__int64 *)&hSourceHandle, v26, &PreparsedData);
      if ( ContainerId >= 0 )
      {
        LastError = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
        if ( LastError )
        {
          if ( LastError <= 0 )
          {
            ContainerId = LastError;
            goto LABEL_13;
          }
LABEL_10:
          ContainerId = (unsigned __int16)LastError | 0x80070000;
          goto LABEL_13;
        }
        if ( RpcImpersonateClient(BindingHandle) )
          goto LABEL_13;
        v7 = 1;
        v4 = (__int64)OpenProcess(0x40u, 0, Pid);
        if ( !v4
          || (CurrentProcess = GetCurrentProcess(),
              !DuplicateHandle(CurrentProcess, hSourceHandle, (HANDLE)v4, &TargetHandle, 0xC0000000, 0, 0)) )
        {
          LastError = GetLastError();
          ContainerId = LastError;
          if ( LastError <= 0 )
            goto LABEL_13;
          goto LABEL_10;
        }
        v13 = (int)TargetHandle;
        TargetHandle = 0LL;
        ContainerId = 0;
        *a3 = v13;
      }
    }
  }
LABEL_13:
  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle((HANDLE)v4);
  if ( v7 )
    RpcRevertToSelf();
  if ( PreparsedData )
    HidD_FreePreparsedData(PreparsedData);
  if ( (char *)hSourceHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hSourceHandle);
  while ( v22 )
  {
    v14 = (__int64 *)v21;
    if ( !(_QWORD)v21 )
      ATL::AtlThrowImpl(-2147467259);
    v15 = *(_QWORD *)v21;
    v16 = *(void **)(v21 + 16);
    *(_QWORD *)&v21 = v15;
    if ( v15 )
      *(_QWORD *)(v15 + 8) = 0LL;
    else
      v21 = 0uLL;
    ATL::CAtlList<AudioEffectsWatcher *,ATL::CElementTraits<AudioEffectsWatcher *>>::FreeNode((__int64)&v21, v14);
    CoTaskMemFree(v16);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)&v21);
  return (unsigned int)ContainerId;
}
