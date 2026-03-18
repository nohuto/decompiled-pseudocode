/*
 * XREFs of sub_1C0003070 @ 0x1C0003070
 * Callers:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 * Callees:
 *     sub_1C0003300 @ 0x1C0003300 (sub_1C0003300.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C0030FF8 @ 0x1C0030FF8 (sub_1C0030FF8.c)
 *     sub_1C0031080 @ 0x1C0031080 (sub_1C0031080.c)
 *     sub_1C003A78C @ 0x1C003A78C (sub_1C003A78C.c)
 */

__int64 __fastcall sub_1C0003070(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  _DWORD *v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = a3;
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    sub_1C002DC78(a1, 0LL);
  if ( *v6 != 541218120 )
    sub_1C002DC78(a1, v6);
  sub_1C000F050(*(_QWORD *)(a2 + 8));
  v7 = *(_DWORD *)(a2 + 80);
  if ( (dword_1C006B268 & 0x800) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 1397781346;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a2;
      *(_QWORD *)(v9 + 24) = v3;
    }
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 13, (__int64)&unk_1C0062C48, v3);
  if ( (_DWORD)v3 == 6 )
  {
    v7 = 5;
  }
  else if ( (_DWORD)v3 == 8 )
  {
LABEL_12:
    v7 = 3;
  }
  else
  {
    switch ( (int)v3 )
    {
      case 3:
        sub_1C0031080(a1, a2);
        v7 = 2;
        return sub_1C0003300(a1, a2, v7);
      case 5:
        goto LABEL_12;
      case 7:
      case 10:
        goto LABEL_20;
      case 11:
        sub_1C0030FF8(a1, a2);
LABEL_20:
        v7 = 4;
        break;
      case 12:
        sub_1C003A78C(*(_QWORD *)(a2 + 8), a2);
        v7 = 2;
        break;
      default:
        return sub_1C0003300(a1, a2, v7);
    }
  }
  return sub_1C0003300(a1, a2, v7);
}
