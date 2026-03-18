/*
 * XREFs of sub_1C0041468 @ 0x1C0041468
 * Callers:
 *     DriverEntry @ 0x1C0074010 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C0041764 @ 0x1C0041764 (sub_1C0041764.c)
 *     sub_1C0043508 @ 0x1C0043508 (sub_1C0043508.c)
 *     sub_1C00438A0 @ 0x1C00438A0 (sub_1C00438A0.c)
 *     sub_1C005CC24 @ 0x1C005CC24 (sub_1C005CC24.c)
 *     sub_1C00730BC @ 0x1C00730BC (sub_1C00730BC.c)
 *     sub_1C0073198 @ 0x1C0073198 (sub_1C0073198.c)
 */

__int64 __fastcall sub_1C0041468(struct _LIST_ENTRY *a1, __int64 a2)
{
  ULONG v4; // ebx
  int v5; // edx
  __int64 (__fastcall *v6)(PDRIVER_OBJECT, PDEVICE_OBJECT); // rcx
  int v7; // edx
  unsigned int v8; // edi
  __int64 result; // rax
  _OSVERSIONINFOW VersionInformation; // [rsp+30h] [rbp-148h] BYREF

  v4 = 1;
  sub_1C001D340((__m128 *)&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    PoolType = 512;
    dword_1C006B718 = 0x40000000;
  }
  *(_QWORD *)&stru_1C006B480.Type = 0LL;
  stru_1C006B480.DriverObject = (struct _DRIVER_OBJECT *)&unk_1C00627D8;
  stru_1C006B480.NextDevice = 0LL;
  stru_1C006B480.CurrentIrp = 0LL;
  stru_1C006B480.Timer = (PIO_TIMER)1;
  stru_1C006B480.DeviceExtension = 0LL;
  stru_1C006B480.DeviceType = 0;
  sub_1C0073198();
  stru_1C006B480.CurrentIrp = 0LL;
  sub_1C00730BC(a1, a2);
  sub_1C0043508();
  stru_1C006B480.Queue.ListEntry.Blink = a1;
  if ( (unsigned __int8)sub_1C005CC24() )
    dword_1C006B694 = 1;
  a1[14].Blink = (struct _LIST_ENTRY *)sub_1C001A1A0;
  v6 = sub_1C0041990;
  a1[18].Flink = (struct _LIST_ENTRY *)sub_1C001A1A0;
  a1[20].Blink = (struct _LIST_ENTRY *)sub_1C001A1A0;
  a1[18].Blink = (struct _LIST_ENTRY *)sub_1C001A1A0;
  a1[14].Flink = (struct _LIST_ENTRY *)sub_1C001A1A0;
  a1[8].Flink = (struct _LIST_ENTRY *)sub_1C001A1A0;
  a1[7].Flink = (struct _LIST_ENTRY *)sub_1C001A1A0;
  a1[6].Blink = (struct _LIST_ENTRY *)sub_1C0042560;
  a1[3].Flink->Blink = (struct _LIST_ENTRY *)sub_1C0041990;
  LOBYTE(v6) = 1;
  a1[15].Flink = (struct _LIST_ENTRY *)&sub_1C0042340;
  v8 = sub_1C00438A0((_DWORD)v6, v5, 0, 3, a2, 0LL);
  if ( stru_1C006B480.Dpc.TargetInfoAsUlong > 1 )
  {
    do
    {
      if ( v4 > 0x10 )
        break;
      v4 *= 2;
    }
    while ( v4 < stru_1C006B480.Dpc.TargetInfoAsUlong );
  }
  stru_1C006B480.Dpc.TargetInfoAsUlong = v4;
  if ( (v8 & 0xC0000000) == 0xC0000000 )
    sub_1C00438A0(0, v7, 0, 4, 0LL, 0LL);
  qword_1C006B760 = (PVOID)sub_1C0041764(CallbackRoutine);
  qword_1C006B750 = (PVOID)sub_1C0041764(sub_1C0041670);
  result = v8;
  stru_1C006B480.Queue.ListEntry.Flink = 0LL;
  return result;
}
