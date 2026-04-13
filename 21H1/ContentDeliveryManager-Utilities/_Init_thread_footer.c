/*
 * XREFs of _Init_thread_footer @ 0x1800CC364
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x1800827A8 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800A10DC (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  AcquireSRWLockExclusive(&stru_180193CD8);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  ReleaseSRWLockExclusive(&stru_180193CD8);
  WakeAllConditionVariable(&ConditionVariable);
}
