/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C015DCE0
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0170644 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0170910 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016AA0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00A16B8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00A16E0 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C00A1B00 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C00A1B30 (RIMCreateDev.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     RIMFreeDev @ 0x1C0159410 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        char *a1,
        struct _UNICODE_STRING *a2,
        int a3,
        _OWORD *a4,
        int a5,
        __int64 a6)
{
  int v9; // edx
  int v11; // edx
  int v12; // ebx
  CDeviceIdentity **v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // r12
  unsigned int v17; // eax
  _QWORD *v18; // r13
  __int64 v19; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v21; // r8
  _BYTE **v22; // rax
  __int64 v23; // rax
  int v24; // r9d
  PVOID Object; // [rsp+48h] [rbp-140h] BYREF
  __int64 v27; // [rsp+50h] [rbp-138h] BYREF
  int v28; // [rsp+58h] [rbp-130h]
  int v29; // [rsp+60h] [rbp-128h]
  __int64 v30; // [rsp+68h] [rbp-120h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-118h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-110h] BYREF
  UNICODE_STRING SourceString; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-E8h]
  __int64 v35[18]; // [rsp+B0h] [rbp-D8h] BYREF

  v34 = a6;
  v29 = a3;
  v30 = a6;
  Object = 0LL;
  memset(v35, 0, sizeof(v35));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 40, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 41, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    }
    return 3221225485LL;
  }
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v12 >= 0 )
  {
    v13 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v13) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v13 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = a2;
          *(_OWORD *)v35 = *a4;
          *(_OWORD *)&v35[2] = a4[1];
          *(_OWORD *)&v35[4] = a4[2];
          *(_OWORD *)&v35[6] = a4[3];
          *(_OWORD *)&v35[8] = a4[4];
          *(_OWORD *)&v35[10] = a4[5];
          *(_OWORD *)&v35[12] = a4[6];
          *(_OWORD *)&v35[14] = a4[7];
          *(_OWORD *)&v35[16] = a4[8];
          v16 = (_QWORD *)v30;
          v17 = a3;
          v18 = (_QWORD *)v30;
LABEL_27:
          if ( v12 >= 0 )
          {
            v27 = 0LL;
            v12 = RIMCreateDev(v13, v17, (__int64)p_DestinationString, 0, 1, (__int64)v35, &v27);
            if ( v12 >= 0 )
            {
              if ( a5 )
              {
                v15 = v27;
                v14 = *(_QWORD *)(v27 + 16);
                if ( (unsigned __int64)v16 >= MmUserProbeAddress )
                  v16 = (_QWORD *)MmUserProbeAddress;
                *v16 = v14;
              }
              else
              {
                v15 = v27;
                if ( (v35[1] & 0x400000000LL) != 0 )
                  v23 = *(_QWORD *)(v27 + 24);
                else
                  v23 = *(_QWORD *)(v27 + 16);
                *v18 = v23;
              }
              if ( v13[80] || *((_DWORD *)v13 + 216) )
                *(_DWORD *)(v15 + 184) |= 0x20000u;
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer, v14, v15);
          goto LABEL_47;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v19 = *(unsigned int *)&a2->Length;
        v28 = v19;
        *(_DWORD *)&SourceString.Length = v19;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = (ULONG64)Buffer + (unsigned __int16)v19 + 2;
        v22 = (_BYTE **)MmUserProbeAddress;
        if ( v21 < MmUserProbeAddress && (unsigned __int16)v19 <= HIWORD(v28) )
        {
          if ( (v19 & 1) != 0 )
            goto LABEL_21;
          if ( v21 > (unsigned __int64)Buffer )
          {
LABEL_23:
            DestinationString.MaximumLength = SourceString.Length;
            DestinationString.Length = SourceString.Length;
            DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
            if ( DestinationString.Buffer )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = &DestinationString;
            }
            else
            {
              v12 = -1073741801;
            }
            v13 = (CDeviceIdentity **)Object;
            v16 = (_QWORD *)v30;
            v17 = a3;
            v18 = (_QWORD *)v30;
            goto LABEL_27;
          }
        }
        if ( (v19 & 1) == 0 )
        {
LABEL_22:
          **v22 = 0;
          goto LABEL_23;
        }
LABEL_21:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
        v22 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_22;
      }
      v12 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = 42;
LABEL_46:
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, v24, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v12 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v24 = 43;
        goto LABEL_46;
      }
    }
LABEL_47:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v13 + 13));
    ObfDereferenceObject(v13);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v11, 1, 44, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v12);
  }
  return (unsigned int)v12;
}
