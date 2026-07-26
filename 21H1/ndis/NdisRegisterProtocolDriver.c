/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1C002DE90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012E28 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C002E290 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C002E3C0 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C002E5DC (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C002E714 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C00967D0 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C010308C (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0105E78 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C01065F0 (-ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERI.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0106700 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C0106800 (-ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C01068A0 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  struct _NDIS_PROTOCOL_BLOCK *v3; // rbx
  NDIS_STATUS v7; // edi
  _UNICODE_STRING *p_Name; // r15
  unsigned int v9; // edi
  struct _NDIS_PROTOCOL_BLOCK *PoolWithTag; // rax
  unsigned __int8 MajorNdisVersion; // cl
  unsigned __int8 MinorNdisVersion; // dl
  unsigned int Flags; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ProtocolDriver; // rax
  unsigned int v17; // edx
  _QWORD *v18; // rdi
  unsigned int v19; // edx
  int v20; // edx
  void *v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING v27; // [rsp+58h] [rbp-28h] BYREF
  UNICODE_STRING v28; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+C8h] [rbp+48h] BYREF

  *(_QWORD *)&String2.Length = 786442LL;
  String2.Buffer = L"TCPIP";
  LOBYTE(v3) = 0;
  v29 = 0;
  v27.Buffer = L"TCPIP6";
  *(_QWORD *)&v27.Length = 917516LL;
  v28.Buffer = L"NDISTEST6";
  *(_QWORD *)&v28.Length = 1310738LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      &ProtocolCharacteristics->Name.Length);
  ndisIfEnsureNsiInitialized();
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v7 = ndisValidateProtocolDriverCharacteristicsHeader(ProtocolCharacteristics, &v29);
  if ( !v7 )
  {
    v7 = -1073676283;
    if ( (unsigned int)ndisValidate60Protocol(ProtocolCharacteristics) != -1073676283 )
    {
      if ( (ProtocolCharacteristics->MajorNdisVersion > 6u
         || ProtocolCharacteristics->MajorNdisVersion == 6 && ProtocolCharacteristics->MinorNdisVersion >= 0x32u)
        && (ProtocolCharacteristics->Flags & 0xFFFFFF9) != 0 )
      {
        v7 = -1073741811;
        goto LABEL_25;
      }
      p_Name = &ProtocolCharacteristics->Name;
      v9 = ProtocolCharacteristics->Name.Length + 890;
      PoolWithTag = (struct _NDIS_PROTOCOL_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x6270444Eu);
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v9);
        v3->Bind._p = 0LL;
        v3->NotifyBindCompleteWorkItem.m_callback = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
        v3->NotifyBindCompleteWorkItem.m_workitem.WorkerRoutine = (void (__fastcall *)(void *))KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
        v3->NotifyBindCompleteWorkItem.m_workitem.List.Flink = 0LL;
        v3->NotifyBindCompleteWorkItem.m_queued = 0;
        v3->NotifyBindCompleteWorkItem.m_context = v3;
        v3->NotifyBindCompleteWorkItem.m_workitem.Parameter = &v3->NotifyBindCompleteWorkItem;
        KeInitializeMutex(&v3->Mutex, 0xFFFFu);
        v3->Header.Size = v9;
        *(_WORD *)&v3->Header.Type = 259;
        MajorNdisVersion = ProtocolCharacteristics->MajorNdisVersion;
        v3->MajorNdisVersion = MajorNdisVersion;
        MinorNdisVersion = ProtocolCharacteristics->MinorNdisVersion;
        v3->MinorNdisVersion = MinorNdisVersion;
        v3->MajorDriverVersion = ProtocolCharacteristics->MajorDriverVersion;
        v3->MinorDriverVersion = ProtocolCharacteristics->MinorDriverVersion;
        v3->Name.Buffer = (wchar_t *)&v3[1].Header.Type;
        v3->ProtocolDriverContext = ProtocolDriverContext;
        Flags = ProtocolCharacteristics->Flags;
        v3->Flags = Flags;
        if ( MajorNdisVersion <= 6u && (MajorNdisVersion != 6 || MinorNdisVersion < 0x32u) )
          v3->Flags = Flags & 0xF0000000;
        v3->Name.Length = p_Name->Length;
        v3->Name.MaximumLength = p_Name->Length;
        RtlUpcaseUnicodeString(&v3->Name, &ProtocolCharacteristics->Name, 0);
        v3->IsIPv4 = RtlCompareUnicodeString(&v3->Name, &String2, 0) == 0;
        v3->IsIPv6 = RtlCompareUnicodeString(&v3->Name, &v27, 0) == 0;
        v3->IsNdisTest6 = RtlCompareUnicodeString(&v3->Name, &v28, 0) == 0;
        v3->BindAdapterHandlerEx = ProtocolCharacteristics->BindAdapterHandlerEx;
        v3->UnbindAdapterHandlerEx = ProtocolCharacteristics->UnbindAdapterHandlerEx;
        v3->OpenAdapterCompleteHandlerEx = ProtocolCharacteristics->OpenAdapterCompleteHandlerEx;
        v3->CloseAdapterCompleteHandlerEx = ProtocolCharacteristics->CloseAdapterCompleteHandlerEx;
        v3->PnPEventHandler = (int (__fastcall *)(void *, _NET_PNP_EVENT *))ProtocolCharacteristics->NetPnPEventHandler;
        v3->UninstallHandler = ProtocolCharacteristics->UninstallHandler;
        v3->StatusHandlerEx = ProtocolCharacteristics->StatusHandlerEx;
        v3->ReceiveNetBufferListsHandler = ProtocolCharacteristics->ReceiveNetBufferListsHandler;
        v3->SendNetBufferListsCompleteHandler = ProtocolCharacteristics->SendNetBufferListsCompleteHandler;
        v3->OidRequestCompleteHandler = ProtocolCharacteristics->OidRequestCompleteHandler;
        if ( ProtocolCharacteristics->MajorNdisVersion > 6u
          || ProtocolCharacteristics->MajorNdisVersion == 6 && ProtocolCharacteristics->MinorNdisVersion )
        {
          v3->DirectOidRequestCompleteHandler = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
        }
        ndisInitializeRef(&v3->Ref, 0xFu);
        LOBYTE(v15) = v3->MajorNdisVersion <= 6u && (v3->MajorNdisVersion != 6 || v3->MinorNdisVersion < 0x52u);
        LOBYTE(v14) = 1;
        ProtocolDriver = ndisBindGetProtocolDriver(&P, &v3->Name, v14, v15);
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v3->Bind, ProtocolDriver);
        v18 = P;
        if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 12, 0xFFFFFFFF) == 1 && v18 )
        {
          v22 = (void *)v18[3];
          v18[3] = 0LL;
          if ( v22 )
            ExFreePoolWithTag(v22, 0x7274534Bu);
          v23 = v18[1];
          if ( *(_QWORD **)(v23 + 8) != v18 + 1 || (v24 = (_QWORD *)v18[2], (_QWORD *)*v24 != v18 + 1) )
            __fastfail(3u);
          *v24 = v23;
          *(_QWORD *)(v23 + 8) = v24;
          ExFreePoolWithTag(v18, 0x44745042u);
        }
        if ( v3->Bind._p )
        {
          *NdisProtocolHandle = v3;
          v7 = ndisInvokeSetOptions(v3, ProtocolCharacteristics);
          if ( v7 )
          {
            _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3, v19);
            ExFreePoolWithTag(v3, 0);
            LOBYTE(v3) = 0;
            *NdisProtocolHandle = 0LL;
          }
          else
          {
            ndisWriteDriverNDISVersionToServiceKey(
              v3->MajorNdisVersion,
              v3->MinorNdisVersion,
              1u,
              v3->MajorDriverVersion,
              v3->MinorDriverVersion,
              &v3->Name);
            ndisRegisterProtocolDriverCommon(v3);
            v7 = 0;
          }
          goto LABEL_25;
        }
        _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3, v17);
        ExFreePoolWithTag(v3, 0);
      }
      v7 = -1073741670;
    }
  }
LABEL_25:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      13,
      11,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)v3,
      (__int64)&ProtocolCharacteristics->Name,
      v7);
  return v7;
}
