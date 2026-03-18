/*
 * XREFs of sub_1C00477C0 @ 0x1C00477C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

__int64 __fastcall sub_1C00477C0(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      result = sub_1C003B2A0(DeviceObject->DeviceExtension, a2, (_DWORD)a3, 28, (__int64)&unk_1C0063940, a2);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v8) = a4;
      result = sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x1Du, (__int64)&unk_1C0063940, v8);
    }
  }
  if ( a4 == 4 )
  {
    result = *a3;
    if ( (_DWORD)result )
    {
      sub_1C0011220(a1)[742] = 1000 * result;
      result = (__int64)sub_1C0011220(a1);
      if ( *(int *)(result + 2968) > 30000 )
      {
        result = (__int64)sub_1C0011220(a1);
        *(_DWORD *)(result + 2968) = 30000;
      }
    }
  }
  return result;
}
