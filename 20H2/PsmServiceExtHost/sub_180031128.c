/*
 * XREFs of sub_180031128 @ 0x180031128
 * Callers:
 *     sub_180031100 @ 0x180031100 (sub_180031100.c)
 *     sub_18003489C @ 0x18003489C (sub_18003489C.c)
 *     sub_18006B47C @ 0x18006B47C (sub_18006B47C.c)
 *     sub_18007B2A4 @ 0x18007B2A4 (sub_18007B2A4.c)
 * Callees:
 *     sub_18000EDAC @ 0x18000EDAC (sub_18000EDAC.c)
 *     sub_18003123C @ 0x18003123C (sub_18003123C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180031128(unsigned int a1, char *a2)
{
  NTSTATUS v3; // ebx
  void *ProcessHandle; // [rsp+30h] [rbp-D0h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v8[464]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v9[68]; // [rsp+250h] [rbp+150h] BYREF
  int v10; // [rsp+294h] [rbp+194h]
  int v11; // [rsp+298h] [rbp+198h]
  __int64 v12; // [rsp+2A0h] [rbp+1A0h]

  ProcessHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ClientId.UniqueThread = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueProcess = (HANDLE)a1;
  ObjectAttributes.Length = 48;
  v3 = NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
  if ( v3 >= 0 )
  {
    v3 = sub_18003123C(ProcessHandle, v8);
    if ( v3 >= 0 )
    {
      sub_18000EDAC((__int64)v8, v9, v10, v11, v12, a2);
      v3 = 0;
    }
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)v3;
}
