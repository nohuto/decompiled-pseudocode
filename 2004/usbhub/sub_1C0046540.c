/*
 * XREFs of sub_1C0046540 @ 0x1C0046540
 * Callers:
 *     sub_1C00461A0 @ 0x1C00461A0 (sub_1C00461A0.c)
 *     sub_1C00466CC @ 0x1C00466CC (sub_1C00466CC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C0048244 @ 0x1C0048244 (sub_1C0048244.c)
 */

__int64 __fastcall sub_1C0046540(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  PVOID SystemRoutineAddress; // rax
  int v9; // edx
  unsigned int v10; // esi
  int v11; // r8d
  int v12; // r9d
  __int64 v14; // rbx
  int v16; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x3Du, (__int64)&unk_1C0063940);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
  v16 = 0;
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = RtlQueryRegistryValues;
  v10 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))SystemRoutineAddress)(a1, a2, a4, 0LL);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x3Eu, (__int64)&unk_1C0063940);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, v9, v11, 63, (__int64)&unk_1C0063940, a2);
  }
  v14 = a4 + 24;
  do
  {
    if ( !*(_QWORD *)(v14 - 24) )
      break;
    if ( *(_DWORD *)(v14 + 8) == 4 && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
      sub_1C0048244(
        DeviceObject->DeviceExtension,
        **(_DWORD **)v14,
        v11,
        v12,
        v16,
        *(_QWORD *)(v14 - 8),
        **(_DWORD **)v14);
    v14 += 56LL;
    a5 -= 56;
  }
  while ( a5 >= 0x38 );
  return v10;
}
