/*
 * XREFs of ?ndisCreateFilterAdapterRegistry@@YAHPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00250BC
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012D1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x1C006952C (-ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z.c)
 */

__int64 __fastcall ndisCreateFilterAdapterRegistry(
        const struct _UNICODE_STRING *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        unsigned __int8 a3)
{
  unsigned int v6; // edi
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rcx
  NTSTATUS v8; // ebx
  wchar_t *PoolWithTag; // rax
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-69h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-59h] BYREF
  _UNICODE_STRING GuidString; // [rsp+68h] [rbp-49h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+78h] [rbp-39h] BYREF
  int v15; // [rsp+130h] [rbp+7Fh] BYREF

  if ( RtlIsStateSeparationEnabled() )
    return 0LL;
  v6 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v15 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x4Eu,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      a2);
  BaseMiniport = a2->BaseMiniport;
  if ( !BaseMiniport )
  {
    v6 = -1073741811;
    goto LABEL_12;
  }
  if ( RtlStringFromGUID(&BaseMiniport->InterfaceGuid, &GuidString)
    || (v8 = RtlUpcaseUnicodeString(&DestinationString, &GuidString, 1u), RtlFreeUnicodeString(&GuidString), v8) )
  {
    v6 = -1073741823;
    goto LABEL_12;
  }
  Destination.MaximumLength = DestinationString.Length
                            + ndisParameterStr.Length
                            + ndisFilterAdapterStr.Length
                            + a1->Length
                            + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
  Destination.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, a1);
    RtlAppendUnicodeStringToString(&Destination, &ndisParameterStr);
    if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) )
    {
      memset(QueryTable, 0, sizeof(QueryTable));
      QueryTable[0].Name = L"SkipNdisAdaptersKeyGeneration";
      QueryTable[0].Flags = 292;
      QueryTable[0].EntryContext = &v15;
      QueryTable[0].DefaultType = 0x4000000;
      QueryTable[1].Name = 0LL;
      if ( !RtlQueryRegistryValuesEx(1u, (PCWSTR)Destination.Buffer, QueryTable, 0LL, 0LL) && v15 == 1 )
        goto LABEL_11;
    }
    RtlAppendUnicodeStringToString(&Destination, &ndisFilterAdapterStr);
    if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) || !RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
    {
      RtlAppendUnicodeStringToString(&Destination, &DestinationString);
      if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer) )
        goto LABEL_11;
      if ( !RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer) )
      {
        v6 = ndisSetAllFilterDefaultParameters(a1, &Destination, &ndisFilterAdapterParamsStr, a3);
        goto LABEL_11;
      }
    }
    v6 = -1073741823;
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_11:
  RtlFreeUnicodeString(&DestinationString);
LABEL_12:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x4Fu,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      (char)a2,
      v6,
      *(_QWORD *)&Destination.Length);
  return v6;
}
