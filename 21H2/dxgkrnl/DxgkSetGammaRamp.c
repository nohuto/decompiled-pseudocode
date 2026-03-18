/*
 * XREFs of DxgkSetGammaRamp @ 0x1C02EAB70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0012C4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C0012D64 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013788 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C004C418 (-SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01A30A0 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorNotifyDXGIGammaRampChange @ 0x1C01C4688 (MonitorNotifyDXGIGammaRampChange.c)
 */

__int64 __fastcall DxgkSetGammaRamp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rbx
  struct _KTHREAD **Current; // rdx
  __int64 v7; // r14
  struct DXGDEVICE *v8; // rsi
  __int64 v9; // r13
  unsigned int v10; // ebx
  enum _D3DDDI_GAMMARAMP_TYPE v11; // r15d
  unsigned int v12; // r12d
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  DXGK_GAMMA_RAMP *v18; // rax
  DXGK_GAMMA_RAMP *v19; // rdi
  __int64 v20; // r15
  void *v21; // rcx
  const void *v22; // rdx
  char *v23; // r9
  __int64 v24; // rbx
  unsigned int v25; // esi
  __int64 v26; // r8
  int v27; // eax
  char v28; // al
  struct DXGDEVICE *v29; // [rsp+50h] [rbp-138h] BYREF
  struct _KTHREAD **v30; // [rsp+58h] [rbp-130h]
  _QWORD v31[2]; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-114h]
  struct DXGDEVICE *v34[2]; // [rsp+78h] [rbp-110h] BYREF
  unsigned int v35[4]; // [rsp+88h] [rbp-100h]
  void *Src[2]; // [rsp+98h] [rbp-F0h]
  _BYTE v37[160]; // [rsp+B0h] [rbp-D8h] BYREF

  v4 = (_OWORD *)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v30 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v35 = *v4;
  *(_OWORD *)Src = v4[1];
  v34[0] = 0LL;
  v7 = v35[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v29, v35[0], Current, v34);
  v8 = v34[0];
  if ( !v34[0] )
  {
    WdLogSingleEntry2(2LL, (unsigned int)v7, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_36:
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    }
    return 3221225485LL;
  }
  v9 = *((_QWORD *)v34[0] + 231);
  if ( !v9 )
  {
    v10 = -1073741637;
    WdLogSingleEntry2(3LL, v7, -1073741637LL);
    goto LABEL_10;
  }
  v10 = 0;
  v11 = v35[2];
  v12 = (unsigned int)Src[1];
  if ( v35[2] == 2 )
  {
    v10 = (*(_DWORD *)(v9 + 2136) & 1) == 0 ? 0xC000000D : 0;
    if ( LODWORD(Src[1]) != 1536 )
      v10 = -1073741811;
  }
  else if ( v35[2] != 3 || LODWORD(Src[1]) != 12324 )
  {
    v10 = -1073741811;
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    WdLogSingleEntry3(3LL, (int)v35[2], v7, (int)v10);
LABEL_10:
    if ( !v29 )
      return v10;
LABEL_11:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    return v10;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31, v34[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v8, 1, v13, 0);
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 2792) + 291LL) )
    v14 = COREDEVICEACCESS::AcquireExclusive((__int64)v37, 1u);
  else
    v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37, 0LL);
  v10 = v14;
  if ( v14 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    if ( !v29 )
      return v10;
    goto LABEL_11;
  }
  v16 = *((_DWORD *)v8 + 464);
  if ( *(_DWORD *)(*(_QWORD *)(v9 + 2792) + 96LL) != v16 )
  {
    WdLogSingleEntry1(1LL, 4188LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->GetDisplayCore()->GetNumVidPnSources() == pDevice->GetNumVidPnSources()",
      4188LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v16 = *((_DWORD *)v8 + 464);
  }
  v17 = v35[1];
  v33 = v35[1];
  if ( v16 <= v35[1] )
  {
    WdLogSingleEntry3(3LL, v8, v35[1], -1073741811LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    goto LABEL_36;
  }
  v18 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, 256LL, v15);
  if ( v18 )
    v19 = DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v18);
  else
    v19 = 0LL;
  v34[1] = v19;
  if ( v19 )
  {
    LODWORD(v20) = DXGK_GAMMA_RAMP::Initialize(v19, v11, 0LL);
    if ( (int)v20 >= 0 )
    {
      v21 = (void *)*((_QWORD *)v19 + 4);
      v22 = Src[0];
      v23 = (char *)Src[0] + v12;
      if ( v23 < Src[0] || (unsigned __int64)v23 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v21, v22, v12);
      DXGDEVICE::SetDeviceGammaRamp(v8, v17, v19);
      v24 = 0LL;
      v32 = -1;
      v25 = v33;
      while ( 1 )
      {
        v26 = v24++;
        if ( (int)DmmEnumClientVidPnPathTargetsFromSource((_QWORD *)v9, v25, v26, &v32) < 0 || v32 == -1 )
          break;
        v27 = MonitorNotifyDXGIGammaRampChange((DXGADAPTER *)v9, v32);
        v20 = v27;
        if ( v27 < 0 )
        {
          WdLogSingleEntry1(2LL, v27);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to DXGI gamma ramp, (Status == 0x%I64x)!",
            v20,
            0LL,
            0LL,
            0LL,
            0LL);
          break;
        }
      }
      v28 = *((_BYTE *)v30 + 428);
      *((_BYTE *)v30 + 428) = 1;
      if ( !v28 )
        DxgkLogCodePointPacket(0x5Eu, 3u, v20, 0, *(_QWORD *)(v9 + 404));
    }
    ReferenceCounted::Release(v19);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    return (unsigned int)v20;
  }
  else
  {
    WdLogSingleEntry1(6LL, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Device 0x%I64x: Unable to allocate gamma ramp.",
      (__int64)v8,
      0LL,
      0LL,
      0LL,
      0LL);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    if ( v31[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
    if ( v29 && _InterlockedExchangeAdd64((volatile signed __int64 *)v29 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v29 + 2), v29);
    return 3221225495LL;
  }
}
