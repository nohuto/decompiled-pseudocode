/*
 * XREFs of ACPIInternalRegisterPowerCallBack @ 0x1C000C6B0
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000C8B0 (ACPICMButtonStartWorker.c)
 *     ACPIInitStartACPI @ 0x1C00BB3C4 (ACPIInitStartACPI.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D994 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIInternalRegisterPowerCallBack(PVOID CallbackContext, PCALLBACK_FUNCTION CallbackFunction)
{
  NTSTATUS v4; // edi
  __int64 v6; // rcx
  void *v7; // rax
  void *v8; // rdx
  __int64 v9; // [rsp+48h] [rbp+7h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp+17h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+A8h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  CallbackObject = 0LL;
  DestinationString = 0LL;
  if ( (*((_QWORD *)CallbackContext + 1) & 0x4000000000000000LL) != 0 )
    return 0LL;
  _InterlockedOr64((volatile signed __int64 *)CallbackContext + 1, 0x4000000000000000uLL);
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 80;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 1u);
  if ( v4 < 0 )
  {
    v6 = *((_QWORD *)CallbackContext + 1);
    v7 = &unk_1C00701BA;
    v8 = &unk_1C00701BA;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)*((_QWORD *)CallbackContext + 71);
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = (void *)*((_QWORD *)CallbackContext + 72);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = (__int64)v8;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v8,
        10,
        11,
        (__int64)&WPP_93e06651ed773e0c6f8a5613c80b6645_Traceguids,
        v4,
        (char)CallbackContext,
        (__int64)v7,
        v9);
    }
    v4 = 0;
    _InterlockedAnd64((volatile signed __int64 *)CallbackContext + 1, 0xBFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    ExRegisterCallback(CallbackObject, CallbackFunction, CallbackContext);
  }
  return (unsigned int)v4;
}
