/*
 * XREFs of ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00DD838
 * Callers:
 *     DxgkCreateContextVirtualInternal @ 0x1C00D8398 (DxgkCreateContextVirtualInternal.c)
 *     DxgkCreateContextVirtual @ 0x1C00DD820 (DxgkCreateContextVirtual.c)
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0239D00 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0008650 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C00DDE10 (-GetBitCount@@YAII@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00F2020 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateContextVirtualImpl(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, char a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // r8
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGDEVICE *v14; // r13
  __int64 v15; // r10
  unsigned int v16; // r9d
  PVOID v17; // r14
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r15
  unsigned int v22; // r9d
  __int64 v23; // r10
  ADAPTER_RENDER *v24; // r11
  __int64 Value; // rcx
  PVOID v26; // r15
  unsigned int v27; // r12d
  __int64 v28; // r9
  int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  ULONG64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v36; // ecx
  int v37; // r8d
  _DWORD *p_hContext; // rdx
  ULONG64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct DXGDEVICE *v54; // [rsp+50h] [rbp-198h] BYREF
  int v55; // [rsp+58h] [rbp-190h] BYREF
  __int64 v56; // [rsp+60h] [rbp-188h]
  char v57; // [rsp+68h] [rbp-180h]
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v58; // [rsp+70h] [rbp-178h]
  struct _D3DDDI_CREATECONTEXTFLAGS v59; // [rsp+78h] [rbp-170h]
  unsigned int v60; // [rsp+7Ch] [rbp-16Ch]
  unsigned int v61; // [rsp+80h] [rbp-168h]
  unsigned int v62; // [rsp+84h] [rbp-164h]
  DXGDEVICE *v63; // [rsp+88h] [rbp-160h]
  struct DXGDEVICE *v64; // [rsp+90h] [rbp-158h] BYREF
  PVOID v65; // [rsp+98h] [rbp-150h]
  struct DXGCONTEXT *v66; // [rsp+A0h] [rbp-148h] BYREF
  unsigned int v67[4]; // [rsp+A8h] [rbp-140h]
  void *Src[2]; // [rsp+B8h] [rbp-130h]
  __int64 v69; // [rsp+C8h] [rbp-120h]
  unsigned int v70; // [rsp+D0h] [rbp-118h]
  _QWORD v71[2]; // [rsp+D8h] [rbp-110h] BYREF
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v72; // [rsp+E8h] [rbp-100h]
  int v73; // [rsp+F0h] [rbp-F8h]
  DXGADAPTER *v74; // [rsp+F8h] [rbp-F0h]
  __int64 v75; // [rsp+100h] [rbp-E8h]
  _BYTE v76[160]; // [rsp+110h] [rbp-D8h] BYREF

  v72 = a1;
  v58 = a1;
  v55 = -1;
  v56 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
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
    v44 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v44 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v44);
LABEL_71:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v45);
    if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v55);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (struct _D3DKMT_CREATECONTEXTVIRTUAL *)MmUserProbeAddress;
    *(_OWORD *)v67 = *(_OWORD *)&v8->hDevice;
    v9 = *(_OWORD *)&v8->pPrivateDriverData;
    v10 = *(_QWORD *)&v8->hContext;
  }
  else
  {
    *(_OWORD *)v67 = *(_OWORD *)&a1->hDevice;
    v9 = *(_OWORD *)&a1->pPrivateDriverData;
    v10 = *(_QWORD *)&a1->hContext;
  }
  v69 = v10;
  *(_OWORD *)Src = v9;
  v64 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v54, v67[0], Current, &v64);
  v14 = v64;
  v63 = v64;
  if ( !v64 )
  {
    v46 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v46 + 24) = v67[0];
    *(_QWORD *)(v46 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v46);
LABEL_68:
    if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
    goto LABEL_71;
  }
  v15 = *(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL);
  v16 = 0;
  v17 = (PVOID)v67[2];
  v60 = v67[2];
  v18 = v67[2];
  while ( 1 )
  {
    v18 >>= 1;
    if ( !v18 )
      break;
    ++v16;
  }
  if ( v16 >= *(_DWORD *)(v15 + 280) )
    goto LABEL_62;
  v19 = 360LL * v16;
  v20 = *(unsigned __int16 *)(v19 + *(_QWORD *)(v15 + 2560));
  v21 = v67[1];
  v61 = v67[1];
  if ( v67[1] >= (unsigned int)v20 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v20, v13);
    v47[3] = v21;
    v47[4] = -1073741811LL;
    goto LABEL_67;
  }
  if ( GetBitCount(v67[2]) > 1 )
  {
LABEL_62:
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v47[4] = -1073741811LL;
LABEL_66:
    v47[3] = v17;
    goto LABEL_67;
  }
  Value = v67[3];
  v59.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v67[3];
  if ( (v67[3] & 8) == 0 )
  {
    if ( (*(_DWORD *)(v23 + 2036) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v24, v22, v21) )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v11, v13);
      v47[3] = -1073741811LL;
      v47[4] = 297LL;
      goto LABEL_67;
    }
    Value = v59.Value;
  }
  v62 = *(_DWORD *)(v23 + 1848);
  v70 = v62;
  if ( v62 >= 0x7008 && (Value & 0xFFFFFFE0) != 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v11, v13);
    v47[3] = -1073741811LL;
    v47[4] = 307LL;
LABEL_67:
    WdLogEvent5_WdWarning(v47);
    goto LABEL_68;
  }
  v26 = 0LL;
  v65 = 0LL;
  v17 = Src[0];
  v27 = (unsigned int)Src[1];
  if ( Src[0] )
  {
    if ( LODWORD(Src[1]) )
      goto LABEL_22;
    goto LABEL_65;
  }
  if ( LODWORD(Src[1]) )
  {
LABEL_65:
    v47 = (_QWORD *)WdLogNewEntry5_WdWarning(Value, v11, v13);
    v47[4] = v27;
    v47[5] = -1073741811LL;
    goto LABEL_66;
  }
LABEL_22:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v71, v14);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v76, (__int64)v14, 0, v28, 0);
  v29 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v76, 0LL);
  if ( v29 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    if ( v71[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v71);
    if ( !v54 )
      goto LABEL_50;
LABEL_48:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
LABEL_50:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v40);
    if ( v57 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v55);
    }
    return (unsigned int)v29;
  }
  if ( !v17 )
    goto LABEL_56;
  if ( !a2 )
  {
    v26 = v17;
    v65 = v17;
LABEL_56:
    v36 = v59.0;
    v35 = v61;
    v34 = v60;
    goto LABEL_30;
  }
  v66 = (struct DXGCONTEXT *)v27;
  v26 = operator new[](v27, 0x4B677844u, PagedPool);
  v65 = v26;
  if ( v26 )
  {
    v33 = (ULONG64)v17 + v27;
    if ( v33 < (unsigned __int64)v17 || v33 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v26, v17, v27);
    v34 = v60;
    v35 = v61;
    v36 = v59.0;
LABEL_30:
    v66 = 0LL;
    v29 = DXGDEVICE::CreateContext(
            v63,
            &v66,
            v35,
            v34,
            (struct _D3DDDI_CREATECONTEXTFLAGS)v36,
            v26,
            v27,
            SHIDWORD(Src[1]),
            1u);
    if ( v29 >= 0 )
    {
      v37 = *((_DWORD *)v66 + 6);
      v73 = v37;
      p_hContext = &v72->hContext;
      if ( a2 )
      {
        if ( (unsigned __int64)p_hContext >= MmUserProbeAddress )
          p_hContext = (_DWORD *)MmUserProbeAddress;
        *p_hContext = v37;
        if ( v27 )
        {
          v75 = *((_QWORD *)v63 + 2);
          v74 = *(DXGADAPTER **)(v75 + 16);
          if ( DXGADAPTER::IsDxgmms2(v74) )
          {
            if ( v62 >= 0x7008 )
            {
              v39 = (ULONG64)v17 + v27;
              if ( v39 > MmUserProbeAddress || v39 <= (unsigned __int64)v17 )
                *(_BYTE *)MmUserProbeAddress = 0;
              memmove(v17, v26, v27);
            }
          }
        }
      }
      else
      {
        *p_hContext = v37;
      }
    }
    if ( v26 != v17 )
      operator delete[](v26);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
    if ( v71[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v71);
    if ( !v54 )
      goto LABEL_50;
    goto LABEL_48;
  }
  v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
  v50[3] = v63;
  v50[4] = v66;
  v50[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v50);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v76);
  if ( v71[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v71);
  if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v54 + 2), v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v51);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v55);
  return 3221225495LL;
}
