/*
 * XREFs of CiConfigInitialize @ 0x1C000D490
 * Callers:
 *     CsInitialize @ 0x1C000D2D0 (CsInitialize.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00043F8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0004644 (WPP_SF_d.c)
 *     CiConfigReadDWORD @ 0x1C000D1F0 (CiConfigReadDWORD.c)
 *     CiConfigInitializeFromRegistry @ 0x1C000D960 (CiConfigInitializeFromRegistry.c)
 */

__int64 CiConfigInitialize()
{
  NTSTATUS v0; // ebx
  unsigned int DWORD; // edx
  int v2; // r9d
  NTSTATUS v3; // ebx
  int v4; // eax
  int v5; // r9d
  bool v6; // dl
  int v7; // r9d
  int DpcData_high; // r9d
  ULONG ActiveThreadCount; // r9d
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)0x1C000F110LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0x80000100, &ObjectAttributes);
  if ( v0 < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Cu,
        (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
        v0);
    return (unsigned int)v0;
  }
  else
  {
    DWORD = CiConfigReadDWORD(KeyHandle, (struct _UNICODE_STRING *)0x1C000F090LL, 0x64u);
    if ( DWORD - 10 > 0x5A )
      v2 = 20;
    else
      v2 = 10 * (DWORD / 0xA);
    CiSystemResponsiveness = v2;
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x12u,
        (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
        v2);
    if ( CiSystemResponsiveness == 100 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x13u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids);
      v3 = -1073741696;
    }
    else
    {
      v4 = CiConfigReadDWORD(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0A0LL, 0xAu);
      LODWORD(WPP_MAIN_CB.Dpc.DpcData) = v4;
      v5 = v4;
      if ( v4 )
      {
        if ( (unsigned int)(v4 - 71) <= 0xFFFFFFB7 )
        {
          v5 = 70;
          LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 70;
        }
      }
      else
      {
        v5 = 1;
        LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 1;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x14u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v5);
      v6 = (unsigned __int8)CiConfigReadDWORD(KeyHandle, (struct _UNICODE_STRING *)0x1C000F080LL, 0) != 0;
      CiSchedulerDisallowLazyMode = v6;
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x15u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v6);
      v7 = CiConfigReadDWORD(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0B0LL, 2u);
      CiSchedulerIdleDetectionCycles = v7;
      if ( (unsigned int)(v7 - 1) > 0x1E )
      {
        v7 = 2;
        CiSchedulerIdleDetectionCycles = 2;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x16u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v7);
      CiSchedulerIdleCycleBitMask = (1 << CiSchedulerIdleDetectionCycles) - 1;
      HIDWORD(WPP_MAIN_CB.Dpc.DpcData) = CiConfigReadDWORD(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0C0LL, 0xF4240u);
      DpcData_high = HIDWORD(WPP_MAIN_CB.Dpc.DpcData);
      if ( !HIDWORD(WPP_MAIN_CB.Dpc.DpcData) )
      {
        DpcData_high = 1000000;
        HIDWORD(WPP_MAIN_CB.Dpc.DpcData) = 1000000;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x17u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          DpcData_high);
      WPP_MAIN_CB.ActiveThreadCount = CiConfigReadDWORD(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0D0LL, 0x2710u);
      ActiveThreadCount = WPP_MAIN_CB.ActiveThreadCount;
      if ( WPP_MAIN_CB.ActiveThreadCount > 0x2710 )
      {
        ActiveThreadCount = 10000;
        WPP_MAIN_CB.ActiveThreadCount = 10000;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x18u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          ActiveThreadCount);
      v10 = CiConfigReadDWORD(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0E0LL, 0x186A0u);
      *(&WPP_MAIN_CB.ActiveThreadCount + 1) = v10;
      if ( (unsigned int)(v10 - 50000) > 0xE7EF0 )
      {
        v10 = 100000;
        *(&WPP_MAIN_CB.ActiveThreadCount + 1) = 100000;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x19u,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v10);
      v11 = CiConfigReadDWORD(KeyHandle, (struct _UNICODE_STRING *)0x1C000F0F0LL, 0x20u);
      CiMaxThreadsPerProcess = v11;
      if ( (unsigned int)(v11 - 8) > 0x78 )
      {
        v11 = 32;
        CiMaxThreadsPerProcess = 32;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Au,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v11);
      v12 = CiConfigReadDWORD(KeyHandle, (struct _UNICODE_STRING *)0x1C000F100LL, 0x100u);
      CiMaxThreadsTotal = v12;
      if ( (unsigned int)(v12 - 64) > 0xFFBF )
      {
        v12 = 256;
        CiMaxThreadsTotal = 256;
      }
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x1Bu,
          (__int64)&WPP_350503daac883abe7be9cf63f89038d9_Traceguids,
          v12);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)0x1C000F120LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v3 = ZwOpenKey(&Handle, 0x80000100, &ObjectAttributes);
      if ( v3 >= 0 )
      {
        v3 = CiConfigInitializeFromRegistry(Handle);
        ZwClose(Handle);
      }
    }
    ZwClose(KeyHandle);
    return (unsigned int)v3;
  }
}
