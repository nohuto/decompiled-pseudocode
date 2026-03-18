/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x1407A9798
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x1407A9480 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403F3960 (ZwCreateKey.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ArbAddOrdering @ 0x1407A9C74 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1407A9D50 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1407A9E1C (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x1407A9E74 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x1407A9EB0 (ArbPruneOrdering.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbBuildAssignmentOrdering(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int128 *, char *))
{
  unsigned int v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // edi
  int RegistryValue; // eax
  _DWORD *v10; // rsi
  char *v11; // r13
  char *i; // r15
  int v13; // eax
  int v14; // eax
  char *v15; // rdx
  unsigned __int64 v16; // rax
  char *v17; // r13
  char *j; // r15
  int v19; // eax
  char *v21; // rdx
  unsigned __int64 v22; // rax
  void *v23; // rcx
  void *v24; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-79h] BYREF
  __int128 v28; // [rsp+58h] [rbp-71h] BYREF
  __int64 v29; // [rsp+68h] [rbp-61h] BYREF
  __int64 v30; // [rsp+70h] [rbp-59h] BYREF
  __int64 v31; // [rsp+78h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-49h] BYREF
  _DWORD *v33; // [rsp+B0h] [rbp-19h]
  _DWORD *v34; // [rsp+B8h] [rbp-11h]
  __int128 v35; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v36; // [rsp+D0h] [rbp+7h]

  v4 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  P = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
  ArbFreeOrderingList(a1 + 56);
  ArbFreeOrderingList(a1 + 72);
  v8 = ArbInitializeOrderingList(a1 + 56);
  if ( v8 < 0 )
    goto LABEL_49;
  v8 = ArbInitializeOrderingList(a1 + 72);
  if ( v8 < 0 )
    goto LABEL_49;
  LODWORD(v28) = 7733366;
  *((_QWORD *)&v28 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 < 0 )
    goto LABEL_49;
  LODWORD(v28) = 1966110;
  *((_QWORD *)&v28 + 1) = L"AllocationOrder";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  if ( v8 < 0 )
  {
LABEL_49:
    v10 = P;
    goto LABEL_50;
  }
  RegistryValue = ArbpGetRegistryValue(Handle);
  v10 = P;
  v8 = RegistryValue;
  if ( RegistryValue < 0 || !P )
    goto LABEL_50;
  if ( *((_DWORD *)P + 1) == 1 )
  {
    v21 = (char *)P + *((unsigned int *)P + 2);
    v22 = (unsigned __int64)*((unsigned int *)P + 3) >> 1;
    v33 = 0LL;
    if ( *(_WORD *)&v21[2 * v22 - 2] )
      goto LABEL_44;
    v8 = ArbpGetRegistryValue(Handle);
    if ( v8 < 0 )
      goto LABEL_50;
    ExFreePoolWithTag(v10, 0);
    v10 = v33;
  }
  ZwClose(Handle);
  Handle = 0LL;
  if ( v10[1] != 10 )
    goto LABEL_44;
  v11 = (char *)v10 + (unsigned int)v10[2] + 32;
  for ( i = v11 + 8; i < &v11[32 * *((unsigned int *)v11 + 1) + 8]; i += 32 )
  {
    if ( a4 )
    {
      v8 = a4(&v35, i);
      if ( v8 < 0 )
        goto LABEL_50;
    }
    else
    {
      v35 = *(_OWORD *)i;
      v36 = *((_OWORD *)i + 1);
    }
    v13 = *(_DWORD *)(a1 + 32);
    if ( BYTE1(v35) == v13 || BYTE1(v35) == 7 && v13 == 3 )
    {
      v8 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, __int64 *, __int64 *, __int64 *))(a1 + 120))(
             &v35,
             &v30,
             &v29,
             &v31,
             &v31);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbAddOrdering(a1 + 56, v30, v29);
      if ( v8 < 0 )
        goto LABEL_50;
    }
  }
  ExFreePoolWithTag(v10, 0);
  *((_QWORD *)&v28 + 1) = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
  P = 0LL;
  v10 = 0LL;
  LODWORD(v28) = 2228258;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v8 < 0 || (v14 = ArbpGetRegistryValue(Handle), v10 = P, v8 = v14, v14 < 0) )
  {
LABEL_50:
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( Handle )
      ZwClose(Handle);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    v23 = *(void **)(a1 + 64);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *(_DWORD *)(a1 + 56) = 0;
    }
    v24 = *(void **)(a1 + 80);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      *(_DWORD *)(a1 + 72) = 0;
    }
    v4 = v8;
    goto LABEL_40;
  }
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_21;
  v15 = (char *)P + *((unsigned int *)P + 2);
  v16 = (unsigned __int64)*((unsigned int *)P + 3) >> 1;
  v34 = 0LL;
  if ( *(_WORD *)&v15[2 * v16 - 2] )
  {
LABEL_44:
    v8 = -1073741811;
    goto LABEL_50;
  }
  v8 = ArbpGetRegistryValue(Handle);
  if ( v8 < 0 )
    goto LABEL_50;
  ExFreePoolWithTag(v10, 0);
  v10 = v34;
LABEL_21:
  ZwClose(Handle);
  Handle = 0LL;
  v17 = (char *)v10 + (unsigned int)v10[2] + 32;
  for ( j = v17 + 8; j < &v17[32 * *((unsigned int *)v17 + 1) + 8]; j += 32 )
  {
    if ( a4 )
    {
      v8 = a4(&v35, j);
      if ( v8 < 0 )
        goto LABEL_50;
    }
    else
    {
      v35 = *(_OWORD *)j;
      v36 = *((_OWORD *)j + 1);
    }
    v19 = *(_DWORD *)(a1 + 32);
    if ( BYTE1(v35) == v19 || BYTE1(v35) == 7 && v19 == 3 )
    {
      v8 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, __int64 *, __int64 *, __int64 *))(a1 + 120))(
             &v35,
             &v30,
             &v29,
             &v31,
             &v31);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbAddOrdering(a1 + 72, v30, v29);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbPruneOrdering(a1 + 56, v30, v29);
      if ( v8 < 0 )
        goto LABEL_50;
    }
  }
  ExFreePoolWithTag(v10, 0);
  ZwClose(KeyHandle);
  KeyHandle = 0LL;
LABEL_40:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v4;
}
