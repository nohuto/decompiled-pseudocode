/*
 * XREFs of sub_18002A350 @ 0x18002A350
 * Callers:
 *     sub_18002A0DC @ 0x18002A0DC (sub_18002A0DC.c)
 *     sub_180079A1C @ 0x180079A1C (sub_180079A1C.c)
 *     sub_18007DF84 @ 0x18007DF84 (sub_18007DF84.c)
 * Callees:
 *     sub_18002A3C4 @ 0x18002A3C4 (sub_18002A3C4.c)
 *     sub_18002A490 @ 0x18002A490 (sub_18002A490.c)
 */

__int64 __fastcall sub_18002A350(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // edi
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1;
  if ( (unsigned __int8)sub_18002A3C4(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL), a2, a3) )
  {
    *a2 = 1;
  }
  else
  {
    v6 = 0;
    result = sub_18002A490(v3 - 64, 1024, 0, (unsigned int)sub_180033D90, (__int64)&v6);
    if ( (int)result < 0 )
      return result;
    *a2 = v6;
  }
  return 0LL;
}
