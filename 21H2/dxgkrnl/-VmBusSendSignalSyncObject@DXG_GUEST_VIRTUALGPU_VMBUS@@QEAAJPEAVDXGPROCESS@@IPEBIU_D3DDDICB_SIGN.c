/*
 * XREFs of ?VmBusSendSignalSyncObject@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBIU_D3DDDICB_SIGNALFLAGS@@K1PEB_K_KPEBQEAX_N6PEAVDXGDEVICE@@@Z @ 0x1C037CE14
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0310230 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C034166C (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03BD184 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C033FD90 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x1C037E9E4 (-VmBusSendSyncOrAsyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 *     ?VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z @ 0x1C038240C (-VmBusSubmitSignalToHwQueueHelper@@YAJPEAVDXGPROCESS@@_NIIPEBI2PEB_KPEAI4PEA_K@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSignalSyncObject(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned int *a4,
        struct _D3DDDICB_SIGNALFLAGS a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 a9,
        void *const *a10,
        bool a11,
        bool a12,
        struct DXGDEVICE *a13)
{
  __int64 v14; // rbx
  const wchar_t *v15; // r9
  __int64 v16; // rbx
  char v18; // r13
  struct DXGPROCESS *v19; // r10
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // r11d
  __int64 v23; // r10
  unsigned int v24; // edx
  bool v25; // zf
  NTSTATUS v26; // esi
  PVOID v27; // r12
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rax
  const wchar_t *v33; // r9
  unsigned int i; // r13d
  __int64 v35; // rax
  __int64 v36; // r9
  int v37; // ecx
  __int64 v38; // rax
  void *const *v39; // r15
  void *v40; // rcx
  PVOID v41; // rax
  unsigned int j; // r15d
  unsigned int v43; // edx
  unsigned int v44; // r9d
  unsigned int v45; // r12d
  __int64 v46; // r8
  unsigned int v47; // ecx
  DXGSYNCOBJECT *v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // rdx
  unsigned int v51; // ecx
  __int64 v52; // rbx
  __int64 v53; // rbx
  unsigned __int64 *v54; // rdx
  int v57; // [rsp+5Ch] [rbp-1DCh]
  PVOID v58; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 *v59; // [rsp+68h] [rbp-1D0h]
  unsigned int *v60; // [rsp+70h] [rbp-1C8h]
  unsigned __int64 *v61; // [rsp+78h] [rbp-1C0h]
  unsigned int *v62; // [rsp+80h] [rbp-1B8h]
  void *const *v63; // [rsp+88h] [rbp-1B0h]
  PVOID Object; // [rsp+90h] [rbp-1A8h]
  _BYTE v65[24]; // [rsp+98h] [rbp-1A0h] BYREF
  struct DXGPROCESS *v66; // [rsp+B0h] [rbp-188h]
  DXG_GUEST_VIRTUALGPU_VMBUS *v67; // [rsp+C0h] [rbp-178h]
  __int128 v68; // [rsp+D0h] [rbp-168h] BYREF
  int v69; // [rsp+E0h] [rbp-158h]

  v62 = a4;
  v67 = this;
  v66 = a2;
  v61 = a8;
  v63 = a10;
  if ( a3 >= 0x4000 || a6 >= 0x4000 )
  {
    v14 = 8755LL;
    WdLogSingleEntry1(2LL, 8755LL);
    v15 = L"ObjectCount or BroadcastContextCount is too big";
    goto LABEL_93;
  }
  if ( a12 && (!a13 || a6 || a7 || (*(_BYTE *)&a5.0 & 2) != 0) )
  {
    v14 = 8763LL;
    WdLogSingleEntry1(2LL, 8763LL);
    v15 = L"Invalid parameters for signal from CPU";
LABEL_93:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, v14, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v57 = a8 != 0LL ? 8 * a3 : 0;
  v68 = 0LL;
  v69 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v68, this, v57 + 4 * (a6 + a3 + 14), 0LL, 0LL, 0LL);
  v16 = v68;
  if ( !(_QWORD)v68 )
  {
    WdLogSingleEntry1(2LL, 8776LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to allocate memory", 8776LL, 0LL, 0LL, 0LL, 0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v68);
    return 3221225495LL;
  }
  *(_QWORD *)v68 = 0LL;
  *(_DWORD *)(v16 + 8) = 0;
  *(_BYTE *)(v16 + 12) = 0;
  *(_DWORD *)(v16 + 12) &= 0x1FFu;
  *(_QWORD *)(v16 + 16) = 26LL;
  *(_DWORD *)(v16 + 8) = DXGPROCESS::GetHostProcess(a2);
  *(_DWORD *)(v16 + 32) = a6;
  *(struct _D3DDDICB_SIGNALFLAGS *)(v16 + 28) = a5;
  if ( a12 )
    *(_DWORD *)(v16 + 48) = *((_DWORD *)a13 + 110);
  *(_DWORD *)(v16 + 24) = a3;
  *(_QWORD *)(v16 + 40) = a9;
  v60 = (unsigned int *)(v16 + 56);
  v58 = (PVOID)(v16 + 56 + 4LL * a3);
  if ( v57 )
    v59 = (unsigned __int64 *)(v16 + 56 + 4LL * a3 + 4LL * a6);
  else
    v59 = 0LL;
  Object = 0LL;
  v18 = 0;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v65, a2);
  v19 = a2;
  if ( a12 )
    goto LABEL_22;
  v20 = (*a7 >> 6) & 0xFFFFFF;
  v21 = *a7 >> 30;
  v22 = *((_DWORD *)a2 + 74);
  if ( v20 >= v22 )
    goto LABEL_37;
  v23 = *((_QWORD *)a2 + 35);
  v24 = *(_DWORD *)(v23 + 16LL * v20 + 8);
  if ( v21 != ((v24 >> 5) & 3) || (v24 & 0x2000) != 0 || (v24 & 0x1F) != 7 )
  {
    v19 = a2;
    goto LABEL_31;
  }
  v25 = *(_QWORD *)(v23 + 16LL * v20) == 0LL;
  v19 = a2;
  if ( v25 )
  {
LABEL_31:
    if ( v20 < v22 )
    {
      v28 = v20;
      v29 = *((_QWORD *)v19 + 35);
      v30 = *(_DWORD *)(v29 + 16LL * v20 + 8);
      if ( v21 == ((v30 >> 5) & 3) && (v30 & 0x2000) == 0 && (v30 & 0x1F) != 0 )
      {
        v31 = 2 * v28;
        if ( (v30 & 0x1F) == 0xF )
        {
          if ( *(_QWORD *)(v29 + 8 * v31) )
          {
            v18 = 1;
            goto LABEL_22;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
LABEL_37:
    WdLogSingleEntry1(2LL, *a7);
    v32 = *a7;
LABEL_38:
    v33 = L"Invalid context handle: 0x%I64x";
LABEL_39:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v33, v32, 0LL, 0LL, 0LL, 0LL);
    v26 = -1073741811;
    goto LABEL_40;
  }
LABEL_22:
  if ( v18 )
  {
    v26 = VmBusSubmitSignalToHwQueueHelper(v19, a11, a3, a6, a7, v62, v61, (unsigned int *)v58, v60, v59);
    if ( v26 >= 0 )
    {
LABEL_24:
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v65);
      v26 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncOrAsyncMessage(v67, (struct DXGVMBUSMESSAGE *)&v68);
      v27 = Object;
      goto LABEL_25;
    }
LABEL_40:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v65);
    v27 = 0LL;
    goto LABEL_25;
  }
  for ( i = 0; i < a6; ++i )
  {
    v35 = (a7[i] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v35 >= *((_DWORD *)v19 + 74) )
      goto LABEL_51;
    v36 = *((_QWORD *)v19 + 35);
    v37 = *(_DWORD *)(v36 + 16 * v35 + 8);
    if ( ((a7[i] >> 25) & 0x60) != (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60) || (v37 & 0x2000) != 0 || (v37 & 0x1F) == 0 )
      goto LABEL_51;
    if ( (v37 & 0x1F) != 7 )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      v19 = a2;
LABEL_51:
      v38 = 0LL;
      goto LABEL_52;
    }
    v38 = *(_QWORD *)(v36 + 16LL * (unsigned int)v35);
LABEL_52:
    if ( !v38 )
    {
      WdLogSingleEntry1(2LL, a7[i]);
      v32 = a7[i];
      goto LABEL_38;
    }
    *((_DWORD *)v58 + i) = *(_DWORD *)(v38 + 28);
  }
  if ( (*(_BYTE *)&a5.0 & 2) == 0 )
  {
    for ( j = 0; ; ++j )
    {
      if ( j >= a3 )
        goto LABEL_24;
      v43 = (v62[j] >> 6) & 0xFFFFFF;
      v44 = v62[j] >> 30;
      v45 = *((_DWORD *)v19 + 74);
      if ( v43 < v45
        && (v46 = *((_QWORD *)v19 + 35), v47 = *(_DWORD *)(v46 + 16LL * v43 + 8), v44 == ((v47 >> 5) & 3))
        && (v47 & 0x2000) == 0
        && (v47 & 0x1F) == 8 )
      {
        v48 = *(DXGSYNCOBJECT **)(v46 + 16LL * v43);
      }
      else
      {
        v48 = 0LL;
      }
      if ( v48 )
      {
        v60[j] = DXGSYNCOBJECT::GetHostHandle(v48, v62[j]);
        goto LABEL_83;
      }
      if ( v43 >= v45 )
        goto LABEL_80;
      v49 = v43;
      v50 = *((_QWORD *)v19 + 35);
      v51 = *(_DWORD *)(v50 + 16LL * (unsigned int)v49 + 8);
      if ( v44 != ((v51 >> 5) & 3) || (v51 & 0x2000) != 0 || (v51 & 0x1F) == 0 )
        goto LABEL_80;
      v52 = 2 * v49;
      if ( (v51 & 0x1F) != 0xB )
        break;
      v53 = *(_QWORD *)(v50 + 8 * v52);
LABEL_81:
      if ( !v53 )
      {
        WdLogSingleEntry1(2LL, v62[j]);
        v32 = v62[j];
        v33 = L"Invalid sync object handle 0x%I64x";
        goto LABEL_39;
      }
      v60[j] = *(_DWORD *)(v53 + 44);
      v48 = *(DXGSYNCOBJECT **)(v53 + 32);
LABEL_83:
      if ( v57 && *((_DWORD *)v48 + 50) == 5 )
      {
        if ( a11 )
        {
          v54 = &v61[j];
          if ( (unsigned __int64)v54 >= MmUserProbeAddress )
            v54 = (unsigned __int64 *)MmUserProbeAddress;
          v59[j] = *v54;
        }
        else
        {
          v59[j] = v61[j];
        }
      }
      v19 = a2;
    }
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_80:
    v53 = 0LL;
    goto LABEL_81;
  }
  v39 = v63;
  if ( (*((_DWORD *)v19 + 106) & 0x10) != 0 )
  {
    v41 = *v63;
    goto LABEL_62;
  }
  v40 = *v63;
  v58 = 0LL;
  v26 = ObReferenceObjectByHandle(v40, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &v58, 0LL);
  v27 = v58;
  Object = v58;
  if ( v26 >= 0 )
  {
    v41 = v58;
LABEL_62:
    *(_QWORD *)(v16 + 48) = v41;
    goto LABEL_24;
  }
  WdLogSingleEntry1(3LL, *v39);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v65);
LABEL_25:
  if ( v26 < 0 )
  {
    if ( v27 )
      ObfDereferenceObject(v27);
    WdLogSingleEntry1(2LL, v26);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendSignalSyncObject failed: 0x%I64x",
      v26,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v68);
  return (unsigned int)v26;
}
