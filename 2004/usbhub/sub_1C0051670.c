/*
 * XREFs of sub_1C0051670 @ 0x1C0051670
 * Callers:
 *     sub_1C0051210 @ 0x1C0051210 (sub_1C0051210.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

char __fastcall sub_1C0051670(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // esi
  _DWORD *v4; // rax
  _WORD *v5; // rcx

  v3 = a3;
  v4 = sub_1C0011220(a2);
  v5 = (_WORD *)*((_QWORD *)v4 + 273);
  if ( v5 )
  {
    if ( v4[545] )
    {
      while ( *v5 )
      {
        if ( *v5 == (_WORD)v3 )
        {
          if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
            sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x14u, (__int64)&unk_1C0064FB8, v3);
          return 1;
        }
        ++v5;
      }
    }
    goto LABEL_15;
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x15u, (__int64)&unk_1C0064FB8);
LABEL_15:
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x16u, (__int64)&unk_1C0064FB8, v3);
    }
  }
  return 0;
}
