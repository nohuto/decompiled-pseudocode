/*
 * XREFs of sub_1C00478C0 @ 0x1C00478C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

unsigned int __fastcall sub_1C00478C0(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  int v7; // edx
  _DWORD *v8; // rbx
  int v9; // r8d
  unsigned int result; // eax
  __int64 v11; // [rsp+28h] [rbp-20h]

  v8 = sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, v7, v9, 14, (__int64)&unk_1C0063940, a2);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v11) = a4;
      sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xFu, (__int64)&unk_1C0063940, v11);
    }
  }
  result = v8[640] & 0xFEFFFFFF;
  v8[640] = result;
  if ( *((int *)&stru_1C006B480.AlignmentRequirement + 1) >= 0
    && (*((int *)&stru_1C006B480.AlignmentRequirement + 1) <= 1
     || *(&stru_1C006B480.AlignmentRequirement + 1) == 3 && a4 == 4 && *a3) )
  {
    result |= 0x1000000u;
    v8[640] = result;
  }
  return result;
}
