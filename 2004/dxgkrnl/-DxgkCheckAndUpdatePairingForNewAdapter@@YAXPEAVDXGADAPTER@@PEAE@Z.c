/*
 * XREFs of ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C0176A20
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017890C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C0036800 (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C00380DC (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C003D850 (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1C0215C7C (-DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z.c)
 *     _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray @ 0x1C0220B40 (_DxgkCheckAndUpdatePairingForNewAdapter_--_2_--AdapterArray--AdapterArray.c)
 */

void __fastcall DxgkCheckAndUpdatePairingForNewAdapter(struct DXGADAPTER *a1, unsigned __int8 *a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *v6; // rax
  unsigned int i; // edi
  __int64 v8; // r13
  __int64 v9; // r12
  DXGADAPTER *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v17[16]; // [rsp+28h] [rbp-41h] BYREF
  DXGADAPTER *v18[2]; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-21h] BYREF
  DXGADAPTER_REFERENCE *v20; // [rsp+50h] [rbp-19h]
  _BYTE v21[8]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v22; // [rsp+60h] [rbp-9h]
  char v23; // [rsp+68h] [rbp-1h]
  unsigned __int8 *v24; // [rsp+70h] [rbp+7h]
  struct _GUID v25; // [rsp+78h] [rbp+Fh] BYREF

  v24 = a2;
  *a2 = 0;
  v16 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))lambda_98a973f9db80c22b1740ef6057097b25_::_lambda_invoker_cdecl_,
    (__int64)&v16,
    1);
  if ( v16 )
  {
    DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AdapterArray(&v19, (unsigned int)(v16 + 16));
    v6 = DXGGLOBAL::GetGlobal(v5, v4);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v6,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_,
      (__int64)&v19,
      1);
    for ( i = 0; i < v19; ++i )
    {
      v8 = *((_QWORD *)v20 + 2 * i);
      v9 = *(_QWORD *)(v8 + 2696);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(v9 + 136), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      v18[0] = 0LL;
      v25 = 0LL;
      ADAPTER_DISPLAY::GetPairedRenderAdapter((ADAPTER_DISPLAY *)v9, v18, &v25);
      v10 = v18[0];
      if ( v18[0] )
      {
        v11 = *(_QWORD *)&v25.Data1 - *(_QWORD *)((char *)v18[0] + 300);
        if ( *(_QWORD *)&v25.Data1 == *(_QWORD *)((char *)v18[0] + 300) )
          v11 = *(_QWORD *)v25.Data4 - *(_QWORD *)((char *)v18[0] + 308);
        if ( v11 )
        {
          v12 = *(_QWORD *)&v25.Data1 - *(_QWORD *)((char *)a1 + 300);
          if ( !v12 )
            v12 = *(_QWORD *)v25.Data4 - *(_QWORD *)((char *)a1 + 308);
          if ( !v12 || (*((_DWORD *)a1 + 87) & 1) != 0 || v10 == *((DXGADAPTER **)DXGGLOBAL::GetGlobal(v12, v11) + 103) )
          {
            v13 = *((_QWORD *)v10 + 338) + 24LL;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v13, 0LL);
            *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
            v14 = *((_QWORD *)v10 + 338) + 48LL;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v14, 0LL);
            *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
            v22 = v8;
            v23 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
            if ( *(_DWORD *)(v8 + 200) == 1 )
            {
              ADAPTER_RENDER::DisconnectFromDisplayAdapters(*((ADAPTER_RENDER **)v10 + 338), (struct DXGADAPTER *)v8, 0);
              ADAPTER_DISPLAY::SetPairedRenderAdapter((ADAPTER_DISPLAY *)v9, a1, 0LL);
              *v24 = 1;
            }
            if ( v23 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
            *(_QWORD *)(v14 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v14, 0LL);
            KeLeaveCriticalRegion();
            *(_QWORD *)(v13 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v13, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
      DXGADAPTER_REFERENCE::Assign(v18, 0LL);
      if ( v17[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17, v15);
    }
    if ( v20 )
      DXGADAPTER_REFERENCE::`vector deleting destructor'(v20);
  }
}
