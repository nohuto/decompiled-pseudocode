/*
 * XREFs of IoOpenDriverRegistryKey @ 0x1407C4CB0
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140602DFC (IopApplyMutableTagToRegistryKey.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x140742DAC (PipOpenServiceEnumKeys.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407C4FA4 (PiCreateDriverRedirectedStateKey.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1408A3E80 (PiAuGetServiceStateSecurityObject.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoOpenDriverRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, int a4, _QWORD *a5)
{
  PVOID v7; // rdi
  HANDLE v8; // r14
  void *v9; // r12
  HANDLE v10; // r15
  __int64 v11; // rax
  int v12; // eax
  NTSTATUS v13; // ebx
  NTSTATUS RegistryValue; // eax
  int DriverRedirectedStateKey; // eax
  NTSTATUS v16; // eax
  int ServiceStateSecurityObject; // eax
  HANDLE v18; // rax
  PVOID P; // [rsp+40h] [rbp-31h] BYREF
  void *v21; // [rsp+48h] [rbp-29h] BYREF
  void *v22; // [rsp+50h] [rbp-21h]
  HANDLE Handle; // [rsp+58h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  HANDLE KeyHandle; // [rsp+D0h] [rbp+5Fh] BYREF
  int v26; // [rsp+D8h] [rbp+67h]

  v26 = a2;
  KeyHandle = 0LL;
  P = 0LL;
  v22 = 0LL;
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !a1 )
    goto LABEL_34;
  v11 = *(_QWORD *)(a1 + 48);
  if ( !v11 || !*(_QWORD *)(v11 + 32) || !*(_WORD *)(v11 + 24) || a4 || !a5 )
    goto LABEL_34;
  v12 = PipOpenServiceEnumKeys((UNICODE_STRING *)(v11 + 24), 0x2001Du, &Handle, 0LL, 0);
  v10 = Handle;
  v13 = v12;
  if ( v12 < 0 )
    goto LABEL_37;
  RegistryValue = IopGetRegistryValue(Handle, L"Type", 0, &P);
  v7 = P;
  v13 = RegistryValue;
  if ( RegistryValue == -1073741772 )
    goto LABEL_34;
  if ( RegistryValue < 0 )
    goto LABEL_35;
  if ( *((_DWORD *)P + 1) != 4 || *((_DWORD *)P + 3) != 4 )
  {
    v13 = -1073741492;
    goto LABEL_35;
  }
  if ( (*(_DWORD *)((_BYTE *)P + *((unsigned int *)P + 2)) & 0xB) == 0 )
    goto LABEL_34;
  if ( !v26 )
  {
    if ( (a3 & 0x2000000) != 0 )
      a3 = a3 & 0xFDFDFFE6 | 0x20019;
    if ( (a3 & 0x7FFDFFE6) == 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyParametersName;
      ObjectAttributes.RootDirectory = v10;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v13 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
      goto LABEL_28;
    }
    v13 = -1073741790;
    goto LABEL_35;
  }
  if ( v26 != 1 )
  {
LABEL_34:
    v13 = -1073741811;
    goto LABEL_35;
  }
  DriverRedirectedStateKey = PiCreateDriverRedirectedStateKey((unsigned int)*(_QWORD *)(a1 + 48) + 24);
  v13 = DriverRedirectedStateKey;
  if ( DriverRedirectedStateKey == -1073741772 )
  {
    v8 = v10;
  }
  else
  {
    v8 = v22;
    if ( DriverRedirectedStateKey < 0 )
      goto LABEL_35;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyPersistentStateName;
  ObjectAttributes.RootDirectory = v8;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
  v13 = v16;
  if ( v16 == -1073741772 )
  {
    ServiceStateSecurityObject = PiAuGetServiceStateSecurityObject(&v21);
    v9 = v21;
    v13 = ServiceStateSecurityObject;
    if ( ServiceStateSecurityObject < 0 )
      goto LABEL_35;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyPersistentStateName;
    ObjectAttributes.SecurityDescriptor = v21;
    v16 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v13 = v16;
  }
  if ( v16 >= 0 )
  {
LABEL_28:
    if ( v13 >= 0 )
    {
      v18 = KeyHandle;
      if ( v26 == 1 && KeyHandle )
      {
        IopApplyMutableTagToRegistryKey(KeyHandle);
        v18 = KeyHandle;
      }
      KeyHandle = 0LL;
      *a5 = v18;
    }
  }
LABEL_35:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_37:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v8 && v8 != v10 )
    ZwClose(v8);
  if ( v10 )
    ZwClose(v10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v13;
}
