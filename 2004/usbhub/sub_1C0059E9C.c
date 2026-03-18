/*
 * XREFs of sub_1C0059E9C @ 0x1C0059E9C
 * Callers:
 *     sub_1C0044090 @ 0x1C0044090 (sub_1C0044090.c)
 *     sub_1C0049BA0 @ 0x1C0049BA0 (sub_1C0049BA0.c)
 *     sub_1C0059910 @ 0x1C0059910 (sub_1C0059910.c)
 *     Callback @ 0x1C0059BC0 (Callback.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0059DA0 @ 0x1C0059DA0 (sub_1C0059DA0.c)
 *     sub_1C0059FC0 @ 0x1C0059FC0 (sub_1C0059FC0.c)
 */

LONG __fastcall sub_1C0059E9C(__int64 a1, int a2)
{
  struct _KEVENT *v4; // rsi
  int Blink; // ecx
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax

  v4 = (struct _KEVENT *)sub_1C000F050(a1);
  KeWaitForSingleObject(&v4[140], Executive, 0, 0, 0LL);
  Blink = (int)v4[136].Header.WaitListHead.Blink;
  if ( Blink <= 0 )
    return KeSetEvent(v4 + 140, 0, 0);
  if ( Blink <= 3 )
  {
    switch ( a2 )
    {
      case 2:
        goto LABEL_13;
      case 3:
LABEL_8:
        v7 = sub_1C000F050(a1);
        sub_1C0059DA0(a1, (__int64)(v7 + 478));
LABEL_14:
        LODWORD(v4[136].Header.WaitListHead.Blink) = a2;
        return KeSetEvent(v4 + 140, 0, 0);
      case 4:
LABEL_13:
        v9 = sub_1C000F050(a1);
        sub_1C0059FC0(a1, v9 + 478);
        goto LABEL_14;
    }
LABEL_7:
    if ( (unsigned int)(a2 - 5) > 1 )
      return KeSetEvent(v4 + 140, 0, 0);
    goto LABEL_8;
  }
  if ( Blink <= 5 )
  {
    if ( a2 == 4 )
    {
      v8 = sub_1C000F050(a1);
      sub_1C0059FC0(a1, v8 + 478);
      LODWORD(v4[136].Header.WaitListHead.Blink) = 4;
      return KeSetEvent(v4 + 140, 0, 0);
    }
    goto LABEL_7;
  }
  if ( Blink == 6 )
  {
    v6 = sub_1C000F050(a1);
    sub_1C0059DA0(a1, (__int64)(v6 + 478));
  }
  return KeSetEvent(v4 + 140, 0, 0);
}
