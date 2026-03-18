/*
 * XREFs of DpiDxgkDdiSetPowerState @ 0x1C01715B4
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0170A00 (DpiFdoSetAdapterPowerState.c)
 *     DpiPdoSetDevicePower @ 0x1C0170D9C (DpiPdoSetDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1C0170EEC (DpiFdoHandleSystemPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0039544 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiSetPowerState(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+38h] [rbp-20h]

  v7 = a4;
  v8 = (unsigned int)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(a1, &EventEnterDdiSetPowerState, a3, a2, a3, a4, a5, 0);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a1 + 224))(
         a2,
         (unsigned int)v8,
         (unsigned int)v7,
         a5);
  v13 = v9;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v19) = v9;
    LODWORD(v18) = a5;
    LODWORD(v17) = v7;
    LODWORD(v16) = v8;
    McTemplateK0pqtqq_EtwWriteTransfer(v11, &EventExitDdiSetPowerState, v12, a2, v16, v17, v18, v19);
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10);
  v14[3] = a1;
  v14[4] = v8;
  v14[5] = v7;
  v14[6] = (int)a5;
  v14[7] = v13;
  WdLogEvent5_WdEvent(v14);
  return (unsigned int)v13;
}
