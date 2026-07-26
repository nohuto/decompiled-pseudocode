/*
 * XREFs of ndisOpenProtocolSubkey @ 0x1C0028FCC
 * Callers:
 *     NdisOpenConfigurationKeyByName @ 0x1C00276B0 (NdisOpenConfigurationKeyByName.c)
 *     NdisReadConfiguration @ 0x1C0028420 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C00329B0 (NdisOpenConfigurationKeyByIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisOpenProtocolSubkey(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  NTSTATUS v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  _WORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+34h] [rbp-3Ch]
  __int64 v9; // [rsp+38h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  v6[0] = 6815846LL;
  KeyHandle = 0LL;
  v6[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services";
  v2 = a1 + 176;
  v8 = 0;
  v9 = v2;
  v3 = -1LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  do
    ++v3;
  while ( *(_WORD *)(v2 + 2 * v3) );
  ObjectAttributes.Length = 48;
  v7[0] = 2 * v3;
  ObjectAttributes.RootDirectory = 0LL;
  v7[1] = 2 * v3 + 2;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey((PHANDLE)(a1 + 32), 0xBu, &ObjectAttributes);
    if ( v4 < 0 )
      *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v4;
}
