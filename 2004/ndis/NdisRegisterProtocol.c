/*
 * XREFs of NdisRegisterProtocol @ 0x1C00988B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012E28 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C002E4D0 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C002E600 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C002E81C (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1C0097F18 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C0102E1C (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C0102FFC (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x1C0105DE8 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0106670 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C0106810 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116C20 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

PVOID __fastcall NdisRegisterProtocol(
        int *a1,
        struct _NDIS_PROTOCOL_BLOCK **a2,
        struct _NDIS50_PROTOCOL_CHARACTERISTICS *a3,
        unsigned int a4)
{
  struct _NDIS_PROTOCOL_BLOCK *v5; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ebx
  int v12; // edx
  PVOID result; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  _UNICODE_STRING *p_Name; // r15
  __int64 ProtocolDriver; // rax
  _QWORD *v19; // rbx
  void *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  PVOID v23; // rbx
  USHORT v24; // bp
  struct _NDIS_PROTOCOL_BLOCK *PoolWithTag; // rax
  unsigned __int8 MajorNdisVersion; // al
  PVOID P[2]; // [rsp+40h] [rbp-38h] BYREF
  PVOID v28; // [rsp+90h] [rbp+18h] BYREF

  LOBYTE(v5) = 0;
  v28 = 0LL;
  ndisIfEnsureNsiInitialized();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0xEu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      &a3->Ndis40Chars.Name.Length);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a3->Ndis40Chars.MajorNdisVersion < 4u )
  {
    DbgPrint("Ndis: NdisRegisterProtocol Ndis 3.0 protocols are not supported.\n");
LABEL_5:
    v11 = -1073676284;
    goto LABEL_6;
  }
  if ( a3->Ndis40Chars.MajorNdisVersion == 4 )
  {
    if ( a3->Ndis40Chars.MinorNdisVersion )
      goto LABEL_5;
    v14 = 144;
  }
  else
  {
    if ( a3->Ndis40Chars.MajorNdisVersion != 5 || a3->Ndis40Chars.MinorNdisVersion > 1u )
      goto LABEL_5;
    v14 = 208;
  }
  if ( a4 >= v14 && ndisValidateLegacyProtocols(a3, v9, v10) )
  {
    LOBYTE(v16) = 1;
    p_Name = &a3->Ndis40Chars.Name;
    LOBYTE(v15) = 1;
    ProtocolDriver = ndisBindGetProtocolDriver(P, (char *)&a3->2 + 88, v15, v16);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v28, ProtocolDriver);
    v19 = P[0];
    if ( P[0] && _InterlockedExchangeAdd((volatile signed __int32 *)P[0] + 12, 0xFFFFFFFF) == 1 && v19 )
    {
      v20 = (void *)v19[3];
      v19[3] = 0LL;
      if ( v20 )
        ExFreePoolWithTag(v20, 0x7274534Bu);
      v21 = v19[1];
      if ( *(_QWORD **)(v21 + 8) != v19 + 1 || (v22 = (_QWORD *)v19[2], (_QWORD *)*v22 != v19 + 1) )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      ExFreePoolWithTag(v19, 0x44745042u);
    }
    v23 = v28;
    if ( v28 )
    {
      v24 = p_Name->Length + 890;
      PoolWithTag = (struct _NDIS_PROTOCOL_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x6270444Eu);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v24);
        v5->Bind._p = 0LL;
        v5->NotifyBindCompleteWorkItem.m_callback = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
        v5->NotifyBindCompleteWorkItem.m_workitem.WorkerRoutine = (void (__fastcall *)(void *))KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
        v5->NotifyBindCompleteWorkItem.m_context = v5;
        v5->NotifyBindCompleteWorkItem.m_workitem.Parameter = &v5->NotifyBindCompleteWorkItem;
        v5->NotifyBindCompleteWorkItem.m_workitem.List.Flink = 0LL;
        v5->NotifyBindCompleteWorkItem.m_queued = 0;
        if ( &v5->Bind != (KRef<NDIS_BIND_PROTOCOL_DRIVER> *)&v28 )
          KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(&v5->Bind, v23);
        KeInitializeMutex(&v5->Mutex, 0xFFFFu);
        *(_WORD *)&v5->Header.Type = 259;
        v5->Header.Size = v24;
        v5->MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
        v5->MinorNdisVersion = a3->Ndis40Chars.MinorNdisVersion;
        v5->Name.Buffer = (wchar_t *)&v5[1].Header.Type;
        v5->Reserved = a3->Ndis40Chars.Reserved;
        v5->Flags = a3->Ndis40Chars.Reserved & 0xF0000000;
        v5->Name.Length = p_Name->Length;
        v5->Name.MaximumLength = p_Name->Length;
        RtlUpcaseUnicodeString(&v5->Name, &a3->Ndis40Chars.Name, 0);
        v5->OpenAdapterCompleteHandler = a3->Ndis40Chars.OpenAdapterCompleteHandler;
        v5->CloseAdapterCompleteHandler = a3->Ndis40Chars.CloseAdapterCompleteHandler;
        v5->SendCompleteHandler = a3->Ndis40Chars.SendCompleteHandler;
        v5->TransferDataCompleteHandler = a3->Ndis40Chars.TransferDataCompleteHandler;
        v5->ResetCompleteHandler = a3->Ndis40Chars.ResetCompleteHandler;
        v5->RequestCompleteHandler = a3->Ndis40Chars.RequestCompleteHandler;
        v5->ReceiveHandler = a3->Ndis40Chars.ReceiveHandler;
        v5->ReceiveCompleteHandler = a3->Ndis40Chars.ReceiveCompleteHandler;
        v5->StatusHandlerEx = (void (__fastcall *)(void *, _NDIS_STATUS_INDICATION *))a3->Ndis40Chars.StatusHandler;
        v5->StatusCompleteHandler = a3->Ndis40Chars.StatusCompleteHandler;
        MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
        if ( a3->Ndis40Chars.MajorNdisVersion >= 4u )
        {
          v5->ReceivePacketHandler = a3->Ndis40Chars.ReceivePacketHandler;
          v5->BindAdapterHandler = a3->Ndis40Chars.BindAdapterHandler;
          v5->UnbindAdapterHandler = a3->Ndis40Chars.UnbindAdapterHandler;
          v5->PnPEventHandler = a3->Ndis40Chars.PnPEventHandler;
          v5->UnloadHandler = a3->Ndis40Chars.UnloadHandler;
          MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
        }
        if ( MajorNdisVersion == 5 )
        {
          v5->CoSendCompleteHandler = a3->CoSendCompleteHandler;
          v5->CoStatusHandlerEx = (void (__fastcall *)(void *, void *, _NDIS_STATUS_INDICATION *))a3->CoStatusHandler;
          v5->CoReceivePacketHandler = a3->CoReceivePacketHandler;
          v5->CoAfRegisterNotifyHandler = a3->CoAfRegisterNotifyHandler;
        }
        *a2 = v5;
        ndisInitializeRef(&v5->Ref, 0xFu);
        ndisRegisterProtocolDriverCommon(v5);
        ndisWriteDriverNDISVersionToServiceKey(v5->MajorNdisVersion, v5->MinorNdisVersion, 0, 0, 0, &v5->Name);
        v11 = 0;
      }
      else
      {
        v11 = -1073741670;
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073676283;
  }
LABEL_6:
  *a1 = v11;
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      5u,
      0xFu,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)v5,
      &a3->Ndis40Chars.Name.Length,
      v11);
  result = v28;
  if ( v28 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v28 + 12, 0xFFFFFFFF) == 1 )
      return (PVOID)KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v28);
  }
  return result;
}
