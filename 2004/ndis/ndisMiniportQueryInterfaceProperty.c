/*
 * XREFs of ndisMiniportQueryInterfaceProperty @ 0x1C0116470
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1C0108F1C (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100DE4 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C0109200 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B4B8 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisMiniportQueryInterfaceProperty(__int64 a1, void *a2, _QWORD *a3)
{
  unsigned int v5; // ebx
  PVOID v6; // rcx
  NTSTATUS (__stdcall *v8)(HANDLE); // [rsp+40h] [rbp-10h] BYREF
  KRegKey v9; // [rsp+70h] [rbp+20h] BYREF
  PVOID P; // [rsp+78h] [rbp+28h] BYREF
  void *m_ptr; // [rsp+88h] [rbp+38h] BYREF

  P = a2;
  v9.m_ptr = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey((struct _GUID *)(a1 + 4008), &v9, 1u, PropertyBag);
  if ( v5 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Bu,
        &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
        a1,
        v5);
  }
  else
  {
    P = 0LL;
    m_ptr = &v9;
    v5 = NetSetupPropertyBag::ReadString(
           (NetSetupPropertyBag *)&m_ptr,
           (const struct _NETSETUPPROPKEY *)&unk_1C00D2160,
           &P);
    if ( v5 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x1Cu,
          &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
          a1,
          v5);
    }
    else
    {
      Rtl::DuplicateUnicodeString(&m_ptr, (const void **)P);
      if ( m_ptr )
      {
        *a3 = m_ptr;
        v5 = 0;
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x1Du,
            &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
            a1);
        v5 = -1073741670;
      }
    }
    v6 = P;
    P = 0LL;
    if ( v6 )
      ExFreePoolWithTag(v6, 0x7274534Bu);
  }
  if ( v9.m_ptr )
  {
    m_ptr = v9.m_ptr;
    v8 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v8, &m_ptr);
  }
  return v5;
}
