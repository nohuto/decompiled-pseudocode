/*
 * XREFs of DxgkCreateLightweightDeviceAndContext @ 0x1C02D0B18
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000969C (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000A59C (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0168698 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C016A9E0 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateLightweightDeviceAndContext(struct _LUID *a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  struct DXGDEVICE *v5; // r15
  struct DXGPROCESS *Current; // rsi
  struct DXGADAPTER *v8; // rdi
  struct DXGADAPTER *v9; // rbx
  char *v10; // rsi
  struct DXGADAPTER **v11; // rax
  struct DXGADAPTER *v12; // r14
  __int64 v13; // rdi
  struct DXGADAPTER *v14; // rdx
  __int64 v15; // r14
  struct DXGADAPTER *v16; // rbx
  struct DXGADAPTER *v17; // rdx
  struct DXGADAPTER **v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  struct DXGDEVICE *v21; // r14
  unsigned int v22; // edx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 CurrentProcess; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // eax
  struct DXGADAPTER *v35; // rcx
  struct _D3DDDI_CREATECONTEXTFLAGS v36; // ebx
  __int64 v37; // r8
  ADAPTER_RENDER *v38; // r10
  __int64 v39; // r9
  char v40; // al
  unsigned int v41; // r8d
  int v42; // eax
  __int64 v43; // rcx
  struct DXGADAPTER *v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  struct DXGDEVICE *v46; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  _DWORD *v49; // [rsp+88h] [rbp-78h]
  struct DXGADAPTER *v50[2]; // [rsp+90h] [rbp-70h] BYREF
  DXGADAPTER *v51; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v52; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v53[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGCONTEXT *v54; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD *v55; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_QUERYADAPTERINFO v56; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v57[2]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v58; // [rsp+108h] [rbp+8h]
  _BYTE v59[144]; // [rsp+110h] [rbp+10h] BYREF

  v49 = a3;
  *a2 = 0;
  *a3 = 0;
  v5 = 0LL;
  v55 = a2;
  v46 = 0LL;
  v54 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2, (__int64)a3, a4);
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
  v50[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v50, a1);
  v8 = v50[0];
  if ( !v50[0] )
  {
    WdLogSingleEntry3(3LL, a1->HighPart, a1->LowPart, -1073741811LL);
    goto LABEL_50;
  }
  if ( (*((_DWORD *)v50[0] + 109) & 0x100) == 0 )
  {
    WdLogSingleEntry2(2LL, v50[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter (0x%I64x) is not a indirect display adapter, returning 0x%I64x.",
      (__int64)v8,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_50:
    LODWORD(v13) = -1073741585;
    goto LABEL_51;
  }
  v9 = 0LL;
  v10 = (char *)Current + 216;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    *((_QWORD *)v10 + 1) = KeGetCurrentThread();
    v44 = 0LL;
    v11 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v44);
    v12 = v50[0];
    LODWORD(v13) = DxgkpGetPairingAdapters(v50[0], 0, v11, &v45, 0LL, 0LL, 0);
    if ( (int)v13 < 0 )
      goto LABEL_19;
    v14 = v44;
    if ( !v44 )
    {
      WdLogSingleEntry1(1LL, 12034LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"RenderAdapterRef", 12034LL, 0LL, 0LL, 0LL, 0LL);
      v14 = v44;
    }
    if ( v9 == v14 )
    {
      LODWORD(v13) = -1073741275;
      WdLogSingleEntry3(1LL, v14, v12, -1073741275LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v44,
        (__int64)v12,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign(&v44, 0LL);
      *((_QWORD *)v10 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v10, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_51;
    }
    v48 = *((_QWORD *)v14 + 350);
    v15 = v48 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v15, 0LL);
    v16 = v50[0];
    *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
    v17 = v44;
    if ( v44 == v16 )
      goto LABEL_15;
    v51 = 0LL;
    v18 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v51);
    LODWORD(v13) = DxgkpGetPairingAdapters(v16, 0, v18, &v52, 0LL, 0LL, 0);
    if ( (int)v13 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v51, 0LL);
      goto LABEL_18;
    }
    v9 = v44;
    if ( v44 == v51 )
      break;
    WdLogSingleEntry1(3LL, v44);
    DXGADAPTER_REFERENCE::Assign(&v51, 0LL);
    *(_QWORD *)(v15 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v44, 0LL);
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER_REFERENCE::Assign(&v51, 0LL);
  v17 = v44;
  v16 = v50[0];
LABEL_15:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, v17, v16);
  v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v59, 0LL);
  LODWORD(v13) = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry3(3LL, v44, v16, v19);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
LABEL_18:
    v20 = v48 + 24;
    *(_QWORD *)(v48 + 32) = 0LL;
    ExReleasePushLockExclusiveEx(v20, 0LL);
    KeLeaveCriticalRegion();
LABEL_19:
    DXGADAPTER_REFERENCE::Assign(&v44, 0LL);
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    v21 = v46;
    goto LABEL_20;
  }
  v21 = v46;
  v22 = 0;
  v47 = 0;
  while ( 1 )
  {
    v46 = 0LL;
    v5 = v21;
    v23 = ADAPTER_RENDER::CreateDevice(*((_QWORD *)v44 + 350), &v46, 0, 1, v16, 0, 0, v22 == 0, 0LL, 0LL, 0);
    v21 = v46;
    v13 = v23;
    if ( v23 < 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v25, v24, v26, v27);
      WdLogSingleEntry3(2LL, v44, CurrentProcess, v13);
      v33 = PsGetCurrentProcess(v30, v29, v31, v32);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create CDD DXGDEVICE for adapter 0x%I64x in process 0x%I64x (Status = 0x%I64x).",
        (__int64)v44,
        v33,
        v13,
        0LL,
        0LL);
      goto LABEL_40;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v59);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v53, v21);
    v34 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v59, 0LL);
    LODWORD(v13) = v34;
    if ( v34 < 0 )
      break;
    v35 = v44;
    *(_QWORD *)v57 = 0LL;
    v58 = 0;
    v36.0 = 0;
    v37 = *((unsigned int *)v44 + 704);
    v57[1] = *((_DWORD *)v44 + 704);
    v58 = 1;
    if ( (*((_DWORD *)v44 + 109) & 0x10) != 0 )
    {
      memset(&v56, 0, 24);
      v56.Type = DXGKQAITYPE_PREFERREDGPUNODE;
      v56.pOutputData = v57;
      *(_OWORD *)&v56.OutputDataSize = 0LL;
      v56.OutputDataSize = 12;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v44, &v56, v37) < 0 )
      {
        WdLogSingleEntry1(1LL, 12182LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 12182LL, 0LL, 0LL, 0LL, 0LL);
      }
      LODWORD(v37) = v57[1];
      v35 = v44;
    }
    v38 = (ADAPTER_RENDER *)*((_QWORD *)v35 + 350);
    v39 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 2) + 2680LL) + 32LL);
    if ( v39 && (*(_BYTE *)(74LL * (unsigned int)v37 + v39 + 68) & 1) != 0 )
      v36.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
    v40 = ADAPTER_RENDER::NodeSupportsGpuVa(v38, 0, v37);
    v42 = DXGDEVICE::CreateContext(v21, &v54, v41, v58, v36, 0LL, 0, D3DKMT_CLIENTHINT_DX10, v40);
    LODWORD(v13) = v42;
    if ( v42 >= 0 )
      goto LABEL_43;
    WdLogSingleEntry2(4LL, v44, v42);
    if ( v53[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v53);
LABEL_40:
    v16 = v50[0];
    v22 = v47 + 1;
    v47 = v22;
    if ( v22 > 1 )
      goto LABEL_45;
  }
  WdLogSingleEntry3(3LL, v44, v16, v34);
LABEL_43:
  if ( v53[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v53);
LABEL_45:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
  v43 = v48 + 24;
  *(_QWORD *)(v48 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(v43, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER_REFERENCE::Assign(&v44, 0LL);
  *((_QWORD *)v10 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( (int)v13 >= 0 )
  {
    *v55 = *((_DWORD *)v21 + 109);
    *v49 = *((_DWORD *)v54 + 6);
    goto LABEL_23;
  }
LABEL_20:
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v46 + 2), v46);
LABEL_23:
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
  }
LABEL_51:
  DXGADAPTER_REFERENCE::Assign(v50, 0LL);
  return (unsigned int)v13;
}
