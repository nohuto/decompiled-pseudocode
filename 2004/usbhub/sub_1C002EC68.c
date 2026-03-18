/*
 * XREFs of sub_1C002EC68 @ 0x1C002EC68
 * Callers:
 *     sub_1C002EB90 @ 0x1C002EB90 (sub_1C002EB90.c)
 *     sub_1C002ED68 @ 0x1C002ED68 (sub_1C002ED68.c)
 *     sub_1C002F764 @ 0x1C002F764 (sub_1C002F764.c)
 *     sub_1C002F8C0 @ 0x1C002F8C0 (sub_1C002F8C0.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C002F27C @ 0x1C002F27C (sub_1C002F27C.c)
 *     sub_1C002F348 @ 0x1C002F348 (sub_1C002F348.c)
 *     sub_1C002F3E0 @ 0x1C002F3E0 (sub_1C002F3E0.c)
 *     sub_1C002F4AC @ 0x1C002F4AC (sub_1C002F4AC.c)
 *     sub_1C002F594 @ 0x1C002F594 (sub_1C002F594.c)
 */

void __fastcall sub_1C002EC68(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rbx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx

  v5 = a3;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xBu, (__int64)&unk_1C0062C18, a3);
  sub_1C000FD80(a1, 0x8000, 1718371670, a4, v5);
  v8 = v5 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            sub_1C002F348(a1, a2, a4);
        }
        else
        {
          sub_1C002F4AC(a1, a2, a4);
        }
      }
      else
      {
        sub_1C002F3E0(a1, a2, a4);
      }
    }
    else
    {
      sub_1C002F27C(a1, a2, a4);
    }
  }
  else
  {
    sub_1C002F594(a1, a2, a4);
  }
}
