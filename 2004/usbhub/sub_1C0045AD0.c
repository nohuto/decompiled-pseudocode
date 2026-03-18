/*
 * XREFs of sub_1C0045AD0 @ 0x1C0045AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 */

__int64 __fastcall sub_1C0045AD0(__int64 a1, __int64 a2, _DWORD *a3, int a4, __int64 a5, _DWORD *a6)
{
  int v8; // r15d
  unsigned int v10; // ebx
  __int64 v12; // [rsp+28h] [rbp-30h]

  v8 = a2;
  v10 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x36u, (__int64)&unk_1C0063940);
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C003B2A0(DeviceObject->DeviceExtension, a2, (_DWORD)a3, 55, (__int64)&unk_1C0063940, a1);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
      {
        if ( LOWORD(DeviceObject->DeviceType) )
        {
          LODWORD(v12) = v8;
          sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x38u, (__int64)&unk_1C0063940, v12);
        }
        if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
        {
          if ( LOWORD(DeviceObject->DeviceType) )
            sub_1C002E62C((__int64)DeviceObject->DeviceExtension, a2, 1u, 0x39u, (__int64)&unk_1C0063940, a3);
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
          {
            if ( LOWORD(DeviceObject->DeviceType) )
            {
              LODWORD(v12) = a4;
              sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x3Au, (__int64)&unk_1C0063940, v12);
            }
            if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
            {
              if ( LOWORD(DeviceObject->DeviceType) )
                sub_1C002E62C((__int64)DeviceObject->DeviceExtension, a2, 1u, 0x3Bu, (__int64)&unk_1C0063940, a5);
              if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
                sub_1C002E62C((__int64)DeviceObject->DeviceExtension, a2, 1u, 0x3Cu, (__int64)&unk_1C0063940, a6);
            }
          }
        }
      }
    }
  }
  if ( v8 == 4 )
  {
    if ( a4 == 4 )
    {
      if ( a6 != a3 )
        *a6 = *a3;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
