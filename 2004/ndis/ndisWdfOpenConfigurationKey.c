/*
 * XREFs of ndisWdfOpenConfigurationKey @ 0x1C0114E30
 * Callers:
 *     NdisOpenConfiguration @ 0x1C0028A80 (NdisOpenConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0024FFC (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D7F8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     WPP_RECORDER_SF_qSd @ 0x1C005F258 (WPP_RECORDER_SF_qSd.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x1C005F3B8 (WPP_RECORDER_SF_q_guid_d.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0101918 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01019F4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B4B8 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisWdfOpenConfigurationKey(__int64 a1, KRegKey *a2)
{
  __int64 v2; // r14
  int v5; // eax
  unsigned int v6; // ebx
  int Uint32; // eax
  _DEVICE_OBJECT *v8; // rcx
  unsigned int v9; // eax
  unsigned __int16 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _GUID *v15; // [rsp+20h] [rbp-E0h]
  int v16; // [rsp+20h] [rbp-E0h]
  char v17[8]; // [rsp+28h] [rbp-D8h]
  char v18[8]; // [rsp+30h] [rbp-D0h]
  KRegKey v19; // [rsp+70h] [rbp-90h] BYREF
  KRegKey *m_ptr; // [rsp+78h] [rbp-88h] BYREF
  char v21[4]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE DeviceRegKey; // [rsp+88h] [rbp-78h] BYREF
  KRegKey v23; // [rsp+90h] [rbp-70h] BYREF
  wchar_t v24[56]; // [rsp+A0h] [rbp-60h] BYREF

  m_ptr = a2;
  v2 = a1 + 4008;
  v23.m_ptr = 0LL;
  v5 = ndisIfOpenInterfaceRegistryKey((struct _GUID *)(a1 + 4008), &v23, 1u, PropertyBag);
  v6 = v5;
  if ( v5 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q_guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xAu,
        (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
        a1,
        v2,
        v5);
    goto LABEL_29;
  }
  *(_DWORD *)v21 = 0;
  v19.m_ptr = &v23;
  Uint32 = NetSetupPropertyBag::ReadUint32(
             (void ***)&v19,
             (const struct _NETSETUPPROPKEY *)&unk_1C00D1BE8,
             (unsigned int *)v21);
  v6 = Uint32;
  if ( Uint32 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0xBu,
        (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
        a1,
        Uint32);
    goto LABEL_29;
  }
  v8 = *(_DEVICE_OBJECT **)(a1 + 3832);
  DeviceRegKey = 0LL;
  v9 = IoOpenDeviceRegistryKey(v8, 2u, 0xC2000000, &DeviceRegKey);
  v6 = v9;
  if ( v9 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      goto LABEL_27;
    v10 = 12;
LABEL_19:
    *(_DWORD *)v18 = v9;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      8u,
      v10,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      a1,
      *(_QWORD *)v18);
    goto LABEL_27;
  }
  if ( *(_DWORD *)v21 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        8u,
        0xEu,
        (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
        a1,
        *(_DWORD *)v21);
    *(_DWORD *)v18 = *(unsigned __int8 *)(v2 + 8);
    *(_DWORD *)v17 = *(unsigned __int16 *)(v2 + 6);
    LODWORD(v15) = *(unsigned __int16 *)(v2 + 4);
    v9 = RtlStringCbPrintfW(
           v24,
           0x70uLL,
           (wchar_t *)L"NetworkInterface\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           *(unsigned int *)(a1 + 4008),
           v15,
           *(_QWORD *)v17,
           *(_QWORD *)v18,
           *(unsigned __int8 *)(v2 + 9),
           *(unsigned __int8 *)(v2 + 10),
           *(unsigned __int8 *)(v2 + 11),
           *(unsigned __int8 *)(v2 + 12),
           *(unsigned __int8 *)(v2 + 13),
           *(unsigned __int8 *)(v2 + 14),
           *(unsigned __int8 *)(v2 + 15));
    v6 = v9;
    if ( v9 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_27;
      v10 = 15;
      goto LABEL_19;
    }
    v19.m_ptr = 0LL;
    v6 = KRegKey::Open(&v19, 0xC2000000, v24, DeviceRegKey);
    if ( v6 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qSd(*((_QWORD *)WPP_GLOBAL_Control + 8), v11, v12, v13, v16);
      if ( v19.m_ptr )
      {
        m_ptr = (KRegKey *)ZwClose;
        wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&m_ptr, &v19);
      }
      goto LABEL_27;
    }
    m_ptr->m_ptr = v19.m_ptr;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        *(_DWORD *)v21 + 8,
        *(_WORD *)v21 + 13,
        (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
        a1);
    a2->m_ptr = DeviceRegKey;
    DeviceRegKey = 0LL;
  }
  v6 = 0;
LABEL_27:
  if ( DeviceRegKey )
  {
    m_ptr = (KRegKey *)DeviceRegKey;
    v19.m_ptr = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v19, &m_ptr);
  }
LABEL_29:
  if ( v23.m_ptr )
  {
    m_ptr = (KRegKey *)v23.m_ptr;
    v19.m_ptr = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v19, &m_ptr);
  }
  return v6;
}
