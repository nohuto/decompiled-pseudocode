/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C01AE6D4
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01E7FF0 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C01ADD3C (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C01AE888 (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01B71EC (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01B78F8 (_CcdOpenRegistrySubkey.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01B7DB0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        __int64 a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  int v4; // eax
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _WORD v17[2]; // [rsp+38h] [rbp-59h] BYREF
  int v18; // [rsp+3Ch] [rbp-55h]
  char *v19; // [rsp+40h] [rbp-51h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v21[112]; // [rsp+78h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+100h] [rbp+6Fh] BYREF
  void *v24; // [rsp+110h] [rbp+7Fh]

  HIDWORD(KeyHandle) = HIDWORD(a2);
  Handle = 0LL;
  LODWORD(KeyHandle) = 0;
  v4 = CcdOpenRegistrySubkey(
         &Handle,
         131097LL,
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         &KeyHandle);
  LODWORD(TopologySetIdDescriptorCallback) = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry4(
      2LL,
      v4,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
      CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback,
      a3);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      KeyHandle = 0LL;
      v24 = 0LL;
      SubkeyInfoFromRegistry = CcdRetrieveSubkeyInfoFromRegistry(Handle, i);
      TopologySetIdDescriptorCallback = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry == -2147483622 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v13[3] = i;
        v13[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v13[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v13[6] = a3;
        goto LABEL_11;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v10 = v24;
      v17[0] = *((_WORD *)v24 + 6);
      v17[1] = *((_WORD *)v24 + 6);
      v18 = 0;
      v19 = (char *)v24 + 16;
      if ( v17[0] != *((_DWORD *)v24 + 3) )
        WdLogSingleEntry0(1LL);
      *(&ObjectAttributes.Length + 1) = 0;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
      ObjectAttributes.Attributes = 576;
      TopologySetIdDescriptorCallback = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      operator delete[](v10);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        WdLogSingleEntry5(
          3LL,
          TopologySetIdDescriptorCallback,
          i,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
          CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback,
          a3);
        goto LABEL_11;
      }
      CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v21,
        KeyHandle,
        0LL);
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v21,
                                               a3);
      ZwClose(KeyHandle);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
        v15[4] = i;
        v15[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v15[3] = TopologySetIdDescriptorCallback;
        v15[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v15[7] = a3;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v21);
        goto LABEL_11;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v21);
    }
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
    v16[4] = i;
    v16[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v16[3] = TopologySetIdDescriptorCallback;
    v16[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v16[7] = a3;
LABEL_11:
    ZwClose(Handle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
