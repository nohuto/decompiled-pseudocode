/*
 * XREFs of PiDevCfgLogDeviceStarted @ 0x14073AF94
 * Callers:
 *     PpDevCfgTraceDeviceStart @ 0x1407409D4 (PpDevCfgTraceDeviceStart.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140253288 (PipIsDevNodeDNStarted.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PnpGetLogString @ 0x14036EB68 (PnpGetLogString.c)
 *     McTemplateK0zzjzzzdd_EtwWriteTransfer @ 0x14036EB88 (McTemplateK0zzjzzzdd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 */

void __fastcall PiDevCfgLogDeviceStarted(__int64 a1)
{
  __int64 v2; // rdx
  wchar_t *Buffer; // rdx
  char v4; // r11
  wchar_t *v5; // rdx
  int v6; // r8d
  int v7; // edx
  int *v8; // rax
  const wchar_t *v9; // rdx
  const wchar_t *v10; // r8
  const wchar_t *v11; // r9
  char v12; // r10
  unsigned __int16 Length; // cx
  unsigned int v14; // r9d
  __int64 v15; // r8
  unsigned __int16 v16; // cx
  unsigned int v17; // r9d
  __int64 v18; // r8
  int *LogString; // rax
  const wchar_t *v20; // rdx
  __int64 v21; // rcx
  const wchar_t *v22; // r8
  const wchar_t *v23; // r9
  char v24; // r10
  int *v25; // rax
  const wchar_t *v26; // rdx
  const wchar_t *v27; // r8
  const wchar_t *v28; // r9
  char v29; // r10
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v31; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v33; // [rsp+90h] [rbp-70h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v35[26]; // [rsp+B0h] [rbp-50h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v33.Length = 0LL;
  v33.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v31.Length = 0LL;
  v31.Buffer = 0LL;
  v34 = 0LL;
  if ( (byte_140C1327A & 0x18) == 0x18 )
  {
    memset(v35, 0, 0xC8uLL);
    HIDWORD(v35[8]) = 6;
    LODWORD(v35[6]) = 18;
    v35[0] = &DEVPKEY_Device_ClassGuid;
    LODWORD(v35[11]) = 18;
    v35[2] = &v34;
    HIDWORD(v35[13]) = 6;
    v35[5] = &DEVPKEY_Device_DriverInfPath;
    HIDWORD(v35[18]) = 6;
    v35[7] = &UnicodeString;
    v35[10] = &DEVPKEY_Device_Service;
    v35[12] = &v33;
    v35[15] = &DEVPKEY_Device_LowerFilters;
    v35[17] = &DestinationString;
    v35[20] = &DEVPKEY_Device_UpperFilters;
    v35[22] = &v31;
    HIDWORD(v35[23]) = 6;
    v2 = *(_QWORD *)(a1 + 48);
    LODWORD(v35[1]) = 13;
    LODWORD(v35[3]) = 16;
    LODWORD(v35[16]) = 8210;
    LODWORD(v35[21]) = 8210;
    if ( (int)PiDevCfgQueryObjectProperties(8210, v2, 1, 0, (__int64)v35, 5) >= 0 )
    {
      if ( SLODWORD(v35[4]) < 0 )
        v34 = 0LL;
      if ( SLODWORD(v35[9]) < 0 )
        RtlInitUnicodeString(&UnicodeString, 0LL);
      if ( SLODWORD(v35[14]) < 0 )
        RtlInitUnicodeString(&v33, 0LL);
      if ( SLODWORD(v35[19]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      if ( SLODWORD(v35[24]) < 0 )
        RtlInitUnicodeString(&v31, 0LL);
      Buffer = DestinationString.Buffer;
      v4 = 32;
      if ( DestinationString.Buffer )
      {
        Length = DestinationString.Length;
        if ( DestinationString.Length > 4u )
        {
          v14 = 0;
          if ( (unsigned __int64)DestinationString.Length >> 1 != 2 )
          {
            v15 = 0LL;
            do
            {
              if ( !Buffer[v15] )
              {
                Buffer[v15] = 32;
                Buffer = DestinationString.Buffer;
                Length = DestinationString.Length;
              }
              v15 = ++v14;
            }
            while ( v14 < ((unsigned __int64)Length >> 1) - 2 );
          }
          DestinationString.Length = Length - 2;
        }
      }
      v5 = v31.Buffer;
      if ( v31.Buffer )
      {
        v16 = v31.Length;
        if ( v31.Length > 4u )
        {
          v17 = 0;
          if ( (unsigned __int64)v31.Length >> 1 != 2 )
          {
            v18 = 0LL;
            do
            {
              if ( !v5[v18] )
              {
                v5[v18] = 32;
                v5 = v31.Buffer;
                v16 = v31.Length;
              }
              v18 = ++v17;
            }
            while ( v17 < ((unsigned __int64)v16 >> 1) - 2 );
          }
          v31.Length = v16 - 2;
        }
      }
      v6 = *(_DWORD *)(a1 + 396);
      v7 = v6 & 0x6000;
      if ( (v6 & 0x6000) == 0 )
        PipIsDevNodeDNStarted(a1);
      if ( v7 || !PipIsDevNodeDNStarted(a1) )
      {
        if ( (v6 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 )
        {
          if ( ((unsigned __int8)v4 & (unsigned __int8)byte_140C1327A) != 0 )
          {
            PnpGetLogString((__int64)&v31);
            PnpGetLogString((__int64)&DestinationString);
            LogString = PnpGetLogString((__int64)&v33);
            McTemplateK0zzjzzzdd_EtwWriteTransfer(
              v21,
              (__int64)KMPnPEvt_DeviceStart_RebootRequired,
              (__int64)v22,
              *(const wchar_t **)(a1 + 48),
              v23,
              (__int64)&v34,
              (const wchar_t *)LogString,
              v20,
              v22,
              14,
              v24);
          }
        }
        else if ( (byte_140C1327A & 0x10) != 0 )
        {
          PnpGetLogString((__int64)&v31);
          PnpGetLogString((__int64)&DestinationString);
          v25 = PnpGetLogString((__int64)&v33);
          McTemplateK0zzjzzzdd_EtwWriteTransfer(
            *(unsigned int *)(a1 + 404),
            (__int64)KMPnPEvt_DeviceStart_Failure,
            (__int64)v27,
            *(const wchar_t **)(a1 + 48),
            v28,
            (__int64)&v34,
            (const wchar_t *)v25,
            v26,
            v27,
            *(_DWORD *)(a1 + 404),
            v29);
        }
      }
      else if ( (byte_140C1327A & 8) != 0 )
      {
        PnpGetLogString((__int64)&v31);
        PnpGetLogString((__int64)&DestinationString);
        v8 = PnpGetLogString((__int64)&v33);
        McTemplateK0zzjzzzdd_EtwWriteTransfer(
          *(unsigned int *)(a1 + 404),
          (__int64)KMPnPEvt_DeviceStart_Success,
          (__int64)v10,
          *(const wchar_t **)(a1 + 48),
          v11,
          (__int64)&v34,
          (const wchar_t *)v8,
          v9,
          v10,
          *(_DWORD *)(a1 + 404),
          v12);
      }
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v33);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v31);
}
