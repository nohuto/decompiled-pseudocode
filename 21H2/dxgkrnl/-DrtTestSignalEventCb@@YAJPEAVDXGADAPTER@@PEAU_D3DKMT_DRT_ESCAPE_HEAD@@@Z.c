/*
 * XREFs of ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C02FEF50
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C004FC64 (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     DxgkSignalEventCB @ 0x1C005EAE0 (DxgkSignalEventCB.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C033FB4C (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C033FD90 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0377104 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 */

__int64 __fastcall DrtTestSignalEventCb(
        struct DXGADAPTER *a1,
        struct _D3DKMT_DRT_ESCAPE_HEAD *a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // ebx
  char *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  unsigned __int8 v14; // r8
  unsigned int v16; // ebx
  unsigned int v17; // edi
  unsigned int HostProcess; // eax
  int v19; // eax
  void *v20; // rax
  int DxgAdapterSyncObject; // eax
  struct _KTHREAD **v22; // rcx
  _QWORD *v23; // rcx
  int v24; // eax
  _DXGKARGCB_SIGNALEVENT v25; // [rsp+50h] [rbp-48h] BYREF
  struct DXGADAPTERSYNCOBJECT *v26; // [rsp+A8h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 1) < 0x20u )
    return 3221225485LL;
  *(_QWORD *)&v25.0 = 0LL;
  v26 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2, a3, a4);
  v7 = Current;
  if ( !a1 || !Current )
    return 3221225485LL;
  v8 = 0LL;
  if ( !*((_BYTE *)a2 + 25) )
    goto LABEL_18;
  v9 = *((_DWORD *)a2 + 4);
  v10 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v11 = (v9 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 < *((_DWORD *)v7 + 74) )
  {
    v12 = *((_QWORD *)v7 + 35);
    v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
    if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60) && (v13 & 0x2000) == 0 && (v13 & 0x1F) != 0 )
    {
      if ( (v13 & 0x1F) == 8 )
      {
        v8 = *(_QWORD *)(v12 + 16LL * (unsigned int)v11);
        goto LABEL_12;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v8 = 0LL;
LABEL_12:
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, *((_QWORD *)a2 + 2));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid sync object handle: 0x%I64x",
      *((_QWORD *)a2 + 2),
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !*((_BYTE *)a1 + 209) )
    goto LABEL_22;
  *((_QWORD *)a2 + 2) = DXGSYNCOBJECT::GetHostHandle((DXGSYNCOBJECT *)v8, *((_DWORD *)a2 + 4), v14);
LABEL_18:
  if ( *((_BYTE *)a1 + 209) )
  {
    v16 = *((_DWORD *)a2 + 1);
    v17 = *((_DWORD *)a1 + 1108);
    HostProcess = DXGPROCESS::GetHostProcess(v7);
    v19 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
            (struct DXGADAPTER *)((char *)a1 + 4344),
            HostProcess,
            v17,
            0,
            0,
            D3DKMT_ESCAPE_DRT_TEST,
            0,
            v16,
            (unsigned __int8 *)a2);
    v8 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry1(2LL, v19);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Paravirtualized escape failed: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v8;
  }
LABEL_22:
  v20 = (void *)*((_QWORD *)v7 + 8);
  v25.hDxgkProcess = v20;
  if ( !*((_BYTE *)a2 + 25) )
  {
    if ( !v20 )
      return 3221225485LL;
    v25.hEvent = (HANDLE)*((_QWORD *)a2 + 2);
LABEL_30:
    if ( *((_BYTE *)a2 + 24) )
      v24 = CallDxgkSignalEventCbAtDispatch(&v25);
    else
      v24 = DxgkSignalEventCB(&v25);
    LODWORD(v8) = v24;
    return (unsigned int)v8;
  }
  v25.Flags |= 1u;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 32));
  DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                           (DXGSYNCOBJECT *)v8,
                           *((struct ADAPTER_RENDER **)a1 + 350),
                           &v26);
  v22 = (struct _KTHREAD **)(v8 + 32);
  LODWORD(v8) = DxgAdapterSyncObject;
  DXGFASTMUTEX::Release(v22);
  if ( (int)v8 >= 0 )
  {
    v23 = (_QWORD *)*((_QWORD *)v26 + 5);
    v25.hEvent = v23;
    if ( !v23 || !v23[1] )
    {
      WdLogSingleEntry1(2LL, 137LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid CpuEvent object", 137LL, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    goto LABEL_30;
  }
  WdLogSingleEntry1(2LL, 130LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to get adapter sync object", 130LL, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v8;
}
