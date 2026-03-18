/*
 * XREFs of Controller_SetDeviceDescription @ 0x1C006DFF8
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     RtlUnalignedStringCbLengthW @ 0x1C0015784 (RtlUnalignedStringCbLengthW.c)
 *     RtlStringCbPrintfW @ 0x1C00157F8 (RtlStringCbPrintfW.c)
 *     RootHub_GetHighestUsbVersionSupported @ 0x1C0015838 (RootHub_GetHighestUsbVersionSupported.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C006E350 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 */

void __fastcall Controller_SetDeviceDescription(__int64 a1)
{
  BYTE *v2; // r12
  __int16 HighestUsbVersionSupported; // ax
  unsigned __int8 v4; // bl
  _QWORD *v5; // rax
  unsigned int v6; // ecx
  size_t v7; // rdx
  size_t v8; // rdx
  BYTE *Text; // r13
  size_t v10; // rax
  rsize_t v11; // r14
  size_t v12; // rdi
  wchar_t *v13; // rax
  __int64 v14; // rax
  size_t v15; // rdx
  void *Pool2; // r13
  BYTE *v17; // rbx
  struct _DEVICE_OBJECT *v18; // rax
  NTSTATUS v19; // eax
  int v20; // edx
  unsigned int v21; // r14d
  char **v22; // rdi
  int v23; // r9d
  int v24; // r9d
  wchar_t *v25; // rax
  int v26; // edx
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-89h]
  PVOID Data; // [rsp+38h] [rbp-79h]
  int v29; // [rsp+40h] [rbp-71h]
  int v30; // [rsp+48h] [rbp-69h]
  int v31; // [rsp+50h] [rbp-61h]
  int v32; // [rsp+58h] [rbp-59h]
  BYTE *P; // [rsp+68h] [rbp-49h]
  unsigned __int8 v34; // [rsp+71h] [rbp-40h]
  size_t pcbLength; // [rsp+78h] [rbp-39h] BYREF
  size_t v36; // [rsp+80h] [rbp-31h] BYREF
  PMESSAGE_RESOURCE_ENTRY v37; // [rsp+88h] [rbp-29h] BYREF
  PMESSAGE_RESOURCE_ENTRY v38; // [rsp+90h] [rbp-21h] BYREF
  rsize_t MaxCount; // [rsp+98h] [rbp-19h]
  _OWORD v40[3]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v41; // [rsp+D0h] [rbp+1Fh]
  int v42; // [rsp+D8h] [rbp+27h]

  v37 = 0LL;
  v40[0] = *(_OWORD *)L"@System32\\drivers\\usbxhci.sys";
  v38 = 0LL;
  v2 = 0LL;
  v42 = *(_DWORD *)L"s";
  v40[1] = *(_OWORD *)L"2\\drivers\\usbxhci.sys";
  v36 = 0LL;
  v40[2] = *(_OWORD *)L"s\\usbxhci.sys";
  v41 = *(_QWORD *)L"i.sys";
  if ( (unsigned __int8)Controller_DriverInstalledDueToCompatibleIdMatch() )
  {
    HighestUsbVersionSupported = RootHub_GetHighestUsbVersionSupported(*(_QWORD *)(a1 + 152));
    v4 = HighestUsbVersionSupported;
    v34 = HIBYTE(HighestUsbVersionSupported);
    if ( *(_DWORD *)(a1 + 244) == 1 )
    {
      v5 = &PciVendorIdTable;
      v6 = 0;
      while ( *(_WORD *)v5 != *(_WORD *)(a1 + 248) )
      {
        ++v6;
        v5 += 2;
        if ( v6 >= 0xB )
          goto LABEL_8;
      }
      v36 = v5[1];
    }
    else
    {
      v21 = 0;
      v22 = &AcpiVendorIdTable;
      while ( _stricmp(*v22, (const char *)(a1 + 304)) )
      {
        ++v21;
        v22 += 2;
        if ( v21 >= 5 )
          goto LABEL_8;
      }
      v36 = (size_t)v22[1];
    }
LABEL_8:
    if ( RtlFindMessage(
           *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
           0xBu,
           0,
           0x40010001u,
           &v37) < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v23 = 145;
    }
    else
    {
      v7 = v37->Length - 4LL;
      pcbLength = v7;
      if ( v7 > 0xFFFFFFFE )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v23 = 146;
      }
      else
      {
        if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v37->Text, v7, &pcbLength) < 0 )
          return;
        v8 = pcbLength;
        Text = v37->Text;
        P = v37->Text;
        if ( pcbLength < 4
          || (v10 = pcbLength >> 1, *(_WORD *)&Text[2 * (pcbLength >> 1) - 2] != 10)
          || (v11 = v10 - 2, *(_WORD *)&Text[2 * v10 - 4] != 13) )
        {
LABEL_16:
          if ( v36 )
          {
            v14 = -1LL;
            do
              ++v14;
            while ( *(_WORD *)(v36 + 2 * v14) );
            pcbLength = v8 + 112 + 2 * v14;
            Pool2 = (void *)ExAllocatePool2(256LL, pcbLength, 1229146200LL);
            if ( Pool2 )
            {
              v32 = *(unsigned __int8 *)(a1 + 321);
              v31 = *(unsigned __int8 *)(a1 + 320);
              v30 = v34;
              v29 = v4;
              Data = (PVOID)v36;
              goto LABEL_21;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v24 = 148;
LABEL_43:
              LOBYTE(v15) = 2;
              WPP_RECORDER_SF_(
                *(_QWORD *)(a1 + 72),
                v15,
                4,
                v24,
                (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v8) = 4;
              WPP_RECORDER_SF_(
                *(_QWORD *)(a1 + 72),
                v8,
                4,
                149,
                (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
            }
            if ( RtlFindMessage(
                   *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
                   0xBu,
                   0,
                   0x40010002u,
                   &v38) < 0 )
              goto LABEL_44;
            v15 = v38->Length - 4LL;
            v36 = v15;
            if ( v15 > 0xFFFFFFFE )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_44;
              v24 = 150;
              goto LABEL_43;
            }
            if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v38->Text, v15, &v36) >= 0 )
            {
              pcbLength += 108 + v36;
              Pool2 = (void *)ExAllocatePool2(256LL, pcbLength, 1229146200LL);
              if ( Pool2 )
              {
                v2 = v38->Text;
                if ( v36 >= 4 && *(_WORD *)&v2[2 * (v36 >> 1) - 2] == 10 )
                {
                  MaxCount = (v36 >> 1) - 2;
                  if ( *(_WORD *)&v2[2 * MaxCount] == 13 )
                  {
                    v36 -= 2LL;
                    v25 = (wchar_t *)ExAllocatePool2(256LL, v36, 1229146200LL);
                    v2 = (BYTE *)v25;
                    if ( !v25 )
                    {
                      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      {
                        LOBYTE(v26) = 2;
                        WPP_RECORDER_SF_(
                          *(_QWORD *)(a1 + 72),
                          v26,
                          4,
                          152,
                          (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
                      }
                      v17 = P;
                      goto LABEL_24;
                    }
                    wcsncpy_s(v25, v36 >> 1, (const wchar_t *)v38->Text, MaxCount);
                  }
                }
                v32 = *(unsigned __int8 *)(a1 + 321);
                v31 = *(unsigned __int8 *)(a1 + 320);
                v30 = v34;
                v29 = v4;
                Data = v2;
LABEL_21:
                v17 = P;
                LODWORD(MessageResourceEntry) = 1073807361;
                if ( RtlStringCbPrintfW(
                       (NTSTRSAFE_PWSTR)Pool2,
                       pcbLength,
                       L"%s,#%d;%s;(%s,%X.%X,%X.%X)",
                       v40,
                       MessageResourceEntry,
                       P,
                       Data,
                       v29,
                       v30,
                       v31,
                       v32) >= 0
                  && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)Pool2, pcbLength, &pcbLength) >= 0 )
                {
                  v18 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                                                   WdfDriverGlobals,
                                                   *(_QWORD *)a1);
                  v19 = IoSetDevicePropertyData(v18, &DEVPKEY_Device_FriendlyName, 0, 1u, 0x19u, pcbLength + 2, Pool2);
                  if ( v19 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v20) = 3;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(a1 + 72),
                      v20,
                      4,
                      153,
                      (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
                      v19);
                  }
                }
LABEL_24:
                ExFreePoolWithTag(Pool2, 0x49434858u);
                if ( v2 )
                  ExFreePoolWithTag(v2, 0x49434858u);
                goto LABEL_26;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v24 = 151;
                goto LABEL_43;
              }
            }
          }
LABEL_44:
          v17 = P;
LABEL_26:
          if ( v17 )
            ExFreePoolWithTag(v17, 0x49434858u);
          return;
        }
        v12 = pcbLength - 2;
        v13 = (wchar_t *)ExAllocatePool2(256LL, pcbLength - 2, 1229146200LL);
        P = (BYTE *)v13;
        if ( v13 )
        {
          wcsncpy_s(v13, v12 >> 1, (const wchar_t *)v37->Text, v11);
          v8 = pcbLength;
          goto LABEL_16;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v23 = 147;
      }
    }
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v7, 4, v23, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
  }
}
