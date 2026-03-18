/*
 * XREFs of sub_1C00461A0 @ 0x1C00461A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C0046144 @ 0x1C0046144 (sub_1C0046144.c)
 *     sub_1C0046540 @ 0x1C0046540 (sub_1C0046540.c)
 *     sub_1C0048244 @ 0x1C0048244 (sub_1C0048244.c)
 */

__int64 __fastcall sub_1C00461A0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  void (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD); // rax
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  _UNKNOWN **v9; // rbx
  USHORT v10; // bx
  __m128 *PoolWithTag; // rax
  const WCHAR *v12; // rdi
  int v13; // r8d
  int v15; // [rsp+20h] [rbp-40h]
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF

  Destination = 0LL;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C003B2A0(DeviceObject->DeviceExtension, a2, a3, 91, (__int64)&unk_1C0063940, *(_QWORD *)(a2 + 8));
  v18 = 0LL;
  KseQueryDeviceFlags(L"USBHUB:GLOBAL_FLAGS", L"USBHUB", &v18);
  if ( (v18 & 1) != 0 )
    dword_1C006B68C = 1;
  v4 = 112;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x3Du, (__int64)&unk_1C0063940);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (void (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  v15 = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (void (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD))RtlQueryRegistryValues;
  SystemRoutineAddress(1LL, L"usb", &off_1C005F550, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x3Eu, (__int64)&unk_1C0063940);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, v6, v7, 63, (__int64)&unk_1C0063940, (__int64)L"usb");
  }
  v9 = &off_1C005F568;
  do
  {
    if ( !*(v9 - 3) )
      break;
    if ( *((_DWORD *)v9 + 2) == 4 && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C0048244(DeviceObject->DeviceExtension, *(_DWORD *)*v9, v7, v8, v15, (__int64)*(v9 - 1), *(_DWORD *)*v9);
    v9 += 7;
    v4 -= 56;
  }
  while ( v4 >= 0x38 );
  v10 = *(_WORD *)a2 + 12;
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, v10, 0x42554855u);
  v12 = (const WCHAR *)PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, v10);
    RtlInitUnicodeString(&Destination, v12);
    Destination.MaximumLength = v10;
    RtlCopyUnicodeString(&Destination, (PCUNICODE_STRING)a2);
    if ( RtlAppendUnicodeToString(&Destination, L"\\hubg") >= 0 )
      sub_1C0046540(0, Destination.Buffer, v13, (unsigned int)&off_1C005EFD0, 1120);
    RtlFreeUnicodeString(&Destination);
  }
  if ( (sub_1C0046144() & 0xC0000000) == 0xC0000000 )
    *(_DWORD *)&stru_1C006B480.DeviceQueue.Busy = 2;
  return 0LL;
}
