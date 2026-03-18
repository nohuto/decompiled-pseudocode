/*
 * XREFs of sub_1C002FCB0 @ 0x1C002FCB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C0017B0C @ 0x1C0017B0C (sub_1C0017B0C.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002FE20 @ 0x1C002FE20 (sub_1C002FE20.c)
 *     sub_1C00340A0 @ 0x1C00340A0 (sub_1C00340A0.c)
 */

__int64 __fastcall sub_1C002FCB0(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r8
  _DWORD *v9; // rax

  v4 = sub_1C000F050(a1);
  sub_1C000FD80(a1, 0x4000, 1870033457, 0LL, *(unsigned __int16 *)(a2 + 20));
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0xAu, (__int64)&unk_1C0062C28);
  if ( !*((_BYTE *)v4 + 3010) )
  {
    *((_BYTE *)v4 + 3010) = 1;
    sub_1C0017B0C(a1, 1u, (int)sub_1C0046920, 0LL, 0, 0x6352564Fu, 0LL);
  }
  result = sub_1C0016CA0(a1, *(_WORD *)(a2 + 20));
  v6 = result;
  if ( result )
  {
    v7 = result + 200;
    sub_1C00340A0(a1, *(unsigned __int16 *)(a2 + 20), result + 200);
    result = sub_1C0017B0C(a1, 1u, (int)sub_1C002F6C0, v7, *(unsigned __int16 *)(v6 + 4), 0x6352564Fu, 0LL) & 0xC0000000LL;
    if ( (_DWORD)result == -1073741824 )
    {
      LOBYTE(v8) = 1;
      sub_1C002FE20(a1, v6, v8);
      v9 = sub_1C000F050(a1);
      return sub_1C001A550(a1, (__int64)(v9 + 346), 3);
    }
  }
  return result;
}
