/*
 * XREFs of PnpBootDeviceWait @ 0x1403C5C64
 * Callers:
 *     IopInitializeBootDrivers @ 0x140B114E8 (IopInitializeBootDrivers.c)
 *     VhdInitialize @ 0x140B30860 (VhdInitialize.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     HeadlessKernelAddLogEntry @ 0x1402D26C0 (HeadlessKernelAddLogEntry.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     IopOpenRegistryKeyEx @ 0x14082EF44 (IopOpenRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpBootDeviceWait(
        __int64 a1,
        int a2,
        __int64 (__fastcall *a3)(__int64, __int64, UNICODE_STRING *),
        __int64 a4)
{
  int v4; // edi
  unsigned int v8; // ebx
  int RegistryValue; // esi
  int v10; // r14d
  PVOID P; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+50h] BYREF

  v4 = 0;
  v14[0] = 7209068LL;
  P = 0LL;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v14[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v8 = 0;
  RegistryValue = IopOpenRegistryKeyEx(&Handle, 0LL, v14, 131097LL);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( *((_DWORD *)P + 3) == 4 )
      {
        v8 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        if ( v8 >= 0xC8 )
        {
          if ( v8 > 0x2BF20 )
            v8 = 180000;
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        RegistryValue = -1073741823;
      }
      ExFreePoolWithTag(P, 0);
    }
    ZwClose(Handle);
  }
  P = (PVOID)-2000000LL;
  RtlFreeUnicodeString(&UnicodeString);
  v10 = a3(a1, a4, &UnicodeString);
  if ( v10 < 0 )
  {
    if ( RegistryValue >= 0 )
      v4 = v8;
    do
    {
      if ( v4 <= 0 )
      {
        HeadlessKernelAddLogEntry();
        KeBugCheckEx(0x7Bu, (ULONG_PTR)&UnicodeString, v10, 0LL, a2);
      }
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
      v4 -= 200;
      RtlFreeUnicodeString(&UnicodeString);
      v10 = a3(a1, a4, &UnicodeString);
    }
    while ( v10 < 0 );
  }
  RtlFreeUnicodeString(&UnicodeString);
  return 0LL;
}
