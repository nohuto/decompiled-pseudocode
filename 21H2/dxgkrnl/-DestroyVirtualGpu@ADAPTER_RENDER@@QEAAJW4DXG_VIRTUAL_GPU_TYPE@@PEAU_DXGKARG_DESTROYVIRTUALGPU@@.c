/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0357004
 * Callers:
 *     DxgkDdiDestroyVirtualGpu @ 0x1C03594BC (DxgkDdiDestroyVirtualGpu.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C000A448 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  int v5; // r15d
  struct DXGPROCESS *Current; // rax
  DXGPROCESS *v8; // rcx
  __int64 v9; // rbx
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // r14
  struct DXGDEVICE *v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  struct _KTHREAD **v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE v24[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  char v26; // [rsp+60h] [rbp-A0h]
  _BYTE v27[8]; // [rsp+68h] [rbp-98h] BYREF
  DXGPUSHLOCK *v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+78h] [rbp-88h]
  _BYTE v30[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[8]; // [rsp+90h] [rbp-70h] BYREF
  DXGPUSHLOCK *v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+A0h] [rbp-60h]
  _BYTE v34[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v35[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v36[88]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v37[144]; // [rsp+150h] [rbp+50h] BYREF

  v5 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2, (__int64)a3, a4);
  if ( Current && (*((_DWORD *)Current + 106) & 0xC0) != 0 )
  {
    v8 = (DXGPROCESS *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 175);
    if ( !v5 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(v8, *(_DWORD *)(v9 + 240));
      v11 = (struct DXGDEVICE *)*((_QWORD *)RenderAdapterInfo + 5);
      if ( v11 )
      {
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
          (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30,
          v11);
        v25 = v9;
        v26 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, *((_QWORD *)RenderAdapterInfo + 5), 2, v12, 0);
        v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34, 0LL);
        v14 = v13;
        if ( v13 < 0 )
        {
          WdLogSingleEntry2(3LL, *((_QWORD *)RenderAdapterInfo + 5), v13);
LABEL_18:
          COREACCESS::~COREACCESS((COREACCESS *)v36);
          COREACCESS::~COREACCESS((COREACCESS *)v35);
          if ( v26 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
          return v14;
        }
        v15 = *(_QWORD *)(a1 + 1728);
        if ( !v15 )
        {
          WdLogSingleEntry1(2LL, 1607LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Destroying invalid virtual GPU",
            1607LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v14 = -1073741811;
          goto LABEL_18;
        }
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, (struct _KTHREAD **)(v15 + 40), 0);
        DXGPUSHLOCK::AcquireExclusive(v28);
        v16 = *(_QWORD *)(a1 + 1728);
        v17 = *a3;
        v29 = 2;
        if ( v17 >= *(_DWORD *)(v16 + 12)
          || !*(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL * v17)
          || (_mm_lfence(), (v18 = *(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL * v17)) == 0) )
        {
          WdLogSingleEntry1(3LL, *a3);
          v14 = -1073741811;
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
          goto LABEL_18;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 144LL))(v18);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
        COREACCESS::~COREACCESS((COREACCESS *)v36);
        COREACCESS::~COREACCESS((COREACCESS *)v35);
        if ( v26 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v24);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, *(struct DXGADAPTER *const *)(a1 + 16), 0LL);
    v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37, 0LL);
    v14 = v19;
    if ( v19 >= 0 )
    {
      if ( v5 == 1 )
        v21 = *(struct _KTHREAD ***)(a1 + 1736);
      else
        v21 = *(struct _KTHREAD ***)(a1 + 1728);
      if ( v21 )
      {
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31, v21 + 5, 0);
        DXGPUSHLOCK::AcquireExclusive(v32);
        v22 = *a3;
        v33 = 2;
        if ( v5 == 1 )
          v23 = *(_QWORD *)(a1 + 1736);
        else
          v23 = *(_QWORD *)(a1 + 1728);
        if ( v23 && (unsigned int)v22 < *(_DWORD *)(v23 + 12) && *(_QWORD *)(*(_QWORD *)(v23 + 24) + 8 * v22) )
        {
          v14 = (*((__int64 (__fastcall **)(struct _KTHREAD **))*v21 + 3))(v21);
        }
        else
        {
          WdLogSingleEntry1(3LL, v22);
          v14 = -1073741811;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
      }
      else
      {
        WdLogSingleEntry1(2LL, 1633LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Destroying invalid virtual GPU",
          1633LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v14 = -1073741811;
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v19);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
    return v14;
  }
  WdLogSingleEntry1(2LL, 1577LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Only VVMS or VMWP process can destroy vGPU",
    1577LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
