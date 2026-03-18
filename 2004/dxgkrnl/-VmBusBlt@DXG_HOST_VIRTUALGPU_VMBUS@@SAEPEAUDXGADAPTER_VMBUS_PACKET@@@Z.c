/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BC60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004050 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0025A6C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027ED7C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusBlt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct _KTHREAD **Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGPROCESS *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r9
  char *v23; // rcx
  unsigned int v24; // r8d
  struct tagRECT v25; // xmm1
  unsigned int v26; // edx
  int v27; // eax
  char *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v33; // [rsp+38h] [rbp-C8h]
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v35; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v36; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGCONTEXT *v37; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v39[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h]
  char v41; // [rsp+90h] [rbp-70h]
  _BYTE v42[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v43[8]; // [rsp+A8h] [rbp-58h] BYREF
  DXGPUSHLOCK *v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp-48h]
  struct tagRECT v46; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v47; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v48[8]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v49[64]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v50[88]; // [rsp+128h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v44);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v45 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v8 = v7;
    if ( v7 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
      v10 = 16LL * *(unsigned int *)(v7 + 72);
      if ( v10 > 0xFFFFFFFF
        || (v11 = (unsigned int)(v10 + 80), (unsigned int)v10 >= 0xFFFFFFB0)
        || (v12 = (unsigned int)(v11 + *(_DWORD *)(v8 + 76)), (unsigned int)v12 < (unsigned int)v11)
        || (unsigned int)v12 > *((_DWORD *)a1 + 22) )
      {
        v34 = -1073741811;
      }
      else
      {
        v36 = 0LL;
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v11, v12);
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, *(unsigned int *)(v8 + 24), Current, &v36);
        if ( v36 )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38, v36);
          v37 = 0LL;
          v19 = DXGPROCESS::GetCurrent(v18, v17);
          DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v42, *(_DWORD *)(v8 + 28), v19, &v37, 0);
          if ( v37 )
          {
            DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v37 + 464));
            v40 = v9;
            v41 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v36, 0, v22, 0);
            v34 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v48, 0LL);
            if ( v34 >= 0 )
            {
              v24 = *(_DWORD *)(v8 + 36);
              v25 = *(struct tagRECT *)(v8 + 40);
              v26 = *(_DWORD *)(v8 + 32);
              v33 = *(_DWORD *)(v8 + 72);
              v46 = *(struct tagRECT *)(v8 + 56);
              v47 = v25;
              v27 = DXGCONTEXT::BltFromVm(
                      v37,
                      v26,
                      v24,
                      0,
                      &v37,
                      &v47,
                      &v46,
                      v33,
                      (const struct tagRECT *)(v8 + 80),
                      (struct COREDEVICEACCESS *)v48);
              v28 = (char *)v37 + 464;
              v34 = v27;
              *((_QWORD *)v37 + 59) = 0LL;
              ExReleasePushLockExclusiveEx(v28, 0LL);
              KeLeaveCriticalRegion();
              if ( v34 < 0 )
              {
                v31 = WdLogNewEntry5_WdError(v30, v29);
                *(_QWORD *)(v31 + 24) = v34;
                WdLogEvent5_WdError(v31);
              }
            }
            else
            {
              v23 = (char *)v37 + 464;
              *((_QWORD *)v37 + 59) = 0LL;
              ExReleasePushLockExclusiveEx(v23, 0LL);
              KeLeaveCriticalRegion();
            }
            COREACCESS::~COREACCESS((COREACCESS *)v50);
            COREACCESS::~COREACCESS((COREACCESS *)v49);
            if ( v41 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v39);
          }
          else
          {
            v21 = WdLogNewEntry5_WdError(0LL, v20);
            *(_QWORD *)(v21 + 24) = *(unsigned int *)(v8 + 24);
            WdLogEvent5_WdError(v21);
            v34 = -1073741811;
          }
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v42);
          if ( v38[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v38);
        }
        else
        {
          v16 = WdLogNewEntry5_WdError(v15, v14);
          *(_QWORD *)(v16 + 24) = *(unsigned int *)(v8 + 24);
          WdLogEvent5_WdError(v16);
          v34 = -1073741811;
        }
        if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
      }
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v34, 4u);
      v5 = 1;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 1688LL;
    WdLogEvent5_WdError(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  return v5;
}
