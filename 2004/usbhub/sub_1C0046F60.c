/*
 * XREFs of sub_1C0046F60 @ 0x1C0046F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

unsigned int __fastcall sub_1C0046F60(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  unsigned int result; // eax
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, a2, (_DWORD)a3, 48, (__int64)&unk_1C0063940, a2);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v8) = a4;
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x31u, (__int64)&unk_1C0063940, v8);
    }
  }
  result = *(_DWORD *)(a1 + 2560) & 0xEFFFFFFF;
  *(_DWORD *)(a1 + 2560) = result | (*a3 != 0 ? 0x10000000 : 0);
  return result;
}
