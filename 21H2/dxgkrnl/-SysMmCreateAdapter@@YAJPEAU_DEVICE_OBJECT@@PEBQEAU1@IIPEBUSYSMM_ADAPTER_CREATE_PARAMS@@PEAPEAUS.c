/*
 * XREFs of ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C01F5A3C
 * Callers:
 *     DpiFdoCreateSysMmAdapter @ 0x1C01F58C8 (DpiFdoCreateSysMmAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??$SmmInitializeSpinLock@$01@@YAXPEAU?$SYSMM_SPINLOCK@$01@@@Z @ 0x1C001FB44 (--$SmmInitializeSpinLock@$01@@YAXPEAU-$SYSMM_SPINLOCK@$01@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z @ 0x1C01F5C4C (-SmmInitializeIommu@@YAXPEAUSYSMM_IOMMU@@PEBUSYSMM_ADAPTER_CREATE_PARAMS@@@Z.c)
 *     SmmInitializeDmaDevices @ 0x1C01F5D4C (SmmInitializeDmaDevices.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C05BC (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03C08B4 (-SysMmEnableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03C0EA4 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03C10D4 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 */

__int64 __fastcall SysMmCreateAdapter(
        struct _DEVICE_OBJECT *a1,
        struct _DEVICE_OBJECT *const *a2,
        unsigned int a3,
        int a4,
        const struct SYSMM_ADAPTER_CREATE_PARAMS *a5,
        struct SYSMM_ADAPTER **a6)
{
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  char v10; // bp
  char *v11; // rax
  char *v12; // rdi
  int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 Pool2; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v20; // rbx
  int v21; // eax
  int v22; // eax
  int LogicalAllocator; // eax
  int v24; // eax
  _DWORD SystemInformation[16]; // [rsp+60h] [rbp-78h] BYREF

  v7 = a3;
  v8 = *(_QWORD *)a5;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0
    || v8 < (unsigned __int64)SystemInformation[5] << 12 )
  {
    v10 = 0;
    if ( (*((_DWORD *)a5 + 4) & 4) == 0 )
      return 3221225473LL;
  }
  else
  {
    v10 = 1;
  }
  v11 = (char *)operator new[](0x170uLL, 0x30737844u, 64LL, v9);
  v12 = v11;
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1C0130B30);
    WdLogSingleEntry1(6LL, 350LL);
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocate SYSMM_ADAPTER", 350LL, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v20) = -1073741801;
    goto LABEL_33;
  }
  memset(v11, 0, 0x170uLL);
  *((_QWORD *)v12 + 33) = 0LL;
  *((_DWORD *)v12 + 60) = 56;
  *((_QWORD *)v12 + 34) = 4096LL;
  *(_QWORD *)v12 = a1;
  *((_DWORD *)v12 + 4) = a4;
  *((_QWORD *)v12 + 45) = 0LL;
  *((_DWORD *)v12 + 6) = v7;
  *((_QWORD *)v12 + 1) = *(_QWORD *)a5;
  *((_DWORD *)v12 + 5) = 0;
  v13 = *((_DWORD *)a5 + 3) & 1;
  *((_DWORD *)v12 + 5) = v13;
  *((_DWORD *)v12 + 5) = v13 | *((_DWORD *)a5 + 3) & 2;
  *((_QWORD *)v12 + 44) = 0LL;
  *((_DWORD *)v12 + 7) = *((_DWORD *)a5 + 2);
  SmmInitializeSpinLock<2>((_DWORD *)v12 + 8);
  *((_QWORD *)v12 + 6) = v12 + 40;
  *((_QWORD *)v12 + 5) = v12 + 40;
  SmmInitializeIommu((struct SYSMM_IOMMU *)(v12 + 64), a5);
  v14 = v7;
  Pool2 = ExAllocatePool2(256LL, 16 * v7, 930314308LL, v15);
  *((_QWORD *)v12 + 45) = Pool2;
  if ( Pool2 )
  {
    if ( (_DWORD)v7 )
    {
      v17 = 0LL;
      do
      {
        v18 = (__int64)*a2;
        v17 += 16LL;
        ++a2;
        *(_QWORD *)(*((_QWORD *)v12 + 45) + v17 - 8) = v18;
        --v14;
      }
      while ( v14 );
    }
    if ( (*((_DWORD *)a5 + 3) & 1) != 0 )
      goto LABEL_10;
    LODWORD(v20) = SmmInitializeDmaDevices(v12);
    if ( (int)v20 < 0 )
      goto LABEL_31;
    if ( (*((_DWORD *)a5 + 3) & 2) != 0 )
      goto LABEL_10;
    v21 = SmmUnblockDevice((struct SYSMM_ADAPTER *)v12);
    v20 = v21;
    if ( v21 < 0 )
      goto LABEL_30;
    if ( (dword_1C0130B08 & 3) == 0 || (v22 = SysMmEnableIommu(v12, 8LL), LODWORD(v20) = v22, v22 >= 0) )
    {
LABEL_22:
      if ( v10 )
      {
        if ( (dword_1C0130B08 & 0x80u) == 0 || (*((_DWORD *)a5 + 4) & 4) == 0 )
          goto LABEL_10;
      }
      else if ( (*((_DWORD *)a5 + 4) & 4) == 0 )
      {
        WdLogSingleEntry1(1LL, 446LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pCreateParams->Iommu.DmaRemappingSupported",
          446LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)v12 + 20) |= 1u;
      LogicalAllocator = SmmCreateLogicalAllocator(*(_QWORD *)a5 + 1LL, (struct SYSMM_LOGICAL_ALLOCATOR **)v12 + 44);
      v20 = LogicalAllocator;
      if ( LogicalAllocator < 0 || (v24 = SysMmEnableIommu(v12, 2LL), v20 = v24, v24 < 0) )
      {
LABEL_30:
        WdLogSingleEntry1(4LL, v20);
        goto LABEL_31;
      }
LABEL_10:
      *a6 = (struct SYSMM_ADAPTER *)v12;
      return 0LL;
    }
    if ( (dword_1C0130B08 & 3) == 2 )
    {
      WdLogSingleEntry1(4LL, v22);
      goto LABEL_22;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C0130B30);
    WdLogSingleEntry1(6LL, 374LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate SYSMM_PHYSICAL_ADAPTER array",
      374LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v20) = -1073741801;
  }
LABEL_31:
  SysMmDestroyAdapter((struct SYSMM_ADAPTER *)v12);
LABEL_33:
  *a6 = 0LL;
  return (unsigned int)v20;
}
