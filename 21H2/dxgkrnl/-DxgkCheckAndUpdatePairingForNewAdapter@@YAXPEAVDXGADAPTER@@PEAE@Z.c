/*
 * XREFs of ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C021BA30
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C0043C3C (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C00446AC (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C004973C (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C02C37B8 (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray @ 0x1C02CE340 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AdapterArray.c)
 */

void __fastcall DxgkCheckAndUpdatePairingForNewAdapter(struct DXGADAPTER *a1, unsigned __int8 *a2)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v4; // rax
  unsigned int i; // edi
  __int64 v6; // r13
  __int64 v7; // r12
  DXGADAPTER *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rsi
  int v13; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v14[16]; // [rsp+28h] [rbp-58h] BYREF
  DXGADAPTER *v15[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-38h] BYREF
  DXGADAPTER_REFERENCE *v17; // [rsp+50h] [rbp-30h]
  unsigned __int8 *v18; // [rsp+58h] [rbp-28h]
  struct _GUID v19; // [rsp+60h] [rbp-20h] BYREF
  char v20; // [rsp+70h] [rbp-10h]

  v18 = a2;
  *a2 = 0;
  v13 = 0;
  Global = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_,
    (__int64)&v13,
    1LL);
  if ( v13 )
  {
    DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray(&v16, (unsigned int)(v13 + 16));
    v4 = DXGGLOBAL_GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v4,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_,
      (__int64)&v16,
      1LL);
    for ( i = 0; i < v16; ++i )
    {
      v6 = *((_QWORD *)v17 + 2 * i);
      v7 = *(_QWORD *)(v6 + 2792);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(v7 + 152), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
      v15[0] = 0LL;
      v19 = 0LL;
      ADAPTER_DISPLAY::GetPairedRenderAdapter((ADAPTER_DISPLAY *)v7, v15, &v19);
      v8 = v15[0];
      if ( v15[0] )
      {
        v9 = *(_QWORD *)&v19.Data1 - *(_QWORD *)((char *)v15[0] + 308);
        if ( *(_QWORD *)&v19.Data1 == *(_QWORD *)((char *)v15[0] + 308) )
          v9 = *(_QWORD *)v19.Data4 - *(_QWORD *)((char *)v15[0] + 316);
        if ( v9 )
        {
          v10 = *(_QWORD *)&v19.Data1 - *(_QWORD *)((char *)a1 + 308);
          if ( !v10 )
            v10 = *(_QWORD *)v19.Data4 - *(_QWORD *)((char *)a1 + 316);
          if ( !v10 || (*((_DWORD *)a1 + 109) & 1) != 0 || v8 == *((DXGADAPTER **)DXGGLOBAL_GetGlobal() + 123) )
          {
            v11 = *((_QWORD *)v8 + 350) + 24LL;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v11, 0LL);
            *(_QWORD *)(v11 + 8) = KeGetCurrentThread();
            v12 = *((_QWORD *)v8 + 350) + 48LL;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v12, 0LL);
            *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
            *(_QWORD *)v19.Data4 = v6;
            v20 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v19);
            if ( *(_DWORD *)(v6 + 200) == 1 )
            {
              ADAPTER_RENDER::DisconnectFromDisplayAdapters(*((ADAPTER_RENDER **)v8 + 350), (struct DXGADAPTER *)v6, 0);
              ADAPTER_DISPLAY::SetPairedRenderAdapter((ADAPTER_DISPLAY *)v7, a1, 0LL);
              *v18 = 1;
            }
            if ( v20 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v19);
            *(_QWORD *)(v12 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v12, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(v11 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v11, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
      DXGADAPTER_REFERENCE::Assign(v15, 0LL);
      if ( v14[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
    }
    if ( v17 )
      DXGADAPTER_REFERENCE::`vector deleting destructor'(v17);
  }
}
