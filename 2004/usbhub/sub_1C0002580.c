/*
 * XREFs of sub_1C0002580 @ 0x1C0002580
 * Callers:
 *     sub_1C0001120 @ 0x1C0001120 (sub_1C0001120.c)
 *     sub_1C0002478 @ 0x1C0002478 (sub_1C0002478.c)
 *     sub_1C0004C90 @ 0x1C0004C90 (sub_1C0004C90.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 *     sub_1C000B0E0 @ 0x1C000B0E0 (sub_1C000B0E0.c)
 *     sub_1C000F4B0 @ 0x1C000F4B0 (sub_1C000F4B0.c)
 *     sub_1C00195F0 @ 0x1C00195F0 (sub_1C00195F0.c)
 *     sub_1C0035284 @ 0x1C0035284 (sub_1C0035284.c)
 *     sub_1C00354A8 @ 0x1C00354A8 (sub_1C00354A8.c)
 *     sub_1C0035848 @ 0x1C0035848 (sub_1C0035848.c)
 *     sub_1C0035A44 @ 0x1C0035A44 (sub_1C0035A44.c)
 *     sub_1C0035BB0 @ 0x1C0035BB0 (sub_1C0035BB0.c)
 * Callees:
 *     sub_1C0002648 @ 0x1C0002648 (sub_1C0002648.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

_UNKNOWN **__fastcall sub_1C0002580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  _DWORD *v7; // rdx
  _QWORD **v8; // rbx
  _QWORD *v9; // r8
  _QWORD *v10; // rax

  result = &off_1C006B000;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    result = (_UNKNOWN **)sub_1C002E188(
                            DeviceObject->DeviceExtension,
                            0,
                            1,
                            55,
                            (__int64)&unk_1C0062098,
                            *(_WORD *)(a2 + 4));
  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v7 = *(_DWORD **)(a1 + 64);
  if ( !v7 )
    sub_1C002DC78(a1, 0LL);
  if ( *v7 != 541218120 )
    sub_1C002DC78(a1, v7);
  v8 = (_QWORD **)(a2 + 456);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == v8 )
      break;
    if ( (_QWORD **)v9[1] != v8 || (v10 = (_QWORD *)*v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v8 = v10;
    LOBYTE(a4) = 1;
    v10[1] = v8;
    result = (_UNKNOWN **)sub_1C0002648(a1, a2, v9 - 2, a4);
  }
  *(_DWORD *)(a2 + 2876) = 0;
  *(_BYTE *)(a2 + 2839) = 0;
  return result;
}
