/*
 * XREFs of sub_1C0048600 @ 0x1C0048600
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002B680 @ 0x1C002B680 (sub_1C002B680.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E354 @ 0x1C002E354 (sub_1C002E354.c)
 */

__int64 __fastcall sub_1C0048600(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v12 = a2;
    sub_1C002E354((__int64)DeviceObject->DeviceExtension, a2, 1u, 0x10u, (__int64)&unk_1C0063950, v12, a3);
  }
  *a4 = 0;
  if ( a3 >= 0x10 )
  {
    *a4 = 16;
    v9 = sub_1C002B680(a1, 0LL, a5, a3);
    v10 = v9;
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    {
      LODWORD(v13) = *a4;
      LODWORD(v11) = v9;
      sub_1C002E354(
        (__int64)DeviceObject->DeviceExtension,
        (unsigned int)*a4,
        1u,
        0x12u,
        (__int64)&unk_1C0063950,
        v11,
        v13);
    }
    return v10;
  }
  else
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x11u, (__int64)&unk_1C0063950);
    }
    return 3221225507LL;
  }
}
