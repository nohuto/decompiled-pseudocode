/*
 * XREFs of ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00E5C60
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C00E5C30 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C0151208 (DxgkCreateContextVirtualInternal.c)
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DFB0 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0002458 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C00E5C48 (-GetBitCount@@YAII@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6F6C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateContextVirtualImpl(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, char a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGDEVICE *v18; // r13
  __int64 v19; // rax
  __int64 v20; // r10
  unsigned int v21; // r9d
  PVOID Value; // r14
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r15
  unsigned int v28; // r9d
  __int64 v29; // r10
  ADAPTER_RENDER *v30; // r11
  PVOID v31; // r15
  unsigned int v32; // r12d
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v36; // r9
  int v37; // r13d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  ULONG64 v48; // rcx
  unsigned int v49; // r9d
  unsigned int v50; // r8d
  int v51; // r8d
  _DWORD *p_hContext; // rdx
  ULONG64 v53; // rcx
  struct DXGDEVICE *v54; // [rsp+50h] [rbp-198h] BYREF
  int v55; // [rsp+58h] [rbp-190h] BYREF
  __int64 v56; // [rsp+60h] [rbp-188h]
  char v57; // [rsp+68h] [rbp-180h]
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v58; // [rsp+70h] [rbp-178h]
  unsigned int v59; // [rsp+78h] [rbp-170h]
  unsigned int v60; // [rsp+7Ch] [rbp-16Ch]
  unsigned int v61; // [rsp+80h] [rbp-168h]
  DXGDEVICE *v62; // [rsp+88h] [rbp-160h]
  struct DXGDEVICE *v63; // [rsp+90h] [rbp-158h] BYREF
  PVOID v64; // [rsp+98h] [rbp-150h]
  struct DXGCONTEXT *v65; // [rsp+A0h] [rbp-148h] BYREF
  struct _D3DDDI_CREATECONTEXTFLAGS v66[4]; // [rsp+A8h] [rbp-140h]
  void *Src[2]; // [rsp+B8h] [rbp-130h]
  __int64 v68; // [rsp+C8h] [rbp-120h]
  unsigned int v69; // [rsp+D0h] [rbp-118h]
  _QWORD v70[2]; // [rsp+D8h] [rbp-110h] BYREF
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v71; // [rsp+E8h] [rbp-100h]
  int v72; // [rsp+F0h] [rbp-F8h]
  DXGADAPTER *v73; // [rsp+F8h] [rbp-F0h]
  __int64 v74; // [rsp+100h] [rbp-E8h]
  _BYTE v75[160]; // [rsp+110h] [rbp-D8h] BYREF

  v71 = a1;
  v58 = a1;
  v55 = -1;
  v56 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2039);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 2039LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
LABEL_7:
    WdLogEvent5_WdError(v8);
LABEL_45:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v9);
    if ( v57 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v55);
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (struct _D3DKMT_CREATECONTEXTVIRTUAL *)MmUserProbeAddress;
    *(_OWORD *)&v66[0].0 = *(_OWORD *)&v10->hDevice;
    v11 = *(_OWORD *)&v10->pPrivateDriverData;
    v12 = *(_QWORD *)&v10->hContext;
  }
  else
  {
    *(_OWORD *)&v66[0].0 = *(_OWORD *)&a1->hDevice;
    v11 = *(_OWORD *)&a1->pPrivateDriverData;
    v12 = *(_QWORD *)&a1->hContext;
  }
  v68 = v12;
  *(_OWORD *)Src = v11;
  if ( !(unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
    v66[3].Value &= ~0x20u;
  if ( (*(_BYTE *)&v66[3].0 & 0x20) != 0 && !g_OSTestSigningEnabled )
  {
    v8 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v8 + 24) = 256LL;
    goto LABEL_7;
  }
  v63 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54, v66[0].Value, Current, &v63);
  v18 = v63;
  v62 = v63;
  if ( !v63 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v19 + 24) = v66[0].Value;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
LABEL_42:
    if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    goto LABEL_45;
  }
  v20 = *(_QWORD *)(*((_QWORD *)v63 + 2) + 16LL);
  v21 = 0;
  Value = (PVOID)v66[2].Value;
  v59 = v66[2].Value;
  v23 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v66[2].Value;
  while ( 1 )
  {
    v23 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)(*(unsigned int *)&v23 >> 1);
    if ( !*(_DWORD *)&v23 )
      break;
    ++v21;
  }
  if ( v21 >= *(_DWORD *)(v20 + 280) )
    goto LABEL_24;
  v25 = 360LL * v21;
  v26 = *(unsigned __int16 *)(v25 + *(_QWORD *)(v20 + 2584));
  v27 = v66[1].Value;
  v60 = v66[1].Value;
  if ( v66[1].Value >= (unsigned int)v26 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v26, v17);
    v24[3] = v27;
    v24[4] = -1073741811LL;
LABEL_41:
    WdLogEvent5_WdWarning(v24);
    goto LABEL_42;
  }
  if ( (unsigned int)GetBitCount(v66[2].Value) > 1 )
  {
LABEL_24:
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v24[4] = -1073741811LL;
LABEL_40:
    v24[3] = Value;
    goto LABEL_41;
  }
  if ( (*(_BYTE *)&v66[3].0 & 8) == 0
    && ((*(_DWORD *)(v29 + 2060) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v30, v28, v27)) )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v24[3] = -1073741811LL;
    v24[4] = 308LL;
    goto LABEL_41;
  }
  v61 = *(_DWORD *)(v29 + 1872);
  v69 = v61;
  if ( v61 >= 0x7008 && (v66[3].Value & 0xFFFFFFC0) != 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v24[3] = -1073741811LL;
    v24[4] = 318LL;
    goto LABEL_41;
  }
  v31 = 0LL;
  v64 = 0LL;
  Value = Src[0];
  v32 = (unsigned int)Src[1];
  if ( !Src[0] )
  {
    if ( !LODWORD(Src[1]) )
      goto LABEL_49;
LABEL_39:
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
    v24[4] = v32;
    v24[5] = -1073741811LL;
    goto LABEL_40;
  }
  if ( !LODWORD(Src[1]) )
    goto LABEL_39;
LABEL_49:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v70, v18);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, (__int64)v18, 0, v36, 0);
  v37 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v75, 0LL);
  if ( v37 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
    if ( v70[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v70);
    if ( !v54 )
      goto LABEL_55;
    goto LABEL_53;
  }
  if ( !Value )
    goto LABEL_76;
  if ( !a2 )
  {
    v31 = Value;
    v64 = Value;
LABEL_76:
    v50 = v60;
    v49 = v59;
    goto LABEL_77;
  }
  v65 = (struct DXGCONTEXT *)v32;
  v31 = operator new[](v32, 0x4B677844u, PagedPool);
  v64 = v31;
  if ( v31 )
  {
    v48 = (ULONG64)Value + v32;
    if ( v48 < (unsigned __int64)Value || v48 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v31, Value, v32);
    v49 = v59;
    v50 = v60;
LABEL_77:
    v65 = 0LL;
    v37 = DXGDEVICE::CreateContext(v62, &v65, v50, v49, v66[3], v31, v32, SHIDWORD(Src[1]), 1u);
    if ( v37 >= 0 )
    {
      v51 = *((_DWORD *)v65 + 6);
      v72 = v51;
      p_hContext = &v71->hContext;
      if ( a2 )
      {
        if ( (unsigned __int64)p_hContext >= MmUserProbeAddress )
          p_hContext = (_DWORD *)MmUserProbeAddress;
        *p_hContext = v51;
        if ( v32 )
        {
          v74 = *((_QWORD *)v62 + 2);
          v73 = *(DXGADAPTER **)(v74 + 16);
          if ( DXGADAPTER::IsDxgmms2(v73) )
          {
            if ( v61 >= 0x7008 )
            {
              v53 = (ULONG64)Value + v32;
              if ( v53 > MmUserProbeAddress || v53 <= (unsigned __int64)Value )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(Value, v31, v32);
            }
          }
        }
      }
      else
      {
        *p_hContext = v51;
      }
    }
    if ( v31 != Value )
      operator delete[](v31);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
    if ( v70[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v70);
    if ( !v54 )
      goto LABEL_55;
LABEL_53:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
LABEL_55:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v38);
    if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v55);
    return (unsigned int)v37;
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
  v44[3] = v62;
  v44[4] = v65;
  v44[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v44);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v75);
  if ( v70[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v70);
  if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v45);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v55);
  return 3221225495LL;
}
