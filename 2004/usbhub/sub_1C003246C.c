/*
 * XREFs of sub_1C003246C @ 0x1C003246C
 * Callers:
 *     sub_1C0033288 @ 0x1C0033288 (sub_1C0033288.c)
 *     sub_1C0033368 @ 0x1C0033368 (sub_1C0033368.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0044BA0 @ 0x1C0044BA0 (sub_1C0044BA0.c)
 *     sub_1C00469A4 @ 0x1C00469A4 (sub_1C00469A4.c)
 */

bool __fastcall sub_1C003246C(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rbx
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  bool result; // al
  __int64 v7; // [rsp+30h] [rbp-51h]
  __int64 v8; // [rsp+30h] [rbp-51h]
  int v9; // [rsp+38h] [rbp-49h]
  int v10; // [rsp+38h] [rbp-49h]
  int v11; // [rsp+48h] [rbp-39h] BYREF
  int v12; // [rsp+4Ch] [rbp-35h] BYREF
  int Data; // [rsp+50h] [rbp-31h] BYREF
  WCHAR v14[12]; // [rsp+58h] [rbp-29h] BYREF
  WCHAR v15[16]; // [rsp+70h] [rbp-11h] BYREF
  WCHAR SourceString[24]; // [rsp+90h] [rbp+Fh] BYREF

  wcscpy(SourceString, L"ExtPropDescSemaphore");
  wcscpy(v14, L"RevisionId");
  wcscpy(v15, L"VendorRevision");
  Data = 0;
  v11 = 0;
  v12 = 0;
  v2 = sub_1C0011220((__int64)DeviceObject);
  v3 = sub_1C0044BA0(DeviceObject, v14, &v11, 4LL, 0LL, 0LL, 1);
  if ( (int)(v3 + 0x80000000) >= 0
    && v3 != -1073741772
    && off_1C006B000 != (_UNKNOWN *)&off_1C006B000
    && LOWORD(::DeviceObject->DeviceType) )
  {
    LODWORD(v7) = v3;
    sub_1C002E188((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)&unk_1C0062D38, v7);
  }
  LOBYTE(v9) = 1;
  v4 = sub_1C0044BA0(DeviceObject, v15, &v12, 4LL, 0LL, 0LL, v9);
  if ( (int)(v4 + 0x80000000) >= 0
    && v4 != -1073741772
    && off_1C006B000 != (_UNKNOWN *)&off_1C006B000
    && LOWORD(::DeviceObject->DeviceType) )
  {
    LODWORD(v8) = v4;
    sub_1C002E188((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0xBu, (__int64)&unk_1C0062D38, v8);
  }
  LOBYTE(v10) = 1;
  result = 1;
  if ( (int)sub_1C0044BA0(DeviceObject, SourceString, &Data, 4LL, 0LL, 0LL, v10) < 0
    || v11 != *((unsigned __int16 *)v2 + 706)
    || ((v2[706] & 0x400) != 0 || v12)
    && ((v2[706] & 0x400) == 0 || v12 != *(unsigned __int16 *)(*((_QWORD *)v2 + 360) + 4LL)) )
  {
    Data = 1;
    if ( (int)sub_1C00469A4(DeviceObject, SourceString, 4u, &Data, 4u) >= 0 )
    {
      v11 = *((unsigned __int16 *)v2 + 706);
      if ( (int)sub_1C00469A4(DeviceObject, v14, 4u, &v11, 4u) >= 0 )
      {
        v5 = (v2[706] & 0x400) != 0 ? *(unsigned __int16 *)(*((_QWORD *)v2 + 360) + 4LL) : 0;
        v12 = v5;
        if ( (int)sub_1C00469A4(DeviceObject, v15, 4u, &v12, 4u) >= 0 )
          return 0;
      }
    }
  }
  return result;
}
