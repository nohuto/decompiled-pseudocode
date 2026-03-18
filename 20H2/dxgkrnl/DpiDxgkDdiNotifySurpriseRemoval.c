/*
 * XREFs of DpiDxgkDdiNotifySurpriseRemoval @ 0x1C02D75B0
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01717A0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02C96B0 (DpiFdoHandleSurpriseRemoval.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003942C (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiNotifySurpriseRemoval(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // al
  __int64 v6; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD); // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // [rsp+20h] [rbp-18h]
  __int64 v18; // [rsp+28h] [rbp-10h]

  v4 = *(_BYTE *)(a3 + 3904);
  v6 = a4;
  LODWORD(v8) = -1073741637;
  if ( (v4 & 0x18) != 0
    && *(_DWORD *)(a1 + 136) >= 0x300Du
    && (v9 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 792)) != 0LL )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq_EtwWriteTransfer(a1, &EventEnterDdiNotifySurpriseRemoval, (__int64)v9, a2, a4, 0);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 792);
    }
    v10 = v9(a2, (unsigned int)v6);
    v8 = v10;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v18) = v10;
      LODWORD(v17) = v6;
      McTemplateK0pqq_EtwWriteTransfer(v12, &EventExitDdiNotifySurpriseRemoval, v13, a2, v17, v18);
    }
    v15 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = a1;
    *(_QWORD *)(v15 + 32) = v6;
    *(_QWORD *)(v15 + 40) = v8;
    *(_OWORD *)(v15 + 48) = 0LL;
  }
  else if ( (v4 & 0x10) != 0 )
  {
    LODWORD(v8) = *(_QWORD *)(a1 + 792) != 0LL ? 0xC00000BB : 0;
  }
  return (unsigned int)v8;
}
