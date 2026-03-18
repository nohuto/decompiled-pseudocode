/*
 * XREFs of AcpiDiagTraceDeviceReset @ 0x1C0049B98
 * Callers:
 *     AcpiDeviceReset @ 0x1C00AE1A0 (AcpiDeviceReset.c)
 * Callees:
 *     AMLIGetNameSpaceObjectPath @ 0x1C0011560 (AMLIGetNameSpaceObjectPath.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     RtlStringCchLengthA @ 0x1C004A404 (RtlStringCchLengthA.c)
 */

void __fastcall AcpiDiagTraceDeviceReset(__int64 a1, int a2, int a3)
{
  __int64 *v3; // rcx
  unsigned __int16 v4; // ax
  wchar_t *Buffer; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  unsigned __int16 v9; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  size_t pcchLength[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+7Ch] [rbp-84h]
  int *v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  int *v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  char psz[128]; // [rsp+A0h] [rbp-60h] BYREF
  int v22; // [rsp+158h] [rbp+58h] BYREF
  int v23; // [rsp+160h] [rbp+60h] BYREF

  v23 = a3;
  v22 = a2;
  v3 = *(__int64 **)(a1 + 720);
  pcchLength[0] = 0LL;
  DestinationString = 0LL;
  if ( v3 )
  {
    v11 = 128;
    if ( (int)AMLIGetNameSpaceObjectPath(v3, psz, &v11) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, 0LL);
      if ( RtlStringCchLengthA(psz, 0x80uLL, pcchLength) < 0 )
      {
        v4 = 512;
        v9 = 512;
      }
      else
      {
        v4 = pcchLength[0];
        v9 = pcchLength[0];
      }
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                              NonPagedPoolNx,
                                              2LL * ((unsigned int)v4 + 1),
                                              0x53706341u);
      Buffer = DestinationString.Buffer;
      if ( DestinationString.Buffer )
      {
        v6 = v9;
        DestinationString.Length = 2 * v9;
        v7 = 0;
        for ( DestinationString.MaximumLength = 2 * v9 + 2; v7 < v9; Buffer = DestinationString.Buffer )
        {
          v8 = v7++;
          Buffer[v8] = psz[v8];
          v6 = v9;
        }
        Buffer[v6] = 0;
        UserData.Ptr = (unsigned __int64)&v9;
        v14 = DestinationString.Buffer;
        *(_QWORD *)&UserData.Size = 2LL;
        v15 = 2 * v9;
        v17 = &v22;
        v19 = &v23;
        v18 = 2LL;
        v16 = 0;
        v20 = 4LL;
        EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_RESET, 0LL, 4u, &UserData);
        if ( DestinationString.Buffer )
          ExFreePoolWithTag(DestinationString.Buffer, 0);
      }
    }
  }
}
