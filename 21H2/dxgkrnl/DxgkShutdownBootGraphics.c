/*
 * XREFs of DxgkShutdownBootGraphics @ 0x1C01C2340
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C1620 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C01E5A60 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     DpiPowerArbiterThread @ 0x1C0217840 (DpiPowerArbiterThread.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkShutdownBootGraphics(struct DXGDEVICE *a1, unsigned int a2)
{
  struct DXGGLOBAL *Global; // rax
  void *v5; // rcx
  __int64 v6; // rdx
  void *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGDEVICE *v10; // rbx
  __int64 v11; // rdi
  struct _KTHREAD **Current; // rax
  _BYTE v14[16]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+48h] [rbp-18h]
  char v17; // [rsp+50h] [rbp-10h]
  struct DXGDEVICE *v18; // [rsp+80h] [rbp+20h] BYREF
  struct DXGDEVICE *v19; // [rsp+90h] [rbp+30h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGGLOBAL *)((char *)Global + 1664), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 413) != 4 && *((_DWORD *)DXGGLOBAL_GetGlobal() + 413) )
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
  v5 = (void *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 193);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL_GetGlobal() + 193) = 0LL;
  }
  v7 = (void *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 207);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL_GetGlobal() + 207) = 0LL;
  }
  v18 = 0LL;
  if ( a1 )
  {
    v10 = a1;
    v18 = a1;
  }
  else
  {
    if ( !a2 )
      goto LABEL_16;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v7, v6, v8, v9);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v19, a2, Current, &v18);
    v10 = v18;
    if ( v18 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v18 + 8);
      v10 = v18;
    }
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v19 + 2), v19);
      v10 = v18;
    }
  }
  if ( v10 )
  {
    v11 = *((_QWORD *)v10 + 231);
    if ( v11 )
    {
      v16 = *((_QWORD *)v10 + 231);
      v17 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
      v10 = v18;
      if ( *(_DWORD *)(v11 + 200) == 1 && *((_BYTE *)v18 + 1904) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 2800)
                                                                                         + 624LL)
                                                                             + 8LL)
                                                                 + 560LL))(
          *((_QWORD *)v18 + 96),
          3LL,
          0LL,
          4294967293LL);
        *((_BYTE *)v10 + 1904) = 0;
      }
      if ( v17 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
    }
    if ( !a1 && _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v18);
  }
LABEL_16:
  *((_DWORD *)DXGGLOBAL_GetGlobal() + 413) = 4;
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return 0LL;
}
