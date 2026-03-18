/*
 * XREFs of RIMCreateHidDesc @ 0x1C009F54C
 * Callers:
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 * Callees:
 *     ApiSetInkProcessorIsInkDevice @ 0x1C00473E8 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C004C590 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C004C66C (RIMSearchHidTLCInfo.c)
 *     IsProcessHidRawInputSupported @ 0x1C0050488 (IsProcessHidRawInputSupported.c)
 *     RIMFreeHidDesc @ 0x1C0056EE0 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0056F80 (WPP_RECORDER_SF_qDD.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C009FB60 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C00A07E0 (WPP_RECORDER_SF_q.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C00A2C98 (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C00A2D3C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00A2D74 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RIMHidGetCaps @ 0x1C00A2DB4 (RIMHidGetCaps.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A2F44 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C01416A4 (WPP_RECORDER_SF_qd.c)
 *     RIMAllocateHidConfigDesc @ 0x1C01699B8 (RIMAllocateHidConfigDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C016BB8C (WPP_RECORDER_SF_DDq.c)
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r12
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // eax
  int v11; // edx
  __int64 v12; // rcx
  struct _FILE_OBJECT *v13; // r13
  struct _DEVICE_OBJECT *v14; // rsi
  int v15; // edx
  PIRP v16; // rax
  int v17; // edx
  NTSTATUS Status; // eax
  int v19; // edx
  void *v20; // r15
  PIRP v21; // rax
  _UNKNOWN **v22; // r8
  __int64 v23; // rdx
  NTSTATUS v24; // eax
  int Caps; // eax
  int v26; // edx
  unsigned __int16 v27; // bx
  unsigned __int16 v28; // r11
  int v29; // r9d
  __int64 v30; // rcx
  int v32; // r9d
  int v33; // eax
  int v34; // ecx
  __int64 v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 *v38; // rax
  __int64 v39; // rbx
  int v40; // edx
  int v41; // r9d
  int v42; // r9d
  unsigned int v43; // eax
  int v44; // edx
  int CollectionDescription; // eax
  char OutputBufferLength; // [rsp+28h] [rbp-A1h]
  char InternalDeviceIoControl; // [rsp+30h] [rbp-99h]
  BOOLEAN InternalDeviceIoControla[8]; // [rsp+30h] [rbp-99h]
  PKEVENT v49; // [rsp+38h] [rbp-91h]
  HANDLE Handle; // [rsp+50h] [rbp-79h] BYREF
  PVOID v51; // [rsp+58h] [rbp-71h] BYREF
  PVOID Object; // [rsp+60h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-61h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-51h] BYREF
  ULONG OutputBuffer[2]; // [rsp+90h] [rbp-39h] BYREF
  int v56; // [rsp+98h] [rbp-31h]
  unsigned __int16 v57[32]; // [rsp+A0h] [rbp-29h] BYREF

  v51 = 0LL;
  Object = 0LL;
  IoStatusBlock = 0LL;
  v6 = 0LL;
  memset(v57, 0, sizeof(v57));
  Handle = 0LL;
  *(_QWORD *)OutputBuffer = 0LL;
  v56 = 0;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 10, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
  {
    v10 = RIMGetDeviceObjectPointer((int)a2 + 208, v7, v9, (unsigned int)&Handle, (__int64)&v51, (__int64)&Object);
    if ( v10 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v11, 1, 11, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, v10);
      }
      return v6;
    }
    v13 = (struct _FILE_OBJECT *)v51;
    if ( !v51 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    v14 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    ObfReferenceObject(v14);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v15, 1, 12, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, a2);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v16 = IoBuildDeviceIoControlRequest(0xB01A8u, v14, 0LL, 0, OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
    v17 = (int)v16;
    if ( v16 )
    {
      v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = v13;
      Status = IofCallDriver(v14, v16);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 3;
          WPP_RECORDER_SF_d(
            (_DWORD)gRimLog,
            v19,
            1,
            14,
            (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
            Status);
        }
        goto LABEL_38;
      }
      v20 = (void *)Win32AllocPoolNonPaged(OutputBuffer[0], 0x70707352u);
      if ( v20 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v17, 1, 16, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids, a2);
        }
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v21 = IoBuildDeviceIoControlRequest(0xB0193u, v14, 0LL, 0, v20, OutputBuffer[0], 0, &Event, &IoStatusBlock);
        v23 = (__int64)v21;
        if ( !v21 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_37;
          v42 = 17;
LABEL_73:
          LOBYTE(v23) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, v42, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
          goto LABEL_37;
        }
        v21->Tail.Overlay.CurrentStackLocation[-1].FileObject = v13;
        v24 = IofCallDriver(v14, v21);
        if ( v24 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v24 = IoStatusBlock.Status;
        }
        if ( v24 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = 3;
            WPP_RECORDER_SF_d(
              (_DWORD)gRimLog,
              v23,
              1,
              18,
              (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
              v24);
          }
          goto LABEL_37;
        }
        Caps = RIMHidGetCaps(a1, v14, v20, v57);
        if ( Caps != 1114112 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = 3;
            WPP_RECORDER_SF_qd(
              (_DWORD)gRimLog,
              v23,
              1,
              19,
              (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
              (char)v14,
              Caps);
          }
          goto LABEL_37;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = 4;
          WPP_RECORDER_SF_DD(
            (_DWORD)gRimLog,
            v23,
            1,
            20,
            (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
            v57[1],
            v57[0]);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v26) = 4;
            WPP_RECORDER_SF_DD(
              (_DWORD)gRimLog,
              v26,
              1,
              21,
              (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
              v57[2],
              v57[4]);
          }
        }
        DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v57[0], v57[1]);
        v27 = v57[0];
        if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, v57[1], v57[0]) )
        {
          v43 = *(_DWORD *)(a2 + 184) & 0xFFFF3FFF | 0x4000;
          *(_DWORD *)(a2 + 200) |= 0x40u;
          *(_DWORD *)(a2 + 184) = v43;
        }
        else if ( *(_DWORD *)(a1 + 864) )
        {
          v33 = IsProcessHidRawInputSupported();
          v34 = 0;
          if ( v33 >= 0 )
            v34 = 0x8000;
          v35 = v57[0];
          v36 = v34 | *(_DWORD *)(a2 + 184) & 0xFFFF7FFF;
          v37 = v57[1];
          *(_DWORD *)(a2 + 184) = v36;
          if ( (unsigned int)rimAnyExplicitRimUsagesMatchingUsages(v37, v35) )
          {
            v22 = &WPP_RECORDER_INITIALIZED;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_37;
            v32 = 22;
            LOBYTE(v23) = 4;
            goto LABEL_51;
          }
          v28 = v57[1];
          v27 = v57[0];
        }
        if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 && v28 == 1 )
        {
          if ( v27 && (v27 <= 2u || v27 > 5u && (v27 <= 7u || v27 == 128)) )
          {
            v22 = &WPP_RECORDER_INITIALIZED;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
LABEL_37:
              Win32FreePool((__int64)v20, v23, (__int64)v22);
LABEL_38:
              ObfDereferenceObject(v13);
              ZwClose(Handle);
              if ( !v14 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
              ObfDereferenceObject(v14);
              return v6;
            }
            InternalDeviceIoControl = v27;
            v29 = 23;
            OutputBufferLength = 1;
            LOBYTE(v23) = 4;
LABEL_36:
            WPP_RECORDER_SF_DD(
              (_DWORD)gRimLog,
              v23,
              1,
              v29,
              (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
              OutputBufferLength,
              InternalDeviceIoControl);
            goto LABEL_37;
          }
LABEL_82:
          if ( v27 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
          {
            v22 = &WPP_RECORDER_INITIALIZED;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_37;
            InternalDeviceIoControl = 14;
            v29 = 27;
            OutputBufferLength = 1;
            goto LABEL_86;
          }
          goto LABEL_47;
        }
        v23 = 13LL;
        if ( v28 == 13 )
        {
          if ( v27 == 14 )
          {
            if ( (*(_DWORD *)(a1 + 84) & 0x18) == 0 )
            {
              v22 = &WPP_RECORDER_INITIALIZED;
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_37;
              InternalDeviceIoControl = 14;
              v29 = 26;
              OutputBufferLength = 13;
LABEL_86:
              LOBYTE(v23) = 3;
              goto LABEL_36;
            }
            v6 = RIMAllocateHidConfigDesc(a1, a2, v14, v20, v57, OutputBuffer);
            if ( !v6 )
            {
              v22 = &WPP_RECORDER_INITIALIZED;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v44 = v57[1];
                LOBYTE(v44) = 3;
                WPP_RECORDER_SF_DD(
                  (_DWORD)gRimLog,
                  v44,
                  1,
                  25,
                  (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
                  v57[1],
                  v57[0]);
              }
              goto LABEL_37;
            }
            goto LABEL_61;
          }
        }
        else if ( v28 == 1 )
        {
          goto LABEL_82;
        }
LABEL_47:
        if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v28, v27, (__int64)&OutputBuffer[1] + 2)
          && (*(_DWORD *)(a1 + 84) & 4) == 0 )
        {
          v22 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_37;
          v42 = 28;
          goto LABEL_73;
        }
        v6 = RIMAllocateHidDesc(a1, a2, v20, v57, (__int64)OutputBuffer, (__int64)v14, (__int64)v13);
        if ( !v6 )
        {
          v22 = &WPP_RECORDER_INITIALIZED;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_37;
          v32 = 29;
          LOBYTE(v23) = 3;
LABEL_51:
          WPP_RECORDER_SF_DD(
            (_DWORD)gRimLog,
            v23,
            1,
            v32,
            (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
            v57[1],
            v57[0]);
          goto LABEL_37;
        }
        v38 = RIMSearchHidTLCInfo(v57[1], v57[0]);
        v39 = (__int64)v38;
        if ( v38 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDq(
              v57[0],
              v57[1],
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              30,
              (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
              v57[1],
              v57[0],
              (char)v38);
        }
        else
        {
          v39 = RIMAllocateAndLinkHidTLCInfo(v57[1], v57[0]);
          if ( !v39 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v40) = 3;
              WPP_RECORDER_SF_q(
                (_DWORD)gRimLog,
                v40,
                1,
                31,
                (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
                a1);
            }
            RIMFreeHidDesc(v6);
            v6 = 0LL;
            goto LABEL_38;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v49) = v57[0];
            *(_DWORD *)InternalDeviceIoControla = v57[1];
            WPP_RECORDER_SF_qDD(
              (__int64)gRimLog,
              4u,
              1u,
              0x20u,
              (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
              v39,
              *(_QWORD *)InternalDeviceIoControla,
              v49);
          }
        }
        ++*(_DWORD *)(v39 + 20);
        *(_QWORD *)(a2 + 472) = v39;
LABEL_61:
        ObfDereferenceObject(v14);
        ObfDereferenceObject(v13);
        ZwClose(Handle);
        return v6;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v41 = 15;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v41 = 13;
    }
    LOBYTE(v17) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, v41, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
    goto LABEL_38;
  }
  if ( *(_QWORD *)a3
    && (!gpfnHidP_GetCollectionDescription
      ? (CollectionDescription = -1073741637)
      : (CollectionDescription = gpfnHidP_GetCollectionDescription(
                                   *(unsigned __int8 **)a3,
                                   *(_DWORD *)(a3 + 8),
                                   PagedPool,
                                   (struct _HIDP_DEVICE_DESC *)(a3 + 16))),
        CollectionDescription < 0) )
  {
    return 0LL;
  }
  else
  {
    return RIMIDECreateHIDDesc(a1, a2, a3);
  }
}
