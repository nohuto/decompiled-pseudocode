/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C0155A90
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0023360 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     rimOnPnpArrived @ 0x1C00240B8 (rimOnPnpArrived.c)
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

__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, struct _UNICODE_STRING *a2, unsigned int a3, int a4, _QWORD *a5)
{
  struct _UNICODE_STRING *v6; // r14
  int v8; // edx
  int v9; // ebx
  CDeviceIdentity **v10; // rdi
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v15; // r8
  _BYTE **v16; // rax
  __int64 v17; // r9
  __int64 v18; // r14
  _QWORD *v19; // rdx
  int v20; // r9d
  int v22; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v25; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  v6 = a2;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 31, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( bRimDispositionNormal((struct RawInputManagerObject *)v10) )
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v10 + 21)) != 0 )
      {
        SourceString = 0LL;
        p_DestinationString = 0LL;
        DestinationString = 0LL;
        if ( !a4 )
        {
          p_DestinationString = v6;
LABEL_23:
          if ( v9 >= 0 )
          {
            v25 = 0LL;
            v9 = RIMCreateDev(v10, a3, (__int64)p_DestinationString, 1LL, 0, 0LL, (struct _UNICODE_STRING **)&v25);
            if ( v9 >= 0 )
            {
              v18 = v25;
              *(_DWORD *)(v25 + 184) |= 1u;
              v9 = rimOnPnpArrived((__int64)v10, v18, (void *)0xFFFFFFFFFFFFFFFFLL, v17);
              if ( v9 >= 0 )
              {
                if ( a4 )
                {
                  v19 = a5;
                  if ( (unsigned __int64)a5 >= MmUserProbeAddress )
                    v19 = (_QWORD *)MmUserProbeAddress;
                  *v19 = *(_QWORD *)(v18 + 16);
                }
                else
                {
                  *a5 = *(_QWORD *)(v18 + 16);
                }
              }
              if ( v9 < 0 )
                RIMFreeDev((__int64)v10, v18);
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_40;
        }
        if ( (unsigned __int64)v6 >= MmUserProbeAddress )
          v6 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v13 = *(unsigned int *)&v6->Length;
        v22 = *(_DWORD *)&v6->Length;
        *(_DWORD *)&SourceString.Length = *(_DWORD *)&v6->Length;
        Buffer = v6->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (ULONG64)Buffer + (unsigned __int16)v13 + 2;
        v16 = (_BYTE **)MmUserProbeAddress;
        if ( v15 < MmUserProbeAddress && (unsigned __int16)v13 <= HIWORD(v22) )
        {
          if ( (v13 & 1) != 0 )
            goto LABEL_17;
          if ( v15 > (unsigned __int64)Buffer )
          {
LABEL_19:
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
              v9 = -1073741801;
            }
            v10 = (CDeviceIdentity **)Object;
            goto LABEL_23;
          }
        }
        if ( (v13 & 1) == 0 )
        {
LABEL_18:
          **v16 = 0;
          goto LABEL_19;
        }
LABEL_17:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, Buffer, v15, v12);
        v16 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_18;
      }
      v9 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 32;
LABEL_39:
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, v20, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v9 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 33;
        goto LABEL_39;
      }
    }
LABEL_40:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v10 + 13));
    ObfDereferenceObject(v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v8, 1, 34, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v9);
  }
  return (unsigned int)v9;
}
