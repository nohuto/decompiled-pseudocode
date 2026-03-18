/*
 * XREFs of DpiDxgkDdiSetTargetAdjustedColorimetry2 @ 0x1C001E14C
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C001E0CC (DpiSetTargetAdjustedColorimetry2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0044D64 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiSetTargetAdjustedColorimetry2(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        int a5)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, int *); // r9
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  __int64 v16; // rbx
  __int64 v17; // rax
  int v19; // [rsp+30h] [rbp-78h] BYREF
  __int128 v20; // [rsp+34h] [rbp-74h]
  __int128 v21; // [rsp+44h] [rbp-64h]
  __int128 v22; // [rsp+54h] [rbp-54h]
  int v23; // [rsp+64h] [rbp-44h]
  int v24; // [rsp+68h] [rbp-40h]

  v6 = a3;
  v7 = *(__int64 (__fastcall **)(__int64, int *))(a1 + 1312);
  if ( v7 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0pqq_EtwWriteTransfer(a1, (unsigned int)&EventEnterDdiSetTargetAdjustedColorimetry, a3, a2, a3, 0);
      v7 = *(__int64 (__fastcall **)(__int64, int *))(a1 + 1312);
    }
    v10 = *a4;
    v11 = a4[1];
    v23 = *((_DWORD *)a4 + 12);
    v20 = v10;
    v24 = a5;
    v22 = a4[2];
    v19 = v6;
    v21 = v11;
    v12 = v7(a2, &v19);
    v16 = v12;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(v14, (unsigned int)&EventExitDdiSetTargetAdjustedColorimetry, v15, a2, v6, v12);
    v17 = WdLogNewEntry5_WdTrace(v14, v13);
    *(_QWORD *)(v17 + 24) = a1;
    *(_QWORD *)(v17 + 32) = v6;
    *(_QWORD *)(v17 + 40) = v16;
    *(_OWORD *)(v17 + 48) = 0LL;
  }
  else
  {
    LODWORD(v16) = -1073741637;
  }
  return (unsigned int)v16;
}
