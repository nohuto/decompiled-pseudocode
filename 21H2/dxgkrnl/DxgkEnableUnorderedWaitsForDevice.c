/*
 * XREFs of DxgkEnableUnorderedWaitsForDevice @ 0x1C02E9B60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkEnableUnorderedWaitsForDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  __int64 v5; // rsi
  struct _KTHREAD **Current; // rax
  unsigned int v7; // edi
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rax
  struct DXGDEVICE *v10; // rax
  _QWORD v12[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v13[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h]
  char v15; // [rsp+70h] [rbp-10h]
  struct DXGDEVICE *v16; // [rsp+B0h] [rbp+30h] BYREF
  struct DXGDEVICE *v17; // [rsp+B8h] [rbp+38h] BYREF

  v4 = a2;
  v5 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  if ( Current )
  {
    v16 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v17, v5, Current, &v16);
    v8 = v16;
    if ( v16 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12, v16);
      v9 = *((_QWORD *)v8 + 2);
      v15 = 0;
      v14 = *(_QWORD *)(v9 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
      if ( *((_DWORD *)v8 + 144) == 1 )
      {
        v10 = v16;
        *((_BYTE *)v16 + 1867) = v4;
        if ( !v4 && *((_QWORD *)v10 + 96) )
          (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 624LL) + 8LL) + 856LL))();
        v7 = 0;
      }
      else
      {
        v7 = -1073741130;
        WdLogSingleEntry2(3LL, v5, -1073741130LL);
      }
      if ( v15 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
      if ( v12[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12);
    }
    else
    {
      v7 = -1073741811;
      WdLogSingleEntry2(2LL, v5, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
        v5,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v17 && _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
  }
  else
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v7;
}
