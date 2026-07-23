/*
 * XREFs of CmpCreatePredefined @ 0x1407A7E88
 * Callers:
 *     CmpCreatePerfKeys @ 0x1407A7DC0 (CmpCreatePerfKeys.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCleanupParseContext @ 0x14064A8A0 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x14064AA70 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

_QWORD *__fastcall CmpCreatePredefined(__int64 a1, const WCHAR *a2, struct _OBJECT_HANDLE_INFORMATION a3)
{
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v9[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-98h]
  int v12; // [rsp+70h] [rbp-90h]
  int v13; // [rsp+74h] [rbp-8Ch]
  __int128 v14; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v16[38]; // [rsp+90h] [rbp-70h] BYREF

  v9[1] = 0;
  v13 = 0;
  Handle = 0LL;
  DestinationString = 0LL;
  memset(v16, 0, 0x128uLL);
  v16[12].HandleAttributes = -1;
  v16[19] = (struct _OBJECT_HANDLE_INFORMATION)&v16[18];
  v16[18] = (struct _OBJECT_HANDLE_INFORMATION)&v16[18];
  memset(&v16[27], 0, 0x50uLL);
  v16[3].HandleAttributes = 16777217;
  v16[0].HandleAttributes = 33;
  v16[7] = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  p_DestinationString = &DestinationString;
  v9[0] = 48;
  v10 = a1;
  v12 = 576;
  v14 = 0LL;
  if ( (int)ObOpenObjectByName((__int64)v9, (__int64)CmKeyObjectType, 0, 0LL, 131097, (__int64)v16, (__int64)&Handle) >= 0 )
  {
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    ZwClose(Handle);
  }
  return CmpCleanupParseContext((__int64)v16, 0);
}
