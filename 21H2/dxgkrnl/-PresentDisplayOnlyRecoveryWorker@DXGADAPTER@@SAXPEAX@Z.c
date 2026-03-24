/*
 * XREFs of ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C020E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0021DF8 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0021E80 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0039F4C (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C003A920 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DxgkInvalidateDeviceState @ 0x1C00527C8 (DxgkInvalidateDeviceState.c)
 *     W32kStub_DCompositionNotifyCompositionTokenPresent @ 0x1C00FDCF0 (W32kStub_DCompositionNotifyCompositionTokenPresent.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02654E0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C0265710 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 */

void __fastcall DXGADAPTER::PresentDisplayOnlyRecoveryWorker(struct _TDR_RECOVERY_CONTEXT *StartContext, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rdi
  void *v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h]
  char v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)StartContext + 4);
  v11 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v10, a2);
  W32kStub_DCompositionNotifyCompositionTokenPresent();
  if ( bTracingEnabled
    && (qword_1C00B19B0 & 0x1000000) != 0
    && (qword_1C00B19B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v4, v2, 1);
  }
  while ( *(_QWORD *)(v2 + 168) && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v2 + 168), 0) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v5 = *(_QWORD *)(v2 + 168);
  if ( bTracingEnabled
    && (qword_1C00B19B0 & 0x1000000) != 0
    && (qword_1C00B19B0 & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
  {
    LODWORD(v9) = v5 != 0;
    McTemplateK0pt_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v4, v2, v9);
  }
  if ( !v5 )
    W32kStub_DCompositionNotifyCompositionTokenPresent();
  if ( *(_QWORD *)(v2 + 168) )
  {
    v6 = *(void **)(v2 + 216);
    if ( v6 )
      ObfReferenceObject(*(PVOID *)(v2 + 216));
    TdrCollectDbgInfoStage2(StartContext);
    if ( bTracingEnabled
      && (qword_1C00B19B0 & 0x1000000) != 0
      && (qword_1C00B19B0 & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v7, v2);
    }
    W32kStub_DCompositionNotifyCompositionTokenPresent();
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    if ( v6 )
    {
      if ( (*(_DWORD *)(v2 + 348) & 4) == 0 )
        DxgkInvalidateDeviceState((__int64)v6);
      ObfDereferenceObject(v6);
    }
  }
  TdrCompleteRecoveryContext(StartContext, 1, 0);
  if ( v11 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v10, v8);
}
