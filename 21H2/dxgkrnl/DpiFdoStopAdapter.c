/*
 * XREFs of DpiFdoStopAdapter @ 0x1C02CBE84
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C02CA620 (DpiFdoHandleStopDevice.c)
 *     DpiKsrStopAdapters @ 0x1C02D30D0 (DpiKsrStopAdapters.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C02D83D4 (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B73C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018FF0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E2438 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01217AC (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0121B10 (DxgkAcquireAdapterCoreSync.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013AB0C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0179578 (DpiDxgkDdiDisplayDetectControl.c)
 *     DxgkStartPnPTransition @ 0x1C0183154 (DxgkStartPnPTransition.c)
 *     DpiPnpNotifyGdi @ 0x1C019A228 (DpiPnpNotifyGdi.c)
 *     DxgkCompletePnPTransition @ 0x1C019C734 (DxgkCompletePnPTransition.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020F7B4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C0269FA4 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     ?LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z @ 0x1C0275F1C (-LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z.c)
 *     DpiDestroyBlockList @ 0x1C02C75E4 (DpiDestroyBlockList.c)
 *     DpiFdoDetermineAffectedSession @ 0x1C02C8168 (DpiFdoDetermineAffectedSession.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C02C8C24 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C02C8CCC (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x1C02CB3E4 (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C02CC688 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02D18C8 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiStopDevice @ 0x1C02D8C14 (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v5; // rcx
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rax
  unsigned int v9; // r12d
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *started; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 *v34; // rdx
  unsigned int i; // r8d
  __int64 *v36; // rcx
  __int128 *v37; // rax
  __int64 v38; // rdx
  DXGADAPTER *v39; // rcx
  DXGGLOBAL *v40; // rax
  int IsDevicePresent; // eax
  char v42; // r14
  __int64 v43; // rbx
  int v44; // esi
  __int64 v45; // rdx
  __int64 v46; // rcx
  char v48[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+38h] [rbp-C8h]
  __int128 v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  _QWORD v52[10]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v53[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  __int64 v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E8h] [rbp-18h]
  int v58; // [rsp+ECh] [rbp-14h]
  __int64 v59; // [rsp+F0h] [rbp-10h]

  v48[0] = 0;
  memset(v52, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = *((_DWORD *)DeviceExtension + 69) & 7;
  v49 = *((_QWORD *)DeviceExtension + 5);
  *(_DWORD *)&DeviceExtension[4 * v5 + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v7 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = v6;
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v7 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v8 = *((_QWORD *)DeviceExtension + 334);
    v52[0] = 0x480000001ELL;
    v9 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v52[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v52[1], 0, 36);
    LODWORD(v52[6]) = 36;
    v52[7] = 0LL;
    v52[8] = v8;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v52, *((_QWORD *)DeviceExtension + 742));
    KeWaitForSingleObject(DeviceExtension + 4112, Executive, 0, 0, 0LL);
    v10 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
    started = DxgkStartPnPTransition(0LL, v10);
    if ( !started )
    {
      v16 = WdLogNewEntry5_WdLowResource(v12, v11, v14, v15);
      *(_QWORD *)(v16 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v16);
    }
    if ( !DeviceExtension[480] )
    {
      v11 = *((unsigned int *)DeviceExtension + 871);
      if ( (_DWORD)v11 != -1 )
        LPMDisplayUnregisterInternalDisplay(*((PFILE_OBJECT *)DeviceExtension + 487), (struct _ERESOURCE *)v11);
    }
    if ( *((_DWORD *)DeviceExtension + 994) != 3 )
    {
      v17 = *((_QWORD *)DeviceExtension + 487);
      if ( v17 )
      {
        DxgkAcquireAdapterCoreSync(v17, 2, v14);
        v18 = *((_QWORD *)DeviceExtension + 487);
        if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v18) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v20, v19);
          *(_QWORD *)(v21 + 24) = 1481LL;
          WdLogEvent5_WdAssertion(v21);
        }
        *(_BYTE *)(v18 + 2609) = 1;
        Global = DXGGLOBAL::GetGlobal(v20, v19);
        QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL, v23, v24);
        DxgkReleaseAdapterCoreSync(*((_QWORD *)DeviceExtension + 487), 2u, v25);
      }
    }
    if ( (DeviceExtension[3904] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_1C00B2B20 == a1 )
    {
      v26 = *((_QWORD *)DeviceExtension + 6);
      v27 = *((_QWORD *)DeviceExtension + 5);
      v50 = 0LL;
      LODWORD(v50) = 83886077;
      v51 = 0LL;
      v28 = DpiDxgkDdiDisplayDetectControl((__int64)DeviceExtension, v27, v26, (unsigned int *)&v50);
      v31 = v28;
      if ( v28 < 0 )
      {
        v32 = WdLogNewEntry5_WdError(v30, v29);
        *(_QWORD *)(v32 + 24) = *(_QWORD *)(v49 + 1128);
        *(_QWORD *)(v32 + 32) = v31;
        WdLogEvent5_WdError(v32);
      }
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C00B2B28 == a1 )
      {
        LOBYTE(word_1C00B2B1D) = 0;
        qword_1C00B2B28 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C00B2B20 == a1 )
      {
        word_1C00B2B1D = 0;
        qword_1C00B2B20 = 0LL;
      }
      _InterlockedExchange64(&qword_1C00B2B50, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (DeviceExtension[3904] & 1) != 0 )
        DpiPnpNotifyGdi((__int64)a1, 0, (__int64)started, v10, 0, a2);
      else
        DxgkCompletePnPTransition(started, v33);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkCompletePnPTransition(started, v11);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2744), 0);
    if ( DeviceExtension[5736] )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 5720), 0);
      RtlFreeUnicodeString((PUNICODE_STRING)(DeviceExtension + 5720));
    }
    if ( *((_QWORD *)DeviceExtension + 346) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2760), 0);
    if ( *((_QWORD *)DeviceExtension + 350) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2792), 0);
    if ( *((_QWORD *)DeviceExtension + 352) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2808), 0);
    if ( *((_QWORD *)DeviceExtension + 356) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2840), 0);
    if ( *((_QWORD *)DeviceExtension + 354) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2824), 0);
    if ( *((_QWORD *)DeviceExtension + 358) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2856), 0);
    if ( *((_QWORD *)DeviceExtension + 348) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2776), 0);
    if ( DeviceExtension[1152] && dword_1C00B2E6C != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3304), 1u);
      v34 = (__int64 *)*((_QWORD *)DeviceExtension + 456);
      for ( i = 0; i < *((_DWORD *)DeviceExtension + 916); v34 = v36 )
      {
        v36 = (__int64 *)*v34;
        if ( *v34 == *((_QWORD *)DeviceExtension + 456) )
          break;
        if ( *((_DWORD *)v34 + 126) == dword_1C00B2E6C )
        {
          v37 = (__int128 *)v34[116];
          if ( v37 )
          {
            xmmword_1C00B2DE8 = *v37;
            xmmword_1C00B2DF8 = v37[1];
            xmmword_1C00B2E08 = v37[2];
            xmmword_1C00B2E18 = v37[3];
            xmmword_1C00B2E28 = v37[4];
            xmmword_1C00B2E38 = v37[5];
            xmmword_1C00B2E48 = v37[6];
            xmmword_1C00B2E58 = v37[7];
            v36 = (__int64 *)*v34;
          }
        }
        ++i;
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3304));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, a2);
    DpiBrightnessStopDevice(a1);
    DpiDestroyBlockList((__int64)DeviceExtension);
    if ( *((_DWORD *)DeviceExtension + 994) != 3 )
    {
      v39 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 487);
      if ( v39 && *((_DWORD *)v39 + 50) != 2 && *((_DWORD *)v39 + 50) != 4 )
        DXGADAPTER::Stop(v39, 0LL, 0);
      v40 = DXGGLOBAL::GetGlobal((__int64)v39, v38);
      DXGGLOBAL::NotifyAdapterRemoval(v40);
    }
    KeSetEvent((PRKEVENT)DeviceExtension + 147, 0, 0);
  }
  else
  {
    v52[0] = 0x4000000006LL;
    v9 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v52[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v52[1], 0, 36);
    LODWORD(v52[6]) = 36;
    v52[7] = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v52, 0x200000000LL);
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v48);
  v42 = v48[0];
  v43 = 0x200000000LL;
  if ( IsDevicePresent < 0 )
    v42 = 1;
  v44 = -1073741637;
  if ( DeviceExtension[1152] )
  {
    if ( v42 )
    {
      v44 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v55 = 0LL;
      v53[0] = 30;
      v7 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v59 = *((_QWORD *)DeviceExtension + 334);
      v53[1] = 72;
      v54 = 0LL;
      memset(&v53[2], 0, 24);
      v56 = 98LL;
      v57 = v44;
      v58 = 0;
      if ( v7 && *((_DWORD *)DeviceExtension + 5) == 2 )
        v45 = *((_QWORD *)DeviceExtension + 742);
      else
        v45 = 0x200000000LL;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v53, v45);
      if ( v44 < 0 || DWORD2(xmmword_1C00B2DD8) != dword_1C00B2E6C )
        memset(&xmmword_1C00B2DE8, 0, 0x80uLL);
    }
    else
    {
      dword_1C00B2E68 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[3904] &= ~4u;
  if ( v42 && v44 < 0 )
    DpiDxgkDdiStopDevice(v49, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 171) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v46 = *((_QWORD *)DeviceExtension + 61);
  if ( v46 )
  {
    PoFxUnregisterDevice(v46);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 487) + 2808LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  memset(v52, 0, 0x48uLL);
  v52[0] = 0x4000000006LL;
  memset(&v52[1], 0, 36);
  LODWORD(v52[6]) = 36;
  HIDWORD(v52[6]) = v9;
  v52[7] = 1LL;
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v43 = *((_QWORD *)DeviceExtension + 742);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v52, v43);
}
