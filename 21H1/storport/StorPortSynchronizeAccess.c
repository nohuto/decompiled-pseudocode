/*
 * XREFs of StorPortSynchronizeAccess @ 0x1C0038B20
 * Callers:
 *     StorPortSynchronizeAccessVrfy @ 0x1C007E800 (StorPortSynchronizeAccessVrfy.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C00064E8 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C000666C (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C001B1C0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall StorPortSynchronizeAccess(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 *v3; // rax
  KIRQL v4; // di
  __int64 v8; // rbx
  char v10; // si

  v3 = *(__int64 **)(a1 - 16);
  v4 = 0;
  v8 = *v3;
  if ( !*v3 )
    return 0;
  if ( *(_DWORD *)(v8 + 704) == 1 )
    v4 = RaidAdapterAcquireInterruptLock(*v3);
  v10 = a2(a1, a3);
  if ( *(_DWORD *)(v8 + 704) == 1 )
    RaidAdapterReleaseInterruptLock(v8, v4);
  return v10;
}
