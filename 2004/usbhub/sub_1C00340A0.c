/*
 * XREFs of sub_1C00340A0 @ 0x1C00340A0
 * Callers:
 *     sub_1C002FB30 @ 0x1C002FB30 (sub_1C002FB30.c)
 *     sub_1C002FCB0 @ 0x1C002FCB0 (sub_1C002FCB0.c)
 *     sub_1C0035BB0 @ 0x1C0035BB0 (sub_1C0035BB0.c)
 * Callees:
 *     sub_1C00023E0 @ 0x1C00023E0 (sub_1C00023E0.c)
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E55C @ 0x1C002E55C (sub_1C002E55C.c)
 *     sub_1C004C6A0 @ 0x1C004C6A0 (sub_1C004C6A0.c)
 */

__int64 __fastcall sub_1C00340A0(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // ebp
  unsigned int v11; // edx
  int v12; // r9d
  int v13; // [rsp+28h] [rbp-20h]

  v4 = a2;
  sub_1C000F050(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
  {
    v13 = v4;
    sub_1C002E55C((__int64)DeviceObject->DeviceExtension, v6, v7, 0x42u, (__int64)&unk_1C0062098, v13, a3);
  }
  sub_1C000FD80(a1, 512, 1346711602, 0LL, v4);
  result = sub_1C0016CA0(a1, v4);
  v9 = result;
  if ( result )
  {
    sub_1C0007840(a1, result, 2, a3, 0LL, 0, 0LL, 0LL);
    result = sub_1C0016B5C(a1, *(_WORD *)(v9 + 4), 0LL, 0x7050444Fu);
    v10 = result;
    if ( result )
    {
      v11 = *(_DWORD *)(v9 + 400);
      *(_QWORD *)(v9 + 376) = v9 + 24;
      *(_DWORD *)(v9 + 416) = 1;
      result = sub_1C00023E0(a1, v11, v9, result);
      *(_QWORD *)(v9 + 376) = 0LL;
      if ( *(_DWORD *)(v9 + 416) )
        return sub_1C004C6A0(a1, v10, v9, v12, 0LL);
      else
        *(_DWORD *)(v9 + 400) = 0;
    }
  }
  return result;
}
