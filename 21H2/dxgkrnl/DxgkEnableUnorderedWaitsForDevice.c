/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1C0259330
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004300 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007464 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  struct DXGDEVICE *v18; // rax
  _QWORD v20[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v21[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h]
  char v23; // [rsp+40h] [rbp-10h]
  struct DXGDEVICE *v24; // [rsp+80h] [rbp+30h] BYREF
  struct DXGDEVICE *v25; // [rsp+88h] [rbp+38h] BYREF

  v2 = a2;
  v3 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    v24 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, (unsigned int)v3, Current, &v24);
    v11 = v24;
    if ( v24 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20, v24);
      v13 = *((_QWORD *)v11 + 2);
      v23 = 0;
      v22 = *(_QWORD *)(v13 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
      if ( *((_DWORD *)v11 + 144) == 1 )
      {
        v18 = v24;
        *((_BYTE *)v24 + 1867) = v2;
        if ( !v2 && *((_QWORD *)v18 + 96) )
          (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 616LL) + 8LL) + 856LL))();
        v8 = 0;
      }
      else
      {
        v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
        v8 = -1073741130;
        *(_QWORD *)(v17 + 24) = v3;
        *(_QWORD *)(v17 + 32) = -1073741130LL;
        WdLogEvent5_WdWarning(v17);
      }
      if ( v23 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
      if ( v20[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v10, v9);
      v8 = -1073741811;
      *(_QWORD *)(v12 + 24) = v3;
      *(_QWORD *)(v12 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v12);
    }
    if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6, v5);
    v8 = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
  }
  return v8;
}
