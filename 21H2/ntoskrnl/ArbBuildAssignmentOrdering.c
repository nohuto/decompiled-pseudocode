/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x14083AAB8
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x14083A794 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ArbAddOrdering @ 0x14083AF88 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x14083B060 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x14083B12C (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x14083B170 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x14083B1AC (ArbPruneOrdering.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS RegistryValue; // edi
  void *v5; // rcx
  void *v6; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  __int128 v9; // [rsp+58h] [rbp-61h] BYREF
  __int64 v10; // [rsp+68h] [rbp-51h]
  __int64 v11; // [rsp+70h] [rbp-49h]
  __int64 v12; // [rsp+78h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-39h] BYREF
  __int128 v14; // [rsp+B0h] [rbp-9h]
  __int128 v15; // [rsp+C0h] [rbp+7h]

  KeyHandle = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v14 = 0LL;
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  RegistryValue = ArbInitializeOrderingList(a1 + 56);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = ArbInitializeOrderingList(a1 + 72);
    if ( RegistryValue >= 0 )
    {
      LODWORD(v9) = 7733366;
      *((_QWORD *)&v9 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( RegistryValue >= 0 )
      {
        LODWORD(v9) = 1966110;
        *((_QWORD *)&v9 + 1) = L"AllocationOrder";
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RegistryValue = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( RegistryValue >= 0 )
          RegistryValue = ArbpGetRegistryValue(Handle);
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  v5 = *(void **)(a1 + 64);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_DWORD *)(a1 + 56) = 0;
  }
  v6 = *(void **)(a1 + 80);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_DWORD *)(a1 + 72) = 0;
  }
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)RegistryValue;
}
