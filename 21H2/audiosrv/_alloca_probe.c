/*
 * XREFs of _alloca_probe @ 0x1800743A0
 * Callers:
 *     sub_18000A830 @ 0x18000A830 (sub_18000A830.c)
 *     sub_18000AF30 @ 0x18000AF30 (sub_18000AF30.c)
 *     sub_18002CFD0 @ 0x18002CFD0 (sub_18002CFD0.c)
 *     sub_180038C20 @ 0x180038C20 (sub_180038C20.c)
 *     sub_1800458B4 @ 0x1800458B4 (sub_1800458B4.c)
 *     sub_18004997C @ 0x18004997C (sub_18004997C.c)
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18004BE0C @ 0x18004BE0C (sub_18004BE0C.c)
 *     sub_180058F74 @ 0x180058F74 (sub_180058F74.c)
 *     sub_18005D590 @ 0x18005D590 (sub_18005D590.c)
 *     sub_18005F460 @ 0x18005F460 (sub_18005F460.c)
 *     sub_180064E6C @ 0x180064E6C (sub_180064E6C.c)
 *     sub_180064F54 @ 0x180064F54 (sub_180064F54.c)
 *     sub_18006DA9C @ 0x18006DA9C (sub_18006DA9C.c)
 *     sub_1800B60C0 @ 0x1800B60C0 (sub_1800B60C0.c)
 *     sub_1800B8EE4 @ 0x1800B8EE4 (sub_1800B8EE4.c)
 *     sub_1800BC5EC @ 0x1800BC5EC (sub_1800BC5EC.c)
 *     sub_1800C430C @ 0x1800C430C (sub_1800C430C.c)
 *     sub_1800C8AF8 @ 0x1800C8AF8 (sub_1800C8AF8.c)
 *     sub_1800D1C6C @ 0x1800D1C6C (sub_1800D1C6C.c)
 *     sub_1800D1F10 @ 0x1800D1F10 (sub_1800D1F10.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}
