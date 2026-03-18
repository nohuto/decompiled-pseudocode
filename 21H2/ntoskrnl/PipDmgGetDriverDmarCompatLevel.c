/*
 * XREFs of PipDmgGetDriverDmarCompatLevel @ 0x14084EA70
 * Callers:
 *     PipDmgGetDeviceDmarPolicy @ 0x14084E99C (PipDmgGetDeviceDmarPolicy.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1402DA4B0 (VfIsVerifierEnabled.c)
 *     PnpGetRegistryDword @ 0x1403D2D2C (PnpGetRegistryDword.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     PipOpenServiceEnumKeys @ 0x14067B470 (PipOpenServiceEnumKeys.c)
 *     VfTargetDriversIsEnabled @ 0x140A8ACE8 (VfTargetDriversIsEnabled.c)
 */

__int64 __fastcall PipDmgGetDriverDmarCompatLevel(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  NTSTATUS v4; // eax
  HANDLE v5; // rdi
  int IsEnabled; // eax
  int v8; // ecx
  __int128 v9; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  KeyHandle = (HANDLE)-1LL;
  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  Handle = 0LL;
  v9 = 0LL;
  v4 = PipOpenServiceEnumKeys((UNICODE_STRING *)(v2 + 24), 0x20019u, &Handle, 0LL, 0);
  v5 = Handle;
  if ( v4 < 0 )
    goto LABEL_4;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  *((_QWORD *)&v9 + 1) = L"Parameters";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
  LODWORD(v9) = 1441812;
  ObjectAttributes.RootDirectory = Handle;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_4;
  LODWORD(Handle) = 0;
  if ( (int)PnpGetRegistryDword(KeyHandle, (__int64)L"DmaRemappingCompatible", &Handle) < 0 )
    goto LABEL_4;
  if ( !(_DWORD)Handle )
  {
    v3 = 1;
    goto LABEL_4;
  }
  if ( (_DWORD)Handle == 1 )
  {
LABEL_14:
    v3 = 2;
    goto LABEL_4;
  }
  if ( (_DWORD)Handle != 2 )
  {
    if ( (_DWORD)Handle != 3 )
      goto LABEL_4;
    goto LABEL_14;
  }
  v3 = 3;
  if ( (unsigned int)VfIsVerifierEnabled() && (MmVerifierData & 0x80u) != 0 )
  {
    IsEnabled = VfTargetDriversIsEnabled(*(_QWORD *)(a1 + 24));
    v8 = 3;
    if ( IsEnabled )
      v8 = 2;
    v3 = v8;
  }
LABEL_4:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v5 )
    ZwClose(v5);
  return v3;
}
