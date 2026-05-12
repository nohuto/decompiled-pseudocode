/*
 * XREFs of StorpWatchForRegistryChanges @ 0x1C00352D0
 * Callers:
 *     DllInitialize @ 0x1C004B4F0 (DllInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StorpWatchForRegistryChanges(char *P)
{
  char v1; // al
  char v2; // si
  char *v3; // rdi
  const UNICODE_STRING *v5; // r14
  char *PoolWithTag; // rax
  unsigned int Length; // ecx
  PVOID v8; // rax
  __int64 v9; // rax
  void *v10; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+67h] BYREF

  KeyHandle = 0LL;
  v1 = P[32];
  v2 = 0;
  v3 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !v1 || P[33] )
  {
    ObjectAttributes.RootDirectory = 0LL;
    v5 = (const UNICODE_STRING *)(P + 40);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(P + 40);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x10u, &ObjectAttributes) < 0
      || (PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x57526152u), (v3 = PoolWithTag) == 0LL) )
    {
LABEL_17:
      if ( KeyHandle )
        ZwClose(KeyHandle);
      return;
    }
    Length = v5->Length;
    v2 = 1;
    *((_WORD *)PoolWithTag + 21) = Length;
    v8 = ExAllocatePoolWithTag(PagedPool, Length, 0x53446152u);
    *((_QWORD *)v3 + 6) = v8;
    if ( !v8 )
      goto LABEL_13;
    RtlCopyUnicodeString((PUNICODE_STRING)(v3 + 40), v5);
    v3[32] = 1;
    v3[33] = P[33];
    v3[34] = 1;
    *((_QWORD *)v3 + 7) = KeyHandle;
    v9 = *((_QWORD *)P + 8);
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 8) = v9;
    *((_QWORD *)v3 + 2) = StorpWatchForRegistryChanges;
    *((_QWORD *)v3 + 3) = v3;
    if ( ZwNotifyChangeKey(KeyHandle, 0LL, (PIO_APC_ROUTINE)v3, (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u) < 0 )
    {
LABEL_13:
      if ( v3 )
      {
        v10 = (void *)*((_QWORD *)v3 + 6);
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
        ExFreePoolWithTag(v3, 0);
      }
      goto LABEL_17;
    }
    v1 = P[32];
  }
  if ( v1 )
  {
    (*((void (__fastcall **)(char *))P + 8))(P);
    ZwClose(*((HANDLE *)P + 7));
    if ( P[34] )
      ExFreePoolWithTag(*((PVOID *)P + 6), 0);
    ExFreePoolWithTag(P, 0);
  }
  if ( !v2 )
    goto LABEL_13;
}
