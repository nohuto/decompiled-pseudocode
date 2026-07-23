/*
 * XREFs of ArbBuildAssignmentOrdering @ 0x1407A2778
 * Callers:
 *     ArbInitializeArbiterInstance @ 0x1407A2460 (ArbInitializeArbiterInstance.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ArbAddOrdering @ 0x1407A2C54 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1407A2D30 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1407A2DFC (ArbInitializeOrderingList.c)
 *     ArbFreeOrderingList @ 0x1407A2E54 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x1407A2E90 (ArbPruneOrdering.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v24; // rdx
  unsigned __int64 v25; // rax
  void *v26; // rcx
  void *v27; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-89h] BYREF
  PVOID P; // [rsp+48h] [rbp-81h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-79h] BYREF
  __int128 v31; // [rsp+58h] [rbp-71h] BYREF
  __int64 v32; // [rsp+68h] [rbp-61h] BYREF
  __int64 v33; // [rsp+70h] [rbp-59h] BYREF
  __int64 v34; // [rsp+78h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-49h] BYREF
  _DWORD *v36; // [rsp+B0h] [rbp-19h]
  _DWORD *v37; // [rsp+B8h] [rbp-11h]
  __int128 v38; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v39; // [rsp+D0h] [rbp+7h]

  v4 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
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
  LODWORD(v31) = 7733366;
  *((_QWORD *)&v31 + 1) = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v31;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 < 0 )
    goto LABEL_49;
  LODWORD(v31) = 1966110;
  *((_QWORD *)&v31 + 1) = L"AllocationOrder";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v31;
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
    v24 = (char *)P + *((unsigned int *)P + 2);
    v25 = (unsigned __int64)*((unsigned int *)P + 3) >> 1;
    v36 = 0LL;
    if ( *(_WORD *)&v24[2 * v25 - 2] )
      goto LABEL_44;
    v8 = ArbpGetRegistryValue(Handle);
    if ( v8 < 0 )
      goto LABEL_50;
    ExFreePoolWithTag(v10, 0);
    v10 = v36;
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
      v8 = a4(&v38, i);
      if ( v8 < 0 )
        goto LABEL_50;
    }
    else
    {
      v38 = *(_OWORD *)i;
      v39 = *((_OWORD *)i + 1);
    }
    v13 = *(_DWORD *)(a1 + 32);
    if ( BYTE1(v38) == v13 || BYTE1(v38) == 7 && v13 == 3 )
    {
      v8 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, __int64 *, __int64 *, __int64 *))(a1 + 120))(
             &v38,
             &v33,
             &v32,
             &v34,
             &v34);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbAddOrdering(a1 + 56, v33, v32);
      if ( v8 < 0 )
        goto LABEL_50;
    }
  }
  ExFreePoolWithTag(v10, 0);
  *((_QWORD *)&v31 + 1) = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v31;
  P = 0LL;
  v10 = 0LL;
  LODWORD(v31) = 2228258;
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
    v26 = *(void **)(a1 + 64);
    if ( v26 )
    {
      ExFreePoolWithTag(v26, 0);
      *(_DWORD *)(a1 + 56) = 0;
    }
    v27 = *(void **)(a1 + 80);
    if ( v27 )
    {
      ExFreePoolWithTag(v27, 0);
      *(_DWORD *)(a1 + 72) = 0;
    }
    v4 = v8;
    goto LABEL_40;
  }
  if ( *((_DWORD *)P + 1) != 1 )
    goto LABEL_21;
  v15 = (char *)P + *((unsigned int *)P + 2);
  v16 = (unsigned __int64)*((unsigned int *)P + 3) >> 1;
  v37 = 0LL;
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
  v10 = v37;
LABEL_21:
  ZwClose(Handle);
  Handle = 0LL;
  v17 = (char *)v10 + (unsigned int)v10[2] + 32;
  for ( j = v17 + 8; j < &v17[32 * *((unsigned int *)v17 + 1) + 8]; j += 32 )
  {
    if ( a4 )
    {
      v8 = a4(&v38, j);
      if ( v8 < 0 )
        goto LABEL_50;
    }
    else
    {
      v38 = *(_OWORD *)j;
      v39 = *((_OWORD *)j + 1);
    }
    v19 = *(_DWORD *)(a1 + 32);
    if ( BYTE1(v38) == v19 || BYTE1(v38) == 7 && v19 == 3 )
    {
      v8 = (*(__int64 (__fastcall **)(__int128 *, __int64 *, __int64 *, __int64 *, __int64 *))(a1 + 120))(
             &v38,
             &v33,
             &v32,
             &v34,
             &v34);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbAddOrdering(a1 + 72, v33, v32);
      if ( v8 < 0 )
        goto LABEL_50;
      v8 = ArbPruneOrdering(a1 + 56, v33, v32);
      if ( v8 < 0 )
        goto LABEL_50;
    }
  }
  ExFreePoolWithTag(v10, 0);
  ZwClose(KeyHandle);
  KeyHandle = 0LL;
LABEL_40:
  KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21, v22);
  return v4;
}
