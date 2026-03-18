/*
 * XREFs of DxgkShutdownBootGraphics @ 0x1C0130AD0
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C012FAC4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C01560C0 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     DpiPowerArbiterThread @ 0x1C0186430 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkShutdownBootGraphics(struct DXGDEVICE *a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  void *v10; // rcx
  __int64 v11; // rdx
  void *v12; // rcx
  struct DXGDEVICE *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdx
  struct _KTHREAD **Current; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _BYTE v22[16]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v23[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h]
  char v25; // [rsp+50h] [rbp-10h]
  struct DXGDEVICE *v26; // [rsp+80h] [rbp+20h] BYREF
  struct DXGDEVICE *v27; // [rsp+90h] [rbp+30h] BYREF

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGGLOBAL *)((char *)Global + 1392), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v6, v5) + 345) != 4 && *((_DWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 345) )
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
  v10 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal(v8, v7) + 160);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v19, v18) + 160) = 0LL;
  }
  v12 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)v10, v9) + 173);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal(v21, v20) + 173) = 0LL;
  }
  v26 = 0LL;
  if ( a1 )
  {
    v13 = a1;
    v26 = a1;
  }
  else
  {
    if ( !v2 )
      goto LABEL_16;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v12, v11);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, v2, Current, &v26);
    v13 = v26;
    if ( v26 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v26 + 8);
      v13 = v26;
    }
    if ( v27 )
    {
      v12 = (void *)_InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v12 == (void *)1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
      v13 = v26;
    }
  }
  if ( v13 )
  {
    v14 = *((_QWORD *)v13 + 231);
    if ( v14 )
    {
      v24 = *((_QWORD *)v13 + 231);
      v25 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
      v13 = v26;
      if ( *(_DWORD *)(v14 + 200) == 1 && *((_BYTE *)v26 + 1904) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 2680)
                                                                                         + 616LL)
                                                                             + 8LL)
                                                                 + 560LL))(
          *((_QWORD *)v26 + 96),
          3LL,
          0LL,
          4294967293LL);
        *((_BYTE *)v13 + 1904) = 0;
      }
      if ( v25 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v23);
    }
    if ( !a1 && _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v26 + 2), v26);
  }
LABEL_16:
  *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v12, v11) + 345) = 4;
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22, v15);
  return 0LL;
}
