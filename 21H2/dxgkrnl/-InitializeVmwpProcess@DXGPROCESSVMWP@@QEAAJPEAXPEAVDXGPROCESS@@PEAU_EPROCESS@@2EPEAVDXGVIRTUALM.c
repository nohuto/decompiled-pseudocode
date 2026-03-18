/*
 * XREFs of ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C033693C
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0050460 (DxgkDeviceIoctl.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C035EDB0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0360E10 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C03349D8 (--0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z.c)
 */

__int64 __fastcall DXGPROCESSVMWP::InitializeVmwpProcess(
        DXGPROCESSVMWP *this,
        void *a2,
        struct DXGPROCESS *a3,
        struct _EPROCESS *a4,
        struct _EPROCESS *Object,
        unsigned __int8 a6,
        struct DXGVIRTUALMACHINE *a7)
{
  DXGVIRTUALMACHINE *v11; // rax
  __int64 v13; // rax

  if ( !*((_BYTE *)this + 632) )
  {
    if ( a7 )
    {
      *((_QWORD *)this + 76) = a7;
      *((_QWORD *)a7 + 7) = this;
      v11 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
    }
    else
    {
      v11 = (DXGVIRTUALMACHINE *)operator new[](0x208uLL, 0x4B677844u, 64LL, (__int64)a4);
      if ( v11 )
        v11 = DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(v11, this);
      *((_QWORD *)this + 76) = v11;
    }
    if ( !v11 )
    {
      WdLogSingleEntry1(6LL, 5493LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate DXGVIRTUALMACHINE",
        5493LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    if ( a2 )
    {
      if ( *((_BYTE *)this + 632) )
      {
        WdLogSingleEntry1(1LL, 5499LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_bInitialized == FALSE", 5499LL, 0LL, 0LL, 0LL, 0LL);
        v11 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 76);
      }
      *((_QWORD *)this + 77) = a3;
      *((_QWORD *)v11 + 35) = a4;
      ObfReferenceObject(a4);
      if ( a6 )
        *(_BYTE *)(*((_QWORD *)this + 76) + 336LL) = 1;
      if ( Object )
      {
        v13 = *((_QWORD *)this + 76);
        *((_DWORD *)this + 106) |= 0x400u;
        *(_QWORD *)(v13 + 272) = Object;
        ObfReferenceObject(Object);
      }
      *((_BYTE *)this + 632) = 1;
    }
  }
  return 0LL;
}
