/*
 * XREFs of RIMCreateHidDesc @ 0x1C00ABE60
 * Callers:
 *     RIMCreateDev @ 0x1C00AE678 (RIMCreateDev.c)
 * Callees:
 *     RIMFreeHidDesc @ 0x1C003E960 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C003EA00 (WPP_RECORDER_SF_qDD.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0054BE8 (ApiSetInkProcessorIsInkDevice.c)
 *     IsProcessHidRawInputSupported @ 0x1C005DF48 (IsProcessHidRawInputSupported.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0062084 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0063D88 (RIMSearchHidTLCInfo.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00AC474 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C00AE4D0 (WPP_RECORDER_SF_q.c)
 *     rimAnyExplicitRimUsagesMatchingUsages @ 0x1C00AEBE8 (rimAnyExplicitRimUsagesMatchingUsages.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C00AEC8C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00AECC4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RIMHidGetCaps @ 0x1C00AED04 (RIMHidGetCaps.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00AEE94 (RIMGetDeviceObjectPointer.c)
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C013BA04 (WPP_RECORDER_SF_qd.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0163668 (RIMAllocateHidConfigDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C016583C (WPP_RECORDER_SF_DDq.c)
 *     RIMIDECreateHIDDesc @ 0x1C016977C (RIMIDECreateHIDDesc.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _FILE_OBJECT *v16; // r13
  struct _DEVICE_OBJECT *v17; // rsi
  int v18; // edx
  PIRP v19; // rax
  int v20; // edx
  NTSTATUS Status; // eax
  int v22; // edx
  void *v23; // r15
  PIRP v24; // rax
  int v25; // edx
  NTSTATUS v26; // eax
  int v27; // edx
  int Caps; // eax
  int v29; // edx
  int v30; // edx
  unsigned __int16 v31; // bx
  int v32; // edx
  unsigned __int16 v33; // r11
  int v34; // r9d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int v40; // r9d
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 *v46; // rax
  _WORD *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r9
  int v50; // r9d
  int v51; // r9d
  unsigned int v52; // eax
  int v53; // edx
  _UNKNOWN **v54; // r8
  int CollectionDescription; // eax
  char OutputBufferLength; // [rsp+28h] [rbp-A1h]
  char InternalDeviceIoControl; // [rsp+30h] [rbp-99h]
  BOOLEAN InternalDeviceIoControla[8]; // [rsp+30h] [rbp-99h]
  PKEVENT v59; // [rsp+38h] [rbp-91h]
  HANDLE Handle; // [rsp+50h] [rbp-79h] BYREF
  PVOID v61; // [rsp+58h] [rbp-71h] BYREF
  PVOID Object; // [rsp+60h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-61h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-51h] BYREF
  ULONG OutputBuffer[2]; // [rsp+90h] [rbp-39h] BYREF
  int v66; // [rsp+98h] [rbp-31h]
  unsigned __int16 v67[32]; // [rsp+A0h] [rbp-29h] BYREF

  v61 = 0LL;
  Object = 0LL;
  IoStatusBlock = 0LL;
  v6 = 0LL;
  memset(v67, 0, sizeof(v67));
  Handle = 0LL;
  *(_QWORD *)OutputBuffer = 0LL;
  v66 = 0;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 10, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
  {
    v11 = RIMGetDeviceObjectPointer((int)a2 + 208, v7, v9, (unsigned int)&Handle, (__int64)&v61, (__int64)&Object);
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v12, 1, 11, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, v11);
      }
      return v6;
    }
    v16 = (struct _FILE_OBJECT *)v61;
    if ( !v61 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
    v17 = (struct _DEVICE_OBJECT *)Object;
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
    ObfReferenceObject(v17);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v18, 1, 12, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a2);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v19 = IoBuildDeviceIoControlRequest(0xB01A8u, v17, 0LL, 0, OutputBuffer, 0xCu, 0, &Event, &IoStatusBlock);
    v20 = (int)v19;
    if ( v19 )
    {
      v19->Tail.Overlay.CurrentStackLocation[-1].FileObject = v16;
      Status = IofCallDriver(v17, v19);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v22) = 3;
          WPP_RECORDER_SF_d(
            (_DWORD)gRimLog,
            v22,
            1,
            14,
            (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
            Status);
        }
        goto LABEL_38;
      }
      v23 = (void *)Win32AllocPoolNonPaged(OutputBuffer[0], 0x70707352u);
      if ( v23 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v20, 1, 16, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids, a2);
        }
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v24 = IoBuildDeviceIoControlRequest(0xB0193u, v17, 0LL, 0, v23, OutputBuffer[0], 0, &Event, &IoStatusBlock);
        v25 = (int)v24;
        if ( !v24 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_37;
          v51 = 17;
LABEL_73:
          LOBYTE(v25) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v25, 1, v51, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
          goto LABEL_37;
        }
        v24->Tail.Overlay.CurrentStackLocation[-1].FileObject = v16;
        v26 = IofCallDriver(v17, v24);
        if ( v26 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v26 = IoStatusBlock.Status;
        }
        if ( v26 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v27) = 3;
            WPP_RECORDER_SF_d(
              (_DWORD)gRimLog,
              v27,
              1,
              18,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              v26);
          }
          goto LABEL_37;
        }
        Caps = RIMHidGetCaps(a1, v17, v23, v67);
        if ( Caps != 1114112 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = 3;
            WPP_RECORDER_SF_qd(
              (_DWORD)gRimLog,
              v29,
              1,
              19,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              (char)v17,
              Caps);
          }
          goto LABEL_37;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v29) = 4;
          WPP_RECORDER_SF_DD(
            (_DWORD)gRimLog,
            v29,
            1,
            20,
            (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
            v67[1],
            v67[0]);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = 4;
            WPP_RECORDER_SF_DD(
              (_DWORD)gRimLog,
              v30,
              1,
              21,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              v67[2],
              v67[4]);
          }
        }
        DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v67[0], v67[1]);
        v31 = v67[0];
        if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, v67[1], v67[0]) )
        {
          v52 = *(_DWORD *)(a2 + 184) & 0xFFFF3FFF | 0x4000;
          *(_DWORD *)(a2 + 200) |= 0x40u;
          *(_DWORD *)(a2 + 184) = v52;
        }
        else if ( *(_DWORD *)(a1 + 864) )
        {
          v41 = IsProcessHidRawInputSupported();
          v42 = 0;
          if ( v41 >= 0 )
            v42 = 0x8000;
          v43 = v67[0];
          v44 = v42 | *(_DWORD *)(a2 + 184) & 0xFFFF7FFF;
          v45 = v67[1];
          *(_DWORD *)(a2 + 184) = v44;
          if ( (unsigned int)rimAnyExplicitRimUsagesMatchingUsages(v45, v43) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_37;
            v40 = 22;
            LOBYTE(v32) = 4;
            goto LABEL_51;
          }
          v33 = v67[1];
          v31 = v67[0];
        }
        if ( (*(_DWORD *)(a2 + 184) & 0x4000) == 0 && v33 == 1 )
        {
          if ( v31 && (v31 <= 2u || v31 > 5u && (v31 <= 7u || v31 == 128)) )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
LABEL_37:
              Win32FreePool((__int64)v23);
LABEL_38:
              ObfDereferenceObject(v16);
              ZwClose(Handle);
              if ( !v17 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v36, v35, v37, v38);
              ObfDereferenceObject(v17);
              return v6;
            }
            InternalDeviceIoControl = v31;
            v34 = 23;
            OutputBufferLength = 1;
            LOBYTE(v32) = 4;
LABEL_36:
            WPP_RECORDER_SF_DD(
              (_DWORD)gRimLog,
              v32,
              1,
              v34,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              OutputBufferLength,
              InternalDeviceIoControl);
            goto LABEL_37;
          }
LABEL_82:
          if ( v31 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_37;
            InternalDeviceIoControl = 14;
            v34 = 27;
            OutputBufferLength = 1;
            goto LABEL_86;
          }
          goto LABEL_47;
        }
        v32 = 13;
        if ( v33 == 13 )
        {
          if ( v31 == 14 )
          {
            if ( (*(_DWORD *)(a1 + 84) & 0x18) == 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_37;
              InternalDeviceIoControl = 14;
              v34 = 26;
              OutputBufferLength = 13;
LABEL_86:
              LOBYTE(v32) = 3;
              goto LABEL_36;
            }
            v6 = RIMAllocateHidConfigDesc(a1, a2, v17, v23, v67, OutputBuffer);
            if ( !v6 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v53 = v67[1];
                LOBYTE(v53) = 3;
                WPP_RECORDER_SF_DD(
                  (_DWORD)gRimLog,
                  v53,
                  1,
                  25,
                  (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
                  v67[1],
                  v67[0]);
              }
              goto LABEL_37;
            }
            goto LABEL_61;
          }
        }
        else if ( v33 == 1 )
        {
          goto LABEL_82;
        }
LABEL_47:
        if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v33, v31, (__int64)&OutputBuffer[1] + 2)
          && (*(_DWORD *)(a1 + 84) & 4) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_37;
          v51 = 28;
          goto LABEL_73;
        }
        v6 = RIMAllocateHidDesc(
               a1,
               a2,
               (_DWORD)v23,
               (unsigned int)v67,
               (__int64)OutputBuffer,
               (__int64)v17,
               (__int64)v16);
        if ( !v6 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_37;
          v40 = 29;
          LOBYTE(v32) = 3;
LABEL_51:
          WPP_RECORDER_SF_DD(
            (_DWORD)gRimLog,
            v32,
            1,
            v40,
            (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
            v67[1],
            v67[0]);
          goto LABEL_37;
        }
        v46 = RIMSearchHidTLCInfo(v67[1], v67[0]);
        v47 = v46;
        if ( v46 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDq(
              v67[0],
              v67[1],
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              30,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              v67[1],
              v67[0],
              (char)v46);
        }
        else
        {
          v47 = RIMAllocateAndLinkHidTLCInfo(v67[1], v67[0]);
          if ( !v47 )
          {
            v54 = &WPP_RECORDER_INITIALIZED;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v48) = 3;
              WPP_RECORDER_SF_q(
                (_DWORD)gRimLog,
                v48,
                1,
                31,
                (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
                a1);
            }
            RIMFreeHidDesc(v6, v48, (__int64)v54, v49);
            v6 = 0LL;
            goto LABEL_38;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v59) = v67[0];
            *(_DWORD *)InternalDeviceIoControla = v67[1];
            WPP_RECORDER_SF_qDD(
              (__int64)gRimLog,
              4u,
              1u,
              0x20u,
              (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
              v47,
              *(_QWORD *)InternalDeviceIoControla,
              v59);
          }
        }
        ++*((_DWORD *)v47 + 5);
        *(_QWORD *)(a2 + 472) = v47;
LABEL_61:
        ObfDereferenceObject(v17);
        ObfDereferenceObject(v16);
        ZwClose(Handle);
        return v6;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v50 = 15;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_38;
      v50 = 13;
    }
    LOBYTE(v20) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v20, 1, v50, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
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
