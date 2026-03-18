/*
 * XREFs of ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C035E010
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z @ 0x1C0357DB0 (-GetTargetPartitionId@DXGVIRTUALGPUMANAGER@@QEAAJIPEAI@Z.c)
 *     ?ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ @ 0x1C03588B0 (-ReportState@DXGK_VIRTUAL_GPU@@QEAAXXZ.c)
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C035DEEC (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::CreateVirtualGpu(
        DXGVIRTUALGPUMANAGER_PARAV *this,
        struct _DXGKARG_CREATEVIRTUALGPU *a2,
        char a3,
        void *a4)
{
  __int64 v4; // rax
  char v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *Current; // r12
  __int64 PartitionId; // rdx
  NTSTATUS v16; // eax
  __int64 v17; // r9
  _DWORD *v18; // r15
  NTSTATUS v19; // eax
  __int64 v20; // r9
  _QWORD *v21; // rsi
  DXGK_VIRTUAL_GPU_PARAV *v22; // rax
  DXGK_VIRTUAL_GPU_PARAV *v23; // rax
  DXGK_VIRTUAL_GPU_PARAV *v24; // rbx
  unsigned int v25; // edi
  char *v26; // r13
  char *v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned int v34; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v35; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct _LUID Luid; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v38; // [rsp+70h] [rbp-90h]
  struct _DXGKARG_CREATEVIRTUALGPU *v39; // [rsp+78h] [rbp-88h]
  _BYTE v40[8]; // [rsp+80h] [rbp-80h] BYREF
  DXGPUSHLOCK *v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-60h] BYREF
  int v44; // [rsp+A8h] [rbp-58h]
  const wchar_t *v45; // [rsp+B0h] [rbp-50h]
  unsigned int *v46; // [rsp+B8h] [rbp-48h]
  int v47; // [rsp+C0h] [rbp-40h]
  unsigned int *v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+E0h] [rbp-20h]
  __int128 v52; // [rsp+E8h] [rbp-18h]
  __int128 v53; // [rsp+F8h] [rbp-8h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  _BYTE v55[144]; // [rsp+110h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 4);
  v39 = a2;
  v38 = *(struct DXGADAPTER **)(v4 + 16);
  v8 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v55, v38, 0LL);
  LODWORD(v11) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v55, 0LL);
  if ( (int)v11 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent(v10, v9, v12, v13);
    if ( !Current )
    {
      WdLogSingleEntry1(1LL, 748LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != nullptr", 748LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40, (struct _KTHREAD **)this + 5, 0);
    DXGPUSHLOCK::AcquireExclusive(v41);
    PartitionId = a2->PartitionId;
    v42 = 2;
    v35 = 0xFFFF;
    LODWORD(v11) = DXGVIRTUALGPUMANAGER::GetTargetPartitionId(this, PartitionId, &v35);
    if ( (int)v11 < 0 )
      goto LABEL_23;
    Luid = 0LL;
    v16 = ZwAllocateLocallyUniqueId(&Luid);
    v11 = v16;
    if ( v16 >= 0 )
    {
      *((_DWORD *)Current + 106) |= 0x40u;
      v18 = (_DWORD *)operator new[](0x10uLL, 0x4B677844u, 256LL, v17);
      if ( v18 )
      {
        Object = 0LL;
        v19 = ObReferenceObjectByHandle(a4, 0x20000u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        v21 = Object;
        LODWORD(v11) = v19;
        if ( v19 >= 0 )
        {
          v8 = 1;
          if ( *((_QWORD *)Object + 4) )
          {
            WdLogSingleEntry1(2LL, 802LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"The device file handle to bind to the new vGPU has already been bound to some other object.",
              802LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v11) = -1073741816;
          }
          else
          {
            v22 = (DXGK_VIRTUAL_GPU_PARAV *)operator new[](0x180uLL, 0x4B677844u, 64LL, v20);
            if ( v22 )
            {
              v23 = DXGK_VIRTUAL_GPU_PARAV::DXGK_VIRTUAL_GPU_PARAV(v22, *((struct ADAPTER_RENDER **)this + 4));
              v24 = v23;
              if ( v23 )
              {
                v25 = v35;
                *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v35) = v23;
                *((_BYTE *)v23 + 153) = a3;
                *((_BYTE *)v23 + 152) = 1;
                v26 = (char *)this + 72;
                *((_QWORD *)v23 + 11) = Current;
                *((_DWORD *)v23 + 6) = v25;
                *(_OWORD *)((char *)v23 + 36) = DXGK_VRD_UMED_CLASID;
                *(struct _LUID *)((char *)v23 + 28) = Luid;
                *(_QWORD *)v18 = v38;
                v18[2] = v25;
                ++*((_DWORD *)this + 4);
                DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALGPUMANAGER_PARAV *)((char *)this + 72));
                v27 = (char *)this + 104;
                v28 = (_QWORD *)((char *)v24 + 120);
                v29 = *(_QWORD *)v27;
                if ( *(char **)(*(_QWORD *)v27 + 8LL) != v27 )
                  __fastfail(3u);
                *v28 = v29;
                *((_QWORD *)v24 + 16) = v27;
                *(_QWORD *)(v29 + 8) = v28;
                *(_QWORD *)v27 = v28;
                *((_QWORD *)v26 + 1) = 0LL;
                ExReleasePushLockExclusiveEx(v26, 0LL);
                KeLeaveCriticalRegion();
                v34 = 1;
                v43 = 0LL;
                v45 = L"GuestIoSpaceSizeInMb";
                v44 = 288;
                v46 = &v34;
                v47 = 67108868;
                v48 = &v34;
                v49 = 4;
                v50 = 0LL;
                v51 = 0;
                v52 = 0LL;
                v54 = 0LL;
                v53 = 0LL;
                if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Paravirtualization", &v43, 0LL, 0LL) >= 0 )
                  *((_QWORD *)DXGGLOBAL_GetGlobal() + 224) = (unsigned __int64)v34 << 20;
                v39->PartitionId = v25;
                v21[4] = v18;
                *((_QWORD *)v24 + 20) = v21;
                ObfDereferenceObject(v21);
                DXGK_VIRTUAL_GPU::ReportState(v24, v30, v31);
                LODWORD(v11) = 0;
                goto LABEL_23;
              }
            }
            WdLogSingleEntry1(6LL, 810LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262145,
              -1,
              (__int64)L"Not enough memory to allocate the DXGK_VIRTUAL_GPU_PARAV for vGPU tracking.",
              810LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(v11) = -1073741801;
          }
        }
        else
        {
          WdLogSingleEntry1(3LL, v19);
        }
        operator delete(v18);
        if ( v8 )
          ObfDereferenceObject(v21);
      }
      else
      {
        WdLogSingleEntry1(6LL, 784LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Not enough memory to allocate the DXGSHAREDVGPUOBJECT for handle tracking.",
          784LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v11) = -1073741801;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v16);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate LUID for virtual GPU, Status: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_23:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v55);
  return (unsigned int)v11;
}
