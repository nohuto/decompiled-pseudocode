/*
 * XREFs of sub_180067A50 @ 0x180067A50
 * Callers:
 *     sub_180042FB0 @ 0x180042FB0 (sub_180042FB0.c)
 *     sub_180067A2C @ 0x180067A2C (sub_180067A2C.c)
 *     sub_18006D70C @ 0x18006D70C (sub_18006D70C.c)
 *     sub_1800A0998 @ 0x1800A0998 (sub_1800A0998.c)
 *     sub_1800CC3B4 @ 0x1800CC3B4 (sub_1800CC3B4.c)
 *     sub_1800CE130 @ 0x1800CE130 (sub_1800CE130.c)
 *     sub_1800CE160 @ 0x1800CE160 (sub_1800CE160.c)
 *     sub_1800D1C14 @ 0x1800D1C14 (sub_1800D1C14.c)
 *     sub_1800F944C @ 0x1800F944C (sub_1800F944C.c)
 * Callees:
 *     sub_180067A80 @ 0x180067A80 (sub_180067A80.c)
 */

__int64 __fastcall sub_180067A50(__int64 a1)
{
  __int64 result; // rax

  sub_180067A80();
  *(_QWORD *)a1 = &Spectre::Engine::DeviceResource::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return result;
}
