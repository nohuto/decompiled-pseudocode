/*
 * XREFs of DxgkSetVidPnSourceOwner @ 0x1C0130440
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C012FAC4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C015FDEC (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 */

__int64 __fastcall DxgkSetVidPnSourceOwner(struct _D3DKMT_SETVIDPNSOURCEOWNER *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *v4; // rdx
  void *const **p_pType; // rdx
  void *const *v6; // r8
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _D3DKMT_SETVIDPNSOURCEOWNER *v13; // rax
  __int64 hDevice; // rdi
  unsigned int *pVidPnSourceId; // rdx
  unsigned int v16; // r8d
  _DWORD *p_VidPnSourceCount; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+20h] [rbp-98h] BYREF
  __int64 v23; // [rsp+28h] [rbp-90h]
  char v24; // [rsp+30h] [rbp-88h]
  struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS v25; // [rsp+38h] [rbp-80h]
  void *const *v26; // [rsp+40h] [rbp-78h]
  _QWORD v27[10]; // [rsp+50h] [rbp-68h] BYREF

  memset(v27, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v27[1]);
  v27[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v27[3]) = 47;
  LOBYTE(v27[6]) = -1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2077;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2077);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2077LL);
  v4 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *)&a1[1];
  if ( (unsigned __int64)&a1[1] >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS::$E3CFEB816EDED244F3F6DA55B10CA063::$8A2F5ADB3529A3A021294BA5D3A2A057 *)MmUserProbeAddress;
  v25.0 = *v4;
  p_pType = (void *const **)&a1[1].pType;
  if ( (unsigned __int64)&a1[1].pType >= MmUserProbeAddress )
    p_pType = (void *const **)MmUserProbeAddress;
  v6 = *p_pType;
  v26 = *p_pType;
  if ( (*(_BYTE *)&v25.0 & 2) == 0 )
  {
    v7 = SetVidPnSourceOwnerInternal(a1, v25.Value, v6, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v27);
LABEL_9:
    v9 = v7;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v8);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v22);
    }
    return v9;
  }
  v13 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v13 = (struct _D3DKMT_SETVIDPNSOURCEOWNER *)MmUserProbeAddress;
  hDevice = v13->hDevice;
  pVidPnSourceId = (unsigned int *)a1->pVidPnSourceId;
  if ( (unsigned __int64)pVidPnSourceId >= MmUserProbeAddress )
    pVidPnSourceId = (unsigned int *)MmUserProbeAddress;
  v16 = *pVidPnSourceId;
  p_VidPnSourceCount = &a1->VidPnSourceCount;
  if ( (unsigned __int64)&a1->VidPnSourceCount >= MmUserProbeAddress )
    p_VidPnSourceCount = (_DWORD *)MmUserProbeAddress;
  if ( *p_VidPnSourceCount == 1 )
  {
    v7 = DisableDWMVirtualModeOnVidPnSource(hDevice, v16);
    goto LABEL_9;
  }
  v18 = WdLogNewEntry5_WdError(MmUserProbeAddress, p_VidPnSourceCount);
  *(_QWORD *)(v18 + 24) = hDevice;
  WdLogEvent5_WdError(v18);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v19);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v22);
  return 3221225485LL;
}
