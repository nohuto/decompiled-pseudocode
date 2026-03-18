/*
 * XREFs of DpiDxgkDdiNotifyAcpiEvent @ 0x1C0396E00
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x1C0394794 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C (McTemplateK0pqtqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiNotifyAcpiEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v7 = a4;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(a1, &EventEnterDdiNotifyAcpiEvent, a3, a2, a3, a4, 0, 0);
  v12 = (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD *))(a1 + 232))(a2, v6, (unsigned int)v7, a5, a6);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v20) = v12;
    LODWORD(v19) = *a6;
    LODWORD(v18) = v7;
    LODWORD(v17) = v6;
    McTemplateK0pqtqq_EtwWriteTransfer(v11, &EventExitDdiNotifyAcpiEvent, v13, a2, v17, v18, v19, v20);
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
  v14[4] = v7;
  v14[3] = a1;
  v14[5] = a5;
  v15 = (unsigned int)*a6;
  v14[7] = v12;
  v14[6] = v15;
  return (unsigned int)v12;
}
