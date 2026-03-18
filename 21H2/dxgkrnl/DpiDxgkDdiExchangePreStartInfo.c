/*
 * XREFs of DpiDxgkDdiExchangePreStartInfo @ 0x1C021B680
 * Callers:
 *     DpiAddDevice @ 0x1C01F84B0 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiExchangePreStartInfo(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 (__fastcall *v5)(__int64, unsigned int *); // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]

  v5 = *(__int64 (__fastcall **)(__int64, unsigned int *))(a1 + 1144);
  if ( v5 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0pqq_EtwWriteTransfer(*a3, &EventEnterDdiExchangePreStartInfo, (__int64)v5, a2, *a3, 0);
      v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a1 + 1144))(a2, a3);
    }
    else
    {
      v7 = v5(a2, a3);
    }
    v11 = v7;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v16) = v7;
      LODWORD(v15) = a3[1];
      McTemplateK0pqq_EtwWriteTransfer(v9, &EventExitDdiExchangePreStartInfo, v10, a2, v15, v16);
    }
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
    v12[3] = a1;
    v12[4] = *a3;
    v13 = a3[1];
    v12[7] = 0LL;
    v12[5] = v13;
    v12[6] = v11;
  }
  else
  {
    LODWORD(v11) = 0;
    a3[1] = 0;
  }
  return (unsigned int)v11;
}
