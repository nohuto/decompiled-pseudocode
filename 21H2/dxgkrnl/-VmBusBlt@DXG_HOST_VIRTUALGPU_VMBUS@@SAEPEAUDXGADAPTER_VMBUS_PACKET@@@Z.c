/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0366B70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C604 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C032F268 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  struct _KTHREAD **Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DXGPROCESS *v17; // rax
  __int64 v18; // r9
  char *v19; // rcx
  unsigned int v20; // r8d
  struct tagRECT v21; // xmm1
  unsigned int v22; // edx
  int v23; // eax
  char *v24; // rcx
  UINT v26; // [rsp+40h] [rbp-C8h]
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGDEVICE *v28; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGDEVICE *v29; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGCONTEXT *v30; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v31[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v32[8]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v33; // [rsp+90h] [rbp-78h]
  char v34; // [rsp+98h] [rbp-70h]
  _BYTE v35[16]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v36[8]; // [rsp+B0h] [rbp-58h] BYREF
  DXGPUSHLOCK *v37; // [rsp+B8h] [rbp-50h]
  int v38; // [rsp+C0h] [rbp-48h]
  struct tagRECT v39; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v40; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v41[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v42[64]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v43[88]; // [rsp+130h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v37);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v38 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v7 = v4;
    if ( v4 )
    {
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL);
      v9 = 16LL * *(unsigned int *)(v4 + 72);
      if ( v9 > 0xFFFFFFFF
        || (v10 = (unsigned int)(v9 + 80), (unsigned int)v9 >= 0xFFFFFFB0)
        || (v11 = (unsigned int)(v10 + *(_DWORD *)(v7 + 76)), (unsigned int)v11 < (unsigned int)v10)
        || (unsigned int)v11 > *((_DWORD *)a1 + 36) )
      {
        LODWORD(v27) = -1073741811;
      }
      else
      {
        v29 = 0LL;
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v10, v11, v5, v6);
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v28, *(_DWORD *)(v7 + 24), Current, &v29);
        if ( v29 )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31, v29);
          v30 = 0LL;
          v17 = DXGPROCESS::GetCurrent(v14, v13, v15, v16);
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35, *(_DWORD *)(v7 + 28), v17, &v30, 0, 1);
          if ( v30 )
          {
            DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v30 + 448));
            v33 = v8;
            v34 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v29, 0, v18, 0);
            LODWORD(v27) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41, 0LL);
            if ( (int)v27 >= 0 )
            {
              v20 = *(_DWORD *)(v7 + 36);
              v21 = *(struct tagRECT *)(v7 + 40);
              v22 = *(_DWORD *)(v7 + 32);
              v26 = *(_DWORD *)(v7 + 72);
              v39 = *(struct tagRECT *)(v7 + 56);
              v40 = v21;
              v23 = DXGCONTEXT::BltFromVm(
                      v30,
                      v22,
                      v20,
                      0LL,
                      &v30,
                      &v40,
                      &v39,
                      v26,
                      (const struct tagRECT *)(v7 + 80),
                      (struct COREDEVICEACCESS *)v41);
              v24 = (char *)v30 + 448;
              LODWORD(v27) = v23;
              *((_QWORD *)v30 + 57) = 0LL;
              ExReleasePushLockExclusiveEx(v24, 0LL);
              KeLeaveCriticalRegion();
              if ( (int)v27 < 0 )
              {
                WdLogSingleEntry1(2LL, (int)v27);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"VmBusBlt failed: 0x%I64x",
                  (int)v27,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              v19 = (char *)v30 + 448;
              *((_QWORD *)v30 + 57) = 0LL;
              ExReleasePushLockExclusiveEx(v19, 0LL);
              KeLeaveCriticalRegion();
            }
            COREACCESS::~COREACCESS((COREACCESS *)v43);
            COREACCESS::~COREACCESS((COREACCESS *)v42);
            if ( v34 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
          }
          else
          {
            WdLogSingleEntry1(2LL, *(unsigned int *)(v7 + 24));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Invalid device handle: 0x%I64x",
              *(unsigned int *)(v7 + 24),
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v27) = -1073741811;
          }
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v35);
          if ( v31[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
        }
        else
        {
          WdLogSingleEntry1(2LL, *(unsigned int *)(v7 + 24));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid device handle: 0x%I64x",
            *(unsigned int *)(v7 + 24),
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v27) = -1073741811;
        }
        if ( v28 && _InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v28 + 2), v28);
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v27, 4u);
      v3 = 1;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 2025LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      2025LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  return v3;
}
