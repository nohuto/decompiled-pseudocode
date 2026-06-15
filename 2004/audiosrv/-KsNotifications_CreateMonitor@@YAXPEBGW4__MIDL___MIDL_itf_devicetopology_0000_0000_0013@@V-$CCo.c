/*
 * XREFs of ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x180057E4C
 * Callers:
 *     ?KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z @ 0x180057D14 (-KsNotifications_ProcessPnpInterface@@YAXPEAUIMMDevice@@PEBG1@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180058034 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z @ 0x18005806C (-AddTail@-$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z.c)
 *     ?Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z @ 0x180058100 (-Initialize@CKsNotificationsMonitor@@QEAAJPEAUIPart@@PEBG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void **__fastcall KsNotifications_CreateMonitor(unsigned __int16 *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  void **result; // rax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, struct IPart **); // r10
  struct IPart *v9; // rcx
  CKsNotificationsMonitor *v10; // rbx
  __int64 v11; // rcx
  struct IPart *v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-10h] BYREF
  char v15; // [rsp+48h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h] BYREF

  result = (void **)&retaddr;
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IPart **))*a3;
  v9 = 0LL;
  v12 = 0LL;
  if ( v8 )
  {
    result = (void **)(**v8)(v8, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9, &v12);
    v9 = v12;
  }
  if ( v9 )
  {
    result = (void **)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = (CKsNotificationsMonitor *)result;
    v13 = (__int64)result;
    if ( result )
    {
      *(_OWORD *)result = 0LL;
      *((_OWORD *)result + 1) = 0LL;
      result[4] = 0LL;
      *((_DWORD *)result + 3) = 0;
      result[2] = 0LL;
      *((_DWORD *)result + 6) = 1;
      result[4] = 0LL;
      ++CKsNotificationsMonitor::m_cRefAll;
      result = &CKsSoftwareNotificationsMonitor::`vftable';
      *(_QWORD *)v10 = &CKsSoftwareNotificationsMonitor::`vftable';
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v13 = 0LL;
      if ( ((int (__fastcall *)(struct IPart *, __int64, GUID *, __int64 *))v12->lpVtbl->Activate)(
             v12,
             23LL,
             &GUID_fbe4a6da_1a5e_4633_a491_9a9ff7f97a30,
             &v13) < 0
        || (result = (void **)(*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v13 + 24LL))(
                                v13,
                                &gConnectorEnablingInfo,
                                2LL),
            (int)result >= 0) )
      {
        if ( CKsNotificationsMonitor::Initialize(v10, v12, a1) >= 0 )
        {
          lpCriticalSection = &g_csKsNotificationMonitors;
          v15 = 0;
          ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
          if ( TList<CKsNotificationsMonitor>::AddTail(v11, v10) )
            (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( v15 )
            LeaveCriticalSection(lpCriticalSection);
        }
        result = (void **)(*(__int64 (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v13 )
        result = (void **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v9 = v12;
  }
  if ( v9 )
    result = (void **)((__int64 (__fastcall *)(struct IPart *))v9->lpVtbl->Release)(v9);
  if ( *a3 )
    result = (void **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
  if ( *a4 )
    return (void **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
  return result;
}
