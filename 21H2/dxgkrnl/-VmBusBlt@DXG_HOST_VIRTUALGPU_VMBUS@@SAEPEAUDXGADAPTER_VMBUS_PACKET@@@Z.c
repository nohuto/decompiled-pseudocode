/*
 * XREFs of ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BA80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C00042E4 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0004594 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00269EC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_BLT@@@@YAPEAUDXGKVMB_COMMAND_BLT@@PEAUDXGADAPTER_VMBUS_PA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027F03C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
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
  struct DXGDEVICE *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGPROCESS *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct DXGCONTEXT *v23; // rax
  __int64 v24; // r9
  char *v25; // rcx
  unsigned int v26; // r8d
  struct tagRECT v27; // xmm1
  unsigned int v28; // edx
  int v29; // eax
  char *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v35; // [rsp+40h] [rbp-C8h]
  __int64 v36; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGDEVICE *v39[2]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v40[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v41; // [rsp+88h] [rbp-80h]
  char v42; // [rsp+90h] [rbp-78h]
  _BYTE v43[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v44[8]; // [rsp+A8h] [rbp-60h] BYREF
  DXGPUSHLOCK *v45; // [rsp+B0h] [rbp-58h]
  int v46; // [rsp+B8h] [rbp-50h]
  struct tagRECT v47; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v48; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v49[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v50[64]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v51[88]; // [rsp+130h] [rbp+28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v45);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v46 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_BLT>((__int64)a1);
    v8 = v7;
    if ( !v7 )
      goto LABEL_25;
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
    v10 = 16LL * *(unsigned int *)(v7 + 72);
    if ( v10 > 0xFFFFFFFF
      || (v11 = (unsigned int)(v10 + 80), (unsigned int)v10 >= 0xFFFFFFB0)
      || (v12 = (unsigned int)(v11 + *(_DWORD *)(v8 + 76)), (unsigned int)v12 < (unsigned int)v11)
      || (unsigned int)v12 > *((_DWORD *)a1 + 22) )
    {
      LODWORD(v36) = -1073741811;
      goto LABEL_24;
    }
    v39[0] = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v11, v12);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, *(unsigned int *)(v8 + 24), Current, v39);
    v16 = v39[0];
    if ( !v39[0] )
    {
      v17 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v17 + 24) = *(unsigned int *)(v8 + 24);
      WdLogEvent5_WdError(v17);
      LODWORD(v36) = -1073741811;
LABEL_10:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38);
LABEL_24:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v36, 4u);
      v5 = 1;
      goto LABEL_25;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43, v39[0]);
    v37 = 0LL;
    v20 = DXGPROCESS::GetCurrent(v19, v18);
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39, *(_DWORD *)(v8 + 28), v20, &v37, 0);
    if ( v37 )
    {
      if ( *((struct DXGDEVICE **)v37 + 2) == v16 )
      {
        DXGPUSHLOCK::AcquireExclusive((struct DXGCONTEXT *)((char *)v37 + 464));
        v41 = v9;
        v42 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v49, (__int64)v16, 0, v24, 0);
        LODWORD(v36) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v49, 0LL);
        if ( (int)v36 >= 0 )
        {
          v26 = *(_DWORD *)(v8 + 36);
          v27 = *(struct tagRECT *)(v8 + 40);
          v28 = *(_DWORD *)(v8 + 32);
          v35 = *(_DWORD *)(v8 + 72);
          v47 = *(struct tagRECT *)(v8 + 56);
          v48 = v27;
          v29 = DXGCONTEXT::BltFromVm(
                  v37,
                  v28,
                  v26,
                  0,
                  &v37,
                  &v48,
                  &v47,
                  v35,
                  (const struct tagRECT *)(v8 + 80),
                  (struct COREDEVICEACCESS *)v49);
          v30 = (char *)v37 + 464;
          LODWORD(v36) = v29;
          *((_QWORD *)v37 + 59) = 0LL;
          ExReleasePushLockExclusiveEx(v30, 0LL);
          KeLeaveCriticalRegion();
          if ( (int)v36 < 0 )
          {
            v33 = WdLogNewEntry5_WdError(v32, v31);
            *(_QWORD *)(v33 + 24) = (int)v36;
            WdLogEvent5_WdError(v33);
          }
        }
        else
        {
          v25 = (char *)v37 + 464;
          *((_QWORD *)v37 + 59) = 0LL;
          ExReleasePushLockExclusiveEx(v25, 0LL);
          KeLeaveCriticalRegion();
        }
        COREACCESS::~COREACCESS((COREACCESS *)v51);
        COREACCESS::~COREACCESS((COREACCESS *)v50);
        if ( v42 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        goto LABEL_14;
      }
      v22 = WdLogNewEntry5_WdError(v37, v21);
      v23 = v37;
      *(_QWORD *)(v22 + 32) = v16;
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(0LL, v21);
      v23 = (struct DXGCONTEXT *)*(unsigned int *)(v8 + 24);
    }
    *(_QWORD *)(v22 + 24) = v23;
    WdLogEvent5_WdError(v22);
    LODWORD(v36) = -1073741811;
LABEL_14:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v43);
    goto LABEL_10;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 1690LL;
  WdLogEvent5_WdError(v6);
LABEL_25:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44);
  return v5;
}
