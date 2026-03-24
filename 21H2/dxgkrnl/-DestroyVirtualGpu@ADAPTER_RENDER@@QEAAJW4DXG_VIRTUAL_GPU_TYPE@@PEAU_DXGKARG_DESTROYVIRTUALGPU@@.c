/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C022F2DC
 * Callers:
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0230F34 (DxgkDdiDestroyVirtualGpu.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00045C8 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005940 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C004005C (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // r12d
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r15
  struct DXGDEVICE *v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KTHREAD **v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  DXGVIRTUALGPUMANAGER *v23; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  DXGVIRTUALGPUMANAGER *v39; // rcx
  struct DXGK_VIRTUAL_GPU *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _BYTE v44[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+38h] [rbp-C8h]
  char v46; // [rsp+40h] [rbp-C0h]
  _BYTE v47[8]; // [rsp+48h] [rbp-B8h] BYREF
  DXGPUSHLOCK *v48; // [rsp+50h] [rbp-B0h]
  int v49; // [rsp+58h] [rbp-A8h]
  _BYTE v50[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v51[8]; // [rsp+70h] [rbp-90h] BYREF
  DXGPUSHLOCK *v52; // [rsp+78h] [rbp-88h]
  int v53; // [rsp+80h] [rbp-80h]
  _BYTE v54[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v55[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v56[88]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v57[144]; // [rsp+130h] [rbp+30h] BYREF

  v4 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v9 = Current;
  if ( Current && (*((_BYTE *)Current + 347) & 8) != 0 )
  {
    if ( !v4 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      v11 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *(unsigned int *)(v10 + 232));
      v12 = *(struct DXGDEVICE **)(v11 + 40);
      if ( v12 )
      {
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
          (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v50,
          v12);
        v45 = v10;
        v46 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, *(_QWORD *)(v11 + 40), 2, v13, 0);
        v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v54, 0LL);
        v18 = (struct _KTHREAD **)v14;
        if ( v14 < 0 )
        {
          v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
          *(_QWORD *)(v19 + 24) = *(_QWORD *)(v11 + 40);
          *(_QWORD *)(v19 + 32) = v18;
          WdLogEvent5_WdWarning(v19);
LABEL_15:
          COREACCESS::~COREACCESS((COREACCESS *)v56);
          COREACCESS::~COREACCESS((COREACCESS *)v55);
          if ( v46 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v50);
          return (unsigned int)v18;
        }
        v20 = *(_QWORD *)(a1 + 1632);
        if ( !v20 )
        {
          v21 = WdLogNewEntry5_WdError(v16, 0LL);
          *(_QWORD *)(v21 + 24) = 1399LL;
          WdLogEvent5_WdError(v21);
LABEL_14:
          LODWORD(v18) = -1073741811;
          goto LABEL_15;
        }
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47, (struct _KTHREAD **)(v20 + 40), 0);
        DXGPUSHLOCK::AcquireExclusive(v48);
        v22 = *a3;
        v23 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1632);
        v49 = 2;
        VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v23, v22);
        if ( !VirtualGpuByIndex )
        {
          v27 = WdLogNewEntry5_WdWarning(0LL, v25, v26);
          *(_QWORD *)(v27 + 24) = *a3;
          WdLogEvent5_WdWarning(v27);
LABEL_13:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
          goto LABEL_14;
        }
        if ( v9 != *((struct DXGPROCESS **)VirtualGpuByIndex + 11) )
        {
          v28 = WdLogNewEntry5_WdError(VirtualGpuByIndex, v25);
          *(_QWORD *)(v28 + 24) = 1412LL;
          WdLogEvent5_WdError(v28);
          goto LABEL_13;
        }
        (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)VirtualGpuByIndex + 144LL))(VirtualGpuByIndex);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
        COREACCESS::~COREACCESS((COREACCESS *)v56);
        COREACCESS::~COREACCESS((COREACCESS *)v55);
        if ( v46 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v50);
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v57, *(struct DXGADAPTER *const *)(a1 + 16), 0LL);
    v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v57, 0LL);
    v18 = (struct _KTHREAD **)v30;
    if ( v30 < 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
      *(_QWORD *)(v34 + 24) = v18;
      WdLogEvent5_WdWarning(v34);
LABEL_40:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v57, v35);
      return (unsigned int)v18;
    }
    if ( v4 == 1 )
      v18 = *(struct _KTHREAD ***)(a1 + 1640);
    else
      v18 = *(struct _KTHREAD ***)(a1 + 1632);
    if ( !v18 )
    {
      v36 = WdLogNewEntry5_WdError(v32, v31);
      *(_QWORD *)(v36 + 24) = 1431LL;
      WdLogEvent5_WdError(v36);
      LODWORD(v18) = -1073741811;
      goto LABEL_40;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v51, v18 + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v52);
    v38 = *a3;
    v53 = 2;
    if ( v4 == 1 )
      v39 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1640);
    else
      v39 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1632);
    if ( v39 && (v40 = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v39, v38), (v38 = (__int64)v40) != 0) )
    {
      if ( v9 == *((struct DXGPROCESS **)v40 + 11) )
      {
        LODWORD(v18) = (*((__int64 (__fastcall **)(struct _KTHREAD **, struct DXGK_VIRTUAL_GPU *))*v18 + 3))(v18, v40);
LABEL_39:
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v51);
        goto LABEL_40;
      }
      v41 = WdLogNewEntry5_WdError(v39, v40);
      *(_QWORD *)(v41 + 24) = 1445LL;
      WdLogEvent5_WdError(v41);
    }
    else
    {
      v42 = WdLogNewEntry5_WdWarning(v39, v38, v37);
      *(_QWORD *)(v42 + 24) = *a3;
      WdLogEvent5_WdWarning(v42);
    }
    LODWORD(v18) = -1073741811;
    goto LABEL_39;
  }
  v43 = WdLogNewEntry5_WdError(v8, v7);
  *(_QWORD *)(v43 + 24) = 1371LL;
  WdLogEvent5_WdError(v43);
  return 3221225485LL;
}
