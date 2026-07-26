/*
 * XREFs of NdisOpenConfiguration @ 0x1C0028840
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C0028100 (NdisOpenConfigurationEx.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C008BF50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C012066C (-ndisNDKHandleWmiChangeRequest@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C002B9F0 (NdisConvertNtStatusToNdisStatus.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@W4NetSetupStoreType@@AEAVKRegKey@@@Z @ 0x1C00F81DC (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@W4NetSetupStoreType@@AEAVKRegKey@@@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C0114E20 (ndisWdfOpenConfigurationKey.c)
 */

void __stdcall NdisOpenConfiguration(
        PNDIS_STATUS Status,
        PNDIS_HANDLE ConfigurationHandle,
        NDIS_HANDLE WrapperConfigurationContext)
{
  char *PoolWithTag; // rax
  _QWORD *v7; // rbx
  HANDLE *v8; // rsi
  __int64 v9; // rax
  int v10; // ecx
  enum NetSetupStoreType v11; // edx
  unsigned int v12; // eax
  int v13; // eax
  void *m_ptr; // rax
  unsigned int v15; // eax
  NTSTATUS v16; // eax
  struct KRegKey v17; // [rsp+60h] [rbp+8h] BYREF
  NTSTATUS (__stdcall *v18)(HANDLE); // [rsp+78h] [rbp+20h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x15u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      WrapperConfigurationContext);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6863444Eu);
  v7 = PoolWithTag;
  *Status = PoolWithTag == 0LL ? 0xC000009A : 0;
  if ( (PoolWithTag == 0LL ? 0xC000009A : 0) == 0 )
  {
    *(_DWORD *)PoolWithTag = 2621707;
    v8 = (HANDLE *)(PoolWithTag + 32);
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = WrapperConfigurationContext;
    if ( *(_BYTE *)WrapperConfigurationContext == 10 )
    {
      v9 = *((_QWORD *)WrapperConfigurationContext + 1);
      v7[1] = v9;
      if ( v9 )
      {
        v10 = *(_DWORD *)(v9 + 120);
        if ( (v10 & 0x100) != 0 )
        {
          v11 = *(_DWORD *)(v9 + 5848);
          v17.m_ptr = 0LL;
          v12 = ndisLWMOpenConfigurationKey((const struct _GUID *)(v9 + 4008), v11, &v17);
          v13 = NdisConvertNtStatusToNdisStatus(v12);
          *Status = v13;
          if ( v13 )
          {
            m_ptr = v17.m_ptr;
          }
          else
          {
            m_ptr = 0LL;
            *v8 = v17.m_ptr;
          }
          if ( m_ptr )
          {
            v17.m_ptr = m_ptr;
            v18 = ZwClose;
            wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v18, &v17);
          }
        }
        else
        {
          if ( (v10 & 0x80u) == 0 )
          {
            v16 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(v9 + 3832), 2u, 0xC2000000, v8);
          }
          else
          {
            v15 = ndisWdfOpenConfigurationKey(v9);
            v16 = NdisConvertNtStatusToNdisStatus(v15);
          }
          *Status = v16;
        }
      }
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        8u,
        0x16u,
        (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
        WrapperConfigurationContext);
    }
    if ( *Status < 0 )
      ExFreePoolWithTag(v7, 0);
    else
      *ConfigurationHandle = v7;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x17u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      WrapperConfigurationContext);
}
