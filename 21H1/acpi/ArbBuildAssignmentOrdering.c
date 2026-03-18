/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x1C009FC74
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x1C009F9D0 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     ZwClose_0 @ 0x1C0031AB7 (ZwClose_0.c)
 *     ZwCreateKey_0 @ 0x1C0031B11 (ZwCreateKey_0.c)
 *     ZwOpenKey_0 @ 0x1C0031B35 (ZwOpenKey_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     ArbAddOrdering @ 0x1C00A00B8 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1C00A01A0 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1C00A0270 (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x1C00A02D0 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x1C00B7B9C (ArbPruneOrdering.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(__int64 a1)
{
  NTSTATUS RegistryValue; // edi
  void *v4; // rcx
  void *v5; // rcx
  HANDLE Handle; // [rsp+50h] [rbp-61h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-59h] BYREF
  __int128 v8; // [rsp+60h] [rbp-51h] BYREF
  __int64 v9; // [rsp+70h] [rbp-41h]
  __int64 v10; // [rsp+78h] [rbp-39h]
  __int64 v11; // [rsp+80h] [rbp-31h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-29h] BYREF
  __int128 v13; // [rsp+B8h] [rbp+7h]
  __int128 v14; // [rsp+C8h] [rbp+17h]

  KeyHandle = 0LL;
  Handle = 0LL;
  v8 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v13 = 0LL;
  v14 = 0LL;
  KeEnterCriticalRegion();
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  RegistryValue = ArbInitializeOrderingList(a1 + 56);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = ArbInitializeOrderingList(a1 + 72);
    if ( RegistryValue >= 0 )
    {
      LODWORD(v8) = 7733366;
      *((_QWORD *)&v8 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      RegistryValue = ZwOpenKey_0(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( RegistryValue >= 0 )
      {
        LODWORD(v8) = 1966110;
        *((_QWORD *)&v8 + 1) = L"AllocationOrder";
        ObjectAttributes.RootDirectory = KeyHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RegistryValue = ZwOpenKey_0(&Handle, 0x20019u, &ObjectAttributes);
        if ( RegistryValue >= 0 )
          RegistryValue = ArbpGetRegistryValue(Handle);
      }
    }
  }
  if ( KeyHandle )
    ZwClose_0(KeyHandle);
  if ( Handle )
    ZwClose_0(Handle);
  v4 = *(void **)(a1 + 64);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_WORD *)(a1 + 56) = 0;
    *(_WORD *)(a1 + 58) = 0;
  }
  v5 = *(void **)(a1 + 80);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_DWORD *)(a1 + 72) = 0;
  }
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)RegistryValue;
}
