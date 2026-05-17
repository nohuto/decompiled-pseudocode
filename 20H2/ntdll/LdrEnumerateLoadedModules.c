/*
 * XREFs of LdrEnumerateLoadedModules @ 0x18005D8C0
 * Callers:
 *     RtlLockModuleSection @ 0x18005D780 (RtlLockModuleSection.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18003E6A4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E704 (LdrpAcquireLoaderLock.c)
 *     LdrpDropLastInProgressCount @ 0x18005D97C (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005EA04 (LdrpDrainWorkQueue.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrEnumerateLoadedModules(int a1, void (__fastcall *a2)(__int64 *, __int64, char *), __int64 a3)
{
  char v5; // bl
  __int64 v6; // rcx
  __int64 *i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+58h] [rbp+20h]

  if ( a1 || !a2 )
    return 3221225485LL;
  v11 = 0;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v5 = 1;
    v12 = 1;
  }
  else
  {
    v5 = 0;
    v12 = 0;
    LdrpDrainWorkQueue(0LL);
  }
  LdrpAcquireLoaderLock();
  for ( i = (__int64 *)qword_18016C4D0; i != &qword_18016C4D0; i = (__int64 *)*i )
  {
    a2(i, a3, &v11);
    if ( v11 )
      break;
  }
  LdrpReleaseLoaderLock(v6, 15LL, 0LL);
  if ( !v5 )
    LdrpDropLastInProgressCount(v9, v8);
  return 0LL;
}
