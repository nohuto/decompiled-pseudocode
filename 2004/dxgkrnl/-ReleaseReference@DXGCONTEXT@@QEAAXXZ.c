/*
 * XREFs of ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00040D0
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00E43C8 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 *     DxgkRender @ 0x1C00E9000 (DxgkRender.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EBBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00F0810 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkEscape @ 0x1C00F8350 (DxgkEscape.c)
 *     DxgkPresent @ 0x1C0100670 (DxgkPresent.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02236C0 (DxgkGetSharedPrimaryHandle.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0271CB0 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C00056C8 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E51C0 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::ReleaseReference(DXGCONTEXT *this)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r9
  char *v5; // rdx
  _BYTE v6[8]; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+40h] [rbp-D8h]
  char v8; // [rsp+48h] [rbp-D0h]
  _QWORD v9[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v10[8]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v11[64]; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v12[88]; // [rsp+A8h] [rbp-70h] BYREF

  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)this + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v2 = *((_QWORD *)this + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v9,
      (struct DXGDEVICE *)v2);
    v3 = *((_QWORD *)this + 2);
    v8 = 0;
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v10, v2, 2, v4, 0);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v10, v5);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL) + 200LL) != 4 )
      DXGDEVICE::DestroyContext((DXGDEVICE *)v2, this, (struct COREDEVICEACCESS *)v10);
    COREACCESS::~COREACCESS((COREACCESS *)v12);
    COREACCESS::~COREACCESS((COREACCESS *)v11);
    if ( v8 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v6);
    if ( v9[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v2 + 16), (struct DXGDEVICE *)v2);
  }
}
