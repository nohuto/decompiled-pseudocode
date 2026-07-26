/*
 * XREFs of NdisOpenConfigurationKeyByName @ 0x1C0027C50
 * Callers:
 *     NdisOpenConfigurationKeyByIndex @ 0x1C0032F50 (NdisOpenConfigurationKeyByIndex.c)
 *     ?ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00331D4 (-ndisIovCreateDefaultNicSwitch@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00790B0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ndisOpenProtocolSubkey @ 0x1C002956C (ndisOpenProtocolSubkey.c)
 *     memmove @ 0x1C0040100 (memmove.c)
 */

void __stdcall NdisOpenConfigurationKeyByName(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING SubKeyName,
        PNDIS_HANDLE SubKeyHandle)
{
  HANDLE *v8; // rdi
  int v9; // eax
  char *PoolWithTag; // rax
  char *v11; // rbx
  NTSTATUS v12; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-48h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v8 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x18u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      ConfigurationHandle,
      *(_QWORD *)&ObjectAttributes.Length,
      ObjectAttributes.RootDirectory,
      ObjectAttributes.ObjectName,
      *(_QWORD *)&ObjectAttributes.Attributes,
      ObjectAttributes.SecurityDescriptor,
      ObjectAttributes.SecurityQualityOfService);
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0
    || *((_QWORD *)ConfigurationHandle + 4)
    || (v9 = ndisOpenProtocolSubkey(ConfigurationHandle), *Status = v9, v9 >= 0) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, SubKeyName->Length + 176LL, 0x6863444Eu);
    v8 = (HANDLE *)PoolWithTag;
    *Status = PoolWithTag == 0LL ? 0xC000009A : 0;
    if ( (PoolWithTag == 0LL ? 0xC000009A : 0) != 0 )
    {
      *SubKeyHandle = 0LL;
    }
    else
    {
      v11 = PoolWithTag + 40;
      *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 40;
      PoolWithTag[40] = 10;
      *(_BYTE *)(*((_QWORD *)PoolWithTag + 2) + 1LL) = 1;
      *(_WORD *)(*((_QWORD *)PoolWithTag + 2) + 2LL) = 40;
      memmove(PoolWithTag + 176, SubKeyName->Buffer, SubKeyName->Length);
      *((_DWORD *)v11 + 14) = 0;
      *((_QWORD *)v11 + 10) = 0LL;
      *((_DWORD *)v11 + 22) = 0;
      *((_QWORD *)v11 + 12) = 0LL;
      *((_QWORD *)v11 + 3) = ndisSaveParameters;
      *((_DWORD *)v11 + 8) = 20;
      *((_QWORD *)v11 + 1) = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
      ObjectAttributes.RootDirectory = (HANDLE)*((_QWORD *)ConfigurationHandle + 4);
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = SubKeyName;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwOpenKey(v8 + 4, 0xBu, &ObjectAttributes);
      *Status = v12;
      if ( v12 >= 0 )
      {
        v8[3] = 0LL;
        v8[1] = (HANDLE)*((_QWORD *)ConfigurationHandle + 1);
        *SubKeyHandle = v8;
      }
    }
  }
  if ( *Status < 0 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x19u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      ConfigurationHandle);
}
