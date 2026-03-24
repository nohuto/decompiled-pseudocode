/*
 * XREFs of DpiFdoResetFdo @ 0x1C02CBC74
 * Callers:
 *     DpiAddDevice @ 0x1C017CFC0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02CA1F0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DpiFdoCleanupMipiDsi @ 0x1C002199C (DpiFdoCleanupMipiDsi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     DpiFdoCleanupDP @ 0x1C0052C68 (DpiFdoCleanupDP.c)
 *     DpiRequestIoPowerState @ 0x1C01775E0 (DpiRequestIoPowerState.c)
 *     DxgkFreeUnicodeString @ 0x1C019FE80 (DxgkFreeUnicodeString.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C0217788 (DxgkReleaseAdapterFdoReference.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C02C8930 (DpiFdoCleanupGpuVirtualization.c)
 */

void __fastcall DpiFdoResetFdo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r8
  void *v6; // rcx
  __int64 v7; // rdx
  DXGADAPTER *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  _QWORD *v13; // rcx
  void (__fastcall *v14)(_QWORD); // rax
  __int64 v15; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v2 + 1368) )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v4[3] = 275LL;
    v4[4] = 21LL;
    v4[5] = -1073741823LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  ExDeleteResourceLite((PERESOURCE)(v2 + 3792));
  ExDeleteResourceLite((PERESOURCE)(v2 + 3304));
  if ( *(_QWORD *)(v2 + 3920) )
    DpiRequestIoPowerState(a1, 7, v5, 0);
  RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 4824));
  RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 4840));
  DxgkFreeUnicodeString(v2 + 4920);
  v6 = *(void **)(v2 + 2728);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(v2 + 2728) = 0LL;
  }
  DpiFdoCleanupGpuVirtualization(v2);
  DpiFdoCleanupMipiDsi(v2);
  DpiFdoCleanupDP((_QWORD *)v2);
  v8 = *(DXGADAPTER **)(v2 + 3896);
  if ( v8 )
  {
    DxgkReleaseAdapterFdoReference(v8, v7);
    *(_QWORD *)(v2 + 3896) = 0LL;
  }
  *(_DWORD *)(v2 + 3280) = 0;
  v9 = *(void **)(v2 + 3296);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v2 + 3296) = 0LL;
  }
  v10 = *(void **)(v2 + 3288);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v2 + 3288) = 0LL;
  }
  v11 = *(void **)(v2 + 4888);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v2 + 4888) = 0LL;
  }
  v12 = *(void **)(v2 + 4896);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(v2 + 4896) = 0LL;
  }
  v13 = *(_QWORD **)(v2 + 4936);
  if ( v13 )
  {
    v14 = (void (__fastcall *)(_QWORD))v13[4];
    if ( v14 )
    {
      v14(v13[2]);
      v15 = *(_QWORD *)(v2 + 4936);
      *(_OWORD *)(v15 + 8) = 0LL;
      *(_OWORD *)(v15 + 24) = 0LL;
      *(_OWORD *)(v15 + 40) = 0LL;
      *(_QWORD *)(v15 + 56) = 0LL;
      v13 = *(_QWORD **)(v2 + 4936);
    }
    if ( v13 )
    {
      ExFreePoolWithTag(v13, 0);
      *(_QWORD *)(v2 + 4936) = 0LL;
    }
  }
}
