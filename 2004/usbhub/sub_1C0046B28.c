/*
 * XREFs of sub_1C0046B28 @ 0x1C0046B28
 * Callers:
 *     sub_1C0055820 @ 0x1C0055820 (sub_1C0055820.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C00469A4 @ 0x1C00469A4 (sub_1C00469A4.c)
 */

__int64 __fastcall sub_1C0046B28(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  __int64 result; // rax

  v2 = sub_1C0011220((__int64)DeviceObject);
  if ( v2[706] )
    sub_1C00469A4(DeviceObject, L"MsOs20Flags", 4u, v2 + 706, 4u);
  result = sub_1C0016CA0(*((_QWORD *)v2 + 148), *((_WORD *)v2 + 714));
  if ( result )
    return sub_1C00469A4(DeviceObject, L"EnumerationRetryCount", 4u, (PVOID)(result + 544), 4u);
  return result;
}
