/*
 * XREFs of _alloca_probe @ 0x180123F50
 * Callers:
 *     sub_18000D948 @ 0x18000D948 (sub_18000D948.c)
 *     sub_18000EFB0 @ 0x18000EFB0 (sub_18000EFB0.c)
 *     sub_18001CEC4 @ 0x18001CEC4 (sub_18001CEC4.c)
 *     sub_180021174 @ 0x180021174 (sub_180021174.c)
 *     sub_18002220C @ 0x18002220C (sub_18002220C.c)
 *     sub_180049844 @ 0x180049844 (sub_180049844.c)
 *     sub_180083328 @ 0x180083328 (sub_180083328.c)
 *     sub_1800936A8 @ 0x1800936A8 (sub_1800936A8.c)
 *     sub_1800E31CC @ 0x1800E31CC (sub_1800E31CC.c)
 *     sub_1801073B4 @ 0x1801073B4 (sub_1801073B4.c)
 *     sub_180107484 @ 0x180107484 (sub_180107484.c)
 *     sub_18011B9C8 @ 0x18011B9C8 (sub_18011B9C8.c)
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
