/*
 * XREFs of sub_1C005D2FC @ 0x1C005D2FC
 * Callers:
 *     sub_1C005D898 @ 0x1C005D898 (sub_1C005D898.c)
 * Callees:
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C005DB5C @ 0x1C005DB5C (sub_1C005DB5C.c)
 *     sub_1C005DD9C @ 0x1C005DD9C (sub_1C005DD9C.c)
 */

NTSTATUS __fastcall sub_1C005D2FC(int *a1)
{
  NTSTATUS result; // eax
  unsigned __int16 v3; // r9
  NTSTATUS v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+28h] [rbp-10h]
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  *a1 = 0;
  result = sub_1C005DB5C(a1, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\USB", &Handle);
  if ( result < 0 )
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      goto LABEL_10;
    v3 = 17;
    goto LABEL_4;
  }
  result = sub_1C005DD9C(Handle);
  if ( result >= 0 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      v5 = *a1;
      result = sub_1C002E188((__int64)DeviceObject->DeviceExtension, 4u, 1u, 0x13u, (__int64)&unk_1C0065940, v5);
    }
  }
  else if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v3 = 18;
LABEL_4:
    v4 = result;
    result = sub_1C002E188((__int64)DeviceObject->DeviceExtension, 2u, 1u, v3, (__int64)&unk_1C0065940, v4);
  }
LABEL_10:
  if ( Handle )
    return ZwClose(Handle);
  return result;
}
