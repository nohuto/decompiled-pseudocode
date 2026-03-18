/*
 * XREFs of DxgkCreateLightweightDeviceAndContext @ 0x1C0221D74
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01277D0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0002458 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009C94 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009CB8 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E5EDC (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F6230 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0125AD8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C012A150 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

__int64 __fastcall DxgkCreateLightweightDeviceAndContext(struct _LUID *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r13
  struct DXGDEVICE *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  struct DXGADAPTER *v18; // rbx
  char *v19; // rsi
  __int64 v20; // rdx
  struct DXGADAPTER **v21; // rax
  struct DXGADAPTER *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGADAPTER *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r14
  struct DXGADAPTER *v29; // r12
  struct DXGADAPTER *v30; // rdx
  struct DXGADAPTER **v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // rdx
  struct DXGDEVICE *v42; // r14
  struct _D3DDDI_CREATECONTEXTFLAGS v43; // ebx
  int v44; // r13d
  int Device; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  struct DXGADAPTER *v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 CurrentProcess; // rax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  struct DXGADAPTER *v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  ADAPTER_RENDER *v63; // r10
  __int64 v64; // r9
  char v65; // al
  int v66; // r8d
  int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rcx
  _QWORD *v72; // rax
  struct DXGADAPTER *v73; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v74; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v75; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v76; // [rsp+68h] [rbp-98h]
  DXGADAPTER *v77; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v78; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v79[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v80; // [rsp+90h] [rbp-70h]
  struct DXGCONTEXT *v81; // [rsp+98h] [rbp-68h] BYREF
  struct DXGADAPTER *v82[2]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD *v83; // [rsp+B0h] [rbp-50h]
  struct _DXGKARG_QUERYADAPTERINFO v84; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v85[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v86; // [rsp+F0h] [rbp-10h]
  _BYTE v87[144]; // [rsp+100h] [rbp+0h] BYREF

  v83 = a3;
  *a2 = 0;
  v3 = a3;
  *a3 = 0;
  v76 = a2;
  v5 = 0LL;
  v75 = 0LL;
  v81 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v82[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v82, a1);
  v14 = v82[0];
  if ( !v82[0] )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
    v15[3] = a1->HighPart;
    v15[4] = a1->LowPart;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
LABEL_7:
    LODWORD(v17) = -1073741585;
    goto LABEL_53;
  }
  if ( (*((_DWORD *)v82[0] + 87) & 0x100) == 0 )
  {
    v16 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v16 + 24) = v14;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_7;
  }
  v18 = 0LL;
  v19 = (char *)Current + 176;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v19, 0LL);
    *((_QWORD *)v19 + 1) = KeGetCurrentThread();
    v73 = 0LL;
    v21 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v73, v20);
    v22 = v82[0];
    LODWORD(v17) = DxgkpGetPairingAdapters(v82[0], 0LL, v21, &v74, 0LL, 0LL, 0);
    if ( (int)v17 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v73, 0LL);
      goto LABEL_44;
    }
    v25 = v73;
    if ( !v73 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v24, v23);
      *(_QWORD *)(v26 + 24) = 11932LL;
      WdLogEvent5_WdAssertion(v26);
      v25 = v73;
    }
    if ( v18 == v25 )
    {
      LODWORD(v17) = -1073741275;
      v72 = (_QWORD *)WdLogNewEntry5_WdAssertion(v24, v23);
      v72[3] = v73;
      v72[4] = v22;
      v72[5] = -1073741275LL;
      WdLogEvent5_WdAssertion(v72);
      DXGADAPTER_REFERENCE::Assign(&v73, 0LL);
      *((_QWORD *)v19 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v19, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_53;
    }
    v27 = *((_QWORD *)v25 + 338);
    v80 = v27;
    v28 = v27 + 24;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v27 + 24, 0LL);
    v29 = v82[0];
    *(_QWORD *)(v27 + 32) = KeGetCurrentThread();
    v30 = v73;
    if ( v73 == v29 )
      goto LABEL_18;
    v77 = 0LL;
    v31 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v77, (__int64)v73);
    LODWORD(v17) = DxgkpGetPairingAdapters(v29, 0LL, v31, &v78, 0LL, 0LL, 0);
    if ( (int)v17 < 0 )
    {
      DXGADAPTER_REFERENCE::Assign(&v77, 0LL);
LABEL_21:
      *(_QWORD *)(v27 + 32) = 0LL;
      ExReleasePushLockExclusiveEx(v27 + 24, 0LL);
      KeLeaveCriticalRegion();
      DXGADAPTER_REFERENCE::Assign(&v73, 0LL);
LABEL_44:
      *((_QWORD *)v19 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v19, 0LL);
      KeLeaveCriticalRegion();
      v42 = v75;
      goto LABEL_45;
    }
    v18 = v73;
    if ( v73 == v77 )
      break;
    v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
    *(_QWORD *)(v35 + 24) = v73;
    WdLogEvent5_WdWarning(v35);
    DXGADAPTER_REFERENCE::Assign(&v77, 0LL);
    *(_QWORD *)(v28 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v28, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign(&v73, 0LL);
    *((_QWORD *)v19 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER_REFERENCE::Assign(&v77, 0LL);
  v30 = v73;
  v27 = v80;
LABEL_18:
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v87, v30, v29);
  v36 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v87, 0LL);
  v17 = v36;
  if ( v36 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
    v40[3] = v73;
    v40[4] = v29;
    v40[5] = v17;
    WdLogEvent5_WdWarning(v40);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87, v41);
    goto LABEL_21;
  }
  v42 = v75;
  v43.0 = 0;
  v44 = 0;
  while ( 1 )
  {
    v75 = 0LL;
    v5 = v42;
    Device = ADAPTER_RENDER::CreateDevice(
               *((DXGADAPTER ***)v73 + 338),
               (__int64 *)&v75,
               0,
               1,
               v29,
               0,
               0,
               v44 == 0,
               0LL,
               0LL);
    v42 = v75;
    v17 = Device;
    if ( Device < 0 )
    {
      v48 = WdLogNewEntry5_WdError(v47, v46);
      v49 = v73;
      v50 = v48;
      *(_QWORD *)(v48 + 24) = v73;
      CurrentProcess = PsGetCurrentProcess(v49, v51);
      *(_QWORD *)(v50 + 40) = v17;
      *(_QWORD *)(v50 + 32) = CurrentProcess;
      WdLogEvent5_WdError(v50);
      v43.0 = 0;
      goto LABEL_36;
    }
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v87);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v79, v42);
    v54 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v87, 0LL);
    v17 = v54;
    if ( v54 < 0 )
      break;
    v58 = v73;
    *(_QWORD *)v85 = 0LL;
    v86 = 0;
    v59 = *((unsigned int *)v73 + 680);
    v85[1] = *((_DWORD *)v73 + 680);
    v86 = 1;
    if ( (*((_DWORD *)v73 + 87) & 0x10) != 0 )
    {
      memset(&v84, 0, 24);
      v84.Type = DXGKQAITYPE_PREFERREDGPUNODE;
      v84.pOutputData = v85;
      *(_OWORD *)&v84.OutputDataSize = 0LL;
      v84.OutputDataSize = 12;
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v73, &v84, v59) < 0 )
      {
        v62 = WdLogNewEntry5_WdAssertion(v61, v60);
        *(_QWORD *)(v62 + 24) = 12080LL;
        WdLogEvent5_WdAssertion(v62);
      }
      LODWORD(v59) = v85[1];
      v58 = v73;
    }
    v63 = (ADAPTER_RENDER *)*((_QWORD *)v58 + 338);
    v64 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v63 + 2) + 2584LL) + 32LL);
    if ( v64 && (*(_BYTE *)(74LL * (unsigned int)v59 + v64 + 68) & 1) != 0 )
      v43.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)16;
    v65 = ADAPTER_RENDER::NodeSupportsGpuVa(v63, 0, v59);
    v67 = DXGDEVICE::CreateContext(v42, &v81, v66, v86, v43, 0LL, 0, D3DKMT_CLIENTHINT_DX10, v65);
    v43.0 = 0;
    v17 = v67;
    if ( v67 >= 0 )
      goto LABEL_39;
    v69 = WdLogNewEntry5_WdEvent(v68, v53);
    *(_QWORD *)(v69 + 24) = v73;
    *(_QWORD *)(v69 + 32) = v17;
    WdLogEvent5_WdEvent(v69);
    if ( v79[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v79);
LABEL_36:
    if ( (unsigned int)++v44 > 1 )
      goto LABEL_41;
  }
  v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57);
  v70[3] = v73;
  v70[4] = v29;
  v70[5] = v17;
  WdLogEvent5_WdWarning(v70);
LABEL_39:
  if ( v79[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v79);
LABEL_41:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87, v53);
  v71 = v80 + 24;
  *(_QWORD *)(v80 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(v71, 0LL);
  KeLeaveCriticalRegion();
  DXGADAPTER_REFERENCE::Assign(&v73, 0LL);
  *((_QWORD *)v19 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v19, 0LL);
  KeLeaveCriticalRegion();
  v3 = v83;
LABEL_45:
  if ( (int)v17 < 0 )
  {
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v75);
  }
  else
  {
    *v76 = *((_DWORD *)v42 + 109);
    *v3 = *((_DWORD *)v81 + 6);
  }
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v5 + 2), v5);
  }
LABEL_53:
  DXGADAPTER_REFERENCE::Assign(v82, 0LL);
  return (unsigned int)v17;
}
