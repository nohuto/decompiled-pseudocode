/*
 * XREFs of DpiDxgkDdiExchangePreStartInfo @ 0x1C0198EF4
 * Callers:
 *     DpiAddDevice @ 0x1C017EFC0 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003957C (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiExchangePreStartInfo(__int64 a1, __int64 a2, unsigned int *a3)
{
  int (__fastcall *v5)(__int64, unsigned int *); // r8
  __int64 v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]

  v5 = *(int (__fastcall **)(__int64, unsigned int *))(a1 + 1144);
  if ( v5 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq_EtwWriteTransfer(*a3, &EventEnterDdiExchangePreStartInfo, (__int64)v5, a2, *a3, 0);
      v5 = *(int (__fastcall **)(__int64, unsigned int *))(a1 + 1144);
    }
    v7 = v5(a2, a3);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v16) = v7;
      LODWORD(v15) = a3[1];
      McTemplateK0pqq_EtwWriteTransfer(v10, &EventExitDdiExchangePreStartInfo, v11, a2, v15, v16);
    }
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v13[3] = a1;
    v13[4] = *a3;
    v14 = a3[1];
    v13[7] = 0LL;
    v13[5] = v14;
    v13[6] = v7;
  }
  else
  {
    LODWORD(v7) = 0;
    a3[1] = 0;
  }
  return (unsigned int)v7;
}
