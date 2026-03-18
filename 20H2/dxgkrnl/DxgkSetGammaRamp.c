/*
 * XREFs of DxgkSetGammaRamp @ 0x1C0258B50
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C000A474 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000B04C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000B94C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00426F0 (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01213CC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C0138F14 (MonitorNotifyDXGIGammaRampChange.c)
 */

__int64 __fastcall DxgkSetGammaRamp(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rbx
  struct _KTHREAD **Current; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGDEVICE *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned int v17; // r15d
  _QWORD *v18; // rax
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  enum _D3DDDI_GAMMARAMP_TYPE v24; // eax
  __int64 v25; // rax
  __int64 v26; // r14
  _QWORD *v27; // rax
  DXGK_GAMMA_RAMP *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  DXGK_GAMMA_RAMP *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  void *v36; // rcx
  const void *v37; // rdx
  char *v38; // r9
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // r8
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  char v45; // al
  struct DXGDEVICE *v46; // [rsp+30h] [rbp-128h] BYREF
  struct _KTHREAD **v47; // [rsp+38h] [rbp-120h]
  _QWORD v48[2]; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-108h] BYREF
  struct DXGDEVICE *v50[2]; // [rsp+58h] [rbp-100h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v51[4]; // [rsp+68h] [rbp-F0h]
  void *Src[2]; // [rsp+78h] [rbp-E0h]
  _BYTE v53[160]; // [rsp+90h] [rbp-C8h] BYREF

  v2 = (_OWORD *)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v47 = Current;
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v4, 0LL);
    v6 = -1073741811;
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return v6;
  }
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v51 = *v2;
  *(_OWORD *)Src = v2[1];
  v50[0] = 0LL;
  v8 = (unsigned int)v51[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v46, (unsigned int)v51[0], Current, v50);
  v12 = v50[0];
  if ( !v50[0] )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = v8;
    v6 = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_37;
  }
  v14 = *((_QWORD *)v50[0] + 231);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v15 + 24) = v8;
    v6 = -1073741637;
    *(_QWORD *)(v15 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v15);
    if ( !v46 )
      return v6;
LABEL_10:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    return v6;
  }
  LODWORD(v16) = 0;
  v17 = (unsigned int)Src[1];
  v6 = -1073741811;
  if ( v51[2] == D3DDDI_GAMMARAMP_RGB256x3x16 )
  {
    LODWORD(v16) = (*(_DWORD *)(v14 + 2040) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Src[1]) != 1536 )
      LODWORD(v16) = -1073741811;
  }
  else if ( v51[2] != D3DDDI_GAMMARAMP_DXGI_1 || LODWORD(Src[1]) != 12324 )
  {
    LODWORD(v16) = -1073741811;
  }
  if ( (int)v16 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning((unsigned int)(v51[2] - 2), v9, v11);
    v18[3] = v51[2];
    v18[4] = v8;
    v18[5] = (int)v16;
    WdLogEvent5_WdWarning(v18);
    if ( !v46 )
      return (unsigned int)v16;
LABEL_21:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
    return (unsigned int)v16;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48, v50[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v12, 1, v19, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v14 + 2696) + 251LL) )
    v20 = COREDEVICEACCESS::AcquireExclusive((__int64)v53, 1u);
  else
    v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v53, 0LL);
  LODWORD(v16) = v20;
  if ( v20 < 0 )
  {
LABEL_28:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    if ( v48[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
    if ( !v46 )
      return (unsigned int)v16;
    goto LABEL_21;
  }
  v23 = *(unsigned int *)(*(_QWORD *)(v14 + 2696) + 80LL);
  v24 = *((_DWORD *)v12 + 464);
  if ( (_DWORD)v23 != v24 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v23, v21);
    *(_QWORD *)(v25 + 24) = 4136LL;
    WdLogEvent5_WdAssertion(v25);
    v24 = *((_DWORD *)v12 + 464);
  }
  v26 = (unsigned int)v51[1];
  if ( (unsigned int)v24 <= v51[1] )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v21, v22);
    v27[3] = v12;
    v27[4] = v26;
    v27[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
    if ( v48[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
LABEL_37:
    if ( !v46 )
      return v6;
    goto LABEL_10;
  }
  v28 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  if ( v28 )
    v33 = DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v28);
  else
    v33 = 0LL;
  v50[1] = v33;
  if ( v33 )
  {
    LODWORD(v16) = DXGK_GAMMA_RAMP::Initialize((size_t *)v33, (unsigned int)v51[2], 0LL);
    if ( (int)v16 >= 0 )
    {
      v36 = (void *)*((_QWORD *)v33 + 4);
      v37 = Src[0];
      v38 = (char *)Src[0] + v17;
      if ( v38 < Src[0] || (unsigned __int64)v38 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v36, v37, v17);
      DXGDEVICE::SetDeviceGammaRamp(v12, (unsigned int)v26, v33);
      v39 = 0LL;
      v49 = -1;
      while ( 1 )
      {
        v40 = v39++;
        if ( (int)DmmEnumClientVidPnPathTargetsFromSource((_QWORD *)v14, (unsigned int)v26, v40, &v49) < 0 )
          break;
        v35 = v49;
        if ( v49 == -1 )
          break;
        v41 = MonitorNotifyDXGIGammaRampChange((DXGADAPTER *)v14, v49);
        v16 = v41;
        if ( v41 < 0 )
        {
          v44 = WdLogNewEntry5_WdError(v43, v42);
          *(_QWORD *)(v44 + 24) = v16;
          WdLogEvent5_WdError(v44);
          break;
        }
      }
      v45 = *((_BYTE *)v47 + 349);
      *((_BYTE *)v47 + 349) = 1;
      if ( !v45 )
        DxgkLogCodePointPacket(0x5Eu, 3u, v16, 0, *(_QWORD *)(v14 + 316));
    }
    ReferenceCounted::Release(v33, v35);
    goto LABEL_28;
  }
  v34 = WdLogNewEntry5_WdLowResource(v30, v29, v31, v32);
  *(_QWORD *)(v34 + 24) = v12;
  WdLogEvent5_WdLowResource(v34);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v53);
  if ( v48[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v48);
  if ( v46 && _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
  return 3221225495LL;
}
