/*
 * XREFs of DpiDxgkDdiQueryInterface @ 0x1C01FA498
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C01E4250 (DpiPdoDispatchPnp.c)
 *     DpiQueryMiniportInterface @ 0x1C01FA410 (DpiQueryMiniportInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pjq_EtwWriteTransfer @ 0x1C00666EC (McTemplateK0pjq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiQueryInterface(__int64 a1, __int64 a2, __int128 **a3)
{
  __int128 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int128 *v11; // rax
  _QWORD *v12; // rax
  __int64 v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+28h] [rbp-40h]
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF

  if ( bTracingEnabled )
  {
    v6 = *a3;
    v16 = 0LL;
    if ( v6 )
      v16 = *v6;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v15 = 0;
      McTemplateK0pjq_EtwWriteTransfer(a1, &EventEnterDdiQueryInterface, (__int64)a3, a2, &v16, v15);
    }
  }
  v9 = (*(int (__fastcall **)(__int64, __int128 **))(a1 + 256))(a2, a3);
  if ( bTracingEnabled )
  {
    v11 = *a3;
    v16 = 0LL;
    if ( v11 )
      v16 = *v11;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v14) = v9;
      McTemplateK0pjq_EtwWriteTransfer(v8, &EventExitDdiQueryInterface, v10, a2, &v16, v14);
    }
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v12[5] = 0LL;
  v12[6] = 0LL;
  v12[7] = 0LL;
  v12[3] = a1;
  v12[4] = v9;
  return (unsigned int)v9;
}
