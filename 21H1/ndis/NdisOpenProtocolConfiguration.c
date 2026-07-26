/*
 * XREFs of NdisOpenProtocolConfiguration @ 0x1C0028D90
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C0028100 (NdisOpenConfigurationEx.c)
 *     ?ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0035098 (-ndisReadMiniportMediaSpecificPortAuthStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ @ 0x1C0145124 (-ndisIfLuidAllocatorSubsystemInitialize@@YAJXZ.c)
 *     ?ndisIfInterfaceSubsystemInitialize@@YAJXZ @ 0x1C014573C (-ndisIfInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Z @ 0x1C0012E28 (WPP_RECORDER_SF_Z.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

int *__fastcall NdisOpenProtocolConfiguration(int *a1, _QWORD *a2, _UNICODE_STRING *a3)
{
  __int64 MaximumLength; // rbx
  char *PoolWithTag; // rax
  char *v8; // rdi
  NTSTATUS v9; // eax
  int v10; // eax
  int *result; // rax
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  v12[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v12[0] = 6815846LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x2Au,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      &a3->Length);
  MaximumLength = a3->MaximumLength;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, MaximumLength + 178, 0x6370444Eu);
  v8 = PoolWithTag;
  *a1 = PoolWithTag == 0LL ? 0xC000009A : 0;
  if ( (PoolWithTag == 0LL ? 0xC000009A : 0) != 0 )
  {
    *a2 = 0LL;
    v10 = *a1;
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, MaximumLength + 178);
  memmove(v8 + 176, a3->Buffer, a3->Length);
  *((_QWORD *)v8 + 3) = 0LL;
  *((_QWORD *)v8 + 2) = v8 + 40;
  v8[40] = 10;
  *(_BYTE *)(*((_QWORD *)v8 + 2) + 1LL) = 1;
  *(_WORD *)(*((_QWORD *)v8 + 2) + 2LL) = 40;
  *(_DWORD *)(*((_QWORD *)v8 + 2) + 16LL) |= 2u;
  *((_DWORD *)v8 + 24) = 0;
  *((_QWORD *)v8 + 15) = 0LL;
  *((_DWORD *)v8 + 32) = 0;
  *((_QWORD *)v8 + 17) = 0LL;
  *((_QWORD *)v8 + 8) = ndisSaveParameters;
  *((_DWORD *)v8 + 18) = 20;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  *a1 = v9;
  if ( v9 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.ObjectName = a3;
    if ( ZwOpenKey((PHANDLE)v8 + 4, 0xBu, &ObjectAttributes) < 0 )
      *((_QWORD *)v8 + 4) = 0LL;
    *a2 = v8;
    *a1 = 0;
    v10 = 0;
LABEL_8:
    if ( v10 >= 0 )
      goto LABEL_9;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_9:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  result = &WPP_RECORDER_INITIALIZED;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return (int *)WPP_RECORDER_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0xDu,
                    0x2Bu,
                    (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids);
  return result;
}
