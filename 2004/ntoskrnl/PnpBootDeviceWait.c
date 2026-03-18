/*
 * XREFs of PnpBootDeviceWait @ 0x1403B4188
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A4E080 (IopInitializeBootDrivers.c)
 *     VhdInitialize @ 0x140A703C0 (VhdInitialize.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     HeadlessKernelAddLogEntry @ 0x14036B9C8 (HeadlessKernelAddLogEntry.c)
 *     Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled @ 0x1403ED274 (Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x140728854 (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x14078C2D0 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpBootDeviceWait(
        __int64 a1,
        int a2,
        __int64 (__fastcall *a3)(__int64, __int64, UNICODE_STRING *),
        __int64 a4)
{
  unsigned int v7; // ebx
  int RegistryValue; // r14d
  int v9; // esi
  int v10; // edi
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF

  v14[0] = 7209068LL;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v14[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v7 = 0;
  RegistryValue = IopOpenRegistryKeyEx(&Handle, 0LL, v14, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 3) == 4 )
      {
        v7 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        if ( !(unsigned int)Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled() )
          ExFreePoolWithTag(P, 0);
        if ( v7 >= 0xC8 )
        {
          if ( v7 > 0x2BF20 )
            v7 = 180000;
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        RegistryValue = -1073741823;
      }
      if ( (unsigned int)Feature_Servicing_VB_Memory_Leak_33934456__private_IsEnabled() )
        ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  P = (PVOID)-2000000LL;
  RtlFreeAnsiString(&UnicodeString);
  v9 = a3(a1, a4, &UnicodeString);
  if ( v9 < 0 )
  {
    v10 = 0;
    if ( RegistryValue >= 0 )
      v10 = v7;
    do
    {
      if ( v10 <= 0 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
      v10 -= 200;
      RtlFreeAnsiString(&UnicodeString);
      v9 = a3(a1, a4, &UnicodeString);
    }
    while ( v9 < 0 );
    if ( v9 < 0 )
    {
      HeadlessKernelAddLogEntry();
      KeBugCheckEx(0x7Bu, (ULONG_PTR)&UnicodeString, v9, 0LL, a2);
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  return 0LL;
}
