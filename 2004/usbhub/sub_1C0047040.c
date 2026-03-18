/*
 * XREFs of sub_1C0047040 @ 0x1C0047040
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

__int64 __fastcall sub_1C0047040(__int64 a1, __int64 a2, _BYTE *a3, int a4)
{
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-20h]

  v7 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, a2, (_DWORD)a3, 50, (__int64)&unk_1C0063940, a2);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v9) = a4;
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x33u, (__int64)&unk_1C0063940, v9);
    }
  }
  LOBYTE(v7) = *a3 != 0;
  result = *(_DWORD *)(a1 + 2568) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 2568) = result | v7;
  return result;
}
