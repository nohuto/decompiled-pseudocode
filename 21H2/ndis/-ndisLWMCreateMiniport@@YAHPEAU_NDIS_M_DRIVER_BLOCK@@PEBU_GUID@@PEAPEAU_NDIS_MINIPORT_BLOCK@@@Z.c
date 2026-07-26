/*
 * XREFs of ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115558
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C0060A90 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     NdisConvertNtStatusToNdisStatus @ 0x1C002BF90 (NdisConvertNtStatusToNdisStatus.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0031DE8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1C0032114 (--1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C00321B0 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DB58 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     WPP_RECORDER_SF_q_guid_d @ 0x1C005F648 (WPP_RECORDER_SF_q_guid_d.c)
 *     WPP_RECORDER_SF_q_guid_ @ 0x1C0062740 (WPP_RECORDER_SF_q_guid_.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@W4NetSetupStoreType@@AEAVKRegKey@@@Z @ 0x1C00F81DC (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@W4NetSetupStoreType@@AEAVKRegKey@@@Z.c)
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01001E8 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 */

__int64 __fastcall ndisLWMCreateMiniport(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        const struct _GUID *a2,
        struct _NDIS_MINIPORT_BLOCK **a3,
        __int64 a4)
{
  struct _GUID v7; // xmm0
  int InterfaceAddDeviceParameters; // eax
  unsigned int v9; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-99h]
  struct KRegKey v14; // [rsp+40h] [rbp-79h] BYREF
  void *m_ptr; // [rsp+48h] [rbp-71h] BYREF
  NTSTATUS (__stdcall *v16)(HANDLE); // [rsp+50h] [rbp-69h] BYREF
  struct _GUID v17; // [rsp+60h] [rbp-59h] BYREF
  __int128 v18; // [rsp+70h] [rbp-49h] BYREF
  __int64 v19; // [rsp+80h] [rbp-39h]
  char v20; // [rsp+88h] [rbp-31h]
  __int16 v21; // [rsp+89h] [rbp-30h]
  char v22; // [rsp+8Bh] [rbp-2Eh]
  int v23; // [rsp+8Ch] [rbp-2Dh]
  __int128 v24; // [rsp+90h] [rbp-29h]
  __int64 v25; // [rsp+A0h] [rbp-19h]
  __int16 v26; // [rsp+A8h] [rbp-11h]
  char v27; // [rsp+AAh] [rbp-Fh]
  int v28; // [rsp+ABh] [rbp-Eh]
  char v29; // [rsp+AFh] [rbp-Ah]
  __int64 v30; // [rsp+B0h] [rbp-9h]
  enum NetSetupStoreType v31[2]; // [rsp+B8h] [rbp-1h]
  struct _NDIS_M_DRIVER_BLOCK *v32; // [rsp+C0h] [rbp+7h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      (__int64)a3,
      a4,
      v13,
      (char)a1,
      (__int64)a2);
  *a3 = 0LL;
  v19 = 0LL;
  v18 = 0uLL;
  v24 = 0LL;
  v7 = *a2;
  v20 = 0;
  v21 = 0;
  v17 = v7;
  v22 = 0;
  v23 = 0;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0LL;
  *(_QWORD *)v31 = 0LL;
  v32 = 0LL;
  InterfaceAddDeviceParameters = ndisIfReadInterfaceAddDeviceParameters(
                                   (struct NDIS_MINIPORT_CREATION_CONFIG *)&v17,
                                   0LL);
  v9 = NdisConvertNtStatusToNdisStatus(InterfaceAddDeviceParameters);
  if ( v9 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x8Eu,
        (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
        (__int64)a2);
  }
  else if ( BYTE1(v31[0]) )
  {
    v14.m_ptr = 0LL;
    v11 = ndisLWMOpenConfigurationKey(&v17, v31[1], &v14);
    v9 = NdisConvertNtStatusToNdisStatus(v11);
    if ( v9 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x90u,
          (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
          (__int64)a2);
      if ( v14.m_ptr )
      {
        m_ptr = v14.m_ptr;
        v16 = ZwClose;
        wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&v16, &m_ptr);
      }
    }
    else
    {
      v32 = a1;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (__int64 *)&v18 + 1,
        (__int64)v14.m_ptr);
      v12 = ndisAddDevice(&v17, (void **)a3);
      v9 = NdisConvertNtStatusToNdisStatus(v12);
      if ( v9 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x91u,
          (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
          (__int64)a2);
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x8Fu,
        (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
        (__int64)a2);
    v9 = -1073741811;
  }
  NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG((NDIS_MINIPORT_CREATION_CONFIG *)&v17);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x92u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)a1,
      (__int64)a2,
      v9);
  return v9;
}
