/*
 * XREFs of Controller_SetDeviceDescription @ 0x1C006D5F0
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     RtlUnalignedStringCbLengthW @ 0x1C0015664 (RtlUnalignedStringCbLengthW.c)
 *     RtlStringCbPrintfW @ 0x1C00156DC (RtlStringCbPrintfW.c)
 *     RootHub_GetHighestUsbVersionSupported @ 0x1C0015734 (RootHub_GetHighestUsbVersionSupported.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C006D950 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 */

void __fastcall Controller_SetDeviceDescription(__int64 a1)
{
  wchar_t *v2; // r12
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
  BYTE *v13; // rax
  __int64 v14; // rax
  size_t v15; // rdx
  NTSTATUS v16; // eax
  void *Data; // rbx
  struct _DEVICE_OBJECT *v18; // rax
  NTSTATUS v19; // eax
  int v20; // edx
  unsigned int v21; // r14d
  char **v22; // rdi
  int v23; // r9d
  int v24; // r9d
  wchar_t *PoolWithTag; // rax
  int v26; // edx
  int v27; // r8d
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-89h]
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntrya; // [rsp+28h] [rbp-89h]
  unsigned __int8 v30; // [rsp+69h] [rbp-48h]
  size_t pcbLength; // [rsp+70h] [rbp-41h] BYREF
  size_t v32; // [rsp+78h] [rbp-39h] BYREF
  size_t cbDest; // [rsp+80h] [rbp-31h] BYREF
  PMESSAGE_RESOURCE_ENTRY v34; // [rsp+88h] [rbp-29h] BYREF
  PMESSAGE_RESOURCE_ENTRY v35; // [rsp+90h] [rbp-21h] BYREF
  rsize_t MaxCount; // [rsp+98h] [rbp-19h]
  _OWORD v37[3]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v38; // [rsp+D0h] [rbp+1Fh]
  int v39; // [rsp+D8h] [rbp+27h]

  v34 = 0LL;
  v37[0] = *(_OWORD *)L"@System32\\drivers\\usbxhci.sys";
  v35 = 0LL;
  v2 = 0LL;
  v39 = *(_DWORD *)L"s";
  v37[1] = *(_OWORD *)L"2\\drivers\\usbxhci.sys";
  v32 = 0LL;
  v37[2] = *(_OWORD *)L"s\\usbxhci.sys";
  v38 = *(_QWORD *)L"i.sys";
  if ( (unsigned __int8)Controller_DriverInstalledDueToCompatibleIdMatch() )
  {
    HighestUsbVersionSupported = RootHub_GetHighestUsbVersionSupported(*(_QWORD *)(a1 + 152));
    v4 = HighestUsbVersionSupported;
    v30 = HIBYTE(HighestUsbVersionSupported);
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
      v32 = v5[1];
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
      v32 = (size_t)v22[1];
    }
LABEL_8:
    if ( RtlFindMessage(
           *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
           0xBu,
           0,
           0x40010001u,
           &v34) < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return;
      v23 = 145;
    }
    else
    {
      v7 = v34->Length - 4LL;
      pcbLength = v7;
      if ( v7 > 0xFFFFFFFE )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v23 = 146;
      }
      else
      {
        if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v34->Text, v7, &pcbLength) < 0 )
          return;
        v8 = pcbLength;
        Text = v34->Text;
        if ( pcbLength < 4
          || (v10 = pcbLength >> 1, *(_WORD *)&Text[2 * (pcbLength >> 1) - 2] != 10)
          || (v11 = v10 - 2, *(_WORD *)&Text[2 * v10 - 4] != 13) )
        {
LABEL_16:
          if ( v32 )
          {
            v14 = -1LL;
            do
              ++v14;
            while ( *(_WORD *)(v32 + 2 * v14) );
            cbDest = v8 + 112 + 2 * v14;
            pcbLength = (size_t)ExAllocatePoolWithTag(PagedPool, cbDest, 0x49434858u);
            if ( pcbLength )
            {
              LODWORD(MessageResourceEntry) = 1073807361;
              v16 = RtlStringCbPrintfW(
                      (NTSTRSAFE_PWSTR)pcbLength,
                      cbDest,
                      L"%s,#%d;%s;(%s,%X.%X,%X.%X)",
                      v37,
                      MessageResourceEntry,
                      Text,
                      v32,
                      v4,
                      v30,
                      *(unsigned __int8 *)(a1 + 320),
                      *(unsigned __int8 *)(a1 + 321));
              Data = (void *)pcbLength;
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
                (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
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
                (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
            }
            if ( RtlFindMessage(
                   *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
                   0xBu,
                   0,
                   0x40010002u,
                   &v35) < 0 )
              goto LABEL_26;
            v15 = v35->Length - 4LL;
            v32 = v15;
            if ( v15 <= 0xFFFFFFFE )
            {
              if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v35->Text, v15, &v32) >= 0 )
              {
                cbDest = pcbLength + v32 + 108;
                pcbLength = (size_t)ExAllocatePoolWithTag(PagedPool, cbDest, 0x49434858u);
                if ( pcbLength )
                {
                  v2 = (wchar_t *)v35->Text;
                  if ( v32 >= 4 && v2[(v32 >> 1) - 1] == 10 )
                  {
                    MaxCount = (v32 >> 1) - 2;
                    if ( v2[MaxCount] == 13 )
                    {
                      v32 -= 2LL;
                      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v32, 0x49434858u);
                      v2 = PoolWithTag;
                      if ( !PoolWithTag )
                      {
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          LOBYTE(v26) = 2;
                          WPP_RECORDER_SF_(
                            *(_QWORD *)(a1 + 72),
                            v26,
                            4,
                            152,
                            (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
                        }
                        Data = (void *)pcbLength;
                        goto LABEL_24;
                      }
                      memset(PoolWithTag, 0, v32);
                      wcsncpy_s(v2, v32 >> 1, (const wchar_t *)v35->Text, MaxCount);
                    }
                  }
                  v27 = v4;
                  Data = (void *)pcbLength;
                  LODWORD(MessageResourceEntrya) = 1073807361;
                  v16 = RtlStringCbPrintfW(
                          (NTSTRSAFE_PWSTR)pcbLength,
                          cbDest,
                          L"%s,#%d;%s;(%s,%X.%X,%X.%X)",
                          v37,
                          MessageResourceEntrya,
                          Text,
                          v2,
                          v27,
                          v30,
                          *(unsigned __int8 *)(a1 + 320),
                          *(unsigned __int8 *)(a1 + 321));
LABEL_21:
                  if ( v16 >= 0 && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)Data, cbDest, &cbDest) >= 0 )
                  {
                    v18 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                                                     WdfDriverGlobals,
                                                     *(_QWORD *)a1);
                    v19 = IoSetDevicePropertyData(v18, &DEVPKEY_Device_FriendlyName, 0, 1u, 0x19u, cbDest + 2, Data);
                    if ( v19 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v20) = 3;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(a1 + 72),
                        v20,
                        4,
                        153,
                        (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
                        v19);
                    }
                  }
LABEL_24:
                  ExFreePoolWithTag(Data, 0x49434858u);
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
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v24 = 150;
              goto LABEL_43;
            }
          }
LABEL_26:
          if ( Text )
            ExFreePoolWithTag(Text, 0x49434858u);
          return;
        }
        v12 = pcbLength - 2;
        v13 = (BYTE *)ExAllocatePoolWithTag(PagedPool, pcbLength - 2, 0x49434858u);
        Text = v13;
        if ( v13 )
        {
          memset(v13, 0, v12);
          wcsncpy_s((wchar_t *)Text, v12 >> 1, (const wchar_t *)v34->Text, v11);
          v8 = pcbLength;
          goto LABEL_16;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return;
        v23 = 147;
      }
    }
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v7, 4, v23, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
  }
}
