/*
 * XREFs of _RtlConnectToSm@16 @ 0x4B35A7D0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwAlpcConnectPort@44 @ 0x4B2F3110 (_ZwAlpcConnectPort@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __stdcall RtlConnectToSm(const void **a1, int a2, ULONG a3, int a4)
{
  unsigned int v5; // esi
  size_t v6; // [esp-4h] [ebp-17Ch]
  size_t v7; // [esp-4h] [ebp-17Ch]
  ULONG_PTR BufferLength; // [esp+10h] [ebp-168h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+18h] [ebp-160h] BYREF
  _UNICODE_STRING DestinationString; // [esp+30h] [ebp-148h] BYREF
  _PORT_MESSAGE ConnectionMessage; // [esp+38h] [ebp-140h] BYREF
  _DWORD v12[3]; // [esp+148h] [ebp-30h] BYREF
  __int16 v13; // [esp+154h] [ebp-24h]
  int v14; // [esp+158h] [ebp-20h]
  int v15; // [esp+160h] [ebp-18h]

  HIDWORD(BufferLength) = a4;
  RtlInitUnicodeString(&DestinationString, L"\\SmApiPort");
  LODWORD(v6) = 44;
  memset(v12, 0, v6);
  v12[0] = 0x10000;
  v12[2] = 2;
  v13 = 257;
  v14 = 312;
  v15 = 9984;
  if ( a1 )
  {
    if ( !a2 || !a3 )
      return -1073741776;
    if ( *(_WORD *)a1 >= 0xF0u )
      return -1073741811;
    v5 = *(unsigned __int16 *)a1;
    LODWORD(v7) = v5;
    memcpy(&ConnectionMessage.CallbackId + 1, a1[1], v7);
    *((_WORD *)&ConnectionMessage.CallbackId + (v5 >> 1) + 2) = 0;
    ConnectionMessage.CallbackId = a3;
  }
  else
  {
    ConnectionMessage.CallbackId = 0;
    *((_WORD *)&ConnectionMessage.CallbackId + 2) = 0;
  }
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  ConnectionMessage.MessageId = 0;
  ConnectionMessage.u1.Length = 17563892;
  ConnectionMessage.u2.ZeroInit = 0;
  LODWORD(BufferLength) = 272;
  return ZwAlpcConnectPort(
           (PHANDLE)HIDWORD(BufferLength),
           &DestinationString,
           &ObjectAttributes,
           (PALPC_PORT_ATTRIBUTES)v12,
           0x20000u,
           0,
           &ConnectionMessage,
           &BufferLength,
           0,
           0,
           0);
}
