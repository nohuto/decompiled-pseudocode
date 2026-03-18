/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0155DF0
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00CB300 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0023360 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     rimOnPnpArrived @ 0x1C00240B8 (rimOnPnpArrived.c)
 *     rimDoRimDevChange @ 0x1C002575C (rimDoRimDevChange.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00274C8 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00274F0 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0027850 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C0027880 (RIMCreateDev.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     RIMFreeDev @ 0x1C0150B40 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        char *a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        int a5,
        _QWORD *a6)
{
  struct _UNICODE_STRING *v7; // r14
  int v10; // edx
  int v11; // ebx
  CDeviceIdentity **v12; // rdi
  int v13; // edx
  __int64 v14; // r9
  __int64 v15; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v17; // r8
  _BYTE **v18; // rax
  __int64 v19; // r9
  __int64 v20; // r14
  __int64 v21; // r9
  _QWORD *v22; // r8
  int v23; // r9d
  int v24; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  v7 = a2;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 35, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  if ( !a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        (_DWORD)a2,
        1,
        36,
        (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
        13);
    }
    return 3221225485LL;
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    v12 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v12) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v12 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a5 )
        {
          p_DestinationString = v7;
LABEL_27:
          if ( v11 >= 0 )
          {
            v27 = 0LL;
            v11 = RIMCreateDev(v12, a3, (__int64)p_DestinationString, 1LL, 0, 0LL, (struct _UNICODE_STRING **)&v27);
            if ( v11 >= 0 )
            {
              v20 = v27;
              *(_DWORD *)(v27 + 184) |= 1u;
              v11 = rimOnPnpArrived((__int64)v12, v20, a4, v19);
              if ( v11 >= 0 )
              {
                rimDoRimDevChange((__int64)v12, v20, 2LL, v21);
                v22 = a6;
                if ( a6 )
                {
                  if ( a5 )
                  {
                    if ( (unsigned __int64)a6 >= MmUserProbeAddress )
                      v22 = (_QWORD *)MmUserProbeAddress;
                    *v22 = *(_QWORD *)(v20 + 16);
                  }
                  else
                  {
                    *a6 = *(_QWORD *)(v20 + 16);
                  }
                }
              }
              if ( v11 < 0 )
                RIMFreeDev((__int64)v12, v20);
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_45;
        }
        if ( (unsigned __int64)v7 >= MmUserProbeAddress )
          v7 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v15 = *(unsigned int *)&v7->Length;
        v24 = *(_DWORD *)&v7->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&v7->Length;
        Buffer = v7->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = (ULONG64)Buffer + (unsigned __int16)v15 + 2;
        v18 = (_BYTE **)MmUserProbeAddress;
        if ( v17 < MmUserProbeAddress && (unsigned __int16)v15 <= HIWORD(v24) )
        {
          if ( (v15 & 1) != 0 )
            goto LABEL_21;
          if ( v17 > (unsigned __int64)Buffer )
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
              v11 = -1073741801;
            }
            v12 = (CDeviceIdentity **)Object;
            goto LABEL_27;
          }
        }
        if ( (v15 & 1) == 0 )
        {
LABEL_22:
          **v18 = 0;
          goto LABEL_23;
        }
LABEL_21:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, Buffer, v17, v14);
        v18 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_22;
      }
      v11 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 37;
LABEL_44:
        LOBYTE(v13) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v13, 1, v23, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v11 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = 38;
        goto LABEL_44;
      }
    }
LABEL_45:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v12 + 13));
    ObfDereferenceObject(v12);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v10, 1, 39, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v11);
  }
  return (unsigned int)v11;
}
