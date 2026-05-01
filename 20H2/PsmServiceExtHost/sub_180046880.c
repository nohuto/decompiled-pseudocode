/*
 * XREFs of sub_180046880 @ 0x180046880
 * Callers:
 *     sub_180038718 @ 0x180038718 (sub_180038718.c)
 *     sub_18003CC78 @ 0x18003CC78 (sub_18003CC78.c)
 *     sub_180065D0C @ 0x180065D0C (sub_180065D0C.c)
 *     sub_180066C9C @ 0x180066C9C (sub_180066C9C.c)
 *     sub_180066E48 @ 0x180066E48 (sub_180066E48.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180046880()
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
      StackLimit -= 4096;
    while ( v1 < StackLimit );
  }
  return result;
}
