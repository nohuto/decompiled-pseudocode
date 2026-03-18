/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00E87F4
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01582C0 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00E3080 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00E8718 (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C00E8780 (_CcdOpenRegistrySubkey_0.c)
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C00E897C (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00E8E60 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0139AC4 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        __int64 a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  struct _UNICODE_STRING v29; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v30[112]; // [rsp+48h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+6Fh] BYREF
  void *v33; // [rsp+E0h] [rbp+7Fh]

  HIDWORD(Handle) = HIDWORD(a2);
  KeyHandle = 0LL;
  LODWORD(Handle) = 0;
  v4 = CcdOpenRegistrySubkey(
         (int)&KeyHandle,
         131097,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         (PULONG)&Handle);
  TopologySetIdDescriptorCallback = v4;
  if ( v4 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v24[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v24[3] = TopologySetIdDescriptorCallback;
    v24[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v24[6] = a3;
    WdLogEvent5_WdError(v24);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      Handle = 0LL;
      v33 = 0LL;
      SubkeyInfoFromRegistry = CcdRetrieveSubkeyInfoFromRegistry(KeyHandle, i);
      TopologySetIdDescriptorCallback = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry == -2147483622 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v22[3] = i;
        v22[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v22[6] = a3;
        goto LABEL_11;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v14 = v33;
      v29.Length = *((_WORD *)v33 + 6);
      v29.MaximumLength = *((_WORD *)v33 + 6);
      *(_DWORD *)(&v29.MaximumLength + 1) = 0;
      v29.Buffer = (wchar_t *)((char *)v33 + 16);
      if ( v29.Length != *((_DWORD *)v33 + 3) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v29.Length, v10);
        WdLogEvent5_WdAssertion(v25);
      }
      TopologySetIdDescriptorCallback = CcdOpenRegistrySubkey_0(&Handle, 0xF003Fu, KeyHandle, &v29, 0LL);
      operator delete[](v14);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
        v27[4] = i;
        v27[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v27[3] = TopologySetIdDescriptorCallback;
        v27[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v27[7] = a3;
        WdLogEvent5_WdWarning(v27);
        goto LABEL_11;
      }
      CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v30,
        Handle,
        0LL);
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v30,
                                               a3);
      ZwClose(Handle);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
        v26[4] = i;
        v26[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v26[3] = TopologySetIdDescriptorCallback;
        v26[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v26[7] = a3;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v30);
        goto LABEL_11;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v30);
    }
    v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v28[4] = i;
    v28[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v28[3] = TopologySetIdDescriptorCallback;
    v28[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v28[7] = a3;
LABEL_11:
    ZwClose(KeyHandle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
